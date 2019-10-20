import os
import time
import filecmp

root_path = './benchmark'

def get_bounded_num():
    dir_list = set()
    for f in os.listdir(root_path):
        abs_path = os.path.join(root_path, f)
        if os.path.isdir(abs_path):
            for temp in os.listdir(abs_path):
                dir_list = dir_list.add(os.path.join(abs_path, temp))
        else:
            print("error")
    for dir in dir_list:
        print(len([name for name in os.listdir(dir) if os.path.isfile(os.path.join(dir, name))]))


if __name__ == "__main__":
    get_bounded_num()






