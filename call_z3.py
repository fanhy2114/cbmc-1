# python3.

import logging
import os
import os.path as osp
import time
import string
import multiprocessing as mp
import re
import gc
import concurrent
import concurrent.futures
import argparse
import unicodedata
import filecmp
import datetime
import hashlib
import sys

if sys.version_info[0] >= 3:
    unicode = str

logger_name = "example"
logger = logging.getLogger(logger_name)
logger.setLevel(logging.INFO)

# create file handler
now = datetime.datetime.now()
log_path = "./logs/log%d%d%d.log" % (now.year, now.month, now.day)
fh = logging.FileHandler(log_path)
fh.setLevel(logging.INFO)

# create formatter
fmt = "%(asctime)-15s %(levelname)s %(filename)s ;%(lineno)d %(process)d %(message)s"
datefmt = "%a %d %b %Y %H:%M:%S"

formatter = logging.Formatter(fmt, datefmt)

# add handler and formatter to logger
fh.setFormatter(formatter)
logger.addHandler(fh)
script_start_time = datetime.datetime.now()
pattern = r'.*:total-time(.*?)\)'


def is_mac():
    import platform
    plt = platform.platform()
    return 'Darwin' in plt  # if string 'Darwin' is in


def get_all_files(root_path='./benchmark', suffix='smt'):
    """
    fetch all smt files.
    filter out those in 'black_list.txt'
    :return: smt files
    """

    ans = set()
    for f in os.listdir(root_path):
        abs_path = os.path.join(root_path, f)
        if os.path.isdir(abs_path):
            ans = ans.union(get_all_files(abs_path))
        elif abs_path.endswith(suffix):
            ans.add(abs_path)
    return ans


def time_stamp_to_file(timestamp):
    time_structure = time.localtime(timestamp)
    return time.strftime('%Y-%m-%d %H:%M:%S', time_structure)


def get_file_size(file_path):
    # file_path = unicode(file_path, 'utf8')
    file_size = os.path.getsize(file_path)
    file_size = file_size / float(1024 * 1024)
    return round(file_size, 2)


def genearteMD5(str):
    hl = hashlib.md5()
    hl.update(str.encode(encoding='utf-8'))
    return hl.hexdigest()


def get_c_file_name_and_bound_from_path(abs_path):
    """
    a smt file path is like:
    /home/liuweiting/gitlab/GenerateSMT/smt_for_z3_20190422_Int/pthread/bigshot_p_false-unreach-call.c/bound7.smt

    """
    arrs = abs_path.split('/')
    return arrs[-4], arrs[-3], arrs[-2], arrs[-1]


def create_dir_if_not_exist(dest):
    dests = dest.split('/')
    root = ''
    for i in dests:
        root += i + '/'
        if not os.path.exists(root):
            os.mkdir(root)


def call_z3_for_file(file_abs_path, call_times, z3_path, timeout):
    output_file_dir = z3_path.replace('z3_binarys', 'output_files_%d%d%d' % (
        script_start_time.year, script_start_time.month, script_start_time.day))
    create_dir_if_not_exist(output_file_dir)
    total_time = 0.0

    for i in range(int(call_times)):
        smt_dir, bench_dir, c_name, bound_str = get_c_file_name_and_bound_from_path(file_abs_path)
        output_dir = os.path.join(output_file_dir, smt_dir, bench_dir, c_name, bound_str)
        create_dir_if_not_exist(output_dir)
        output_file_name = osp.join(output_dir, 'call_%d.out' % i)
        cmd = '%s -smt2 -st -T:%s %s > %s' % (z3_path, str(timeout), file_abs_path, output_file_name)
        logger.info('executing:' + cmd)
        begin_time_stamp = time.time()
        os.system(cmd)
        end_time_stamp = time.time()
        sat_info = get_sat_info_str(output_file_name)
        cost = end_time_stamp - begin_time_stamp
        total_time += cost

    return total_time / call_times, sat_info


def call_wrapper(*args):
    call_z3_for_file(*args)


