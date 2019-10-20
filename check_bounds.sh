#! /bin/bash

input_dir="benchmark"

function  Check_bounds
{
    for file in `ls $1`
    do
    {
        begin_time=$(date +%s)
        ./cbmc  ./$input_dir/$file   --bounds-check --show-properties  > ./$input_dir/$file.log
        end_time=$(date +%s)
         echo Process $file : $(($end_time - $begin_time)) s
    }
    done
    echo Success.
}


Check_bounds $input_dir