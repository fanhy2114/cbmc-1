CBMC version 5.10 (cbmc-5.10) 64-bit x86_64 linux
Parsing race-1_1-join_true-unreach-call.c
Converting
Type-checking race-1_1-join_true-unreach-call
Generating GOTO Program
Adding CPROVER library (x86_64)
Removal of function pointers and virtual functions
file <builtin-library-pthread_create> line 39 function pthread_create: replacing function pointer by 1 possible targets
Generic Property Instrumentation
Running with 8 object bits, 56 offset bits (default)
Starting Bounded Model Checking
aborting path on assume(false) at file race-1_1-join_true-unreach-call.c line 8 function ldv_assert thread 0
aborting path on assume(false) at file race-1_1-join_true-unreach-call.c line 8 function ldv_assert thread 1
Adding SC constraints
Shared __CPROVER_threads_exited: 2R/2W
Shared __CPROVER_next_thread_id: 1R/2W
Shared t1: 2R/2W
Shared mutex: 4R/5W
Shared pdev: 4R/4W
size of program expression: 418 steps
no slicing due to threads
Generated 4 VCC(s), 4 remaining after simplification

VERIFICATION CONDITIONS:

file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
lock held upon destroy
{-1} __CPROVER_dead_object#1 == NULL
{-2} __CPROVER_deallocated#1 == NULL
{-3} __CPROVER_malloc_is_new_array#1 == FALSE
{-4} __CPROVER_malloc_object#1 == NULL
{-5} __CPROVER_malloc_size#1 == 0ul
{-6} __CPROVER_memory_leak#1 == NULL
{-7} __CPROVER_next_thread_id#1 == 0ul
{-8} __CPROVER_pipe_count#1 == 0u
{-9} __CPROVER_rounding_mode!0#1 == 0
{-10} __CPROVER_thread_id!0#1 == 0ul
{-11} __CPROVER_threads_exited#1 == ARRAY_OF(FALSE)
{-12} mutex#1 == byte_extract_little_endian({ .__lock=0, .__count=0u, .__owner=0, .__nusers=0u, .__kind=0,
    .__spins=0, .__elision=0, .__list={ .__prev=((struct __pthread_internal_list { struct __pthread_internal_list *__prev; struct __pthread_internal_list *__next; } *)NULL), .__next=((struct __pthread_internal_list { struct __pthread_internal_list *__prev; struct __pthread_internal_list *__next; } *)NULL) } }, 0l, union { struct __pthread_mutex_s { signed int __lock; unsigned int __count; signed int __owner; unsigned int __nusers; signed int __kind; signed short int __spins; signed short int __elision; struct __pthread_internal_list { struct __pthread_internal_list *__prev; struct __pthread_internal_list *__next; } __list; } __data; char __size[40l]; signed long int __align; })
{-13} pdev#1 == 0
{-14} t1#1 == 0ul
{-15} mutex!0@1#1 == &mutex
{-16} mutexattr!0@1#1 == ((union { char __size[4l]; signed int __align; } *)NULL)
{-17} mutex#2 == byte_update_little_endian(mutex#1, 0l, 0, char)
{-18} pthread_mutex_init#return_value!0#1 == 0
{-19} pdev#2 == 1
{-20} expression!0@1#1 == 1
{-21} thread!0@1#1 == &t1
{-22} attr!0@1#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
{-23} start_routine!0@1#1 == thread1
{-24} arg!0@1#1 == NULL
{-25} __CPROVER_next_thread_id#2 == 1ul
{-26} this_thread_id!0@1#2 == 1ul
{-27} t1#2 == 1ul
{-28} thread!1@0#1 == &t1
{-29} attr!1@0#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
{-30} start_routine!1@0#1 == thread1
{-31} arg!1@0#1 == NULL
{-32} main#return_value!1#1 == 0
{-33} thread1#return_value!1#1 == NULL
{-34} __CPROVER_thread_id!1#1 == 0ul
{-35} __CPROVER_rounding_mode!1#1 == 0
{-36} pthread_create#return_value!1#1 == 0
{-37} pthread_mutex_destroy#return_value!1#1 == 0
{-38} module_init#return_value!1#1 == 0
{-39} pthread_join#return_value!1#1 == 0
{-40} pthread_mutex_init#return_value!1#1 == 0
{-41} pthread_mutex_lock#return_value!1#1 == 0
{-42} pthread_mutex_unlock#return_value!1#1 == 0
{-43} pthread_create#return_value!0#1 == 0
{-44} module_init#return_value!0#1 == 0
{-45} thread!0@1#1 == t1#4
{-46} value_ptr!0@1#1 == &status!0@1
{-47} \guard#1 == !(__CPROVER_next_thread_id#3 >= thread!0@1#1)
{-48} pthread_join#return_value!0#1 == 3
{-49} pthread_join#return_value!0#2 == pthread_join#return_value!0#0
{-50} \guard#2 == (thread!0@1#1 == 0ul)
{-51} pthread_join#return_value!0#3 == 35
{-52} pthread_join#return_value!0#4 == pthread_join#return_value!0#2
{-53} pthread_join#return_value!0#5 == 0
{-54} pthread_join#return_value!0#6 == (\guard#2 ? 35 : 0)
{-55} pthread_join#return_value!0#7 == (\guard#1 ? 3 : pthread_join#return_value!0#6)
{-56} mutex!0@1#1 == &mutex
{-57} mutex#5 == byte_update_little_endian(mutex#4, 0l, -1, char)
{-58} pthread_mutex_destroy#return_value!0#1 == 0
{-59} pdev#3 == 5
{-60} expression!0@2#1 == (signed int)(pdev#5 == 5)
{-61} \guard#3 == (expression!0@2#1 == 0)
{-62} main#return_value!0#1 == 0
{-63} return`!0#1 == 0
{-64} __CPROVER_thread_id!1#2 == this_thread_id!1@0#0
{-65} arg!1@1#1 == NULL
{-66} mutex!1@1#1 == &mutex
{-67} mutex#7 == mutex#6
{-68} mutex#8 == byte_update_little_endian(mutex#7, 0l, 1, char)
{-69} pthread_mutex_lock#return_value!1#2 == 0
{-70} pdev#6 == 6
{-71} expression!1@1#1 == (signed int)(pdev#8 == 6)
{-72} \guard#4 == (expression!1@1#1 == 0)
{-73} mutex!1@1#1 == &mutex
{-74} mutex#10 == mutex#9
{-75} mutex#11 == byte_update_little_endian(mutex#10, 0l, 0, char)
{-76} pthread_mutex_unlock#return_value!1#2 == 0
{-77} thread1#return_value!1#2 == NULL
{-78} __CPROVER_threads_exited#4 == __CPROVER_threads_exited#3 WITH [(signed long int)this_thread_id!1@0#0:=TRUE]
{-79} __CPROVER_threads_exited#2 == __CPROVER_threads_exited#1 || !choice_rf0
{-80} byte_extract_little_endian(mutex#7, 0l, char) == 0 && __CPROVER_threads_exited#2 == __CPROVER_threads_exited#4 && !\guard#4 || !choice_rf1
{-81} !(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#2$rclk$8) || !choice_rf1
{-82} choice_rf0 || choice_rf1 || \guard#1 || \guard#2
{-83} __CPROVER_threads_exited#3 == __CPROVER_threads_exited#1 || !choice_rf2
{-84} !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#3$rclk$8) || !choice_rf2
{-85} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || choice_rf2 || \guard#4
{-86} __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#1 || !choice_rf3
{-87} __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#2 || !choice_rf4
{-88} choice_rf3 || choice_rf4
{-89} t1#3 == t1#1 || !choice_rf5
{-90} t1#3 == t1#2 || !choice_rf6
{-91} choice_rf5 || choice_rf6
{-92} t1#4 == t1#1 || !choice_rf7
{-93} t1#4 == t1#2 || !choice_rf8
{-94} choice_rf7 || choice_rf8
{-95} mutex#3 == mutex#1 || !choice_rf9
{-96} mutex#3 == mutex#2 || !choice_rf10
{-97} byte_extract_little_endian(mutex#7, 0l, char) == 0 && mutex#3 == mutex#8 || !choice_rf11
{-98} !(mutex#8$wclk$8 >= mutex#3$rclk$8) || !choice_rf11
{-99} byte_extract_little_endian(mutex#7, 0l, char) == 0 && mutex#3 == mutex#11 && !\guard#4 || !choice_rf12
{-100} !(mutex#11$wclk$8 >= mutex#3$rclk$8) || !choice_rf12
{-101} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf10 || choice_rf11 || choice_rf12 || choice_rf9
{-102} mutex#4 == mutex#1 || !choice_rf13
{-103} mutex#4 == mutex#2 || !choice_rf14
{-104} byte_extract_little_endian(mutex#7, 0l, char) == 0 && mutex#4 == mutex#8 || !choice_rf15
{-105} !(mutex#8$wclk$8 >= mutex#4$rclk$8) || !choice_rf15
{-106} byte_extract_little_endian(mutex#7, 0l, char) == 0 && mutex#4 == mutex#11 && !\guard#4 || !choice_rf16
{-107} !(mutex#11$wclk$8 >= mutex#4$rclk$8) || !choice_rf16
{-108} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf13 || choice_rf14 || choice_rf15 || choice_rf16
{-109} mutex#6 == mutex#1 || !choice_rf17
{-110} !(mutex#1$wclk$8 >= mutex#6$rclk$8) || !choice_rf17
{-111} mutex#6 == mutex#2 || !choice_rf18
{-112} !(mutex#2$wclk$8 >= mutex#6$rclk$8) || !choice_rf18
{-113} mutex#6 == mutex#5 && (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) || !choice_rf19
{-114} !(mutex#5$wclk$8 >= mutex#6$rclk$8) || !choice_rf19
{-115} choice_rf17 || choice_rf18 || choice_rf19
{-116} mutex#9 == mutex#1 || !choice_rf20
{-117} !(mutex#1$wclk$8 >= mutex#9$rclk$8) || !choice_rf20
{-118} mutex#9 == mutex#2 || !choice_rf21
{-119} !(mutex#2$wclk$8 >= mutex#9$rclk$8) || !choice_rf21
{-120} mutex#9 == mutex#5 && (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) || !choice_rf22
{-121} !(mutex#5$wclk$8 >= mutex#9$rclk$8) || !choice_rf22
{-122} byte_extract_little_endian(mutex#7, 0l, char) == 0 && mutex#9 == mutex#8 || !choice_rf23
{-123} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || choice_rf20 || choice_rf21 || choice_rf22 || choice_rf23 || \guard#4
{-124} pdev#4 == pdev#1 || !choice_rf24
{-125} pdev#4 == pdev#2 || !choice_rf25
{-126} pdev#4 == pdev#3 && (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) || !choice_rf26
{-127} byte_extract_little_endian(mutex#7, 0l, char) == 0 && pdev#4 == pdev#6 || !choice_rf27
{-128} !(pdev#6$wclk$8 >= pdev#4$rclk$8) || !choice_rf27
{-129} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf24 || choice_rf25 || choice_rf26 || choice_rf27
{-130} pdev#5 == pdev#1 || !choice_rf28
{-131} pdev#5 == pdev#2 || !choice_rf29
{-132} pdev#5 == pdev#3 && (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) || !choice_rf30
{-133} byte_extract_little_endian(mutex#7, 0l, char) == 0 && pdev#5 == pdev#6 || !choice_rf31
{-134} !(pdev#6$wclk$8 >= pdev#5$rclk$8) || !choice_rf31
{-135} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf28 || choice_rf29 || choice_rf30 || choice_rf31
{-136} pdev#7 == pdev#1 || !choice_rf32
{-137} !(pdev#1$wclk$8 >= pdev#7$rclk$8) || !choice_rf32
{-138} pdev#7 == pdev#2 || !choice_rf33
{-139} !(pdev#2$wclk$8 >= pdev#7$rclk$8) || !choice_rf33
{-140} pdev#7 == pdev#3 && (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) || !choice_rf34
{-141} !(pdev#3$wclk$8 >= pdev#7$rclk$8) || !choice_rf34
{-142} byte_extract_little_endian(mutex#7, 0l, char) == 0 && pdev#7 == pdev#6 || !choice_rf35
{-143} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || choice_rf32 || choice_rf33 || choice_rf34 || choice_rf35
{-144} pdev#8 == pdev#1 || !choice_rf36
{-145} !(pdev#1$wclk$8 >= pdev#8$rclk$8) || !choice_rf36
{-146} pdev#8 == pdev#2 || !choice_rf37
{-147} !(pdev#2$wclk$8 >= pdev#8$rclk$8) || !choice_rf37
{-148} pdev#8 == pdev#3 && (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) || !choice_rf38
{-149} !(pdev#3$wclk$8 >= pdev#8$rclk$8) || !choice_rf38
{-150} byte_extract_little_endian(mutex#7, 0l, char) == 0 && pdev#8 == pdev#6 || !choice_rf39
{-151} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || choice_rf36 || choice_rf37 || choice_rf38 || choice_rf39
{-152} !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_ws-ext40
{-153} !(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8) || choice_ws-ext40
{-154} !(mutex#1$wclk$8 >= mutex#8$wclk$8) || !choice_ws-ext41
{-155} !(mutex#8$wclk$8 >= mutex#1$wclk$8) || choice_ws-ext41
{-156} !(mutex#1$wclk$8 >= mutex#11$wclk$8) || !choice_ws-ext42
{-157} !(mutex#11$wclk$8 >= mutex#1$wclk$8) || choice_ws-ext42
{-158} !(mutex#2$wclk$8 >= mutex#8$wclk$8) || !choice_ws-ext43
{-159} !(mutex#8$wclk$8 >= mutex#2$wclk$8) || choice_ws-ext43
{-160} !(mutex#2$wclk$8 >= mutex#11$wclk$8) || !choice_ws-ext44
{-161} !(mutex#11$wclk$8 >= mutex#2$wclk$8) || choice_ws-ext44
{-162} !(mutex#5$wclk$8 >= mutex#8$wclk$8) || !choice_ws-ext45
{-163} !(mutex#8$wclk$8 >= mutex#5$wclk$8) || choice_ws-ext45
{-164} !(mutex#5$wclk$8 >= mutex#11$wclk$8) || !choice_ws-ext46
{-165} !(mutex#11$wclk$8 >= mutex#5$wclk$8) || choice_ws-ext46
{-166} !(pdev#1$wclk$8 >= pdev#6$wclk$8) || !choice_ws-ext47
{-167} !(pdev#6$wclk$8 >= pdev#1$wclk$8) || choice_ws-ext47
{-168} !(pdev#2$wclk$8 >= pdev#6$wclk$8) || !choice_ws-ext48
{-169} !(pdev#6$wclk$8 >= pdev#2$wclk$8) || choice_ws-ext48
{-170} !(pdev#3$wclk$8 >= pdev#6$wclk$8) || !choice_ws-ext49
{-171} !(pdev#6$wclk$8 >= pdev#3$wclk$8) || choice_ws-ext49
{-172} !(t1$17$spwnclk$8 >= mutex#6$rclk$8)
{-173} !(t1$17$spwnclk$8 >= mutex#8$wclk$8)
{-174} !(t1$17$spwnclk$8 >= pdev#6$wclk$8)
{-175} !(t1$17$spwnclk$8 >= pdev#7$rclk$8)
{-176} !(t1$17$spwnclk$8 >= pdev#8$rclk$8)
{-177} !(t1$17$spwnclk$8 >= mutex#9$rclk$8)
{-178} !(t1$17$spwnclk$8 >= mutex#11$wclk$8)
{-179} !(t1$17$spwnclk$8 >= __CPROVER_threads_exited#3$rclk$8)
{-180} !(t1$17$spwnclk$8 >= __CPROVER_threads_exited#4$wclk$8)
{-181} !(status!0@1$wclk$8 >= __CPROVER_dead_object#1$wclk$8)
{-182} !(__CPROVER_dead_object#1$wclk$8 >= __CPROVER_deallocated#1$wclk$8)
{-183} !(__CPROVER_deallocated#1$wclk$8 >= __CPROVER_malloc_is_new_array#1$wclk$8)
{-184} !(__CPROVER_malloc_is_new_array#1$wclk$8 >= __CPROVER_malloc_object#1$wclk$8)
{-185} !(__CPROVER_malloc_object#1$wclk$8 >= __CPROVER_malloc_size#1$wclk$8)
{-186} !(__CPROVER_malloc_size#1$wclk$8 >= __CPROVER_memory_leak#1$wclk$8)
{-187} !(__CPROVER_memory_leak#1$wclk$8 >= __CPROVER_next_thread_id#1$wclk$8)
{-188} !(__CPROVER_next_thread_id#1$wclk$8 >= __CPROVER_pipe_count#1$wclk$8)
{-189} !(__CPROVER_pipe_count#1$wclk$8 >= __CPROVER_threads_exited#1$wclk$8)
{-190} !(__CPROVER_threads_exited#1$wclk$8 >= mutex#1$wclk$8)
{-191} !(mutex#1$wclk$8 >= pdev#1$wclk$8)
{-192} !(pdev#1$wclk$8 >= t1#1$wclk$8)
{-193} !(t1#1$wclk$8 >= mutex#2$wclk$8)
{-194} !(mutex#2$wclk$8 >= pdev#2$wclk$8)
{-195} !(pdev#2$wclk$8 >= __CPROVER_next_thread_id#2$wclk$8)
{-196} !(__CPROVER_next_thread_id#2$wclk$8 >= t1#2$wclk$8)
{-197} !(t1#2$wclk$8 >= t1$17$spwnclk$8)
{-198} !(t1$17$spwnclk$8 >= status!0@1#1$wclk$8)
{-199} !(status!0@1#1$wclk$8 >= t1#3$rclk$8)
{-200} !(t1#3$rclk$8 >= t1#4$rclk$8)
{-201} !(t1#4$rclk$8 >= __CPROVER_next_thread_id#3$rclk$8)
{-202} !(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_threads_exited#2$rclk$8)
{-203} !(__CPROVER_threads_exited#2$rclk$8 >= mutex#3$rclk$8)
{-204} !(mutex#3$rclk$8 >= mutex#4$rclk$8)
{-205} !(mutex#4$rclk$8 >= mutex#5$wclk$8)
{-206} !(mutex#5$wclk$8 >= pdev#3$wclk$8)
{-207} !(pdev#3$wclk$8 >= pdev#4$rclk$8)
{-208} !(pdev#4$rclk$8 >= pdev#5$rclk$8)
{-209} mutex#6$rclk$8 == mutex#8$wclk$8
{-210} !(mutex#8$wclk$8 >= pdev#6$wclk$8)
{-211} !(pdev#6$wclk$8 >= pdev#7$rclk$8)
{-212} !(pdev#7$rclk$8 >= pdev#8$rclk$8)
{-213} !(pdev#8$rclk$8 >= mutex#9$rclk$8)
{-214} mutex#9$rclk$8 == mutex#11$wclk$8
{-215} !(mutex#11$wclk$8 >= __CPROVER_threads_exited#3$rclk$8)
{-216} !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8)
{-217} __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_rf2 || \guard#4
{-218} __CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf1 || \guard#1 || \guard#2
{-219} __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_rf0 || \guard#1 || \guard#2 || \guard#4
{-220} !(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8) || !choice_rf3
{-221} !(t1#3$rclk$8 >= t1#2$wclk$8) || !choice_rf5
{-222} !(t1#4$rclk$8 >= t1#2$wclk$8) || !choice_rf7
{-223} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#2$wclk$8) || !choice_rf20 || \guard#4
{-224} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf9
{-225} !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf17
{-226} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf13
{-227} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf20 || \guard#4
{-228} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf9
{-229} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf17
{-230} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf13
{-231} mutex#8$wclk$8 >= mutex#1$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#1$wclk$8) || !choice_rf23 || \guard#4
{-232} mutex#1$wclk$8 >= mutex#8$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf20 || \guard#4
{-233} mutex#8$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#1$wclk$8) || !choice_rf11
{-234} mutex#1$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf9
{-235} mutex#6$rclk$8 == mutex#8$wclk$8 || mutex#1$wclk$8 >= mutex#8$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf17
{-236} mutex#8$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#1$wclk$8) || !choice_rf15
{-237} mutex#1$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf13
{-238} mutex#9$rclk$8 == mutex#11$wclk$8 || mutex#1$wclk$8 >= mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf20 || \guard#4
{-239} mutex#11$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#1$wclk$8) || !choice_rf12
{-240} mutex#1$wclk$8 >= mutex#11$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#3$rclk$8 >= mutex#11$wclk$8) || !choice_rf9 || \guard#4
{-241} mutex#1$wclk$8 >= mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#11$wclk$8) || !choice_rf17 || \guard#4
{-242} mutex#11$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#1$wclk$8) || !choice_rf16
{-243} mutex#1$wclk$8 >= mutex#11$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#4$rclk$8 >= mutex#11$wclk$8) || !choice_rf13 || \guard#4
{-244} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf21 || \guard#4
{-245} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf10
{-246} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf18
{-247} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf14
{-248} mutex#8$wclk$8 >= mutex#2$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#2$wclk$8) || !choice_rf23 || \guard#4
{-249} mutex#2$wclk$8 >= mutex#8$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf21 || \guard#4
{-250} mutex#8$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf11
{-251} mutex#2$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf10
{-252} mutex#6$rclk$8 == mutex#8$wclk$8 || mutex#2$wclk$8 >= mutex#8$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf18
{-253} mutex#8$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf15
{-254} mutex#2$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf14
{-255} mutex#9$rclk$8 == mutex#11$wclk$8 || mutex#2$wclk$8 >= mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf21 || \guard#4
{-256} mutex#11$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf12
{-257} mutex#2$wclk$8 >= mutex#11$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#3$rclk$8 >= mutex#11$wclk$8) || !choice_rf10 || \guard#4
{-258} mutex#2$wclk$8 >= mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#11$wclk$8) || !choice_rf18 || \guard#4
{-259} mutex#11$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf16
{-260} mutex#2$wclk$8 >= mutex#11$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#4$rclk$8 >= mutex#11$wclk$8) || !choice_rf14 || \guard#4
{-261} mutex#8$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf23 || \guard#4
{-262} mutex#5$wclk$8 >= mutex#8$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf22 || \guard#4
{-263} mutex#8$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf11
{-264} mutex#6$rclk$8 == mutex#8$wclk$8 || mutex#5$wclk$8 >= mutex#8$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf19
{-265} mutex#8$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf15
{-266} mutex#9$rclk$8 == mutex#11$wclk$8 || mutex#5$wclk$8 >= mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf22 || \guard#4
{-267} mutex#11$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf12
{-268} mutex#5$wclk$8 >= mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#11$wclk$8) || !choice_rf19 || \guard#4
{-269} mutex#11$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf16
{-270} mutex#9$rclk$8 == mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf23 || \guard#4
{-271} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#3$rclk$8 >= mutex#11$wclk$8) || !choice_rf11 || \guard#4
{-272} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#4$rclk$8 >= mutex#11$wclk$8) || !choice_rf15 || \guard#4
{-273} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#4$rclk$8 >= pdev#2$wclk$8) || !choice_rf24
{-274} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#5$rclk$8 >= pdev#2$wclk$8) || !choice_rf28
{-275} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#2$wclk$8) || !choice_rf32
{-276} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#2$wclk$8) || !choice_rf36
{-277} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf24
{-278} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf28
{-279} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf32
{-280} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf36
{-281} pdev#1$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf24
{-282} pdev#6$wclk$8 >= pdev#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#4$rclk$8 >= pdev#1$wclk$8) || !choice_rf27
{-283} pdev#1$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf28
{-284} pdev#6$wclk$8 >= pdev#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#5$rclk$8 >= pdev#1$wclk$8) || !choice_rf31
{-285} pdev#1$wclk$8 >= pdev#6$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf32
{-286} pdev#6$wclk$8 >= pdev#1$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#1$wclk$8) || !choice_rf35
{-287} pdev#1$wclk$8 >= pdev#6$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf36
{-288} pdev#6$wclk$8 >= pdev#1$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#1$wclk$8) || !choice_rf39
{-289} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf25
{-290} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf29
{-291} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf33
{-292} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf37
{-293} pdev#2$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf25
{-294} pdev#6$wclk$8 >= pdev#2$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#4$rclk$8 >= pdev#2$wclk$8) || !choice_rf27
{-295} pdev#2$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf29
{-296} pdev#6$wclk$8 >= pdev#2$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#5$rclk$8 >= pdev#2$wclk$8) || !choice_rf31
{-297} pdev#2$wclk$8 >= pdev#6$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf33
{-298} pdev#6$wclk$8 >= pdev#2$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#2$wclk$8) || !choice_rf35
{-299} pdev#2$wclk$8 >= pdev#6$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf37
{-300} pdev#6$wclk$8 >= pdev#2$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#2$wclk$8) || !choice_rf39
{-301} pdev#6$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf27
{-302} pdev#3$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf26
{-303} pdev#6$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf31
{-304} pdev#3$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf30
{-305} pdev#6$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf35
{-306} pdev#3$wclk$8 >= pdev#6$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf34
{-307} pdev#6$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf39
{-308} pdev#3$wclk$8 >= pdev#6$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf38
|--------------------------
{1} !\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1 ==> (signed int)byte_extract_little_endian(mutex#3, 0l, char) == 0

file race-1_1-join_true-unreach-call.c line 8 function ldv_assert
assertion
{-1} __CPROVER_dead_object#1 == NULL
{-2} __CPROVER_deallocated#1 == NULL
{-3} __CPROVER_malloc_is_new_array#1 == FALSE
{-4} __CPROVER_malloc_object#1 == NULL
{-5} __CPROVER_malloc_size#1 == 0ul
{-6} __CPROVER_memory_leak#1 == NULL
{-7} __CPROVER_next_thread_id#1 == 0ul
{-8} __CPROVER_pipe_count#1 == 0u
{-9} __CPROVER_rounding_mode!0#1 == 0
{-10} __CPROVER_thread_id!0#1 == 0ul
{-11} __CPROVER_threads_exited#1 == ARRAY_OF(FALSE)
{-12} mutex#1 == byte_extract_little_endian({ .__lock=0, .__count=0u, .__owner=0, .__nusers=0u, .__kind=0,
    .__spins=0, .__elision=0, .__list={ .__prev=((struct __pthread_internal_list { struct __pthread_internal_list *__prev; struct __pthread_internal_list *__next; } *)NULL), .__next=((struct __pthread_internal_list { struct __pthread_internal_list *__prev; struct __pthread_internal_list *__next; } *)NULL) } }, 0l, union { struct __pthread_mutex_s { signed int __lock; unsigned int __count; signed int __owner; unsigned int __nusers; signed int __kind; signed short int __spins; signed short int __elision; struct __pthread_internal_list { struct __pthread_internal_list *__prev; struct __pthread_internal_list *__next; } __list; } __data; char __size[40l]; signed long int __align; })
{-13} pdev#1 == 0
{-14} t1#1 == 0ul
{-15} mutex!0@1#1 == &mutex
{-16} mutexattr!0@1#1 == ((union { char __size[4l]; signed int __align; } *)NULL)
{-17} mutex#2 == byte_update_little_endian(mutex#1, 0l, 0, char)
{-18} pthread_mutex_init#return_value!0#1 == 0
{-19} pdev#2 == 1
{-20} expression!0@1#1 == 1
{-21} thread!0@1#1 == &t1
{-22} attr!0@1#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
{-23} start_routine!0@1#1 == thread1
{-24} arg!0@1#1 == NULL
{-25} __CPROVER_next_thread_id#2 == 1ul
{-26} this_thread_id!0@1#2 == 1ul
{-27} t1#2 == 1ul
{-28} thread!1@0#1 == &t1
{-29} attr!1@0#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
{-30} start_routine!1@0#1 == thread1
{-31} arg!1@0#1 == NULL
{-32} main#return_value!1#1 == 0
{-33} thread1#return_value!1#1 == NULL
{-34} __CPROVER_thread_id!1#1 == 0ul
{-35} __CPROVER_rounding_mode!1#1 == 0
{-36} pthread_create#return_value!1#1 == 0
{-37} pthread_mutex_destroy#return_value!1#1 == 0
{-38} module_init#return_value!1#1 == 0
{-39} pthread_join#return_value!1#1 == 0
{-40} pthread_mutex_init#return_value!1#1 == 0
{-41} pthread_mutex_lock#return_value!1#1 == 0
{-42} pthread_mutex_unlock#return_value!1#1 == 0
{-43} pthread_create#return_value!0#1 == 0
{-44} module_init#return_value!0#1 == 0
{-45} thread!0@1#1 == t1#4
{-46} value_ptr!0@1#1 == &status!0@1
{-47} \guard#1 == !(__CPROVER_next_thread_id#3 >= thread!0@1#1)
{-48} pthread_join#return_value!0#1 == 3
{-49} pthread_join#return_value!0#2 == pthread_join#return_value!0#0
{-50} \guard#2 == (thread!0@1#1 == 0ul)
{-51} pthread_join#return_value!0#3 == 35
{-52} pthread_join#return_value!0#4 == pthread_join#return_value!0#2
{-53} pthread_join#return_value!0#5 == 0
{-54} pthread_join#return_value!0#6 == (\guard#2 ? 35 : 0)
{-55} pthread_join#return_value!0#7 == (\guard#1 ? 3 : pthread_join#return_value!0#6)
{-56} mutex!0@1#1 == &mutex
{-57} mutex#5 == byte_update_little_endian(mutex#4, 0l, -1, char)
{-58} pthread_mutex_destroy#return_value!0#1 == 0
{-59} pdev#3 == 5
{-60} expression!0@2#1 == (signed int)(pdev#5 == 5)
{-61} \guard#3 == (expression!0@2#1 == 0)
{-62} main#return_value!0#1 == 0
{-63} return`!0#1 == 0
{-64} __CPROVER_thread_id!1#2 == this_thread_id!1@0#0
{-65} arg!1@1#1 == NULL
{-66} mutex!1@1#1 == &mutex
{-67} mutex#7 == mutex#6
{-68} mutex#8 == byte_update_little_endian(mutex#7, 0l, 1, char)
{-69} pthread_mutex_lock#return_value!1#2 == 0
{-70} pdev#6 == 6
{-71} expression!1@1#1 == (signed int)(pdev#8 == 6)
{-72} \guard#4 == (expression!1@1#1 == 0)
{-73} mutex!1@1#1 == &mutex
{-74} mutex#10 == mutex#9
{-75} mutex#11 == byte_update_little_endian(mutex#10, 0l, 0, char)
{-76} pthread_mutex_unlock#return_value!1#2 == 0
{-77} thread1#return_value!1#2 == NULL
{-78} __CPROVER_threads_exited#4 == __CPROVER_threads_exited#3 WITH [(signed long int)this_thread_id!1@0#0:=TRUE]
{-79} __CPROVER_threads_exited#2 == __CPROVER_threads_exited#1 || !choice_rf0
{-80} byte_extract_little_endian(mutex#7, 0l, char) == 0 && __CPROVER_threads_exited#2 == __CPROVER_threads_exited#4 && !\guard#4 || !choice_rf1
{-81} !(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#2$rclk$8) || !choice_rf1
{-82} choice_rf0 || choice_rf1 || \guard#1 || \guard#2
{-83} __CPROVER_threads_exited#3 == __CPROVER_threads_exited#1 || !choice_rf2
{-84} !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#3$rclk$8) || !choice_rf2
{-85} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || choice_rf2 || \guard#4
{-86} __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#1 || !choice_rf3
{-87} __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#2 || !choice_rf4
{-88} choice_rf3 || choice_rf4
{-89} t1#3 == t1#1 || !choice_rf5
{-90} t1#3 == t1#2 || !choice_rf6
{-91} choice_rf5 || choice_rf6
{-92} t1#4 == t1#1 || !choice_rf7
{-93} t1#4 == t1#2 || !choice_rf8
{-94} choice_rf7 || choice_rf8
{-95} mutex#3 == mutex#1 || !choice_rf9
{-96} mutex#3 == mutex#2 || !choice_rf10
{-97} byte_extract_little_endian(mutex#7, 0l, char) == 0 && mutex#3 == mutex#8 || !choice_rf11
{-98} !(mutex#8$wclk$8 >= mutex#3$rclk$8) || !choice_rf11
{-99} byte_extract_little_endian(mutex#7, 0l, char) == 0 && mutex#3 == mutex#11 && !\guard#4 || !choice_rf12
{-100} !(mutex#11$wclk$8 >= mutex#3$rclk$8) || !choice_rf12
{-101} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf10 || choice_rf11 || choice_rf12 || choice_rf9
{-102} mutex#4 == mutex#1 || !choice_rf13
{-103} mutex#4 == mutex#2 || !choice_rf14
{-104} byte_extract_little_endian(mutex#7, 0l, char) == 0 && mutex#4 == mutex#8 || !choice_rf15
{-105} !(mutex#8$wclk$8 >= mutex#4$rclk$8) || !choice_rf15
{-106} byte_extract_little_endian(mutex#7, 0l, char) == 0 && mutex#4 == mutex#11 && !\guard#4 || !choice_rf16
{-107} !(mutex#11$wclk$8 >= mutex#4$rclk$8) || !choice_rf16
{-108} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf13 || choice_rf14 || choice_rf15 || choice_rf16
{-109} mutex#6 == mutex#1 || !choice_rf17
{-110} !(mutex#1$wclk$8 >= mutex#6$rclk$8) || !choice_rf17
{-111} mutex#6 == mutex#2 || !choice_rf18
{-112} !(mutex#2$wclk$8 >= mutex#6$rclk$8) || !choice_rf18
{-113} mutex#6 == mutex#5 && (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) || !choice_rf19
{-114} !(mutex#5$wclk$8 >= mutex#6$rclk$8) || !choice_rf19
{-115} choice_rf17 || choice_rf18 || choice_rf19
{-116} mutex#9 == mutex#1 || !choice_rf20
{-117} !(mutex#1$wclk$8 >= mutex#9$rclk$8) || !choice_rf20
{-118} mutex#9 == mutex#2 || !choice_rf21
{-119} !(mutex#2$wclk$8 >= mutex#9$rclk$8) || !choice_rf21
{-120} mutex#9 == mutex#5 && (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) || !choice_rf22
{-121} !(mutex#5$wclk$8 >= mutex#9$rclk$8) || !choice_rf22
{-122} byte_extract_little_endian(mutex#7, 0l, char) == 0 && mutex#9 == mutex#8 || !choice_rf23
{-123} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || choice_rf20 || choice_rf21 || choice_rf22 || choice_rf23 || \guard#4
{-124} pdev#4 == pdev#1 || !choice_rf24
{-125} pdev#4 == pdev#2 || !choice_rf25
{-126} pdev#4 == pdev#3 && (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) || !choice_rf26
{-127} byte_extract_little_endian(mutex#7, 0l, char) == 0 && pdev#4 == pdev#6 || !choice_rf27
{-128} !(pdev#6$wclk$8 >= pdev#4$rclk$8) || !choice_rf27
{-129} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf24 || choice_rf25 || choice_rf26 || choice_rf27
{-130} pdev#5 == pdev#1 || !choice_rf28
{-131} pdev#5 == pdev#2 || !choice_rf29
{-132} pdev#5 == pdev#3 && (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) || !choice_rf30
{-133} byte_extract_little_endian(mutex#7, 0l, char) == 0 && pdev#5 == pdev#6 || !choice_rf31
{-134} !(pdev#6$wclk$8 >= pdev#5$rclk$8) || !choice_rf31
{-135} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf28 || choice_rf29 || choice_rf30 || choice_rf31
{-136} pdev#7 == pdev#1 || !choice_rf32
{-137} !(pdev#1$wclk$8 >= pdev#7$rclk$8) || !choice_rf32
{-138} pdev#7 == pdev#2 || !choice_rf33
{-139} !(pdev#2$wclk$8 >= pdev#7$rclk$8) || !choice_rf33
{-140} pdev#7 == pdev#3 && (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) || !choice_rf34
{-141} !(pdev#3$wclk$8 >= pdev#7$rclk$8) || !choice_rf34
{-142} byte_extract_little_endian(mutex#7, 0l, char) == 0 && pdev#7 == pdev#6 || !choice_rf35
{-143} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || choice_rf32 || choice_rf33 || choice_rf34 || choice_rf35
{-144} pdev#8 == pdev#1 || !choice_rf36
{-145} !(pdev#1$wclk$8 >= pdev#8$rclk$8) || !choice_rf36
{-146} pdev#8 == pdev#2 || !choice_rf37
{-147} !(pdev#2$wclk$8 >= pdev#8$rclk$8) || !choice_rf37
{-148} pdev#8 == pdev#3 && (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) || !choice_rf38
{-149} !(pdev#3$wclk$8 >= pdev#8$rclk$8) || !choice_rf38
{-150} byte_extract_little_endian(mutex#7, 0l, char) == 0 && pdev#8 == pdev#6 || !choice_rf39
{-151} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || choice_rf36 || choice_rf37 || choice_rf38 || choice_rf39
{-152} !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_ws-ext40
{-153} !(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8) || choice_ws-ext40
{-154} !(mutex#1$wclk$8 >= mutex#8$wclk$8) || !choice_ws-ext41
{-155} !(mutex#8$wclk$8 >= mutex#1$wclk$8) || choice_ws-ext41
{-156} !(mutex#1$wclk$8 >= mutex#11$wclk$8) || !choice_ws-ext42
{-157} !(mutex#11$wclk$8 >= mutex#1$wclk$8) || choice_ws-ext42
{-158} !(mutex#2$wclk$8 >= mutex#8$wclk$8) || !choice_ws-ext43
{-159} !(mutex#8$wclk$8 >= mutex#2$wclk$8) || choice_ws-ext43
{-160} !(mutex#2$wclk$8 >= mutex#11$wclk$8) || !choice_ws-ext44
{-161} !(mutex#11$wclk$8 >= mutex#2$wclk$8) || choice_ws-ext44
{-162} !(mutex#5$wclk$8 >= mutex#8$wclk$8) || !choice_ws-ext45
{-163} !(mutex#8$wclk$8 >= mutex#5$wclk$8) || choice_ws-ext45
{-164} !(mutex#5$wclk$8 >= mutex#11$wclk$8) || !choice_ws-ext46
{-165} !(mutex#11$wclk$8 >= mutex#5$wclk$8) || choice_ws-ext46
{-166} !(pdev#1$wclk$8 >= pdev#6$wclk$8) || !choice_ws-ext47
{-167} !(pdev#6$wclk$8 >= pdev#1$wclk$8) || choice_ws-ext47
{-168} !(pdev#2$wclk$8 >= pdev#6$wclk$8) || !choice_ws-ext48
{-169} !(pdev#6$wclk$8 >= pdev#2$wclk$8) || choice_ws-ext48
{-170} !(pdev#3$wclk$8 >= pdev#6$wclk$8) || !choice_ws-ext49
{-171} !(pdev#6$wclk$8 >= pdev#3$wclk$8) || choice_ws-ext49
{-172} !(t1$17$spwnclk$8 >= mutex#6$rclk$8)
{-173} !(t1$17$spwnclk$8 >= mutex#8$wclk$8)
{-174} !(t1$17$spwnclk$8 >= pdev#6$wclk$8)
{-175} !(t1$17$spwnclk$8 >= pdev#7$rclk$8)
{-176} !(t1$17$spwnclk$8 >= pdev#8$rclk$8)
{-177} !(t1$17$spwnclk$8 >= mutex#9$rclk$8)
{-178} !(t1$17$spwnclk$8 >= mutex#11$wclk$8)
{-179} !(t1$17$spwnclk$8 >= __CPROVER_threads_exited#3$rclk$8)
{-180} !(t1$17$spwnclk$8 >= __CPROVER_threads_exited#4$wclk$8)
{-181} !(status!0@1$wclk$8 >= __CPROVER_dead_object#1$wclk$8)
{-182} !(__CPROVER_dead_object#1$wclk$8 >= __CPROVER_deallocated#1$wclk$8)
{-183} !(__CPROVER_deallocated#1$wclk$8 >= __CPROVER_malloc_is_new_array#1$wclk$8)
{-184} !(__CPROVER_malloc_is_new_array#1$wclk$8 >= __CPROVER_malloc_object#1$wclk$8)
{-185} !(__CPROVER_malloc_object#1$wclk$8 >= __CPROVER_malloc_size#1$wclk$8)
{-186} !(__CPROVER_malloc_size#1$wclk$8 >= __CPROVER_memory_leak#1$wclk$8)
{-187} !(__CPROVER_memory_leak#1$wclk$8 >= __CPROVER_next_thread_id#1$wclk$8)
{-188} !(__CPROVER_next_thread_id#1$wclk$8 >= __CPROVER_pipe_count#1$wclk$8)
{-189} !(__CPROVER_pipe_count#1$wclk$8 >= __CPROVER_threads_exited#1$wclk$8)
{-190} !(__CPROVER_threads_exited#1$wclk$8 >= mutex#1$wclk$8)
{-191} !(mutex#1$wclk$8 >= pdev#1$wclk$8)
{-192} !(pdev#1$wclk$8 >= t1#1$wclk$8)
{-193} !(t1#1$wclk$8 >= mutex#2$wclk$8)
{-194} !(mutex#2$wclk$8 >= pdev#2$wclk$8)
{-195} !(pdev#2$wclk$8 >= __CPROVER_next_thread_id#2$wclk$8)
{-196} !(__CPROVER_next_thread_id#2$wclk$8 >= t1#2$wclk$8)
{-197} !(t1#2$wclk$8 >= t1$17$spwnclk$8)
{-198} !(t1$17$spwnclk$8 >= status!0@1#1$wclk$8)
{-199} !(status!0@1#1$wclk$8 >= t1#3$rclk$8)
{-200} !(t1#3$rclk$8 >= t1#4$rclk$8)
{-201} !(t1#4$rclk$8 >= __CPROVER_next_thread_id#3$rclk$8)
{-202} !(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_threads_exited#2$rclk$8)
{-203} !(__CPROVER_threads_exited#2$rclk$8 >= mutex#3$rclk$8)
{-204} !(mutex#3$rclk$8 >= mutex#4$rclk$8)
{-205} !(mutex#4$rclk$8 >= mutex#5$wclk$8)
{-206} !(mutex#5$wclk$8 >= pdev#3$wclk$8)
{-207} !(pdev#3$wclk$8 >= pdev#4$rclk$8)
{-208} !(pdev#4$rclk$8 >= pdev#5$rclk$8)
{-209} mutex#6$rclk$8 == mutex#8$wclk$8
{-210} !(mutex#8$wclk$8 >= pdev#6$wclk$8)
{-211} !(pdev#6$wclk$8 >= pdev#7$rclk$8)
{-212} !(pdev#7$rclk$8 >= pdev#8$rclk$8)
{-213} !(pdev#8$rclk$8 >= mutex#9$rclk$8)
{-214} mutex#9$rclk$8 == mutex#11$wclk$8
{-215} !(mutex#11$wclk$8 >= __CPROVER_threads_exited#3$rclk$8)
{-216} !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8)
{-217} __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_rf2 || \guard#4
{-218} __CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf1 || \guard#1 || \guard#2
{-219} __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_rf0 || \guard#1 || \guard#2 || \guard#4
{-220} !(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8) || !choice_rf3
{-221} !(t1#3$rclk$8 >= t1#2$wclk$8) || !choice_rf5
{-222} !(t1#4$rclk$8 >= t1#2$wclk$8) || !choice_rf7
{-223} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#2$wclk$8) || !choice_rf20 || \guard#4
{-224} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf9
{-225} !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf17
{-226} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf13
{-227} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf20 || \guard#4
{-228} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf9
{-229} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf17
{-230} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf13
{-231} mutex#8$wclk$8 >= mutex#1$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#1$wclk$8) || !choice_rf23 || \guard#4
{-232} mutex#1$wclk$8 >= mutex#8$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf20 || \guard#4
{-233} mutex#8$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#1$wclk$8) || !choice_rf11
{-234} mutex#1$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf9
{-235} mutex#6$rclk$8 == mutex#8$wclk$8 || mutex#1$wclk$8 >= mutex#8$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf17
{-236} mutex#8$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#1$wclk$8) || !choice_rf15
{-237} mutex#1$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf13
{-238} mutex#9$rclk$8 == mutex#11$wclk$8 || mutex#1$wclk$8 >= mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf20 || \guard#4
{-239} mutex#11$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#1$wclk$8) || !choice_rf12
{-240} mutex#1$wclk$8 >= mutex#11$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#3$rclk$8 >= mutex#11$wclk$8) || !choice_rf9 || \guard#4
{-241} mutex#1$wclk$8 >= mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#11$wclk$8) || !choice_rf17 || \guard#4
{-242} mutex#11$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#1$wclk$8) || !choice_rf16
{-243} mutex#1$wclk$8 >= mutex#11$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#4$rclk$8 >= mutex#11$wclk$8) || !choice_rf13 || \guard#4
{-244} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf21 || \guard#4
{-245} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf10
{-246} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf18
{-247} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf14
{-248} mutex#8$wclk$8 >= mutex#2$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#2$wclk$8) || !choice_rf23 || \guard#4
{-249} mutex#2$wclk$8 >= mutex#8$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf21 || \guard#4
{-250} mutex#8$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf11
{-251} mutex#2$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf10
{-252} mutex#6$rclk$8 == mutex#8$wclk$8 || mutex#2$wclk$8 >= mutex#8$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf18
{-253} mutex#8$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf15
{-254} mutex#2$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf14
{-255} mutex#9$rclk$8 == mutex#11$wclk$8 || mutex#2$wclk$8 >= mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf21 || \guard#4
{-256} mutex#11$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf12
{-257} mutex#2$wclk$8 >= mutex#11$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#3$rclk$8 >= mutex#11$wclk$8) || !choice_rf10 || \guard#4
{-258} mutex#2$wclk$8 >= mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#11$wclk$8) || !choice_rf18 || \guard#4
{-259} mutex#11$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf16
{-260} mutex#2$wclk$8 >= mutex#11$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#4$rclk$8 >= mutex#11$wclk$8) || !choice_rf14 || \guard#4
{-261} mutex#8$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf23 || \guard#4
{-262} mutex#5$wclk$8 >= mutex#8$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf22 || \guard#4
{-263} mutex#8$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf11
{-264} mutex#6$rclk$8 == mutex#8$wclk$8 || mutex#5$wclk$8 >= mutex#8$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf19
{-265} mutex#8$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf15
{-266} mutex#9$rclk$8 == mutex#11$wclk$8 || mutex#5$wclk$8 >= mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf22 || \guard#4
{-267} mutex#11$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf12
{-268} mutex#5$wclk$8 >= mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#11$wclk$8) || !choice_rf19 || \guard#4
{-269} mutex#11$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf16
{-270} mutex#9$rclk$8 == mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf23 || \guard#4
{-271} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#3$rclk$8 >= mutex#11$wclk$8) || !choice_rf11 || \guard#4
{-272} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#4$rclk$8 >= mutex#11$wclk$8) || !choice_rf15 || \guard#4
{-273} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#4$rclk$8 >= pdev#2$wclk$8) || !choice_rf24
{-274} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#5$rclk$8 >= pdev#2$wclk$8) || !choice_rf28
{-275} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#2$wclk$8) || !choice_rf32
{-276} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#2$wclk$8) || !choice_rf36
{-277} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf24
{-278} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf28
{-279} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf32
{-280} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf36
{-281} pdev#1$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf24
{-282} pdev#6$wclk$8 >= pdev#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#4$rclk$8 >= pdev#1$wclk$8) || !choice_rf27
{-283} pdev#1$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf28
{-284} pdev#6$wclk$8 >= pdev#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#5$rclk$8 >= pdev#1$wclk$8) || !choice_rf31
{-285} pdev#1$wclk$8 >= pdev#6$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf32
{-286} pdev#6$wclk$8 >= pdev#1$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#1$wclk$8) || !choice_rf35
{-287} pdev#1$wclk$8 >= pdev#6$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf36
{-288} pdev#6$wclk$8 >= pdev#1$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#1$wclk$8) || !choice_rf39
{-289} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf25
{-290} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf29
{-291} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf33
{-292} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf37
{-293} pdev#2$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf25
{-294} pdev#6$wclk$8 >= pdev#2$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#4$rclk$8 >= pdev#2$wclk$8) || !choice_rf27
{-295} pdev#2$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf29
{-296} pdev#6$wclk$8 >= pdev#2$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#5$rclk$8 >= pdev#2$wclk$8) || !choice_rf31
{-297} pdev#2$wclk$8 >= pdev#6$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf33
{-298} pdev#6$wclk$8 >= pdev#2$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#2$wclk$8) || !choice_rf35
{-299} pdev#2$wclk$8 >= pdev#6$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf37
{-300} pdev#6$wclk$8 >= pdev#2$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#2$wclk$8) || !choice_rf39
{-301} pdev#6$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf27
{-302} pdev#3$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf26
{-303} pdev#6$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf31
{-304} pdev#3$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf30
{-305} pdev#6$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf35
{-306} pdev#3$wclk$8 >= pdev#6$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf34
{-307} pdev#6$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf39
{-308} pdev#3$wclk$8 >= pdev#6$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf38
|--------------------------
{1} !((!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && \guard#3)

file race-1_1-join_true-unreach-call.c line 8 function ldv_assert
assertion
{-1} __CPROVER_dead_object#1 == NULL
{-2} __CPROVER_deallocated#1 == NULL
{-3} __CPROVER_malloc_is_new_array#1 == FALSE
{-4} __CPROVER_malloc_object#1 == NULL
{-5} __CPROVER_malloc_size#1 == 0ul
{-6} __CPROVER_memory_leak#1 == NULL
{-7} __CPROVER_next_thread_id#1 == 0ul
{-8} __CPROVER_pipe_count#1 == 0u
{-9} __CPROVER_rounding_mode!0#1 == 0
{-10} __CPROVER_thread_id!0#1 == 0ul
{-11} __CPROVER_threads_exited#1 == ARRAY_OF(FALSE)
{-12} mutex#1 == byte_extract_little_endian({ .__lock=0, .__count=0u, .__owner=0, .__nusers=0u, .__kind=0,
    .__spins=0, .__elision=0, .__list={ .__prev=((struct __pthread_internal_list { struct __pthread_internal_list *__prev; struct __pthread_internal_list *__next; } *)NULL), .__next=((struct __pthread_internal_list { struct __pthread_internal_list *__prev; struct __pthread_internal_list *__next; } *)NULL) } }, 0l, union { struct __pthread_mutex_s { signed int __lock; unsigned int __count; signed int __owner; unsigned int __nusers; signed int __kind; signed short int __spins; signed short int __elision; struct __pthread_internal_list { struct __pthread_internal_list *__prev; struct __pthread_internal_list *__next; } __list; } __data; char __size[40l]; signed long int __align; })
{-13} pdev#1 == 0
{-14} t1#1 == 0ul
{-15} mutex!0@1#1 == &mutex
{-16} mutexattr!0@1#1 == ((union { char __size[4l]; signed int __align; } *)NULL)
{-17} mutex#2 == byte_update_little_endian(mutex#1, 0l, 0, char)
{-18} pthread_mutex_init#return_value!0#1 == 0
{-19} pdev#2 == 1
{-20} expression!0@1#1 == 1
{-21} thread!0@1#1 == &t1
{-22} attr!0@1#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
{-23} start_routine!0@1#1 == thread1
{-24} arg!0@1#1 == NULL
{-25} __CPROVER_next_thread_id#2 == 1ul
{-26} this_thread_id!0@1#2 == 1ul
{-27} t1#2 == 1ul
{-28} thread!1@0#1 == &t1
{-29} attr!1@0#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
{-30} start_routine!1@0#1 == thread1
{-31} arg!1@0#1 == NULL
{-32} main#return_value!1#1 == 0
{-33} thread1#return_value!1#1 == NULL
{-34} __CPROVER_thread_id!1#1 == 0ul
{-35} __CPROVER_rounding_mode!1#1 == 0
{-36} pthread_create#return_value!1#1 == 0
{-37} pthread_mutex_destroy#return_value!1#1 == 0
{-38} module_init#return_value!1#1 == 0
{-39} pthread_join#return_value!1#1 == 0
{-40} pthread_mutex_init#return_value!1#1 == 0
{-41} pthread_mutex_lock#return_value!1#1 == 0
{-42} pthread_mutex_unlock#return_value!1#1 == 0
{-43} pthread_create#return_value!0#1 == 0
{-44} module_init#return_value!0#1 == 0
{-45} thread!0@1#1 == t1#4
{-46} value_ptr!0@1#1 == &status!0@1
{-47} \guard#1 == !(__CPROVER_next_thread_id#3 >= thread!0@1#1)
{-48} pthread_join#return_value!0#1 == 3
{-49} pthread_join#return_value!0#2 == pthread_join#return_value!0#0
{-50} \guard#2 == (thread!0@1#1 == 0ul)
{-51} pthread_join#return_value!0#3 == 35
{-52} pthread_join#return_value!0#4 == pthread_join#return_value!0#2
{-53} pthread_join#return_value!0#5 == 0
{-54} pthread_join#return_value!0#6 == (\guard#2 ? 35 : 0)
{-55} pthread_join#return_value!0#7 == (\guard#1 ? 3 : pthread_join#return_value!0#6)
{-56} mutex!0@1#1 == &mutex
{-57} mutex#5 == byte_update_little_endian(mutex#4, 0l, -1, char)
{-58} pthread_mutex_destroy#return_value!0#1 == 0
{-59} pdev#3 == 5
{-60} expression!0@2#1 == (signed int)(pdev#5 == 5)
{-61} \guard#3 == (expression!0@2#1 == 0)
{-62} main#return_value!0#1 == 0
{-63} return'!0#1 == 0
{-64} __CPROVER_thread_id!1#2 == this_thread_id!1@0#0
{-65} arg!1@1#1 == NULL
{-66} mutex!1@1#1 == &mutex
{-67} mutex#7 == mutex#6
{-68} mutex#8 == byte_update_little_endian(mutex#7, 0l, 1, char)
{-69} pthread_mutex_lock#return_value!1#2 == 0
{-70} pdev#6 == 6
{-71} expression!1@1#1 == (signed int)(pdev#8 == 6)
{-72} \guard#4 == (expression!1@1#1 == 0)
{-73} mutex!1@1#1 == &mutex
{-74} mutex#10 == mutex#9
{-75} mutex#11 == byte_update_little_endian(mutex#10, 0l, 0, char)
{-76} pthread_mutex_unlock#return_value!1#2 == 0
{-77} thread1#return_value!1#2 == NULL
{-78} __CPROVER_threads_exited#4 == __CPROVER_threads_exited#3 WITH [(signed long int)this_thread_id!1@0#0:=TRUE]
{-79} __CPROVER_threads_exited#2 == __CPROVER_threads_exited#1 || !choice_rf0
{-80} byte_extract_little_endian(mutex#7, 0l, char) == 0 && __CPROVER_threads_exited#2 == __CPROVER_threads_exited#4 && !\guard#4 || !choice_rf1
{-81} !(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#2$rclk$8) || !choice_rf1
{-82} choice_rf0 || choice_rf1 || \guard#1 || \guard#2
{-83} __CPROVER_threads_exited#3 == __CPROVER_threads_exited#1 || !choice_rf2
{-84} !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#3$rclk$8) || !choice_rf2
{-85} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || choice_rf2 || \guard#4
{-86} __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#1 || !choice_rf3
{-87} __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#2 || !choice_rf4
{-88} choice_rf3 || choice_rf4
{-89} t1#3 == t1#1 || !choice_rf5
{-90} t1#3 == t1#2 || !choice_rf6
{-91} choice_rf5 || choice_rf6
{-92} t1#4 == t1#1 || !choice_rf7
{-93} t1#4 == t1#2 || !choice_rf8
{-94} choice_rf7 || choice_rf8
{-95} mutex#3 == mutex#1 || !choice_rf9
{-96} mutex#3 == mutex#2 || !choice_rf10
{-97} byte_extract_little_endian(mutex#7, 0l, char) == 0 && mutex#3 == mutex#8 || !choice_rf11
{-98} !(mutex#8$wclk$8 >= mutex#3$rclk$8) || !choice_rf11
{-99} byte_extract_little_endian(mutex#7, 0l, char) == 0 && mutex#3 == mutex#11 && !\guard#4 || !choice_rf12
{-100} !(mutex#11$wclk$8 >= mutex#3$rclk$8) || !choice_rf12
{-101} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf10 || choice_rf11 || choice_rf12 || choice_rf9
{-102} mutex#4 == mutex#1 || !choice_rf13
{-103} mutex#4 == mutex#2 || !choice_rf14
{-104} byte_extract_little_endian(mutex#7, 0l, char) == 0 && mutex#4 == mutex#8 || !choice_rf15
{-105} !(mutex#8$wclk$8 >= mutex#4$rclk$8) || !choice_rf15
{-106} byte_extract_little_endian(mutex#7, 0l, char) == 0 && mutex#4 == mutex#11 && !\guard#4 || !choice_rf16
{-107} !(mutex#11$wclk$8 >= mutex#4$rclk$8) || !choice_rf16
{-108} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf13 || choice_rf14 || choice_rf15 || choice_rf16
{-109} mutex#6 == mutex#1 || !choice_rf17
{-110} !(mutex#1$wclk$8 >= mutex#6$rclk$8) || !choice_rf17
{-111} mutex#6 == mutex#2 || !choice_rf18
{-112} !(mutex#2$wclk$8 >= mutex#6$rclk$8) || !choice_rf18
{-113} mutex#6 == mutex#5 && (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) || !choice_rf19
{-114} !(mutex#5$wclk$8 >= mutex#6$rclk$8) || !choice_rf19
{-115} choice_rf17 || choice_rf18 || choice_rf19
{-116} mutex#9 == mutex#1 || !choice_rf20
{-117} !(mutex#1$wclk$8 >= mutex#9$rclk$8) || !choice_rf20
{-118} mutex#9 == mutex#2 || !choice_rf21
{-119} !(mutex#2$wclk$8 >= mutex#9$rclk$8) || !choice_rf21
{-120} mutex#9 == mutex#5 && (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) || !choice_rf22
{-121} !(mutex#5$wclk$8 >= mutex#9$rclk$8) || !choice_rf22
{-122} byte_extract_little_endian(mutex#7, 0l, char) == 0 && mutex#9 == mutex#8 || !choice_rf23
{-123} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || choice_rf20 || choice_rf21 || choice_rf22 || choice_rf23 || \guard#4
{-124} pdev#4 == pdev#1 || !choice_rf24
{-125} pdev#4 == pdev#2 || !choice_rf25
{-126} pdev#4 == pdev#3 && (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) || !choice_rf26
{-127} byte_extract_little_endian(mutex#7, 0l, char) == 0 && pdev#4 == pdev#6 || !choice_rf27
{-128} !(pdev#6$wclk$8 >= pdev#4$rclk$8) || !choice_rf27
{-129} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf24 || choice_rf25 || choice_rf26 || choice_rf27
{-130} pdev#5 == pdev#1 || !choice_rf28
{-131} pdev#5 == pdev#2 || !choice_rf29
{-132} pdev#5 == pdev#3 && (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) || !choice_rf30
{-133} byte_extract_little_endian(mutex#7, 0l, char) == 0 && pdev#5 == pdev#6 || !choice_rf31
{-134} !(pdev#6$wclk$8 >= pdev#5$rclk$8) || !choice_rf31
{-135} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf28 || choice_rf29 || choice_rf30 || choice_rf31
{-136} pdev#7 == pdev#1 || !choice_rf32
{-137} !(pdev#1$wclk$8 >= pdev#7$rclk$8) || !choice_rf32
{-138} pdev#7 == pdev#2 || !choice_rf33
{-139} !(pdev#2$wclk$8 >= pdev#7$rclk$8) || !choice_rf33
{-140} pdev#7 == pdev#3 && (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) || !choice_rf34
{-141} !(pdev#3$wclk$8 >= pdev#7$rclk$8) || !choice_rf34
{-142} byte_extract_little_endian(mutex#7, 0l, char) == 0 && pdev#7 == pdev#6 || !choice_rf35
{-143} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || choice_rf32 || choice_rf33 || choice_rf34 || choice_rf35
{-144} pdev#8 == pdev#1 || !choice_rf36
{-145} !(pdev#1$wclk$8 >= pdev#8$rclk$8) || !choice_rf36
{-146} pdev#8 == pdev#2 || !choice_rf37
{-147} !(pdev#2$wclk$8 >= pdev#8$rclk$8) || !choice_rf37
{-148} pdev#8 == pdev#3 && (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) || !choice_rf38
{-149} !(pdev#3$wclk$8 >= pdev#8$rclk$8) || !choice_rf38
{-150} byte_extract_little_endian(mutex#7, 0l, char) == 0 && pdev#8 == pdev#6 || !choice_rf39
{-151} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || choice_rf36 || choice_rf37 || choice_rf38 || choice_rf39
{-152} !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_ws-ext40
{-153} !(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8) || choice_ws-ext40
{-154} !(mutex#1$wclk$8 >= mutex#8$wclk$8) || !choice_ws-ext41
{-155} !(mutex#8$wclk$8 >= mutex#1$wclk$8) || choice_ws-ext41
{-156} !(mutex#1$wclk$8 >= mutex#11$wclk$8) || !choice_ws-ext42
{-157} !(mutex#11$wclk$8 >= mutex#1$wclk$8) || choice_ws-ext42
{-158} !(mutex#2$wclk$8 >= mutex#8$wclk$8) || !choice_ws-ext43
{-159} !(mutex#8$wclk$8 >= mutex#2$wclk$8) || choice_ws-ext43
{-160} !(mutex#2$wclk$8 >= mutex#11$wclk$8) || !choice_ws-ext44
{-161} !(mutex#11$wclk$8 >= mutex#2$wclk$8) || choice_ws-ext44
{-162} !(mutex#5$wclk$8 >= mutex#8$wclk$8) || !choice_ws-ext45
{-163} !(mutex#8$wclk$8 >= mutex#5$wclk$8) || choice_ws-ext45
{-164} !(mutex#5$wclk$8 >= mutex#11$wclk$8) || !choice_ws-ext46
{-165} !(mutex#11$wclk$8 >= mutex#5$wclk$8) || choice_ws-ext46
{-166} !(pdev#1$wclk$8 >= pdev#6$wclk$8) || !choice_ws-ext47
{-167} !(pdev#6$wclk$8 >= pdev#1$wclk$8) || choice_ws-ext47
{-168} !(pdev#2$wclk$8 >= pdev#6$wclk$8) || !choice_ws-ext48
{-169} !(pdev#6$wclk$8 >= pdev#2$wclk$8) || choice_ws-ext48
{-170} !(pdev#3$wclk$8 >= pdev#6$wclk$8) || !choice_ws-ext49
{-171} !(pdev#6$wclk$8 >= pdev#3$wclk$8) || choice_ws-ext49
{-172} !(t1$17$spwnclk$8 >= mutex#6$rclk$8)
{-173} !(t1$17$spwnclk$8 >= mutex#8$wclk$8)
{-174} !(t1$17$spwnclk$8 >= pdev#6$wclk$8)
{-175} !(t1$17$spwnclk$8 >= pdev#7$rclk$8)
{-176} !(t1$17$spwnclk$8 >= pdev#8$rclk$8)
{-177} !(t1$17$spwnclk$8 >= mutex#9$rclk$8)
{-178} !(t1$17$spwnclk$8 >= mutex#11$wclk$8)
{-179} !(t1$17$spwnclk$8 >= __CPROVER_threads_exited#3$rclk$8)
{-180} !(t1$17$spwnclk$8 >= __CPROVER_threads_exited#4$wclk$8)
{-181} !(status!0@1$wclk$8 >= __CPROVER_dead_object#1$wclk$8)
{-182} !(__CPROVER_dead_object#1$wclk$8 >= __CPROVER_deallocated#1$wclk$8)
{-183} !(__CPROVER_deallocated#1$wclk$8 >= __CPROVER_malloc_is_new_array#1$wclk$8)
{-184} !(__CPROVER_malloc_is_new_array#1$wclk$8 >= __CPROVER_malloc_object#1$wclk$8)
{-185} !(__CPROVER_malloc_object#1$wclk$8 >= __CPROVER_malloc_size#1$wclk$8)
{-186} !(__CPROVER_malloc_size#1$wclk$8 >= __CPROVER_memory_leak#1$wclk$8)
{-187} !(__CPROVER_memory_leak#1$wclk$8 >= __CPROVER_next_thread_id#1$wclk$8)
{-188} !(__CPROVER_next_thread_id#1$wclk$8 >= __CPROVER_pipe_count#1$wclk$8)
{-189} !(__CPROVER_pipe_count#1$wclk$8 >= __CPROVER_threads_exited#1$wclk$8)
{-190} !(__CPROVER_threads_exited#1$wclk$8 >= mutex#1$wclk$8)
{-191} !(mutex#1$wclk$8 >= pdev#1$wclk$8)
{-192} !(pdev#1$wclk$8 >= t1#1$wclk$8)
{-193} !(t1#1$wclk$8 >= mutex#2$wclk$8)
{-194} !(mutex#2$wclk$8 >= pdev#2$wclk$8)
{-195} !(pdev#2$wclk$8 >= __CPROVER_next_thread_id#2$wclk$8)
{-196} !(__CPROVER_next_thread_id#2$wclk$8 >= t1#2$wclk$8)
{-197} !(t1#2$wclk$8 >= t1$17$spwnclk$8)
{-198} !(t1$17$spwnclk$8 >= status!0@1#1$wclk$8)
{-199} !(status!0@1#1$wclk$8 >= t1#3$rclk$8)
{-200} !(t1#3$rclk$8 >= t1#4$rclk$8)
{-201} !(t1#4$rclk$8 >= __CPROVER_next_thread_id#3$rclk$8)
{-202} !(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_threads_exited#2$rclk$8)
{-203} !(__CPROVER_threads_exited#2$rclk$8 >= mutex#3$rclk$8)
{-204} !(mutex#3$rclk$8 >= mutex#4$rclk$8)
{-205} !(mutex#4$rclk$8 >= mutex#5$wclk$8)
{-206} !(mutex#5$wclk$8 >= pdev#3$wclk$8)
{-207} !(pdev#3$wclk$8 >= pdev#4$rclk$8)
{-208} !(pdev#4$rclk$8 >= pdev#5$rclk$8)
{-209} mutex#6$rclk$8 == mutex#8$wclk$8
{-210} !(mutex#8$wclk$8 >= pdev#6$wclk$8)
{-211} !(pdev#6$wclk$8 >= pdev#7$rclk$8)
{-212} !(pdev#7$rclk$8 >= pdev#8$rclk$8)
{-213} !(pdev#8$rclk$8 >= mutex#9$rclk$8)
{-214} mutex#9$rclk$8 == mutex#11$wclk$8
{-215} !(mutex#11$wclk$8 >= __CPROVER_threads_exited#3$rclk$8)
{-216} !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8)
{-217} __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_rf2 || \guard#4
{-218} __CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf1 || \guard#1 || \guard#2
{-219} __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_rf0 || \guard#1 || \guard#2 || \guard#4
{-220} !(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8) || !choice_rf3
{-221} !(t1#3$rclk$8 >= t1#2$wclk$8) || !choice_rf5
{-222} !(t1#4$rclk$8 >= t1#2$wclk$8) || !choice_rf7
{-223} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#2$wclk$8) || !choice_rf20 || \guard#4
{-224} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf9
{-225} !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf17
{-226} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf13
{-227} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf20 || \guard#4
{-228} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf9
{-229} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf17
{-230} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf13
{-231} mutex#8$wclk$8 >= mutex#1$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#1$wclk$8) || !choice_rf23 || \guard#4
{-232} mutex#1$wclk$8 >= mutex#8$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf20 || \guard#4
{-233} mutex#8$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#1$wclk$8) || !choice_rf11
{-234} mutex#1$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf9
{-235} mutex#6$rclk$8 == mutex#8$wclk$8 || mutex#1$wclk$8 >= mutex#8$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf17
{-236} mutex#8$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#1$wclk$8) || !choice_rf15
{-237} mutex#1$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf13
{-238} mutex#9$rclk$8 == mutex#11$wclk$8 || mutex#1$wclk$8 >= mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf20 || \guard#4
{-239} mutex#11$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#1$wclk$8) || !choice_rf12
{-240} mutex#1$wclk$8 >= mutex#11$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#3$rclk$8 >= mutex#11$wclk$8) || !choice_rf9 || \guard#4
{-241} mutex#1$wclk$8 >= mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#11$wclk$8) || !choice_rf17 || \guard#4
{-242} mutex#11$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#1$wclk$8) || !choice_rf16
{-243} mutex#1$wclk$8 >= mutex#11$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#4$rclk$8 >= mutex#11$wclk$8) || !choice_rf13 || \guard#4
{-244} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf21 || \guard#4
{-245} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf10
{-246} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf18
{-247} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf14
{-248} mutex#8$wclk$8 >= mutex#2$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#2$wclk$8) || !choice_rf23 || \guard#4
{-249} mutex#2$wclk$8 >= mutex#8$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf21 || \guard#4
{-250} mutex#8$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf11
{-251} mutex#2$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf10
{-252} mutex#6$rclk$8 == mutex#8$wclk$8 || mutex#2$wclk$8 >= mutex#8$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf18
{-253} mutex#8$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf15
{-254} mutex#2$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf14
{-255} mutex#9$rclk$8 == mutex#11$wclk$8 || mutex#2$wclk$8 >= mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf21 || \guard#4
{-256} mutex#11$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf12
{-257} mutex#2$wclk$8 >= mutex#11$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#3$rclk$8 >= mutex#11$wclk$8) || !choice_rf10 || \guard#4
{-258} mutex#2$wclk$8 >= mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#11$wclk$8) || !choice_rf18 || \guard#4
{-259} mutex#11$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf16
{-260} mutex#2$wclk$8 >= mutex#11$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#4$rclk$8 >= mutex#11$wclk$8) || !choice_rf14 || \guard#4
{-261} mutex#8$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf23 || \guard#4
{-262} mutex#5$wclk$8 >= mutex#8$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf22 || \guard#4
{-263} mutex#8$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf11
{-264} mutex#6$rclk$8 == mutex#8$wclk$8 || mutex#5$wclk$8 >= mutex#8$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf19
{-265} mutex#8$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf15
{-266} mutex#9$rclk$8 == mutex#11$wclk$8 || mutex#5$wclk$8 >= mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf22 || \guard#4
{-267} mutex#11$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf12
{-268} mutex#5$wclk$8 >= mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#11$wclk$8) || !choice_rf19 || \guard#4
{-269} mutex#11$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf16
{-270} mutex#9$rclk$8 == mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf23 || \guard#4
{-271} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#3$rclk$8 >= mutex#11$wclk$8) || !choice_rf11 || \guard#4
{-272} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#4$rclk$8 >= mutex#11$wclk$8) || !choice_rf15 || \guard#4
{-273} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#4$rclk$8 >= pdev#2$wclk$8) || !choice_rf24
{-274} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#5$rclk$8 >= pdev#2$wclk$8) || !choice_rf28
{-275} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#2$wclk$8) || !choice_rf32
{-276} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#2$wclk$8) || !choice_rf36
{-277} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf24
{-278} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf28
{-279} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf32
{-280} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf36
{-281} pdev#1$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf24
{-282} pdev#6$wclk$8 >= pdev#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#4$rclk$8 >= pdev#1$wclk$8) || !choice_rf27
{-283} pdev#1$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf28
{-284} pdev#6$wclk$8 >= pdev#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#5$rclk$8 >= pdev#1$wclk$8) || !choice_rf31
{-285} pdev#1$wclk$8 >= pdev#6$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf32
{-286} pdev#6$wclk$8 >= pdev#1$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#1$wclk$8) || !choice_rf35
{-287} pdev#1$wclk$8 >= pdev#6$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf36
{-288} pdev#6$wclk$8 >= pdev#1$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#1$wclk$8) || !choice_rf39
{-289} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf25
{-290} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf29
{-291} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf33
{-292} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf37
{-293} pdev#2$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf25
{-294} pdev#6$wclk$8 >= pdev#2$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#4$rclk$8 >= pdev#2$wclk$8) || !choice_rf27
{-295} pdev#2$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf29
{-296} pdev#6$wclk$8 >= pdev#2$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#5$rclk$8 >= pdev#2$wclk$8) || !choice_rf31
{-297} pdev#2$wclk$8 >= pdev#6$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf33
{-298} pdev#6$wclk$8 >= pdev#2$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#2$wclk$8) || !choice_rf35
{-299} pdev#2$wclk$8 >= pdev#6$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf37
{-300} pdev#6$wclk$8 >= pdev#2$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#2$wclk$8) || !choice_rf39
{-301} pdev#6$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf27
{-302} pdev#3$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf26
{-303} pdev#6$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf31
{-304} pdev#3$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf30
{-305} pdev#6$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf35
{-306} pdev#3$wclk$8 >= pdev#6$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf34
{-307} pdev#6$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf39
{-308} pdev#3$wclk$8 >= pdev#6$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf38
|--------------------------
{1} !(byte_extract_little_endian(mutex#7, 0l, char) == 0 && \guard#4)

file <builtin-library-pthread_mutex_unlock> line 39 function pthread_mutex_unlock
must hold lock upon unlock
{-1} __CPROVER_dead_object#1 == NULL
{-2} __CPROVER_deallocated#1 == NULL
{-3} __CPROVER_malloc_is_new_array#1 == FALSE
{-4} __CPROVER_malloc_object#1 == NULL
{-5} __CPROVER_malloc_size#1 == 0ul
{-6} __CPROVER_memory_leak#1 == NULL
{-7} __CPROVER_next_thread_id#1 == 0ul
{-8} __CPROVER_pipe_count#1 == 0u
{-9} __CPROVER_rounding_mode!0#1 == 0
{-10} __CPROVER_thread_id!0#1 == 0ul
{-11} __CPROVER_threads_exited#1 == ARRAY_OF(FALSE)
{-12} mutex#1 == byte_extract_little_endian({ .__lock=0, .__count=0u, .__owner=0, .__nusers=0u, .__kind=0,
    .__spins=0, .__elision=0, .__list={ .__prev=((struct __pthread_internal_list { struct __pthread_internal_list *__prev; struct __pthread_internal_list *__next; } *)NULL), .__next=((struct __pthread_internal_list { struct __pthread_internal_list *__prev; struct __pthread_internal_list *__next; } *)NULL) } }, 0l, union { struct __pthread_mutex_s { signed int __lock; unsigned int __count; signed int __owner; unsigned int __nusers; signed int __kind; signed short int __spins; signed short int __elision; struct __pthread_internal_list { struct __pthread_internal_list *__prev; struct __pthread_internal_list *__next; } __list; } __data; char __size[40l]; signed long int __align; })
{-13} pdev#1 == 0
{-14} t1#1 == 0ul
{-15} mutex!0@1#1 == &mutex
{-16} mutexattr!0@1#1 == ((union { char __size[4l]; signed int __align; } *)NULL)
{-17} mutex#2 == byte_update_little_endian(mutex#1, 0l, 0, char)
{-18} pthread_mutex_init#return_value!0#1 == 0
{-19} pdev#2 == 1
{-20} expression!0@1#1 == 1
{-21} thread!0@1#1 == &t1
{-22} attr!0@1#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
{-23} start_routine!0@1#1 == thread1
{-24} arg!0@1#1 == NULL
{-25} __CPROVER_next_thread_id#2 == 1ul
{-26} this_thread_id!0@1#2 == 1ul
{-27} t1#2 == 1ul
{-28} thread!1@0#1 == &t1
{-29} attr!1@0#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
{-30} start_routine!1@0#1 == thread1
{-31} arg!1@0#1 == NULL
{-32} main#return_value!1#1 == 0
{-33} thread1#return_value!1#1 == NULL
{-34} __CPROVER_thread_id!1#1 == 0ul
{-35} __CPROVER_rounding_mode!1#1 == 0
{-36} pthread_create#return_value!1#1 == 0
{-37} pthread_mutex_destroy#return_value!1#1 == 0
{-38} module_init#return_value!1#1 == 0
{-39} pthread_join#return_value!1#1 == 0
{-40} pthread_mutex_init#return_value!1#1 == 0
{-41} pthread_mutex_lock#return_value!1#1 == 0
{-42} pthread_mutex_unlock#return_value!1#1 == 0
{-43} pthread_create#return_value!0#1 == 0
{-44} module_init#return_value!0#1 == 0
{-45} thread!0@1#1 == t1#4
{-46} value_ptr!0@1#1 == &status!0@1
{-47} \guard#1 == !(__CPROVER_next_thread_id#3 >= thread!0@1#1)
{-48} pthread_join#return_value!0#1 == 3
{-49} pthread_join#return_value!0#2 == pthread_join#return_value!0#0
{-50} \guard#2 == (thread!0@1#1 == 0ul)
{-51} pthread_join#return_value!0#3 == 35
{-52} pthread_join#return_value!0#4 == pthread_join#return_value!0#2
{-53} pthread_join#return_value!0#5 == 0
{-54} pthread_join#return_value!0#6 == (\guard#2 ? 35 : 0)
{-55} pthread_join#return_value!0#7 == (\guard#1 ? 3 : pthread_join#return_value!0#6)
{-56} mutex!0@1#1 == &mutex
{-57} mutex#5 == byte_update_little_endian(mutex#4, 0l, -1, char)
{-58} pthread_mutex_destroy#return_value!0#1 == 0
{-59} pdev#3 == 5
{-60} expression!0@2#1 == (signed int)(pdev#5 == 5)
{-61} \guard#3 == (expression!0@2#1 == 0)
{-62} main#return_value!0#1 == 0
{-63} return'!0#1 == 0
{-64} __CPROVER_thread_id!1#2 == this_thread_id!1@0#0
{-65} arg!1@1#1 == NULL
{-66} mutex!1@1#1 == &mutex
{-67} mutex#7 == mutex#6
{-68} mutex#8 == byte_update_little_endian(mutex#7, 0l, 1, char)
{-69} pthread_mutex_lock#return_value!1#2 == 0
{-70} pdev#6 == 6
{-71} expression!1@1#1 == (signed int)(pdev#8 == 6)
{-72} \guard#4 == (expression!1@1#1 == 0)
{-73} mutex!1@1#1 == &mutex
{-74} mutex#10 == mutex#9
{-75} mutex#11 == byte_update_little_endian(mutex#10, 0l, 0, char)
{-76} pthread_mutex_unlock#return_value!1#2 == 0
{-77} thread1#return_value!1#2 == NULL
{-78} __CPROVER_threads_exited#4 == __CPROVER_threads_exited#3 WITH [(signed long int)this_thread_id!1@0#0:=TRUE]
{-79} __CPROVER_threads_exited#2 == __CPROVER_threads_exited#1 || !choice_rf0
{-80} byte_extract_little_endian(mutex#7, 0l, char) == 0 && __CPROVER_threads_exited#2 == __CPROVER_threads_exited#4 && !\guard#4 || !choice_rf1
{-81} !(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#2$rclk$8) || !choice_rf1
{-82} choice_rf0 || choice_rf1 || \guard#1 || \guard#2
{-83} __CPROVER_threads_exited#3 == __CPROVER_threads_exited#1 || !choice_rf2
{-84} !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#3$rclk$8) || !choice_rf2
{-85} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || choice_rf2 || \guard#4
{-86} __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#1 || !choice_rf3
{-87} __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#2 || !choice_rf4
{-88} choice_rf3 || choice_rf4
{-89} t1#3 == t1#1 || !choice_rf5
{-90} t1#3 == t1#2 || !choice_rf6
{-91} choice_rf5 || choice_rf6
{-92} t1#4 == t1#1 || !choice_rf7
{-93} t1#4 == t1#2 || !choice_rf8
{-94} choice_rf7 || choice_rf8
{-95} mutex#3 == mutex#1 || !choice_rf9
{-96} mutex#3 == mutex#2 || !choice_rf10
{-97} byte_extract_little_endian(mutex#7, 0l, char) == 0 && mutex#3 == mutex#8 || !choice_rf11
{-98} !(mutex#8$wclk$8 >= mutex#3$rclk$8) || !choice_rf11
{-99} byte_extract_little_endian(mutex#7, 0l, char) == 0 && mutex#3 == mutex#11 && !\guard#4 || !choice_rf12
{-100} !(mutex#11$wclk$8 >= mutex#3$rclk$8) || !choice_rf12
{-101} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf10 || choice_rf11 || choice_rf12 || choice_rf9
{-102} mutex#4 == mutex#1 || !choice_rf13
{-103} mutex#4 == mutex#2 || !choice_rf14
{-104} byte_extract_little_endian(mutex#7, 0l, char) == 0 && mutex#4 == mutex#8 || !choice_rf15
{-105} !(mutex#8$wclk$8 >= mutex#4$rclk$8) || !choice_rf15
{-106} byte_extract_little_endian(mutex#7, 0l, char) == 0 && mutex#4 == mutex#11 && !\guard#4 || !choice_rf16
{-107} !(mutex#11$wclk$8 >= mutex#4$rclk$8) || !choice_rf16
{-108} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf13 || choice_rf14 || choice_rf15 || choice_rf16
{-109} mutex#6 == mutex#1 || !choice_rf17
{-110} !(mutex#1$wclk$8 >= mutex#6$rclk$8) || !choice_rf17
{-111} mutex#6 == mutex#2 || !choice_rf18
{-112} !(mutex#2$wclk$8 >= mutex#6$rclk$8) || !choice_rf18
{-113} mutex#6 == mutex#5 && (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) || !choice_rf19
{-114} !(mutex#5$wclk$8 >= mutex#6$rclk$8) || !choice_rf19
{-115} choice_rf17 || choice_rf18 || choice_rf19
{-116} mutex#9 == mutex#1 || !choice_rf20
{-117} !(mutex#1$wclk$8 >= mutex#9$rclk$8) || !choice_rf20
{-118} mutex#9 == mutex#2 || !choice_rf21
{-119} !(mutex#2$wclk$8 >= mutex#9$rclk$8) || !choice_rf21
{-120} mutex#9 == mutex#5 && (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) || !choice_rf22
{-121} !(mutex#5$wclk$8 >= mutex#9$rclk$8) || !choice_rf22
{-122} byte_extract_little_endian(mutex#7, 0l, char) == 0 && mutex#9 == mutex#8 || !choice_rf23
{-123} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || choice_rf20 || choice_rf21 || choice_rf22 || choice_rf23 || \guard#4
{-124} pdev#4 == pdev#1 || !choice_rf24
{-125} pdev#4 == pdev#2 || !choice_rf25
{-126} pdev#4 == pdev#3 && (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) || !choice_rf26
{-127} byte_extract_little_endian(mutex#7, 0l, char) == 0 && pdev#4 == pdev#6 || !choice_rf27
{-128} !(pdev#6$wclk$8 >= pdev#4$rclk$8) || !choice_rf27
{-129} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf24 || choice_rf25 || choice_rf26 || choice_rf27
{-130} pdev#5 == pdev#1 || !choice_rf28
{-131} pdev#5 == pdev#2 || !choice_rf29
{-132} pdev#5 == pdev#3 && (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) || !choice_rf30
{-133} byte_extract_little_endian(mutex#7, 0l, char) == 0 && pdev#5 == pdev#6 || !choice_rf31
{-134} !(pdev#6$wclk$8 >= pdev#5$rclk$8) || !choice_rf31
{-135} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf28 || choice_rf29 || choice_rf30 || choice_rf31
{-136} pdev#7 == pdev#1 || !choice_rf32
{-137} !(pdev#1$wclk$8 >= pdev#7$rclk$8) || !choice_rf32
{-138} pdev#7 == pdev#2 || !choice_rf33
{-139} !(pdev#2$wclk$8 >= pdev#7$rclk$8) || !choice_rf33
{-140} pdev#7 == pdev#3 && (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) || !choice_rf34
{-141} !(pdev#3$wclk$8 >= pdev#7$rclk$8) || !choice_rf34
{-142} byte_extract_little_endian(mutex#7, 0l, char) == 0 && pdev#7 == pdev#6 || !choice_rf35
{-143} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || choice_rf32 || choice_rf33 || choice_rf34 || choice_rf35
{-144} pdev#8 == pdev#1 || !choice_rf36
{-145} !(pdev#1$wclk$8 >= pdev#8$rclk$8) || !choice_rf36
{-146} pdev#8 == pdev#2 || !choice_rf37
{-147} !(pdev#2$wclk$8 >= pdev#8$rclk$8) || !choice_rf37
{-148} pdev#8 == pdev#3 && (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) || !choice_rf38
{-149} !(pdev#3$wclk$8 >= pdev#8$rclk$8) || !choice_rf38
{-150} byte_extract_little_endian(mutex#7, 0l, char) == 0 && pdev#8 == pdev#6 || !choice_rf39
{-151} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || choice_rf36 || choice_rf37 || choice_rf38 || choice_rf39
{-152} !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_ws-ext40
{-153} !(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8) || choice_ws-ext40
{-154} !(mutex#1$wclk$8 >= mutex#8$wclk$8) || !choice_ws-ext41
{-155} !(mutex#8$wclk$8 >= mutex#1$wclk$8) || choice_ws-ext41
{-156} !(mutex#1$wclk$8 >= mutex#11$wclk$8) || !choice_ws-ext42
{-157} !(mutex#11$wclk$8 >= mutex#1$wclk$8) || choice_ws-ext42
{-158} !(mutex#2$wclk$8 >= mutex#8$wclk$8) || !choice_ws-ext43
{-159} !(mutex#8$wclk$8 >= mutex#2$wclk$8) || choice_ws-ext43
{-160} !(mutex#2$wclk$8 >= mutex#11$wclk$8) || !choice_ws-ext44
{-161} !(mutex#11$wclk$8 >= mutex#2$wclk$8) || choice_ws-ext44
{-162} !(mutex#5$wclk$8 >= mutex#8$wclk$8) || !choice_ws-ext45
{-163} !(mutex#8$wclk$8 >= mutex#5$wclk$8) || choice_ws-ext45
{-164} !(mutex#5$wclk$8 >= mutex#11$wclk$8) || !choice_ws-ext46
{-165} !(mutex#11$wclk$8 >= mutex#5$wclk$8) || choice_ws-ext46
{-166} !(pdev#1$wclk$8 >= pdev#6$wclk$8) || !choice_ws-ext47
{-167} !(pdev#6$wclk$8 >= pdev#1$wclk$8) || choice_ws-ext47
{-168} !(pdev#2$wclk$8 >= pdev#6$wclk$8) || !choice_ws-ext48
{-169} !(pdev#6$wclk$8 >= pdev#2$wclk$8) || choice_ws-ext48
{-170} !(pdev#3$wclk$8 >= pdev#6$wclk$8) || !choice_ws-ext49
{-171} !(pdev#6$wclk$8 >= pdev#3$wclk$8) || choice_ws-ext49
{-172} !(t1$17$spwnclk$8 >= mutex#6$rclk$8)
{-173} !(t1$17$spwnclk$8 >= mutex#8$wclk$8)
{-174} !(t1$17$spwnclk$8 >= pdev#6$wclk$8)
{-175} !(t1$17$spwnclk$8 >= pdev#7$rclk$8)
{-176} !(t1$17$spwnclk$8 >= pdev#8$rclk$8)
{-177} !(t1$17$spwnclk$8 >= mutex#9$rclk$8)
{-178} !(t1$17$spwnclk$8 >= mutex#11$wclk$8)
{-179} !(t1$17$spwnclk$8 >= __CPROVER_threads_exited#3$rclk$8)
{-180} !(t1$17$spwnclk$8 >= __CPROVER_threads_exited#4$wclk$8)
{-181} !(status!0@1$wclk$8 >= __CPROVER_dead_object#1$wclk$8)
{-182} !(__CPROVER_dead_object#1$wclk$8 >= __CPROVER_deallocated#1$wclk$8)
{-183} !(__CPROVER_deallocated#1$wclk$8 >= __CPROVER_malloc_is_new_array#1$wclk$8)
{-184} !(__CPROVER_malloc_is_new_array#1$wclk$8 >= __CPROVER_malloc_object#1$wclk$8)
{-185} !(__CPROVER_malloc_object#1$wclk$8 >= __CPROVER_malloc_size#1$wclk$8)
{-186} !(__CPROVER_malloc_size#1$wclk$8 >= __CPROVER_memory_leak#1$wclk$8)
{-187} !(__CPROVER_memory_leak#1$wclk$8 >= __CPROVER_next_thread_id#1$wclk$8)
{-188} !(__CPROVER_next_thread_id#1$wclk$8 >= __CPROVER_pipe_count#1$wclk$8)
{-189} !(__CPROVER_pipe_count#1$wclk$8 >= __CPROVER_threads_exited#1$wclk$8)
{-190} !(__CPROVER_threads_exited#1$wclk$8 >= mutex#1$wclk$8)
{-191} !(mutex#1$wclk$8 >= pdev#1$wclk$8)
{-192} !(pdev#1$wclk$8 >= t1#1$wclk$8)
{-193} !(t1#1$wclk$8 >= mutex#2$wclk$8)
{-194} !(mutex#2$wclk$8 >= pdev#2$wclk$8)
{-195} !(pdev#2$wclk$8 >= __CPROVER_next_thread_id#2$wclk$8)
{-196} !(__CPROVER_next_thread_id#2$wclk$8 >= t1#2$wclk$8)
{-197} !(t1#2$wclk$8 >= t1$17$spwnclk$8)
{-198} !(t1$17$spwnclk$8 >= status!0@1#1$wclk$8)
{-199} !(status!0@1#1$wclk$8 >= t1#3$rclk$8)
{-200} !(t1#3$rclk$8 >= t1#4$rclk$8)
{-201} !(t1#4$rclk$8 >= __CPROVER_next_thread_id#3$rclk$8)
{-202} !(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_threads_exited#2$rclk$8)
{-203} !(__CPROVER_threads_exited#2$rclk$8 >= mutex#3$rclk$8)
{-204} !(mutex#3$rclk$8 >= mutex#4$rclk$8)
{-205} !(mutex#4$rclk$8 >= mutex#5$wclk$8)
{-206} !(mutex#5$wclk$8 >= pdev#3$wclk$8)
{-207} !(pdev#3$wclk$8 >= pdev#4$rclk$8)
{-208} !(pdev#4$rclk$8 >= pdev#5$rclk$8)
{-209} mutex#6$rclk$8 == mutex#8$wclk$8
{-210} !(mutex#8$wclk$8 >= pdev#6$wclk$8)
{-211} !(pdev#6$wclk$8 >= pdev#7$rclk$8)
{-212} !(pdev#7$rclk$8 >= pdev#8$rclk$8)
{-213} !(pdev#8$rclk$8 >= mutex#9$rclk$8)
{-214} mutex#9$rclk$8 == mutex#11$wclk$8
{-215} !(mutex#11$wclk$8 >= __CPROVER_threads_exited#3$rclk$8)
{-216} !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8)
{-217} __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_rf2 || \guard#4
{-218} __CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf1 || \guard#1 || \guard#2
{-219} __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_rf0 || \guard#1 || \guard#2 || \guard#4
{-220} !(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8) || !choice_rf3
{-221} !(t1#3$rclk$8 >= t1#2$wclk$8) || !choice_rf5
{-222} !(t1#4$rclk$8 >= t1#2$wclk$8) || !choice_rf7
{-223} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#2$wclk$8) || !choice_rf20 || \guard#4
{-224} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf9
{-225} !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf17
{-226} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf13
{-227} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf20 || \guard#4
{-228} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf9
{-229} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf17
{-230} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf13
{-231} mutex#8$wclk$8 >= mutex#1$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#1$wclk$8) || !choice_rf23 || \guard#4
{-232} mutex#1$wclk$8 >= mutex#8$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf20 || \guard#4
{-233} mutex#8$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#1$wclk$8) || !choice_rf11
{-234} mutex#1$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf9
{-235} mutex#6$rclk$8 == mutex#8$wclk$8 || mutex#1$wclk$8 >= mutex#8$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf17
{-236} mutex#8$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#1$wclk$8) || !choice_rf15
{-237} mutex#1$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf13
{-238} mutex#9$rclk$8 == mutex#11$wclk$8 || mutex#1$wclk$8 >= mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf20 || \guard#4
{-239} mutex#11$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#1$wclk$8) || !choice_rf12
{-240} mutex#1$wclk$8 >= mutex#11$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#3$rclk$8 >= mutex#11$wclk$8) || !choice_rf9 || \guard#4
{-241} mutex#1$wclk$8 >= mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#11$wclk$8) || !choice_rf17 || \guard#4
{-242} mutex#11$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#1$wclk$8) || !choice_rf16
{-243} mutex#1$wclk$8 >= mutex#11$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#4$rclk$8 >= mutex#11$wclk$8) || !choice_rf13 || \guard#4
{-244} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf21 || \guard#4
{-245} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf10
{-246} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf18
{-247} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf14
{-248} mutex#8$wclk$8 >= mutex#2$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#2$wclk$8) || !choice_rf23 || \guard#4
{-249} mutex#2$wclk$8 >= mutex#8$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf21 || \guard#4
{-250} mutex#8$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf11
{-251} mutex#2$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf10
{-252} mutex#6$rclk$8 == mutex#8$wclk$8 || mutex#2$wclk$8 >= mutex#8$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf18
{-253} mutex#8$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf15
{-254} mutex#2$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf14
{-255} mutex#9$rclk$8 == mutex#11$wclk$8 || mutex#2$wclk$8 >= mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf21 || \guard#4
{-256} mutex#11$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf12
{-257} mutex#2$wclk$8 >= mutex#11$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#3$rclk$8 >= mutex#11$wclk$8) || !choice_rf10 || \guard#4
{-258} mutex#2$wclk$8 >= mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#11$wclk$8) || !choice_rf18 || \guard#4
{-259} mutex#11$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf16
{-260} mutex#2$wclk$8 >= mutex#11$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#4$rclk$8 >= mutex#11$wclk$8) || !choice_rf14 || \guard#4
{-261} mutex#8$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf23 || \guard#4
{-262} mutex#5$wclk$8 >= mutex#8$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf22 || \guard#4
{-263} mutex#8$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf11
{-264} mutex#6$rclk$8 == mutex#8$wclk$8 || mutex#5$wclk$8 >= mutex#8$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf19
{-265} mutex#8$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf15
{-266} mutex#9$rclk$8 == mutex#11$wclk$8 || mutex#5$wclk$8 >= mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf22 || \guard#4
{-267} mutex#11$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf12
{-268} mutex#5$wclk$8 >= mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#11$wclk$8) || !choice_rf19 || \guard#4
{-269} mutex#11$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf16
{-270} mutex#9$rclk$8 == mutex#11$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !choice_rf23 || \guard#4
{-271} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#3$rclk$8 >= mutex#11$wclk$8) || !choice_rf11 || \guard#4
{-272} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(mutex#4$rclk$8 >= mutex#11$wclk$8) || !choice_rf15 || \guard#4
{-273} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#4$rclk$8 >= pdev#2$wclk$8) || !choice_rf24
{-274} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#5$rclk$8 >= pdev#2$wclk$8) || !choice_rf28
{-275} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#2$wclk$8) || !choice_rf32
{-276} !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#2$wclk$8) || !choice_rf36
{-277} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf24
{-278} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf28
{-279} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf32
{-280} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf36
{-281} pdev#1$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf24
{-282} pdev#6$wclk$8 >= pdev#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#4$rclk$8 >= pdev#1$wclk$8) || !choice_rf27
{-283} pdev#1$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf28
{-284} pdev#6$wclk$8 >= pdev#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#5$rclk$8 >= pdev#1$wclk$8) || !choice_rf31
{-285} pdev#1$wclk$8 >= pdev#6$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf32
{-286} pdev#6$wclk$8 >= pdev#1$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#1$wclk$8) || !choice_rf35
{-287} pdev#1$wclk$8 >= pdev#6$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf36
{-288} pdev#6$wclk$8 >= pdev#1$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#1$wclk$8) || !choice_rf39
{-289} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf25
{-290} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf29
{-291} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf33
{-292} (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf37
{-293} pdev#2$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf25
{-294} pdev#6$wclk$8 >= pdev#2$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#4$rclk$8 >= pdev#2$wclk$8) || !choice_rf27
{-295} pdev#2$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf29
{-296} pdev#6$wclk$8 >= pdev#2$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#5$rclk$8 >= pdev#2$wclk$8) || !choice_rf31
{-297} pdev#2$wclk$8 >= pdev#6$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf33
{-298} pdev#6$wclk$8 >= pdev#2$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#2$wclk$8) || !choice_rf35
{-299} pdev#2$wclk$8 >= pdev#6$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf37
{-300} pdev#6$wclk$8 >= pdev#2$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#2$wclk$8) || !choice_rf39
{-301} pdev#6$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf27
{-302} pdev#3$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf26
{-303} pdev#6$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf31
{-304} pdev#3$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf30
{-305} pdev#6$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf35
{-306} pdev#3$wclk$8 >= pdev#6$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf34
{-307} pdev#6$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf39
{-308} pdev#3$wclk$8 >= pdev#6$wclk$8 || !(byte_extract_little_endian(mutex#7, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf38
|--------------------------
{1} byte_extract_little_endian(mutex#7, 0l, char) == 0 && !\guard#4 ==> (signed int)byte_extract_little_endian(mutex#10, 0l, char) == 1