def get_declare_and_memory_model_count(file_path):
    f = open(file_path, 'r')
    text = f.read()
    goal1 = '(declare-fun |'
    goal2 = '(declare-fun |memory_model::choice_rf_'
    total_declare_func_num = text.count(goal1)
    choice_rf_num = text.count(goal2)
    f.close()
    del f
    # return total_declare_func_num, choice_rf_num
    p = (float(choice_rf_num) / float(total_declare_func_num) if total_declare_func_num != 0 else 0) * 100
    assert p <= 100
    percentage = "{:.2f}".format(p)
    return percentage


def get_sat_info_str(output):
    with open(output, 'r') as f_file:
        txt = f_file.read()
        unsat = 'unsat' in txt
        sat = 'sat' in txt
        f_file.close()
        if unsat:
            return 'unsat'
        elif sat:
            return 'sat'
        else:
            return 'unknown'


def file_worker(file_abs_path, file_size, repeat_time, timeout):
    if file_size > 1024:
        return []
    filename, file_extension = os.path.splitext(file_abs_path)

    if file_size == 0 or not file_extension == '.smt':
        # skip empty files
        return []

    z3_arr = ['./z3_binarys/' + ('mac' if is_mac() else 'ubuntu') + '/z3-concurrent-origin-20190222',
              './z3_binarys/' + ('mac' if is_mac() else 'ubuntu') + '/z3-concurrent-rf-partial-guard-20190307',
              './z3_binarys/' + ('mac' if is_mac() else 'ubuntu') + '/z3-full-rf-20190415']

    result_list = []
    for z3 in z3_arr:
        time_v, sat = call_z3_for_file(file_abs_path, repeat_time, z3, timeout)
        result_list.append((time_v, sat))
    now = datetime.datetime.now()
    print('%d-%d-%d-%d-%d-%d finished file : %s, size=%d' % (
        now.year, now.month, now.day, now.hour, now.minute, now.second, file_abs_path, file_size))
    return result_list


if __name__ == '__main__':
    parse = argparse.ArgumentParser('call smt_example tool parameter options')
    parse.add_argument('--smt-path', required=True, type=str, help="the smt_example files' path")
    parse.add_argument('--repeat-time', required=False, type=int, default=3,
                       help='call z3 how much times for each file')
    parse.add_argument('--timeout', required=False, type=int, default=600,
                       help='the timeout param (seconds) for each smt_example file. default is 600 seconds.')
    parse.add_argument('--outfile', required=True, type=str, default='output.csv',
                       help='the output csv file name.')
    parse.add_argument('--workers', required=False, type=int, default=int(mp.cpu_count()/2))
    args = parse.parse_args()
    timeout = args.timeout
    repeat_time = args.repeat_time

    executor = concurrent.futures.ProcessPoolExecutor(max_workers=args.workers)

    file_list = get_all_files(root_path=args.smt_path)
    file2size = dict()
    for file_path in file_list:
        file2size[file_path] = get_file_size(file_path)

    sorted_result = sorted(file2size.items(), key=lambda item: item[1])
    total_size = 0
    idx = 0
    total_files = len(file_list)

    future_result = {
        executor.submit(file_worker, file_abs_path, file_size, args.repeat_time, args.timeout): file_abs_path
        for file_abs_path, file_size in sorted_result}

    out_file = open(args.outfile, 'w')

    for future in concurrent.futures.as_completed(future_result):
        file_abs_path = future_result[future]
        try:
            res_list = future.result()
        except Exception as exc:
            print('%r generated an future exception: %s' % (file_abs_path, exc))
        else:
            try:
                out_file.write(file_abs_path)
                out_file.write(str(file2size[file_abs_path]))
                for time, sat in res_list:
                    out_file.write(',' + str(time) + ',' + sat)
                out_file.write('\n')
                out_file.flush()
            except Exception as e:
                print('%r generated an write file exception: %s' % (file_abs_path, e))
    out_file.close()
    print('congratulations! %s finish!' % args.smt_path)
