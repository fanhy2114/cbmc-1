CBMC version 5.10 (cbmc-5.10) 64-bit x86_64 linux
Parsing ./race-1_1-join_true-unreach-call.c
Converting
Type-checking race-1_1-join_true-unreach-call
Generating GOTO Program
Adding CPROVER library (x86_64)
Removal of function pointers and virtual functions
file <builtin-library-pthread_create> line 39 function pthread_create: replacing function pointer by 1 possible targets
Generic Property Instrumentation
Running with 8 object bits, 56 offset bits (default)
Starting Bounded Model Checking
aborting path on assume(false) at file ./race-1_1-join_true-unreach-call.c line 8 function ldv_assert thread 0
aborting path on assume(false) at file ./race-1_1-join_true-unreach-call.c line 8 function ldv_assert thread 0
aborting path on assume(false) at file ./race-1_1-join_true-unreach-call.c line 8 function ldv_assert thread 1
Adding SC constraints
Shared __CPROVER_threads_exited: 2R/2W
Shared __CPROVER_next_thread_id: 1R/2W
Shared t1: 2R/2W
Shared mutex: 6R/6W
Shared pdev: 6R/5W
size of program expression: 616 steps
no slicing due to threads
Generated 6 VCC(s), 6 remaining after simplification

VERIFICATION CONDITIONS:

file ./race-1_1-join_true-unreach-call.c line 8 function ldv_assert
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
{-21} return_value___VERIFIER_nondet_int!0@1#2 == nondet_symbol(symex::nondet1)
{-22} \guard#1 == !(return_value___VERIFIER_nondet_int!0@1#2 == 0)
{-23} thread!0@1#1 == &t1
{-24} attr!0@1#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
{-25} start_routine!0@1#1 == thread1
{-26} arg!0@1#1 == NULL
{-27} __CPROVER_next_thread_id#2 == 1ul
{-28} this_thread_id!0@1#2 == 1ul
{-29} t1#2 == 1ul
{-30} thread!1@0#1 == &t1
{-31} attr!1@0#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
{-32} start_routine!1@0#1 == thread1
{-33} arg!1@0#1 == NULL
{-34} __VERIFIER_nondet_int#return_value!1#1 == 0
{-35} pthread_mutex_destroy#return_value!1#1 == 0
{-36} __CPROVER_thread_id!1#1 == 0ul
{-37} pthread_join#return_value!1#1 == 0
{-38} __CPROVER_rounding_mode!1#1 == 0
{-39} pthread_mutex_init#return_value!1#1 == 0
{-40} module_init#return_value!1#1 == 0
{-41} pthread_mutex_lock#return_value!1#1 == 0
{-42} main#return_value!1#1 == 0
{-43} pthread_create#return_value!1#1 == 0
{-44} thread1#return_value!1#1 == NULL
{-45} pthread_mutex_unlock#return_value!1#1 == 0
{-46} pthread_create#return_value!0#1 == 0
{-47} module_init#return_value!0#1 == 0
{-48} module_init#return_value!0#2 == module_init#return_value!0#0
{-49} pthread_create#return_value!0#2 == pthread_create#return_value!0#0
{-50} pdev#3 == 3
{-51} expression!0@2#1 == (signed int)(pdev#5 == 3)
{-52} \guard#2 == (expression!0@2#1 == 0)
{-53} mutex!0@1#1 == &mutex
{-54} mutex#5 == byte_update_little_endian(mutex#4, 0l, -1, char)
{-55} pthread_mutex_destroy#return_value!0#1 == 0
{-56} module_init#return_value!0#3 == -1
{-57} pthread_mutex_destroy#return_value!0#2 == 0
{-58} module_init#return_value!0#4 == (\guard#1 ? 0 : -1)
{-59} pthread_create#return_value!0#3 == (\guard#1 ? 0 : pthread_create#return_value!0#2)
{-60} return_value___VERIFIER_nondet_int!0@1#4 == (\guard#1 ? return_value___VERIFIER_nondet_int!0@1#2 : return_value___VERIFIER_nondet_int!0@1#3)
{-61} return_value_module_init!0@1#2 == module_init#return_value!0#4
{-62} \guard#3 == (return_value_module_init!0@1#2 == 0)
{-63} thread!0@1#1 == t1#4
{-64} value_ptr!0@1#1 == &status!0@1
{-65} \guard#4 == !(__CPROVER_next_thread_id#3 >= thread!0@1#1)
{-66} pthread_join#return_value!0#1 == 3
{-67} pthread_join#return_value!0#2 == pthread_join#return_value!0#0
{-68} \guard#5 == (thread!0@1#1 == 0ul)
{-69} pthread_join#return_value!0#3 == 35
{-70} pthread_join#return_value!0#4 == pthread_join#return_value!0#2
{-71} pthread_join#return_value!0#5 == 0
{-72} pthread_join#return_value!0#6 == (\guard#5 ? 35 : 0)
{-73} pthread_join#return_value!0#7 == (\guard#4 ? 3 : pthread_join#return_value!0#6)
{-74} mutex!0@2#1 == &mutex
{-75} mutex#8 == byte_update_little_endian(mutex#7, 0l, -1, char)
{-76} pthread_mutex_destroy#return_value!0#3 == 0
{-77} pdev#6 == 5
{-78} expression!0@3#1 == (signed int)(pdev#8 == 5)
{-79} \guard#6 == (expression!0@3#1 == 0)
{-80} pthread_mutex_destroy#return_value!0#4 == 0
{-81} pthread_join#return_value!0#8 == pthread_join#return_value!0#7
{-82} main#return_value!0#1 == 0
{-83} return`!0#1 == 0
{-84} __CPROVER_thread_id!1#2 == this_thread_id!1@0#0
{-85} arg!1@1#1 == NULL
{-86} mutex!1@1#1 == &mutex
{-87} mutex#10 == mutex#9
{-88} mutex#11 == (\guard#1 ? mutex#10 : mutex#9)
{-89} mutex#12 == byte_update_little_endian(mutex#11, 0l, 1, char)
{-90} pthread_mutex_lock#return_value!1#2 == 0
{-91} pdev#9 == 6
{-92} expression!1@1#1 == (signed int)(pdev#11 == 6)
{-93} \guard#7 == (expression!1@1#1 == 0)
{-94} mutex!1@1#1 == &mutex
{-95} mutex#14 == mutex#13
{-96} mutex#15 == byte_update_little_endian(mutex#14, 0l, 0, char)
{-97} pthread_mutex_unlock#return_value!1#2 == 0
{-98} thread1#return_value!1#2 == NULL
{-99} __CPROVER_threads_exited#4 == __CPROVER_threads_exited#3 WITH [(signed long int)this_thread_id!1@0#0:=TRUE]
{-100} __CPROVER_threads_exited#2 == __CPROVER_threads_exited#1 || !choice_rf0
{-101} byte_extract_little_endian(mutex#10, 0l, char) == 0 && __CPROVER_threads_exited#2 == __CPROVER_threads_exited#4 && !\guard#7 && \guard#1 || !choice_rf1
{-102} !(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#2$rclk$8) || !choice_rf1
{-103} (\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf0 || choice_rf1 || \guard#4 || \guard#5
{-104} __CPROVER_threads_exited#3 == __CPROVER_threads_exited#1 || !choice_rf2
{-105} !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#3$rclk$8) || !choice_rf2
{-106} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf2 || \guard#7
{-107} __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#1 || !choice_rf3
{-108} __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#2 && \guard#1 || !choice_rf4
{-109} (\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf3 || choice_rf4
{-110} t1#3 == t1#1 || !choice_rf5
{-111} t1#3 == t1#2 && \guard#1 || !choice_rf6
{-112} (\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf5 || choice_rf6
{-113} t1#4 == t1#1 || !choice_rf7
{-114} t1#4 == t1#2 && \guard#1 || !choice_rf8
{-115} (\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf7 || choice_rf8
{-116} mutex#3 == mutex#1 || !choice_rf9
{-117} mutex#3 == mutex#2 || !choice_rf10
{-118} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#3 == mutex#12 && \guard#1 || !choice_rf11
{-119} !(mutex#12$wclk$8 >= mutex#3$rclk$8) || !choice_rf11
{-120} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#3 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf12
{-121} !(mutex#15$wclk$8 >= mutex#3$rclk$8) || !choice_rf12
{-122} choice_rf10 || choice_rf11 || choice_rf12 || choice_rf9 || \guard#1 || \guard#2
{-123} mutex#4 == mutex#1 || !choice_rf13
{-124} mutex#4 == mutex#2 || !choice_rf14
{-125} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#4 == mutex#12 && \guard#1 || !choice_rf15
{-126} !(mutex#12$wclk$8 >= mutex#4$rclk$8) || !choice_rf15
{-127} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#4 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf16
{-128} !(mutex#15$wclk$8 >= mutex#4$rclk$8) || !choice_rf16
{-129} choice_rf13 || choice_rf14 || choice_rf15 || choice_rf16 || \guard#1 || \guard#2
{-130} mutex#6 == mutex#1 || !choice_rf17
{-131} mutex#6 == mutex#2 || !choice_rf18
{-132} mutex#6 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf19
{-133} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#6 == mutex#12 && \guard#1 || !choice_rf20
{-134} !(mutex#12$wclk$8 >= mutex#6$rclk$8) || !choice_rf20
{-135} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#6 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf21
{-136} !(mutex#15$wclk$8 >= mutex#6$rclk$8) || !choice_rf21
{-137} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf17 || choice_rf18 || choice_rf19 || choice_rf20 || choice_rf21
{-138} mutex#7 == mutex#1 || !choice_rf22
{-139} mutex#7 == mutex#2 || !choice_rf23
{-140} mutex#7 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf24
{-141} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#7 == mutex#12 && \guard#1 || !choice_rf25
{-142} !(mutex#12$wclk$8 >= mutex#7$rclk$8) || !choice_rf25
{-143} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#7 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf26
{-144} !(mutex#15$wclk$8 >= mutex#7$rclk$8) || !choice_rf26
{-145} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf22 || choice_rf23 || choice_rf24 || choice_rf25 || choice_rf26
{-146} mutex#9 == mutex#1 || !choice_rf27
{-147} !(mutex#1$wclk$8 >= mutex#9$rclk$8) || !choice_rf27
{-148} mutex#9 == mutex#2 || !choice_rf28
{-149} !(mutex#2$wclk$8 >= mutex#9$rclk$8) || !choice_rf28
{-150} mutex#9 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf29
{-151} !(mutex#5$wclk$8 >= mutex#9$rclk$8) || !choice_rf29
{-152} mutex#9 == mutex#8 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf30
{-153} !(mutex#8$wclk$8 >= mutex#9$rclk$8) || !choice_rf30
{-154} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || choice_rf27 || choice_rf28 || choice_rf29 || choice_rf30
{-155} mutex#13 == mutex#1 || !choice_rf31
{-156} !(mutex#1$wclk$8 >= mutex#13$rclk$8) || !choice_rf31
{-157} mutex#13 == mutex#2 || !choice_rf32
{-158} !(mutex#2$wclk$8 >= mutex#13$rclk$8) || !choice_rf32
{-159} mutex#13 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf33
{-160} !(mutex#5$wclk$8 >= mutex#13$rclk$8) || !choice_rf33
{-161} mutex#13 == mutex#8 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf34
{-162} !(mutex#8$wclk$8 >= mutex#13$rclk$8) || !choice_rf34
{-163} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#13 == mutex#12 && \guard#1 || !choice_rf35
{-164} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf31 || choice_rf32 || choice_rf33 || choice_rf34 || choice_rf35 || \guard#7
{-165} pdev#4 == pdev#1 || !choice_rf36
{-166} pdev#4 == pdev#2 || !choice_rf37
{-167} pdev#4 == pdev#3 && !\guard#1 || !choice_rf38
{-168} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#4 == pdev#9 && \guard#1 || !choice_rf39
{-169} !(pdev#9$wclk$8 >= pdev#4$rclk$8) || !choice_rf39
{-170} choice_rf36 || choice_rf37 || choice_rf38 || choice_rf39 || \guard#1
{-171} pdev#5 == pdev#1 || !choice_rf40
{-172} pdev#5 == pdev#2 || !choice_rf41
{-173} pdev#5 == pdev#3 && !\guard#1 || !choice_rf42
{-174} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#5 == pdev#9 && \guard#1 || !choice_rf43
{-175} !(pdev#9$wclk$8 >= pdev#5$rclk$8) || !choice_rf43
{-176} choice_rf40 || choice_rf41 || choice_rf42 || choice_rf43 || \guard#1
{-177} pdev#7 == pdev#1 || !choice_rf44
{-178} pdev#7 == pdev#2 || !choice_rf45
{-179} pdev#7 == pdev#3 && !\guard#1 || !choice_rf46
{-180} pdev#7 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf47
{-181} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#7 == pdev#9 && \guard#1 || !choice_rf48
{-182} !(pdev#9$wclk$8 >= pdev#7$rclk$8) || !choice_rf48
{-183} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf44 || choice_rf45 || choice_rf46 || choice_rf47 || choice_rf48
{-184} pdev#8 == pdev#1 || !choice_rf49
{-185} pdev#8 == pdev#2 || !choice_rf50
{-186} pdev#8 == pdev#3 && !\guard#1 || !choice_rf51
{-187} pdev#8 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf52
{-188} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#8 == pdev#9 && \guard#1 || !choice_rf53
{-189} !(pdev#9$wclk$8 >= pdev#8$rclk$8) || !choice_rf53
{-190} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf49 || choice_rf50 || choice_rf51 || choice_rf52 || choice_rf53
{-191} pdev#10 == pdev#1 || !choice_rf54
{-192} !(pdev#1$wclk$8 >= pdev#10$rclk$8) || !choice_rf54
{-193} pdev#10 == pdev#2 || !choice_rf55
{-194} !(pdev#2$wclk$8 >= pdev#10$rclk$8) || !choice_rf55
{-195} pdev#10 == pdev#3 && !\guard#1 || !choice_rf56
{-196} !(pdev#3$wclk$8 >= pdev#10$rclk$8) || !choice_rf56
{-197} pdev#10 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf57
{-198} !(pdev#6$wclk$8 >= pdev#10$rclk$8) || !choice_rf57
{-199} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#10 == pdev#9 && \guard#1 || !choice_rf58
{-200} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf54 || choice_rf55 || choice_rf56 || choice_rf57 || choice_rf58
{-201} pdev#11 == pdev#1 || !choice_rf59
{-202} !(pdev#1$wclk$8 >= pdev#11$rclk$8) || !choice_rf59
{-203} pdev#11 == pdev#2 || !choice_rf60
{-204} !(pdev#2$wclk$8 >= pdev#11$rclk$8) || !choice_rf60
{-205} pdev#11 == pdev#3 && !\guard#1 || !choice_rf61
{-206} !(pdev#3$wclk$8 >= pdev#11$rclk$8) || !choice_rf61
{-207} pdev#11 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf62
{-208} !(pdev#6$wclk$8 >= pdev#11$rclk$8) || !choice_rf62
{-209} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#11 == pdev#9 && \guard#1 || !choice_rf63
{-210} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf59 || choice_rf60 || choice_rf61 || choice_rf62 || choice_rf63
{-211} !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_ws-ext64
{-212} !(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8) || choice_ws-ext64
{-213} !(mutex#1$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext65
{-214} !(mutex#12$wclk$8 >= mutex#1$wclk$8) || choice_ws-ext65
{-215} !(mutex#1$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext66
{-216} !(mutex#15$wclk$8 >= mutex#1$wclk$8) || choice_ws-ext66
{-217} !(mutex#2$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext67
{-218} !(mutex#12$wclk$8 >= mutex#2$wclk$8) || choice_ws-ext67
{-219} !(mutex#2$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext68
{-220} !(mutex#15$wclk$8 >= mutex#2$wclk$8) || choice_ws-ext68
{-221} !(mutex#5$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext69
{-222} !(mutex#12$wclk$8 >= mutex#5$wclk$8) || choice_ws-ext69
{-223} !(mutex#5$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext70
{-224} !(mutex#15$wclk$8 >= mutex#5$wclk$8) || choice_ws-ext70
{-225} !(mutex#8$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext71
{-226} !(mutex#12$wclk$8 >= mutex#8$wclk$8) || choice_ws-ext71
{-227} !(mutex#8$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext72
{-228} !(mutex#15$wclk$8 >= mutex#8$wclk$8) || choice_ws-ext72
{-229} !(pdev#1$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext73
{-230} !(pdev#9$wclk$8 >= pdev#1$wclk$8) || choice_ws-ext73
{-231} !(pdev#2$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext74
{-232} !(pdev#9$wclk$8 >= pdev#2$wclk$8) || choice_ws-ext74
{-233} !(pdev#3$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext75
{-234} !(pdev#9$wclk$8 >= pdev#3$wclk$8) || choice_ws-ext75
{-235} !(pdev#6$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext76
{-236} !(pdev#9$wclk$8 >= pdev#6$wclk$8) || choice_ws-ext76
{-237} !(t1$17$spwnclk$8 >= mutex#9$rclk$8)
{-238} !(t1$17$spwnclk$8 >= mutex#12$wclk$8)
{-239} !(t1$17$spwnclk$8 >= pdev#9$wclk$8)
{-240} !(t1$17$spwnclk$8 >= pdev#10$rclk$8)
{-241} !(t1$17$spwnclk$8 >= pdev#11$rclk$8)
{-242} !(t1$17$spwnclk$8 >= mutex#13$rclk$8)
{-243} !(t1$17$spwnclk$8 >= mutex#15$wclk$8)
{-244} !(t1$17$spwnclk$8 >= __CPROVER_threads_exited#3$rclk$8)
{-245} !(t1$17$spwnclk$8 >= __CPROVER_threads_exited#4$wclk$8)
{-246} !(status!0@1$wclk$8 >= __CPROVER_dead_object#1$wclk$8)
{-247} !(__CPROVER_dead_object#1$wclk$8 >= __CPROVER_deallocated#1$wclk$8)
{-248} !(__CPROVER_deallocated#1$wclk$8 >= __CPROVER_malloc_is_new_array#1$wclk$8)
{-249} !(__CPROVER_malloc_is_new_array#1$wclk$8 >= __CPROVER_malloc_object#1$wclk$8)
{-250} !(__CPROVER_malloc_object#1$wclk$8 >= __CPROVER_malloc_size#1$wclk$8)
{-251} !(__CPROVER_malloc_size#1$wclk$8 >= __CPROVER_memory_leak#1$wclk$8)
{-252} !(__CPROVER_memory_leak#1$wclk$8 >= __CPROVER_next_thread_id#1$wclk$8)
{-253} !(__CPROVER_next_thread_id#1$wclk$8 >= __CPROVER_pipe_count#1$wclk$8)
{-254} !(__CPROVER_pipe_count#1$wclk$8 >= __CPROVER_threads_exited#1$wclk$8)
{-255} !(__CPROVER_threads_exited#1$wclk$8 >= mutex#1$wclk$8)
{-256} !(mutex#1$wclk$8 >= pdev#1$wclk$8)
{-257} !(pdev#1$wclk$8 >= t1#1$wclk$8)
{-258} !(t1#1$wclk$8 >= mutex#2$wclk$8)
{-259} !(mutex#2$wclk$8 >= pdev#2$wclk$8)
{-260} !(pdev#2$wclk$8 >= __CPROVER_next_thread_id#2$wclk$8)
{-261} !(__CPROVER_next_thread_id#2$wclk$8 >= t1#2$wclk$8)
{-262} !(t1#2$wclk$8 >= t1$17$spwnclk$8)
{-263} !(t1$17$spwnclk$8 >= pdev#3$wclk$8)
{-264} !(pdev#3$wclk$8 >= pdev#4$rclk$8)
{-265} !(pdev#4$rclk$8 >= pdev#5$rclk$8)
{-266} !(pdev#5$rclk$8 >= mutex#3$rclk$8)
{-267} !(mutex#3$rclk$8 >= mutex#4$rclk$8)
{-268} !(mutex#4$rclk$8 >= mutex#5$wclk$8)
{-269} !(mutex#5$wclk$8 >= status!0@1#1$wclk$8)
{-270} !(status!0@1#1$wclk$8 >= t1#3$rclk$8)
{-271} !(t1#3$rclk$8 >= t1#4$rclk$8)
{-272} !(t1#4$rclk$8 >= __CPROVER_next_thread_id#3$rclk$8)
{-273} !(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_threads_exited#2$rclk$8)
{-274} !(__CPROVER_threads_exited#2$rclk$8 >= mutex#6$rclk$8)
{-275} !(mutex#6$rclk$8 >= mutex#7$rclk$8)
{-276} !(mutex#7$rclk$8 >= mutex#8$wclk$8)
{-277} !(mutex#8$wclk$8 >= pdev#6$wclk$8)
{-278} !(pdev#6$wclk$8 >= pdev#7$rclk$8)
{-279} !(pdev#7$rclk$8 >= pdev#8$rclk$8)
{-280} mutex#9$rclk$8 == mutex#12$wclk$8
{-281} !(mutex#12$wclk$8 >= pdev#9$wclk$8)
{-282} !(pdev#9$wclk$8 >= pdev#10$rclk$8)
{-283} !(pdev#10$rclk$8 >= pdev#11$rclk$8)
{-284} !(pdev#11$rclk$8 >= mutex#13$rclk$8)
{-285} mutex#13$rclk$8 == mutex#15$wclk$8
{-286} !(mutex#15$wclk$8 >= __CPROVER_threads_exited#3$rclk$8)
{-287} !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8)
{-288} __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_rf2 || !\guard#1 || \guard#7
{-289} __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_rf0 || !\guard#1 || !\guard#3 || \guard#4 || \guard#5 || \guard#7
{-290} __CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf1 || !\guard#3 || \guard#4 || \guard#5
{-291} (\guard#1 || \guard#2) && !\guard#1 || !(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8) || !choice_rf3 || !\guard#1 || !\guard#3
{-292} (\guard#1 || \guard#2) && !\guard#1 || !(t1#3$rclk$8 >= t1#2$wclk$8) || !choice_rf5 || !\guard#1 || !\guard#3
{-293} (\guard#1 || \guard#2) && !\guard#1 || !(t1#4$rclk$8 >= t1#2$wclk$8) || !choice_rf7 || !\guard#1 || !\guard#3
{-294} !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf13 || \guard#1 || \guard#2
{-295} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#2$wclk$8) || !choice_rf22 || !\guard#3
{-296} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf17 || !\guard#3
{-297} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(mutex#9$rclk$8 >= mutex#2$wclk$8) || !choice_rf27
{-298} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#2$wclk$8) || !choice_rf31 || !\guard#1 || \guard#7
{-299} !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf9 || \guard#1 || \guard#2
{-300} !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf13 || \guard#1 || \guard#2
{-301} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf22 || !\guard#3 || \guard#1 || \guard#2
{-302} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf17 || !\guard#3 || \guard#1 || \guard#2
{-303} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf27 || \guard#1 || \guard#2
{-304} TRUE
{-305} !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf9 || \guard#1 || \guard#2
{-306} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf13 || !\guard#3 || \guard#1 || \guard#2
{-307} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf22 || !\guard#3
{-308} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf17 || !\guard#3
{-309} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf27 || !\guard#3
{-310} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf31 || !\guard#1 || !\guard#3 || \guard#7
{-311} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf9 || !\guard#3 || \guard#1 || \guard#2
{-312} TRUE
{-313} mutex#12$wclk$8 >= mutex#1$wclk$8 || !(mutex#4$rclk$8 >= mutex#1$wclk$8) || !choice_rf15 || \guard#1 || \guard#2
{-314} mutex#1$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#12$wclk$8) || !choice_rf22 || !\guard#1 || !\guard#3
{-315} mutex#12$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#1$wclk$8) || !choice_rf25 || !\guard#3
{-316} mutex#1$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#12$wclk$8) || !choice_rf17 || !\guard#1 || !\guard#3
{-317} mutex#12$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#1$wclk$8) || !choice_rf20 || !\guard#3
{-318} mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#1$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf27 || !\guard#1
{-319} mutex#1$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf31 || !\guard#1 || \guard#7
{-320} mutex#12$wclk$8 >= mutex#1$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#1$wclk$8) || !choice_rf35 || !\guard#1 || \guard#7
{-321} TRUE
{-322} mutex#12$wclk$8 >= mutex#1$wclk$8 || !(mutex#3$rclk$8 >= mutex#1$wclk$8) || !choice_rf11 || \guard#1 || \guard#2
{-323} mutex#15$wclk$8 >= mutex#1$wclk$8 || !(mutex#4$rclk$8 >= mutex#1$wclk$8) || !choice_rf16 || \guard#1 || \guard#2
{-324} TRUE
{-325} mutex#15$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#1$wclk$8) || !choice_rf26 || !\guard#3
{-326} mutex#1$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf22 || !\guard#1 || !\guard#3 || \guard#7
{-327} mutex#15$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#1$wclk$8) || !choice_rf21 || !\guard#3
{-328} mutex#1$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf17 || !\guard#1 || !\guard#3 || \guard#7
{-329} mutex#1$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf27 || !\guard#1 || \guard#7
{-330} mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#1$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf31 || !\guard#1 || \guard#7
{-331} mutex#15$wclk$8 >= mutex#1$wclk$8 || !(mutex#3$rclk$8 >= mutex#1$wclk$8) || !choice_rf12 || \guard#1 || \guard#2
{-332} TRUE
{-333} !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf14 || \guard#1 || \guard#2
{-334} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf23 || !\guard#3 || \guard#1 || \guard#2
{-335} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf18 || !\guard#3 || \guard#1 || \guard#2
{-336} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf28 || \guard#1 || \guard#2
{-337} TRUE
{-338} !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf10 || \guard#1 || \guard#2
{-339} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf14 || !\guard#3 || \guard#1 || \guard#2
{-340} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf23 || !\guard#3
{-341} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf18 || !\guard#3
{-342} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf28 || !\guard#3
{-343} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf32 || !\guard#1 || !\guard#3 || \guard#7
{-344} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf10 || !\guard#3 || \guard#1 || \guard#2
{-345} TRUE
{-346} mutex#12$wclk$8 >= mutex#2$wclk$8 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf15 || \guard#1 || \guard#2
{-347} mutex#2$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#12$wclk$8) || !choice_rf23 || !\guard#1 || !\guard#3
{-348} mutex#12$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#2$wclk$8) || !choice_rf25 || !\guard#3
{-349} mutex#2$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#12$wclk$8) || !choice_rf18 || !\guard#1 || !\guard#3
{-350} mutex#12$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf20 || !\guard#3
{-351} mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#2$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf28 || !\guard#1
{-352} mutex#2$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf32 || !\guard#1 || \guard#7
{-353} mutex#12$wclk$8 >= mutex#2$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#2$wclk$8) || !choice_rf35 || !\guard#1 || \guard#7
{-354} TRUE
{-355} mutex#12$wclk$8 >= mutex#2$wclk$8 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf11 || \guard#1 || \guard#2
{-356} mutex#15$wclk$8 >= mutex#2$wclk$8 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf16 || \guard#1 || \guard#2
{-357} TRUE
{-358} mutex#15$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#2$wclk$8) || !choice_rf26 || !\guard#3
{-359} mutex#2$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf23 || !\guard#1 || !\guard#3 || \guard#7
{-360} mutex#15$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf21 || !\guard#3
{-361} mutex#2$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf18 || !\guard#1 || !\guard#3 || \guard#7
{-362} mutex#2$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf28 || !\guard#1 || \guard#7
{-363} mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#2$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf32 || !\guard#1 || \guard#7
{-364} mutex#15$wclk$8 >= mutex#2$wclk$8 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf12 || \guard#1 || \guard#2
{-365} TRUE
{-366} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf24 || !\guard#3
{-367} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf19 || !\guard#3
{-368} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf29 || !\guard#3
{-369} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf33 || !\guard#1 || !\guard#3 || \guard#7
{-370} mutex#12$wclk$8 >= mutex#5$wclk$8 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf15 || \guard#1 || \guard#2
{-371} mutex#5$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#12$wclk$8) || !choice_rf24 || !\guard#1 || !\guard#3
{-372} mutex#12$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf25 || !\guard#3 || \guard#1 || \guard#2
{-373} mutex#5$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#12$wclk$8) || !choice_rf19 || !\guard#1 || !\guard#3
{-374} mutex#12$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf20 || !\guard#3 || \guard#1 || \guard#2
{-375} mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#5$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf29 || !\guard#1
{-376} mutex#5$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf33 || !\guard#1 || \guard#7
{-377} TRUE
{-378} mutex#12$wclk$8 >= mutex#5$wclk$8 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf11 || \guard#1 || \guard#2
{-379} mutex#15$wclk$8 >= mutex#5$wclk$8 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf16 || \guard#1 || \guard#2
{-380} mutex#5$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf24 || !\guard#1 || !\guard#3 || \guard#7
{-381} mutex#15$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf26 || !\guard#3 || \guard#1 || \guard#2
{-382} mutex#5$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf19 || !\guard#1 || !\guard#3 || \guard#7
{-383} mutex#15$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf21 || !\guard#3 || \guard#1 || \guard#2
{-384} mutex#5$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf29 || !\guard#1 || \guard#7
{-385} mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#5$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf33 || !\guard#1 || \guard#7
{-386} mutex#15$wclk$8 >= mutex#5$wclk$8 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf12 || \guard#1 || \guard#2
{-387} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf15 || !\guard#3 || \guard#1 || \guard#2
{-388} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf25 || !\guard#3
{-389} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf20 || !\guard#3
{-390} mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#8$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf30 || !\guard#1
{-391} mutex#8$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf34 || !\guard#1 || \guard#7
{-392} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf35 || !\guard#1 || !\guard#3 || \guard#7
{-393} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf11 || !\guard#3 || \guard#1 || \guard#2
{-394} mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf16 || !\guard#3 || \guard#1 || \guard#2
{-395} mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf26 || !\guard#3
{-396} mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf21 || !\guard#3
{-397} mutex#8$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf30 || !\guard#1 || \guard#7
{-398} mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#8$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf34 || !\guard#1 || \guard#7
{-399} mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf12 || !\guard#3 || \guard#1 || \guard#2
{-400} TRUE
{-401} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf25 || !\guard#1 || !\guard#3 || \guard#7
{-402} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf20 || !\guard#1 || !\guard#3 || \guard#7
{-403} mutex#13$rclk$8 == mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf35 || !\guard#1 || \guard#7
{-404} TRUE
{-405} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#2$wclk$8) || !choice_rf59 || !\guard#1
{-406} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#2$wclk$8) || !choice_rf54 || !\guard#1
{-407} !(pdev#4$rclk$8 >= pdev#2$wclk$8) || !choice_rf36 || \guard#1
{-408} !(pdev#5$rclk$8 >= pdev#2$wclk$8) || !choice_rf40 || \guard#1
{-409} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#2$wclk$8) || !choice_rf49 || !\guard#3
{-410} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#2$wclk$8) || !choice_rf44 || !\guard#3
{-411} TRUE
{-412} TRUE
{-413} !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf36 || \guard#1
{-414} !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf40 || \guard#1
{-415} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf49 || !\guard#3 || \guard#1
{-416} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf44 || !\guard#3 || \guard#1
{-417} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf59 || !\guard#1 || !\guard#3
{-418} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf54 || !\guard#1 || !\guard#3
{-419} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf36 || !\guard#3 || \guard#1
{-420} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf40 || !\guard#3 || \guard#1
{-421} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf49 || !\guard#3
{-422} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf44 || !\guard#3
{-423} pdev#9$wclk$8 >= pdev#1$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#1$wclk$8) || !choice_rf63 || !\guard#1
{-424} pdev#1$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf59 || !\guard#1
{-425} pdev#9$wclk$8 >= pdev#1$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#1$wclk$8) || !choice_rf58 || !\guard#1
{-426} pdev#1$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf54 || !\guard#1
{-427} pdev#9$wclk$8 >= pdev#1$wclk$8 || !(pdev#4$rclk$8 >= pdev#1$wclk$8) || !choice_rf39 || \guard#1
{-428} TRUE
{-429} pdev#9$wclk$8 >= pdev#1$wclk$8 || !(pdev#5$rclk$8 >= pdev#1$wclk$8) || !choice_rf43 || \guard#1
{-430} TRUE
{-431} pdev#9$wclk$8 >= pdev#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#1$wclk$8) || !choice_rf53 || !\guard#3
{-432} pdev#1$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf49 || !\guard#1 || !\guard#3
{-433} pdev#9$wclk$8 >= pdev#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#1$wclk$8) || !choice_rf48 || !\guard#3
{-434} pdev#1$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf44 || !\guard#1 || !\guard#3
{-435} TRUE
{-436} TRUE
{-437} !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf37 || \guard#1
{-438} !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf41 || \guard#1
{-439} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf50 || !\guard#3 || \guard#1
{-440} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf45 || !\guard#3 || \guard#1
{-441} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf60 || !\guard#1 || !\guard#3
{-442} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf55 || !\guard#1 || !\guard#3
{-443} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf37 || !\guard#3 || \guard#1
{-444} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf41 || !\guard#3 || \guard#1
{-445} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf50 || !\guard#3
{-446} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf45 || !\guard#3
{-447} pdev#9$wclk$8 >= pdev#2$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#2$wclk$8) || !choice_rf63 || !\guard#1
{-448} pdev#2$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf60 || !\guard#1
{-449} pdev#9$wclk$8 >= pdev#2$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#2$wclk$8) || !choice_rf58 || !\guard#1
{-450} pdev#2$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf55 || !\guard#1
{-451} pdev#9$wclk$8 >= pdev#2$wclk$8 || !(pdev#4$rclk$8 >= pdev#2$wclk$8) || !choice_rf39 || \guard#1
{-452} TRUE
{-453} pdev#9$wclk$8 >= pdev#2$wclk$8 || !(pdev#5$rclk$8 >= pdev#2$wclk$8) || !choice_rf43 || \guard#1
{-454} TRUE
{-455} pdev#9$wclk$8 >= pdev#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#2$wclk$8) || !choice_rf53 || !\guard#3
{-456} pdev#2$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf50 || !\guard#1 || !\guard#3
{-457} pdev#9$wclk$8 >= pdev#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#2$wclk$8) || !choice_rf48 || !\guard#3
{-458} pdev#2$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf45 || !\guard#1 || !\guard#3
{-459} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf61 || !\guard#1 || !\guard#3
{-460} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf56 || !\guard#1 || !\guard#3
{-461} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf38 || !\guard#3 || \guard#1
{-462} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf42 || !\guard#3 || \guard#1
{-463} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf51 || !\guard#3
{-464} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf46 || !\guard#3
{-465} TRUE
{-466} pdev#3$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf61 || !\guard#1
{-467} TRUE
{-468} pdev#3$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf56 || !\guard#1
{-469} pdev#9$wclk$8 >= pdev#3$wclk$8 || !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf39 || \guard#1
{-470} TRUE
{-471} pdev#9$wclk$8 >= pdev#3$wclk$8 || !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf43 || \guard#1
{-472} TRUE
{-473} pdev#9$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf53 || !\guard#3 || \guard#1
{-474} pdev#3$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf51 || !\guard#1 || !\guard#3
{-475} pdev#9$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf48 || !\guard#3 || \guard#1
{-476} pdev#3$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf46 || !\guard#1 || !\guard#3
{-477} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf63 || !\guard#1 || !\guard#3
{-478} pdev#6$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf62 || !\guard#1
{-479} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf58 || !\guard#1 || !\guard#3
{-480} pdev#6$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf57 || !\guard#1
{-481} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf39 || !\guard#3 || \guard#1
{-482} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf43 || !\guard#3 || \guard#1
{-483} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf53 || !\guard#3
{-484} pdev#6$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf52 || !\guard#1 || !\guard#3
{-485} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf48 || !\guard#3
{-486} pdev#6$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf47 || !\guard#1 || !\guard#3
|--------------------------
{1} !(!\guard#1 && \guard#2)

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
{-21} return_value___VERIFIER_nondet_int!0@1#2 == nondet_symbol(symex::nondet1)
{-22} \guard#1 == !(return_value___VERIFIER_nondet_int!0@1#2 == 0)
{-23} thread!0@1#1 == &t1
{-24} attr!0@1#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
{-25} start_routine!0@1#1 == thread1
{-26} arg!0@1#1 == NULL
{-27} __CPROVER_next_thread_id#2 == 1ul
{-28} this_thread_id!0@1#2 == 1ul
{-29} t1#2 == 1ul
{-30} thread!1@0#1 == &t1
{-31} attr!1@0#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
{-32} start_routine!1@0#1 == thread1
{-33} arg!1@0#1 == NULL
{-34} __VERIFIER_nondet_int#return_value!1#1 == 0
{-35} pthread_mutex_destroy#return_value!1#1 == 0
{-36} __CPROVER_thread_id!1#1 == 0ul
{-37} pthread_join#return_value!1#1 == 0
{-38} __CPROVER_rounding_mode!1#1 == 0
{-39} pthread_mutex_init#return_value!1#1 == 0
{-40} module_init#return_value!1#1 == 0
{-41} pthread_mutex_lock#return_value!1#1 == 0
{-42} main#return_value!1#1 == 0
{-43} pthread_create#return_value!1#1 == 0
{-44} thread1#return_value!1#1 == NULL
{-45} pthread_mutex_unlock#return_value!1#1 == 0
{-46} pthread_create#return_value!0#1 == 0
{-47} module_init#return_value!0#1 == 0
{-48} module_init#return_value!0#2 == module_init#return_value!0#0
{-49} pthread_create#return_value!0#2 == pthread_create#return_value!0#0
{-50} pdev#3 == 3
{-51} expression!0@2#1 == (signed int)(pdev#5 == 3)
{-52} \guard#2 == (expression!0@2#1 == 0)
{-53} mutex!0@1#1 == &mutex
{-54} mutex#5 == byte_update_little_endian(mutex#4, 0l, -1, char)
{-55} pthread_mutex_destroy#return_value!0#1 == 0
{-56} module_init#return_value!0#3 == -1
{-57} pthread_mutex_destroy#return_value!0#2 == 0
{-58} module_init#return_value!0#4 == (\guard#1 ? 0 : -1)
{-59} pthread_create#return_value!0#3 == (\guard#1 ? 0 : pthread_create#return_value!0#2)
{-60} return_value___VERIFIER_nondet_int!0@1#4 == (\guard#1 ? return_value___VERIFIER_nondet_int!0@1#2 : return_value___VERIFIER_nondet_int!0@1#3)
{-61} return_value_module_init!0@1#2 == module_init#return_value!0#4
{-62} \guard#3 == (return_value_module_init!0@1#2 == 0)
{-63} thread!0@1#1 == t1#4
{-64} value_ptr!0@1#1 == &status!0@1
{-65} \guard#4 == !(__CPROVER_next_thread_id#3 >= thread!0@1#1)
{-66} pthread_join#return_value!0#1 == 3
{-67} pthread_join#return_value!0#2 == pthread_join#return_value!0#0
{-68} \guard#5 == (thread!0@1#1 == 0ul)
{-69} pthread_join#return_value!0#3 == 35
{-70} pthread_join#return_value!0#4 == pthread_join#return_value!0#2
{-71} pthread_join#return_value!0#5 == 0
{-72} pthread_join#return_value!0#6 == (\guard#5 ? 35 : 0)
{-73} pthread_join#return_value!0#7 == (\guard#4 ? 3 : pthread_join#return_value!0#6)
{-74} mutex!0@2#1 == &mutex
{-75} mutex#8 == byte_update_little_endian(mutex#7, 0l, -1, char)
{-76} pthread_mutex_destroy#return_value!0#3 == 0
{-77} pdev#6 == 5
{-78} expression!0@3#1 == (signed int)(pdev#8 == 5)
{-79} \guard#6 == (expression!0@3#1 == 0)
{-80} pthread_mutex_destroy#return_value!0#4 == 0
{-81} pthread_join#return_value!0#8 == pthread_join#return_value!0#7
{-82} main#return_value!0#1 == 0
{-83} return`!0#1 == 0
{-84} __CPROVER_thread_id!1#2 == this_thread_id!1@0#0
{-85} arg!1@1#1 == NULL
{-86} mutex!1@1#1 == &mutex
{-87} mutex#10 == mutex#9
{-88} mutex#11 == (\guard#1 ? mutex#10 : mutex#9)
{-89} mutex#12 == byte_update_little_endian(mutex#11, 0l, 1, char)
{-90} pthread_mutex_lock#return_value!1#2 == 0
{-91} pdev#9 == 6
{-92} expression!1@1#1 == (signed int)(pdev#11 == 6)
{-93} \guard#7 == (expression!1@1#1 == 0)
{-94} mutex!1@1#1 == &mutex
{-95} mutex#14 == mutex#13
{-96} mutex#15 == byte_update_little_endian(mutex#14, 0l, 0, char)
{-97} pthread_mutex_unlock#return_value!1#2 == 0
{-98} thread1#return_value!1#2 == NULL
{-99} __CPROVER_threads_exited#4 == __CPROVER_threads_exited#3 WITH [(signed long int)this_thread_id!1@0#0:=TRUE]
{-100} __CPROVER_threads_exited#2 == __CPROVER_threads_exited#1 || !choice_rf0
{-101} byte_extract_little_endian(mutex#10, 0l, char) == 0 && __CPROVER_threads_exited#2 == __CPROVER_threads_exited#4 && !\guard#7 && \guard#1 || !choice_rf1
{-102} !(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#2$rclk$8) || !choice_rf1
{-103} (\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf0 || choice_rf1 || \guard#4 || \guard#5
{-104} __CPROVER_threads_exited#3 == __CPROVER_threads_exited#1 || !choice_rf2
{-105} !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#3$rclk$8) || !choice_rf2
{-106} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf2 || \guard#7
{-107} __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#1 || !choice_rf3
{-108} __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#2 && \guard#1 || !choice_rf4
{-109} (\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf3 || choice_rf4
{-110} t1#3 == t1#1 || !choice_rf5
{-111} t1#3 == t1#2 && \guard#1 || !choice_rf6
{-112} (\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf5 || choice_rf6
{-113} t1#4 == t1#1 || !choice_rf7
{-114} t1#4 == t1#2 && \guard#1 || !choice_rf8
{-115} (\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf7 || choice_rf8
{-116} mutex#3 == mutex#1 || !choice_rf9
{-117} mutex#3 == mutex#2 || !choice_rf10
{-118} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#3 == mutex#12 && \guard#1 || !choice_rf11
{-119} !(mutex#12$wclk$8 >= mutex#3$rclk$8) || !choice_rf11
{-120} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#3 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf12
{-121} !(mutex#15$wclk$8 >= mutex#3$rclk$8) || !choice_rf12
{-122} choice_rf10 || choice_rf11 || choice_rf12 || choice_rf9 || \guard#1 || \guard#2
{-123} mutex#4 == mutex#1 || !choice_rf13
{-124} mutex#4 == mutex#2 || !choice_rf14
{-125} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#4 == mutex#12 && \guard#1 || !choice_rf15
{-126} !(mutex#12$wclk$8 >= mutex#4$rclk$8) || !choice_rf15
{-127} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#4 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf16
{-128} !(mutex#15$wclk$8 >= mutex#4$rclk$8) || !choice_rf16
{-129} choice_rf13 || choice_rf14 || choice_rf15 || choice_rf16 || \guard#1 || \guard#2
{-130} mutex#6 == mutex#1 || !choice_rf17
{-131} mutex#6 == mutex#2 || !choice_rf18
{-132} mutex#6 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf19
{-133} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#6 == mutex#12 && \guard#1 || !choice_rf20
{-134} !(mutex#12$wclk$8 >= mutex#6$rclk$8) || !choice_rf20
{-135} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#6 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf21
{-136} !(mutex#15$wclk$8 >= mutex#6$rclk$8) || !choice_rf21
{-137} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf17 || choice_rf18 || choice_rf19 || choice_rf20 || choice_rf21
{-138} mutex#7 == mutex#1 || !choice_rf22
{-139} mutex#7 == mutex#2 || !choice_rf23
{-140} mutex#7 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf24
{-141} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#7 == mutex#12 && \guard#1 || !choice_rf25
{-142} !(mutex#12$wclk$8 >= mutex#7$rclk$8) || !choice_rf25
{-143} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#7 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf26
{-144} !(mutex#15$wclk$8 >= mutex#7$rclk$8) || !choice_rf26
{-145} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf22 || choice_rf23 || choice_rf24 || choice_rf25 || choice_rf26
{-146} mutex#9 == mutex#1 || !choice_rf27
{-147} !(mutex#1$wclk$8 >= mutex#9$rclk$8) || !choice_rf27
{-148} mutex#9 == mutex#2 || !choice_rf28
{-149} !(mutex#2$wclk$8 >= mutex#9$rclk$8) || !choice_rf28
{-150} mutex#9 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf29
{-151} !(mutex#5$wclk$8 >= mutex#9$rclk$8) || !choice_rf29
{-152} mutex#9 == mutex#8 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf30
{-153} !(mutex#8$wclk$8 >= mutex#9$rclk$8) || !choice_rf30
{-154} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || choice_rf27 || choice_rf28 || choice_rf29 || choice_rf30
{-155} mutex#13 == mutex#1 || !choice_rf31
{-156} !(mutex#1$wclk$8 >= mutex#13$rclk$8) || !choice_rf31
{-157} mutex#13 == mutex#2 || !choice_rf32
{-158} !(mutex#2$wclk$8 >= mutex#13$rclk$8) || !choice_rf32
{-159} mutex#13 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf33
{-160} !(mutex#5$wclk$8 >= mutex#13$rclk$8) || !choice_rf33
{-161} mutex#13 == mutex#8 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf34
{-162} !(mutex#8$wclk$8 >= mutex#13$rclk$8) || !choice_rf34
{-163} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#13 == mutex#12 && \guard#1 || !choice_rf35
{-164} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf31 || choice_rf32 || choice_rf33 || choice_rf34 || choice_rf35 || \guard#7
{-165} pdev#4 == pdev#1 || !choice_rf36
{-166} pdev#4 == pdev#2 || !choice_rf37
{-167} pdev#4 == pdev#3 && !\guard#1 || !choice_rf38
{-168} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#4 == pdev#9 && \guard#1 || !choice_rf39
{-169} !(pdev#9$wclk$8 >= pdev#4$rclk$8) || !choice_rf39
{-170} choice_rf36 || choice_rf37 || choice_rf38 || choice_rf39 || \guard#1
{-171} pdev#5 == pdev#1 || !choice_rf40
{-172} pdev#5 == pdev#2 || !choice_rf41
{-173} pdev#5 == pdev#3 && !\guard#1 || !choice_rf42
{-174} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#5 == pdev#9 && \guard#1 || !choice_rf43
{-175} !(pdev#9$wclk$8 >= pdev#5$rclk$8) || !choice_rf43
{-176} choice_rf40 || choice_rf41 || choice_rf42 || choice_rf43 || \guard#1
{-177} pdev#7 == pdev#1 || !choice_rf44
{-178} pdev#7 == pdev#2 || !choice_rf45
{-179} pdev#7 == pdev#3 && !\guard#1 || !choice_rf46
{-180} pdev#7 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf47
{-181} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#7 == pdev#9 && \guard#1 || !choice_rf48
{-182} !(pdev#9$wclk$8 >= pdev#7$rclk$8) || !choice_rf48
{-183} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf44 || choice_rf45 || choice_rf46 || choice_rf47 || choice_rf48
{-184} pdev#8 == pdev#1 || !choice_rf49
{-185} pdev#8 == pdev#2 || !choice_rf50
{-186} pdev#8 == pdev#3 && !\guard#1 || !choice_rf51
{-187} pdev#8 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf52
{-188} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#8 == pdev#9 && \guard#1 || !choice_rf53
{-189} !(pdev#9$wclk$8 >= pdev#8$rclk$8) || !choice_rf53
{-190} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf49 || choice_rf50 || choice_rf51 || choice_rf52 || choice_rf53
{-191} pdev#10 == pdev#1 || !choice_rf54
{-192} !(pdev#1$wclk$8 >= pdev#10$rclk$8) || !choice_rf54
{-193} pdev#10 == pdev#2 || !choice_rf55
{-194} !(pdev#2$wclk$8 >= pdev#10$rclk$8) || !choice_rf55
{-195} pdev#10 == pdev#3 && !\guard#1 || !choice_rf56
{-196} !(pdev#3$wclk$8 >= pdev#10$rclk$8) || !choice_rf56
{-197} pdev#10 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf57
{-198} !(pdev#6$wclk$8 >= pdev#10$rclk$8) || !choice_rf57
{-199} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#10 == pdev#9 && \guard#1 || !choice_rf58
{-200} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf54 || choice_rf55 || choice_rf56 || choice_rf57 || choice_rf58
{-201} pdev#11 == pdev#1 || !choice_rf59
{-202} !(pdev#1$wclk$8 >= pdev#11$rclk$8) || !choice_rf59
{-203} pdev#11 == pdev#2 || !choice_rf60
{-204} !(pdev#2$wclk$8 >= pdev#11$rclk$8) || !choice_rf60
{-205} pdev#11 == pdev#3 && !\guard#1 || !choice_rf61
{-206} !(pdev#3$wclk$8 >= pdev#11$rclk$8) || !choice_rf61
{-207} pdev#11 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf62
{-208} !(pdev#6$wclk$8 >= pdev#11$rclk$8) || !choice_rf62
{-209} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#11 == pdev#9 && \guard#1 || !choice_rf63
{-210} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf59 || choice_rf60 || choice_rf61 || choice_rf62 || choice_rf63
{-211} !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_ws-ext64
{-212} !(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8) || choice_ws-ext64
{-213} !(mutex#1$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext65
{-214} !(mutex#12$wclk$8 >= mutex#1$wclk$8) || choice_ws-ext65
{-215} !(mutex#1$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext66
{-216} !(mutex#15$wclk$8 >= mutex#1$wclk$8) || choice_ws-ext66
{-217} !(mutex#2$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext67
{-218} !(mutex#12$wclk$8 >= mutex#2$wclk$8) || choice_ws-ext67
{-219} !(mutex#2$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext68
{-220} !(mutex#15$wclk$8 >= mutex#2$wclk$8) || choice_ws-ext68
{-221} !(mutex#5$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext69
{-222} !(mutex#12$wclk$8 >= mutex#5$wclk$8) || choice_ws-ext69
{-223} !(mutex#5$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext70
{-224} !(mutex#15$wclk$8 >= mutex#5$wclk$8) || choice_ws-ext70
{-225} !(mutex#8$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext71
{-226} !(mutex#12$wclk$8 >= mutex#8$wclk$8) || choice_ws-ext71
{-227} !(mutex#8$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext72
{-228} !(mutex#15$wclk$8 >= mutex#8$wclk$8) || choice_ws-ext72
{-229} !(pdev#1$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext73
{-230} !(pdev#9$wclk$8 >= pdev#1$wclk$8) || choice_ws-ext73
{-231} !(pdev#2$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext74
{-232} !(pdev#9$wclk$8 >= pdev#2$wclk$8) || choice_ws-ext74
{-233} !(pdev#3$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext75
{-234} !(pdev#9$wclk$8 >= pdev#3$wclk$8) || choice_ws-ext75
{-235} !(pdev#6$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext76
{-236} !(pdev#9$wclk$8 >= pdev#6$wclk$8) || choice_ws-ext76
{-237} !(t1$17$spwnclk$8 >= mutex#9$rclk$8)
{-238} !(t1$17$spwnclk$8 >= mutex#12$wclk$8)
{-239} !(t1$17$spwnclk$8 >= pdev#9$wclk$8)
{-240} !(t1$17$spwnclk$8 >= pdev#10$rclk$8)
{-241} !(t1$17$spwnclk$8 >= pdev#11$rclk$8)
{-242} !(t1$17$spwnclk$8 >= mutex#13$rclk$8)
{-243} !(t1$17$spwnclk$8 >= mutex#15$wclk$8)
{-244} !(t1$17$spwnclk$8 >= __CPROVER_threads_exited#3$rclk$8)
{-245} !(t1$17$spwnclk$8 >= __CPROVER_threads_exited#4$wclk$8)
{-246} !(status!0@1$wclk$8 >= __CPROVER_dead_object#1$wclk$8)
{-247} !(__CPROVER_dead_object#1$wclk$8 >= __CPROVER_deallocated#1$wclk$8)
{-248} !(__CPROVER_deallocated#1$wclk$8 >= __CPROVER_malloc_is_new_array#1$wclk$8)
{-249} !(__CPROVER_malloc_is_new_array#1$wclk$8 >= __CPROVER_malloc_object#1$wclk$8)
{-250} !(__CPROVER_malloc_object#1$wclk$8 >= __CPROVER_malloc_size#1$wclk$8)
{-251} !(__CPROVER_malloc_size#1$wclk$8 >= __CPROVER_memory_leak#1$wclk$8)
{-252} !(__CPROVER_memory_leak#1$wclk$8 >= __CPROVER_next_thread_id#1$wclk$8)
{-253} !(__CPROVER_next_thread_id#1$wclk$8 >= __CPROVER_pipe_count#1$wclk$8)
{-254} !(__CPROVER_pipe_count#1$wclk$8 >= __CPROVER_threads_exited#1$wclk$8)
{-255} !(__CPROVER_threads_exited#1$wclk$8 >= mutex#1$wclk$8)
{-256} !(mutex#1$wclk$8 >= pdev#1$wclk$8)
{-257} !(pdev#1$wclk$8 >= t1#1$wclk$8)
{-258} !(t1#1$wclk$8 >= mutex#2$wclk$8)
{-259} !(mutex#2$wclk$8 >= pdev#2$wclk$8)
{-260} !(pdev#2$wclk$8 >= __CPROVER_next_thread_id#2$wclk$8)
{-261} !(__CPROVER_next_thread_id#2$wclk$8 >= t1#2$wclk$8)
{-262} !(t1#2$wclk$8 >= t1$17$spwnclk$8)
{-263} !(t1$17$spwnclk$8 >= pdev#3$wclk$8)
{-264} !(pdev#3$wclk$8 >= pdev#4$rclk$8)
{-265} !(pdev#4$rclk$8 >= pdev#5$rclk$8)
{-266} !(pdev#5$rclk$8 >= mutex#3$rclk$8)
{-267} !(mutex#3$rclk$8 >= mutex#4$rclk$8)
{-268} !(mutex#4$rclk$8 >= mutex#5$wclk$8)
{-269} !(mutex#5$wclk$8 >= status!0@1#1$wclk$8)
{-270} !(status!0@1#1$wclk$8 >= t1#3$rclk$8)
{-271} !(t1#3$rclk$8 >= t1#4$rclk$8)
{-272} !(t1#4$rclk$8 >= __CPROVER_next_thread_id#3$rclk$8)
{-273} !(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_threads_exited#2$rclk$8)
{-274} !(__CPROVER_threads_exited#2$rclk$8 >= mutex#6$rclk$8)
{-275} !(mutex#6$rclk$8 >= mutex#7$rclk$8)
{-276} !(mutex#7$rclk$8 >= mutex#8$wclk$8)
{-277} !(mutex#8$wclk$8 >= pdev#6$wclk$8)
{-278} !(pdev#6$wclk$8 >= pdev#7$rclk$8)
{-279} !(pdev#7$rclk$8 >= pdev#8$rclk$8)
{-280} mutex#9$rclk$8 == mutex#12$wclk$8
{-281} !(mutex#12$wclk$8 >= pdev#9$wclk$8)
{-282} !(pdev#9$wclk$8 >= pdev#10$rclk$8)
{-283} !(pdev#10$rclk$8 >= pdev#11$rclk$8)
{-284} !(pdev#11$rclk$8 >= mutex#13$rclk$8)
{-285} mutex#13$rclk$8 == mutex#15$wclk$8
{-286} !(mutex#15$wclk$8 >= __CPROVER_threads_exited#3$rclk$8)
{-287} !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8)
{-288} __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_rf2 || !\guard#1 || \guard#7
{-289} __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_rf0 || !\guard#1 || !\guard#3 || \guard#4 || \guard#5 || \guard#7
{-290} __CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf1 || !\guard#3 || \guard#4 || \guard#5
{-291} (\guard#1 || \guard#2) && !\guard#1 || !(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8) || !choice_rf3 || !\guard#1 || !\guard#3
{-292} (\guard#1 || \guard#2) && !\guard#1 || !(t1#3$rclk$8 >= t1#2$wclk$8) || !choice_rf5 || !\guard#1 || !\guard#3
{-293} (\guard#1 || \guard#2) && !\guard#1 || !(t1#4$rclk$8 >= t1#2$wclk$8) || !choice_rf7 || !\guard#1 || !\guard#3
{-294} !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf13 || \guard#1 || \guard#2
{-295} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#2$wclk$8) || !choice_rf22 || !\guard#3
{-296} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf17 || !\guard#3
{-297} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(mutex#9$rclk$8 >= mutex#2$wclk$8) || !choice_rf27
{-298} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#2$wclk$8) || !choice_rf31 || !\guard#1 || \guard#7
{-299} !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf9 || \guard#1 || \guard#2
{-300} !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf13 || \guard#1 || \guard#2
{-301} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf22 || !\guard#3 || \guard#1 || \guard#2
{-302} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf17 || !\guard#3 || \guard#1 || \guard#2
{-303} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf27 || \guard#1 || \guard#2
{-304} TRUE
{-305} !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf9 || \guard#1 || \guard#2
{-306} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf13 || !\guard#3 || \guard#1 || \guard#2
{-307} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf22 || !\guard#3
{-308} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf17 || !\guard#3
{-309} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf27 || !\guard#3
{-310} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf31 || !\guard#1 || !\guard#3 || \guard#7
{-311} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf9 || !\guard#3 || \guard#1 || \guard#2
{-312} TRUE
{-313} mutex#12$wclk$8 >= mutex#1$wclk$8 || !(mutex#4$rclk$8 >= mutex#1$wclk$8) || !choice_rf15 || \guard#1 || \guard#2
{-314} mutex#1$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#12$wclk$8) || !choice_rf22 || !\guard#1 || !\guard#3
{-315} mutex#12$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#1$wclk$8) || !choice_rf25 || !\guard#3
{-316} mutex#1$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#12$wclk$8) || !choice_rf17 || !\guard#1 || !\guard#3
{-317} mutex#12$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#1$wclk$8) || !choice_rf20 || !\guard#3
{-318} mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#1$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf27 || !\guard#1
{-319} mutex#1$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf31 || !\guard#1 || \guard#7
{-320} mutex#12$wclk$8 >= mutex#1$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#1$wclk$8) || !choice_rf35 || !\guard#1 || \guard#7
{-321} TRUE
{-322} mutex#12$wclk$8 >= mutex#1$wclk$8 || !(mutex#3$rclk$8 >= mutex#1$wclk$8) || !choice_rf11 || \guard#1 || \guard#2
{-323} mutex#15$wclk$8 >= mutex#1$wclk$8 || !(mutex#4$rclk$8 >= mutex#1$wclk$8) || !choice_rf16 || \guard#1 || \guard#2
{-324} TRUE
{-325} mutex#15$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#1$wclk$8) || !choice_rf26 || !\guard#3
{-326} mutex#1$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf22 || !\guard#1 || !\guard#3 || \guard#7
{-327} mutex#15$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#1$wclk$8) || !choice_rf21 || !\guard#3
{-328} mutex#1$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf17 || !\guard#1 || !\guard#3 || \guard#7
{-329} mutex#1$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf27 || !\guard#1 || \guard#7
{-330} mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#1$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf31 || !\guard#1 || \guard#7
{-331} mutex#15$wclk$8 >= mutex#1$wclk$8 || !(mutex#3$rclk$8 >= mutex#1$wclk$8) || !choice_rf12 || \guard#1 || \guard#2
{-332} TRUE
{-333} !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf14 || \guard#1 || \guard#2
{-334} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf23 || !\guard#3 || \guard#1 || \guard#2
{-335} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf18 || !\guard#3 || \guard#1 || \guard#2
{-336} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf28 || \guard#1 || \guard#2
{-337} TRUE
{-338} !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf10 || \guard#1 || \guard#2
{-339} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf14 || !\guard#3 || \guard#1 || \guard#2
{-340} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf23 || !\guard#3
{-341} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf18 || !\guard#3
{-342} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf28 || !\guard#3
{-343} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf32 || !\guard#1 || !\guard#3 || \guard#7
{-344} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf10 || !\guard#3 || \guard#1 || \guard#2
{-345} TRUE
{-346} mutex#12$wclk$8 >= mutex#2$wclk$8 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf15 || \guard#1 || \guard#2
{-347} mutex#2$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#12$wclk$8) || !choice_rf23 || !\guard#1 || !\guard#3
{-348} mutex#12$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#2$wclk$8) || !choice_rf25 || !\guard#3
{-349} mutex#2$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#12$wclk$8) || !choice_rf18 || !\guard#1 || !\guard#3
{-350} mutex#12$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf20 || !\guard#3
{-351} mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#2$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf28 || !\guard#1
{-352} mutex#2$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf32 || !\guard#1 || \guard#7
{-353} mutex#12$wclk$8 >= mutex#2$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#2$wclk$8) || !choice_rf35 || !\guard#1 || \guard#7
{-354} TRUE
{-355} mutex#12$wclk$8 >= mutex#2$wclk$8 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf11 || \guard#1 || \guard#2
{-356} mutex#15$wclk$8 >= mutex#2$wclk$8 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf16 || \guard#1 || \guard#2
{-357} TRUE
{-358} mutex#15$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#2$wclk$8) || !choice_rf26 || !\guard#3
{-359} mutex#2$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf23 || !\guard#1 || !\guard#3 || \guard#7
{-360} mutex#15$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf21 || !\guard#3
{-361} mutex#2$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf18 || !\guard#1 || !\guard#3 || \guard#7
{-362} mutex#2$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf28 || !\guard#1 || \guard#7
{-363} mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#2$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf32 || !\guard#1 || \guard#7
{-364} mutex#15$wclk$8 >= mutex#2$wclk$8 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf12 || \guard#1 || \guard#2
{-365} TRUE
{-366} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf24 || !\guard#3
{-367} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf19 || !\guard#3
{-368} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf29 || !\guard#3
{-369} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf33 || !\guard#1 || !\guard#3 || \guard#7
{-370} mutex#12$wclk$8 >= mutex#5$wclk$8 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf15 || \guard#1 || \guard#2
{-371} mutex#5$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#12$wclk$8) || !choice_rf24 || !\guard#1 || !\guard#3
{-372} mutex#12$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf25 || !\guard#3 || \guard#1 || \guard#2
{-373} mutex#5$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#12$wclk$8) || !choice_rf19 || !\guard#1 || !\guard#3
{-374} mutex#12$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf20 || !\guard#3 || \guard#1 || \guard#2
{-375} mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#5$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf29 || !\guard#1
{-376} mutex#5$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf33 || !\guard#1 || \guard#7
{-377} TRUE
{-378} mutex#12$wclk$8 >= mutex#5$wclk$8 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf11 || \guard#1 || \guard#2
{-379} mutex#15$wclk$8 >= mutex#5$wclk$8 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf16 || \guard#1 || \guard#2
{-380} mutex#5$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf24 || !\guard#1 || !\guard#3 || \guard#7
{-381} mutex#15$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf26 || !\guard#3 || \guard#1 || \guard#2
{-382} mutex#5$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf19 || !\guard#1 || !\guard#3 || \guard#7
{-383} mutex#15$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf21 || !\guard#3 || \guard#1 || \guard#2
{-384} mutex#5$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf29 || !\guard#1 || \guard#7
{-385} mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#5$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf33 || !\guard#1 || \guard#7
{-386} mutex#15$wclk$8 >= mutex#5$wclk$8 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf12 || \guard#1 || \guard#2
{-387} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf15 || !\guard#3 || \guard#1 || \guard#2
{-388} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf25 || !\guard#3
{-389} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf20 || !\guard#3
{-390} mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#8$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf30 || !\guard#1
{-391} mutex#8$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf34 || !\guard#1 || \guard#7
{-392} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf35 || !\guard#1 || !\guard#3 || \guard#7
{-393} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf11 || !\guard#3 || \guard#1 || \guard#2
{-394} mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf16 || !\guard#3 || \guard#1 || \guard#2
{-395} mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf26 || !\guard#3
{-396} mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf21 || !\guard#3
{-397} mutex#8$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf30 || !\guard#1 || \guard#7
{-398} mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#8$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf34 || !\guard#1 || \guard#7
{-399} mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf12 || !\guard#3 || \guard#1 || \guard#2
{-400} TRUE
{-401} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf25 || !\guard#1 || !\guard#3 || \guard#7
{-402} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf20 || !\guard#1 || !\guard#3 || \guard#7
{-403} mutex#13$rclk$8 == mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf35 || !\guard#1 || \guard#7
{-404} TRUE
{-405} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#2$wclk$8) || !choice_rf59 || !\guard#1
{-406} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#2$wclk$8) || !choice_rf54 || !\guard#1
{-407} !(pdev#4$rclk$8 >= pdev#2$wclk$8) || !choice_rf36 || \guard#1
{-408} !(pdev#5$rclk$8 >= pdev#2$wclk$8) || !choice_rf40 || \guard#1
{-409} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#2$wclk$8) || !choice_rf49 || !\guard#3
{-410} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#2$wclk$8) || !choice_rf44 || !\guard#3
{-411} TRUE
{-412} TRUE
{-413} !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf36 || \guard#1
{-414} !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf40 || \guard#1
{-415} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf49 || !\guard#3 || \guard#1
{-416} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf44 || !\guard#3 || \guard#1
{-417} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf59 || !\guard#1 || !\guard#3
{-418} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf54 || !\guard#1 || !\guard#3
{-419} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf36 || !\guard#3 || \guard#1
{-420} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf40 || !\guard#3 || \guard#1
{-421} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf49 || !\guard#3
{-422} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf44 || !\guard#3
{-423} pdev#9$wclk$8 >= pdev#1$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#1$wclk$8) || !choice_rf63 || !\guard#1
{-424} pdev#1$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf59 || !\guard#1
{-425} pdev#9$wclk$8 >= pdev#1$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#1$wclk$8) || !choice_rf58 || !\guard#1
{-426} pdev#1$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf54 || !\guard#1
{-427} pdev#9$wclk$8 >= pdev#1$wclk$8 || !(pdev#4$rclk$8 >= pdev#1$wclk$8) || !choice_rf39 || \guard#1
{-428} TRUE
{-429} pdev#9$wclk$8 >= pdev#1$wclk$8 || !(pdev#5$rclk$8 >= pdev#1$wclk$8) || !choice_rf43 || \guard#1
{-430} TRUE
{-431} pdev#9$wclk$8 >= pdev#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#1$wclk$8) || !choice_rf53 || !\guard#3
{-432} pdev#1$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf49 || !\guard#1 || !\guard#3
{-433} pdev#9$wclk$8 >= pdev#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#1$wclk$8) || !choice_rf48 || !\guard#3
{-434} pdev#1$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf44 || !\guard#1 || !\guard#3
{-435} TRUE
{-436} TRUE
{-437} !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf37 || \guard#1
{-438} !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf41 || \guard#1
{-439} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf50 || !\guard#3 || \guard#1
{-440} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf45 || !\guard#3 || \guard#1
{-441} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf60 || !\guard#1 || !\guard#3
{-442} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf55 || !\guard#1 || !\guard#3
{-443} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf37 || !\guard#3 || \guard#1
{-444} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf41 || !\guard#3 || \guard#1
{-445} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf50 || !\guard#3
{-446} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf45 || !\guard#3
{-447} pdev#9$wclk$8 >= pdev#2$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#2$wclk$8) || !choice_rf63 || !\guard#1
{-448} pdev#2$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf60 || !\guard#1
{-449} pdev#9$wclk$8 >= pdev#2$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#2$wclk$8) || !choice_rf58 || !\guard#1
{-450} pdev#2$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf55 || !\guard#1
{-451} pdev#9$wclk$8 >= pdev#2$wclk$8 || !(pdev#4$rclk$8 >= pdev#2$wclk$8) || !choice_rf39 || \guard#1
{-452} TRUE
{-453} pdev#9$wclk$8 >= pdev#2$wclk$8 || !(pdev#5$rclk$8 >= pdev#2$wclk$8) || !choice_rf43 || \guard#1
{-454} TRUE
{-455} pdev#9$wclk$8 >= pdev#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#2$wclk$8) || !choice_rf53 || !\guard#3
{-456} pdev#2$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf50 || !\guard#1 || !\guard#3
{-457} pdev#9$wclk$8 >= pdev#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#2$wclk$8) || !choice_rf48 || !\guard#3
{-458} pdev#2$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf45 || !\guard#1 || !\guard#3
{-459} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf61 || !\guard#1 || !\guard#3
{-460} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf56 || !\guard#1 || !\guard#3
{-461} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf38 || !\guard#3 || \guard#1
{-462} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf42 || !\guard#3 || \guard#1
{-463} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf51 || !\guard#3
{-464} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf46 || !\guard#3
{-465} TRUE
{-466} pdev#3$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf61 || !\guard#1
{-467} TRUE
{-468} pdev#3$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf56 || !\guard#1
{-469} pdev#9$wclk$8 >= pdev#3$wclk$8 || !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf39 || \guard#1
{-470} TRUE
{-471} pdev#9$wclk$8 >= pdev#3$wclk$8 || !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf43 || \guard#1
{-472} TRUE
{-473} pdev#9$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf53 || !\guard#3 || \guard#1
{-474} pdev#3$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf51 || !\guard#1 || !\guard#3
{-475} pdev#9$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf48 || !\guard#3 || \guard#1
{-476} pdev#3$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf46 || !\guard#1 || !\guard#3
{-477} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf63 || !\guard#1 || !\guard#3
{-478} pdev#6$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf62 || !\guard#1
{-479} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf58 || !\guard#1 || !\guard#3
{-480} pdev#6$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf57 || !\guard#1
{-481} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf39 || !\guard#3 || \guard#1
{-482} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf43 || !\guard#3 || \guard#1
{-483} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf53 || !\guard#3
{-484} pdev#6$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf52 || !\guard#1 || !\guard#3
{-485} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf48 || !\guard#3
{-486} pdev#6$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf47 || !\guard#1 || !\guard#3
|--------------------------
{1} !\guard#1 && !\guard#2 ==> (signed int)byte_extract_little_endian(mutex#3, 0l, char) == 0

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
{-21} return_value___VERIFIER_nondet_int!0@1#2 == nondet_symbol(symex::nondet1)
{-22} \guard#1 == !(return_value___VERIFIER_nondet_int!0@1#2 == 0)
{-23} thread!0@1#1 == &t1
{-24} attr!0@1#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
{-25} start_routine!0@1#1 == thread1
{-26} arg!0@1#1 == NULL
{-27} __CPROVER_next_thread_id#2 == 1ul
{-28} this_thread_id!0@1#2 == 1ul
{-29} t1#2 == 1ul
{-30} thread!1@0#1 == &t1
{-31} attr!1@0#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
{-32} start_routine!1@0#1 == thread1
{-33} arg!1@0#1 == NULL
{-34} __VERIFIER_nondet_int#return_value!1#1 == 0
{-35} pthread_mutex_destroy#return_value!1#1 == 0
{-36} __CPROVER_thread_id!1#1 == 0ul
{-37} pthread_join#return_value!1#1 == 0
{-38} __CPROVER_rounding_mode!1#1 == 0
{-39} pthread_mutex_init#return_value!1#1 == 0
{-40} module_init#return_value!1#1 == 0
{-41} pthread_mutex_lock#return_value!1#1 == 0
{-42} main#return_value!1#1 == 0
{-43} pthread_create#return_value!1#1 == 0
{-44} thread1#return_value!1#1 == NULL
{-45} pthread_mutex_unlock#return_value!1#1 == 0
{-46} pthread_create#return_value!0#1 == 0
{-47} module_init#return_value!0#1 == 0
{-48} module_init#return_value!0#2 == module_init#return_value!0#0
{-49} pthread_create#return_value!0#2 == pthread_create#return_value!0#0
{-50} pdev#3 == 3
{-51} expression!0@2#1 == (signed int)(pdev#5 == 3)
{-52} \guard#2 == (expression!0@2#1 == 0)
{-53} mutex!0@1#1 == &mutex
{-54} mutex#5 == byte_update_little_endian(mutex#4, 0l, -1, char)
{-55} pthread_mutex_destroy#return_value!0#1 == 0
{-56} module_init#return_value!0#3 == -1
{-57} pthread_mutex_destroy#return_value!0#2 == 0
{-58} module_init#return_value!0#4 == (\guard#1 ? 0 : -1)
{-59} pthread_create#return_value!0#3 == (\guard#1 ? 0 : pthread_create#return_value!0#2)
{-60} return_value___VERIFIER_nondet_int!0@1#4 == (\guard#1 ? return_value___VERIFIER_nondet_int!0@1#2 : return_value___VERIFIER_nondet_int!0@1#3)
{-61} return_value_module_init!0@1#2 == module_init#return_value!0#4
{-62} \guard#3 == (return_value_module_init!0@1#2 == 0)
{-63} thread!0@1#1 == t1#4
{-64} value_ptr!0@1#1 == &status!0@1
{-65} \guard#4 == !(__CPROVER_next_thread_id#3 >= thread!0@1#1)
{-66} pthread_join#return_value!0#1 == 3
{-67} pthread_join#return_value!0#2 == pthread_join#return_value!0#0
{-68} \guard#5 == (thread!0@1#1 == 0ul)
{-69} pthread_join#return_value!0#3 == 35
{-70} pthread_join#return_value!0#4 == pthread_join#return_value!0#2
{-71} pthread_join#return_value!0#5 == 0
{-72} pthread_join#return_value!0#6 == (\guard#5 ? 35 : 0)
{-73} pthread_join#return_value!0#7 == (\guard#4 ? 3 : pthread_join#return_value!0#6)
{-74} mutex!0@2#1 == &mutex
{-75} mutex#8 == byte_update_little_endian(mutex#7, 0l, -1, char)
{-76} pthread_mutex_destroy#return_value!0#3 == 0
{-77} pdev#6 == 5
{-78} expression!0@3#1 == (signed int)(pdev#8 == 5)
{-79} \guard#6 == (expression!0@3#1 == 0)
{-80} pthread_mutex_destroy#return_value!0#4 == 0
{-81} pthread_join#return_value!0#8 == pthread_join#return_value!0#7
{-82} main#return_value!0#1 == 0
{-83} return`!0#1 == 0
{-84} __CPROVER_thread_id!1#2 == this_thread_id!1@0#0
{-85} arg!1@1#1 == NULL
{-86} mutex!1@1#1 == &mutex
{-87} mutex#10 == mutex#9
{-88} mutex#11 == (\guard#1 ? mutex#10 : mutex#9)
{-89} mutex#12 == byte_update_little_endian(mutex#11, 0l, 1, char)
{-90} pthread_mutex_lock#return_value!1#2 == 0
{-91} pdev#9 == 6
{-92} expression!1@1#1 == (signed int)(pdev#11 == 6)
{-93} \guard#7 == (expression!1@1#1 == 0)
{-94} mutex!1@1#1 == &mutex
{-95} mutex#14 == mutex#13
{-96} mutex#15 == byte_update_little_endian(mutex#14, 0l, 0, char)
{-97} pthread_mutex_unlock#return_value!1#2 == 0
{-98} thread1#return_value!1#2 == NULL
{-99} __CPROVER_threads_exited#4 == __CPROVER_threads_exited#3 WITH [(signed long int)this_thread_id!1@0#0:=TRUE]
{-100} __CPROVER_threads_exited#2 == __CPROVER_threads_exited#1 || !choice_rf0
{-101} byte_extract_little_endian(mutex#10, 0l, char) == 0 && __CPROVER_threads_exited#2 == __CPROVER_threads_exited#4 && !\guard#7 && \guard#1 || !choice_rf1
{-102} !(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#2$rclk$8) || !choice_rf1
{-103} (\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf0 || choice_rf1 || \guard#4 || \guard#5
{-104} __CPROVER_threads_exited#3 == __CPROVER_threads_exited#1 || !choice_rf2
{-105} !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#3$rclk$8) || !choice_rf2
{-106} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf2 || \guard#7
{-107} __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#1 || !choice_rf3
{-108} __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#2 && \guard#1 || !choice_rf4
{-109} (\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf3 || choice_rf4
{-110} t1#3 == t1#1 || !choice_rf5
{-111} t1#3 == t1#2 && \guard#1 || !choice_rf6
{-112} (\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf5 || choice_rf6
{-113} t1#4 == t1#1 || !choice_rf7
{-114} t1#4 == t1#2 && \guard#1 || !choice_rf8
{-115} (\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf7 || choice_rf8
{-116} mutex#3 == mutex#1 || !choice_rf9
{-117} mutex#3 == mutex#2 || !choice_rf10
{-118} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#3 == mutex#12 && \guard#1 || !choice_rf11
{-119} !(mutex#12$wclk$8 >= mutex#3$rclk$8) || !choice_rf11
{-120} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#3 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf12
{-121} !(mutex#15$wclk$8 >= mutex#3$rclk$8) || !choice_rf12
{-122} choice_rf10 || choice_rf11 || choice_rf12 || choice_rf9 || \guard#1 || \guard#2
{-123} mutex#4 == mutex#1 || !choice_rf13
{-124} mutex#4 == mutex#2 || !choice_rf14
{-125} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#4 == mutex#12 && \guard#1 || !choice_rf15
{-126} !(mutex#12$wclk$8 >= mutex#4$rclk$8) || !choice_rf15
{-127} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#4 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf16
{-128} !(mutex#15$wclk$8 >= mutex#4$rclk$8) || !choice_rf16
{-129} choice_rf13 || choice_rf14 || choice_rf15 || choice_rf16 || \guard#1 || \guard#2
{-130} mutex#6 == mutex#1 || !choice_rf17
{-131} mutex#6 == mutex#2 || !choice_rf18
{-132} mutex#6 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf19
{-133} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#6 == mutex#12 && \guard#1 || !choice_rf20
{-134} !(mutex#12$wclk$8 >= mutex#6$rclk$8) || !choice_rf20
{-135} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#6 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf21
{-136} !(mutex#15$wclk$8 >= mutex#6$rclk$8) || !choice_rf21
{-137} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf17 || choice_rf18 || choice_rf19 || choice_rf20 || choice_rf21
{-138} mutex#7 == mutex#1 || !choice_rf22
{-139} mutex#7 == mutex#2 || !choice_rf23
{-140} mutex#7 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf24
{-141} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#7 == mutex#12 && \guard#1 || !choice_rf25
{-142} !(mutex#12$wclk$8 >= mutex#7$rclk$8) || !choice_rf25
{-143} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#7 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf26
{-144} !(mutex#15$wclk$8 >= mutex#7$rclk$8) || !choice_rf26
{-145} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf22 || choice_rf23 || choice_rf24 || choice_rf25 || choice_rf26
{-146} mutex#9 == mutex#1 || !choice_rf27
{-147} !(mutex#1$wclk$8 >= mutex#9$rclk$8) || !choice_rf27
{-148} mutex#9 == mutex#2 || !choice_rf28
{-149} !(mutex#2$wclk$8 >= mutex#9$rclk$8) || !choice_rf28
{-150} mutex#9 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf29
{-151} !(mutex#5$wclk$8 >= mutex#9$rclk$8) || !choice_rf29
{-152} mutex#9 == mutex#8 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf30
{-153} !(mutex#8$wclk$8 >= mutex#9$rclk$8) || !choice_rf30
{-154} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || choice_rf27 || choice_rf28 || choice_rf29 || choice_rf30
{-155} mutex#13 == mutex#1 || !choice_rf31
{-156} !(mutex#1$wclk$8 >= mutex#13$rclk$8) || !choice_rf31
{-157} mutex#13 == mutex#2 || !choice_rf32
{-158} !(mutex#2$wclk$8 >= mutex#13$rclk$8) || !choice_rf32
{-159} mutex#13 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf33
{-160} !(mutex#5$wclk$8 >= mutex#13$rclk$8) || !choice_rf33
{-161} mutex#13 == mutex#8 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf34
{-162} !(mutex#8$wclk$8 >= mutex#13$rclk$8) || !choice_rf34
{-163} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#13 == mutex#12 && \guard#1 || !choice_rf35
{-164} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf31 || choice_rf32 || choice_rf33 || choice_rf34 || choice_rf35 || \guard#7
{-165} pdev#4 == pdev#1 || !choice_rf36
{-166} pdev#4 == pdev#2 || !choice_rf37
{-167} pdev#4 == pdev#3 && !\guard#1 || !choice_rf38
{-168} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#4 == pdev#9 && \guard#1 || !choice_rf39
{-169} !(pdev#9$wclk$8 >= pdev#4$rclk$8) || !choice_rf39
{-170} choice_rf36 || choice_rf37 || choice_rf38 || choice_rf39 || \guard#1
{-171} pdev#5 == pdev#1 || !choice_rf40
{-172} pdev#5 == pdev#2 || !choice_rf41
{-173} pdev#5 == pdev#3 && !\guard#1 || !choice_rf42
{-174} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#5 == pdev#9 && \guard#1 || !choice_rf43
{-175} !(pdev#9$wclk$8 >= pdev#5$rclk$8) || !choice_rf43
{-176} choice_rf40 || choice_rf41 || choice_rf42 || choice_rf43 || \guard#1
{-177} pdev#7 == pdev#1 || !choice_rf44
{-178} pdev#7 == pdev#2 || !choice_rf45
{-179} pdev#7 == pdev#3 && !\guard#1 || !choice_rf46
{-180} pdev#7 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf47
{-181} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#7 == pdev#9 && \guard#1 || !choice_rf48
{-182} !(pdev#9$wclk$8 >= pdev#7$rclk$8) || !choice_rf48
{-183} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf44 || choice_rf45 || choice_rf46 || choice_rf47 || choice_rf48
{-184} pdev#8 == pdev#1 || !choice_rf49
{-185} pdev#8 == pdev#2 || !choice_rf50
{-186} pdev#8 == pdev#3 && !\guard#1 || !choice_rf51
{-187} pdev#8 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf52
{-188} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#8 == pdev#9 && \guard#1 || !choice_rf53
{-189} !(pdev#9$wclk$8 >= pdev#8$rclk$8) || !choice_rf53
{-190} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf49 || choice_rf50 || choice_rf51 || choice_rf52 || choice_rf53
{-191} pdev#10 == pdev#1 || !choice_rf54
{-192} !(pdev#1$wclk$8 >= pdev#10$rclk$8) || !choice_rf54
{-193} pdev#10 == pdev#2 || !choice_rf55
{-194} !(pdev#2$wclk$8 >= pdev#10$rclk$8) || !choice_rf55
{-195} pdev#10 == pdev#3 && !\guard#1 || !choice_rf56
{-196} !(pdev#3$wclk$8 >= pdev#10$rclk$8) || !choice_rf56
{-197} pdev#10 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf57
{-198} !(pdev#6$wclk$8 >= pdev#10$rclk$8) || !choice_rf57
{-199} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#10 == pdev#9 && \guard#1 || !choice_rf58
{-200} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf54 || choice_rf55 || choice_rf56 || choice_rf57 || choice_rf58
{-201} pdev#11 == pdev#1 || !choice_rf59
{-202} !(pdev#1$wclk$8 >= pdev#11$rclk$8) || !choice_rf59
{-203} pdev#11 == pdev#2 || !choice_rf60
{-204} !(pdev#2$wclk$8 >= pdev#11$rclk$8) || !choice_rf60
{-205} pdev#11 == pdev#3 && !\guard#1 || !choice_rf61
{-206} !(pdev#3$wclk$8 >= pdev#11$rclk$8) || !choice_rf61
{-207} pdev#11 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf62
{-208} !(pdev#6$wclk$8 >= pdev#11$rclk$8) || !choice_rf62
{-209} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#11 == pdev#9 && \guard#1 || !choice_rf63
{-210} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf59 || choice_rf60 || choice_rf61 || choice_rf62 || choice_rf63
{-211} !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_ws-ext64
{-212} !(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8) || choice_ws-ext64
{-213} !(mutex#1$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext65
{-214} !(mutex#12$wclk$8 >= mutex#1$wclk$8) || choice_ws-ext65
{-215} !(mutex#1$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext66
{-216} !(mutex#15$wclk$8 >= mutex#1$wclk$8) || choice_ws-ext66
{-217} !(mutex#2$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext67
{-218} !(mutex#12$wclk$8 >= mutex#2$wclk$8) || choice_ws-ext67
{-219} !(mutex#2$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext68
{-220} !(mutex#15$wclk$8 >= mutex#2$wclk$8) || choice_ws-ext68
{-221} !(mutex#5$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext69
{-222} !(mutex#12$wclk$8 >= mutex#5$wclk$8) || choice_ws-ext69
{-223} !(mutex#5$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext70
{-224} !(mutex#15$wclk$8 >= mutex#5$wclk$8) || choice_ws-ext70
{-225} !(mutex#8$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext71
{-226} !(mutex#12$wclk$8 >= mutex#8$wclk$8) || choice_ws-ext71
{-227} !(mutex#8$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext72
{-228} !(mutex#15$wclk$8 >= mutex#8$wclk$8) || choice_ws-ext72
{-229} !(pdev#1$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext73
{-230} !(pdev#9$wclk$8 >= pdev#1$wclk$8) || choice_ws-ext73
{-231} !(pdev#2$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext74
{-232} !(pdev#9$wclk$8 >= pdev#2$wclk$8) || choice_ws-ext74
{-233} !(pdev#3$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext75
{-234} !(pdev#9$wclk$8 >= pdev#3$wclk$8) || choice_ws-ext75
{-235} !(pdev#6$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext76
{-236} !(pdev#9$wclk$8 >= pdev#6$wclk$8) || choice_ws-ext76
{-237} !(t1$17$spwnclk$8 >= mutex#9$rclk$8)
{-238} !(t1$17$spwnclk$8 >= mutex#12$wclk$8)
{-239} !(t1$17$spwnclk$8 >= pdev#9$wclk$8)
{-240} !(t1$17$spwnclk$8 >= pdev#10$rclk$8)
{-241} !(t1$17$spwnclk$8 >= pdev#11$rclk$8)
{-242} !(t1$17$spwnclk$8 >= mutex#13$rclk$8)
{-243} !(t1$17$spwnclk$8 >= mutex#15$wclk$8)
{-244} !(t1$17$spwnclk$8 >= __CPROVER_threads_exited#3$rclk$8)
{-245} !(t1$17$spwnclk$8 >= __CPROVER_threads_exited#4$wclk$8)
{-246} !(status!0@1$wclk$8 >= __CPROVER_dead_object#1$wclk$8)
{-247} !(__CPROVER_dead_object#1$wclk$8 >= __CPROVER_deallocated#1$wclk$8)
{-248} !(__CPROVER_deallocated#1$wclk$8 >= __CPROVER_malloc_is_new_array#1$wclk$8)
{-249} !(__CPROVER_malloc_is_new_array#1$wclk$8 >= __CPROVER_malloc_object#1$wclk$8)
{-250} !(__CPROVER_malloc_object#1$wclk$8 >= __CPROVER_malloc_size#1$wclk$8)
{-251} !(__CPROVER_malloc_size#1$wclk$8 >= __CPROVER_memory_leak#1$wclk$8)
{-252} !(__CPROVER_memory_leak#1$wclk$8 >= __CPROVER_next_thread_id#1$wclk$8)
{-253} !(__CPROVER_next_thread_id#1$wclk$8 >= __CPROVER_pipe_count#1$wclk$8)
{-254} !(__CPROVER_pipe_count#1$wclk$8 >= __CPROVER_threads_exited#1$wclk$8)
{-255} !(__CPROVER_threads_exited#1$wclk$8 >= mutex#1$wclk$8)
{-256} !(mutex#1$wclk$8 >= pdev#1$wclk$8)
{-257} !(pdev#1$wclk$8 >= t1#1$wclk$8)
{-258} !(t1#1$wclk$8 >= mutex#2$wclk$8)
{-259} !(mutex#2$wclk$8 >= pdev#2$wclk$8)
{-260} !(pdev#2$wclk$8 >= __CPROVER_next_thread_id#2$wclk$8)
{-261} !(__CPROVER_next_thread_id#2$wclk$8 >= t1#2$wclk$8)
{-262} !(t1#2$wclk$8 >= t1$17$spwnclk$8)
{-263} !(t1$17$spwnclk$8 >= pdev#3$wclk$8)
{-264} !(pdev#3$wclk$8 >= pdev#4$rclk$8)
{-265} !(pdev#4$rclk$8 >= pdev#5$rclk$8)
{-266} !(pdev#5$rclk$8 >= mutex#3$rclk$8)
{-267} !(mutex#3$rclk$8 >= mutex#4$rclk$8)
{-268} !(mutex#4$rclk$8 >= mutex#5$wclk$8)
{-269} !(mutex#5$wclk$8 >= status!0@1#1$wclk$8)
{-270} !(status!0@1#1$wclk$8 >= t1#3$rclk$8)
{-271} !(t1#3$rclk$8 >= t1#4$rclk$8)
{-272} !(t1#4$rclk$8 >= __CPROVER_next_thread_id#3$rclk$8)
{-273} !(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_threads_exited#2$rclk$8)
{-274} !(__CPROVER_threads_exited#2$rclk$8 >= mutex#6$rclk$8)
{-275} !(mutex#6$rclk$8 >= mutex#7$rclk$8)
{-276} !(mutex#7$rclk$8 >= mutex#8$wclk$8)
{-277} !(mutex#8$wclk$8 >= pdev#6$wclk$8)
{-278} !(pdev#6$wclk$8 >= pdev#7$rclk$8)
{-279} !(pdev#7$rclk$8 >= pdev#8$rclk$8)
{-280} mutex#9$rclk$8 == mutex#12$wclk$8
{-281} !(mutex#12$wclk$8 >= pdev#9$wclk$8)
{-282} !(pdev#9$wclk$8 >= pdev#10$rclk$8)
{-283} !(pdev#10$rclk$8 >= pdev#11$rclk$8)
{-284} !(pdev#11$rclk$8 >= mutex#13$rclk$8)
{-285} mutex#13$rclk$8 == mutex#15$wclk$8
{-286} !(mutex#15$wclk$8 >= __CPROVER_threads_exited#3$rclk$8)
{-287} !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8)
{-288} __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_rf2 || !\guard#1 || \guard#7
{-289} __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_rf0 || !\guard#1 || !\guard#3 || \guard#4 || \guard#5 || \guard#7
{-290} __CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf1 || !\guard#3 || \guard#4 || \guard#5
{-291} (\guard#1 || \guard#2) && !\guard#1 || !(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8) || !choice_rf3 || !\guard#1 || !\guard#3
{-292} (\guard#1 || \guard#2) && !\guard#1 || !(t1#3$rclk$8 >= t1#2$wclk$8) || !choice_rf5 || !\guard#1 || !\guard#3
{-293} (\guard#1 || \guard#2) && !\guard#1 || !(t1#4$rclk$8 >= t1#2$wclk$8) || !choice_rf7 || !\guard#1 || !\guard#3
{-294} !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf13 || \guard#1 || \guard#2
{-295} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#2$wclk$8) || !choice_rf22 || !\guard#3
{-296} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf17 || !\guard#3
{-297} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(mutex#9$rclk$8 >= mutex#2$wclk$8) || !choice_rf27
{-298} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#2$wclk$8) || !choice_rf31 || !\guard#1 || \guard#7
{-299} !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf9 || \guard#1 || \guard#2
{-300} !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf13 || \guard#1 || \guard#2
{-301} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf22 || !\guard#3 || \guard#1 || \guard#2
{-302} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf17 || !\guard#3 || \guard#1 || \guard#2
{-303} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf27 || \guard#1 || \guard#2
{-304} TRUE
{-305} !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf9 || \guard#1 || \guard#2
{-306} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf13 || !\guard#3 || \guard#1 || \guard#2
{-307} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf22 || !\guard#3
{-308} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf17 || !\guard#3
{-309} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf27 || !\guard#3
{-310} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf31 || !\guard#1 || !\guard#3 || \guard#7
{-311} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf9 || !\guard#3 || \guard#1 || \guard#2
{-312} TRUE
{-313} mutex#12$wclk$8 >= mutex#1$wclk$8 || !(mutex#4$rclk$8 >= mutex#1$wclk$8) || !choice_rf15 || \guard#1 || \guard#2
{-314} mutex#1$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#12$wclk$8) || !choice_rf22 || !\guard#1 || !\guard#3
{-315} mutex#12$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#1$wclk$8) || !choice_rf25 || !\guard#3
{-316} mutex#1$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#12$wclk$8) || !choice_rf17 || !\guard#1 || !\guard#3
{-317} mutex#12$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#1$wclk$8) || !choice_rf20 || !\guard#3
{-318} mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#1$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf27 || !\guard#1
{-319} mutex#1$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf31 || !\guard#1 || \guard#7
{-320} mutex#12$wclk$8 >= mutex#1$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#1$wclk$8) || !choice_rf35 || !\guard#1 || \guard#7
{-321} TRUE
{-322} mutex#12$wclk$8 >= mutex#1$wclk$8 || !(mutex#3$rclk$8 >= mutex#1$wclk$8) || !choice_rf11 || \guard#1 || \guard#2
{-323} mutex#15$wclk$8 >= mutex#1$wclk$8 || !(mutex#4$rclk$8 >= mutex#1$wclk$8) || !choice_rf16 || \guard#1 || \guard#2
{-324} TRUE
{-325} mutex#15$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#1$wclk$8) || !choice_rf26 || !\guard#3
{-326} mutex#1$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf22 || !\guard#1 || !\guard#3 || \guard#7
{-327} mutex#15$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#1$wclk$8) || !choice_rf21 || !\guard#3
{-328} mutex#1$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf17 || !\guard#1 || !\guard#3 || \guard#7
{-329} mutex#1$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf27 || !\guard#1 || \guard#7
{-330} mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#1$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf31 || !\guard#1 || \guard#7
{-331} mutex#15$wclk$8 >= mutex#1$wclk$8 || !(mutex#3$rclk$8 >= mutex#1$wclk$8) || !choice_rf12 || \guard#1 || \guard#2
{-332} TRUE
{-333} !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf14 || \guard#1 || \guard#2
{-334} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf23 || !\guard#3 || \guard#1 || \guard#2
{-335} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf18 || !\guard#3 || \guard#1 || \guard#2
{-336} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf28 || \guard#1 || \guard#2
{-337} TRUE
{-338} !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf10 || \guard#1 || \guard#2
{-339} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf14 || !\guard#3 || \guard#1 || \guard#2
{-340} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf23 || !\guard#3
{-341} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf18 || !\guard#3
{-342} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf28 || !\guard#3
{-343} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf32 || !\guard#1 || !\guard#3 || \guard#7
{-344} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf10 || !\guard#3 || \guard#1 || \guard#2
{-345} TRUE
{-346} mutex#12$wclk$8 >= mutex#2$wclk$8 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf15 || \guard#1 || \guard#2
{-347} mutex#2$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#12$wclk$8) || !choice_rf23 || !\guard#1 || !\guard#3
{-348} mutex#12$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#2$wclk$8) || !choice_rf25 || !\guard#3
{-349} mutex#2$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#12$wclk$8) || !choice_rf18 || !\guard#1 || !\guard#3
{-350} mutex#12$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf20 || !\guard#3
{-351} mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#2$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf28 || !\guard#1
{-352} mutex#2$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf32 || !\guard#1 || \guard#7
{-353} mutex#12$wclk$8 >= mutex#2$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#2$wclk$8) || !choice_rf35 || !\guard#1 || \guard#7
{-354} TRUE
{-355} mutex#12$wclk$8 >= mutex#2$wclk$8 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf11 || \guard#1 || \guard#2
{-356} mutex#15$wclk$8 >= mutex#2$wclk$8 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf16 || \guard#1 || \guard#2
{-357} TRUE
{-358} mutex#15$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#2$wclk$8) || !choice_rf26 || !\guard#3
{-359} mutex#2$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf23 || !\guard#1 || !\guard#3 || \guard#7
{-360} mutex#15$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf21 || !\guard#3
{-361} mutex#2$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf18 || !\guard#1 || !\guard#3 || \guard#7
{-362} mutex#2$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf28 || !\guard#1 || \guard#7
{-363} mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#2$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf32 || !\guard#1 || \guard#7
{-364} mutex#15$wclk$8 >= mutex#2$wclk$8 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf12 || \guard#1 || \guard#2
{-365} TRUE
{-366} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf24 || !\guard#3
{-367} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf19 || !\guard#3
{-368} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf29 || !\guard#3
{-369} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf33 || !\guard#1 || !\guard#3 || \guard#7
{-370} mutex#12$wclk$8 >= mutex#5$wclk$8 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf15 || \guard#1 || \guard#2
{-371} mutex#5$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#12$wclk$8) || !choice_rf24 || !\guard#1 || !\guard#3
{-372} mutex#12$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf25 || !\guard#3 || \guard#1 || \guard#2
{-373} mutex#5$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#12$wclk$8) || !choice_rf19 || !\guard#1 || !\guard#3
{-374} mutex#12$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf20 || !\guard#3 || \guard#1 || \guard#2
{-375} mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#5$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf29 || !\guard#1
{-376} mutex#5$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf33 || !\guard#1 || \guard#7
{-377} TRUE
{-378} mutex#12$wclk$8 >= mutex#5$wclk$8 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf11 || \guard#1 || \guard#2
{-379} mutex#15$wclk$8 >= mutex#5$wclk$8 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf16 || \guard#1 || \guard#2
{-380} mutex#5$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf24 || !\guard#1 || !\guard#3 || \guard#7
{-381} mutex#15$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf26 || !\guard#3 || \guard#1 || \guard#2
{-382} mutex#5$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf19 || !\guard#1 || !\guard#3 || \guard#7
{-383} mutex#15$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf21 || !\guard#3 || \guard#1 || \guard#2
{-384} mutex#5$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf29 || !\guard#1 || \guard#7
{-385} mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#5$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf33 || !\guard#1 || \guard#7
{-386} mutex#15$wclk$8 >= mutex#5$wclk$8 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf12 || \guard#1 || \guard#2
{-387} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf15 || !\guard#3 || \guard#1 || \guard#2
{-388} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf25 || !\guard#3
{-389} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf20 || !\guard#3
{-390} mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#8$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf30 || !\guard#1
{-391} mutex#8$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf34 || !\guard#1 || \guard#7
{-392} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf35 || !\guard#1 || !\guard#3 || \guard#7
{-393} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf11 || !\guard#3 || \guard#1 || \guard#2
{-394} mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf16 || !\guard#3 || \guard#1 || \guard#2
{-395} mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf26 || !\guard#3
{-396} mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf21 || !\guard#3
{-397} mutex#8$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf30 || !\guard#1 || \guard#7
{-398} mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#8$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf34 || !\guard#1 || \guard#7
{-399} mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf12 || !\guard#3 || \guard#1 || \guard#2
{-400} TRUE
{-401} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf25 || !\guard#1 || !\guard#3 || \guard#7
{-402} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf20 || !\guard#1 || !\guard#3 || \guard#7
{-403} mutex#13$rclk$8 == mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf35 || !\guard#1 || \guard#7
{-404} TRUE
{-405} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#2$wclk$8) || !choice_rf59 || !\guard#1
{-406} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#2$wclk$8) || !choice_rf54 || !\guard#1
{-407} !(pdev#4$rclk$8 >= pdev#2$wclk$8) || !choice_rf36 || \guard#1
{-408} !(pdev#5$rclk$8 >= pdev#2$wclk$8) || !choice_rf40 || \guard#1
{-409} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#2$wclk$8) || !choice_rf49 || !\guard#3
{-410} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#2$wclk$8) || !choice_rf44 || !\guard#3
{-411} TRUE
{-412} TRUE
{-413} !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf36 || \guard#1
{-414} !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf40 || \guard#1
{-415} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf49 || !\guard#3 || \guard#1
{-416} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf44 || !\guard#3 || \guard#1
{-417} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf59 || !\guard#1 || !\guard#3
{-418} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf54 || !\guard#1 || !\guard#3
{-419} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf36 || !\guard#3 || \guard#1
{-420} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf40 || !\guard#3 || \guard#1
{-421} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf49 || !\guard#3
{-422} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf44 || !\guard#3
{-423} pdev#9$wclk$8 >= pdev#1$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#1$wclk$8) || !choice_rf63 || !\guard#1
{-424} pdev#1$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf59 || !\guard#1
{-425} pdev#9$wclk$8 >= pdev#1$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#1$wclk$8) || !choice_rf58 || !\guard#1
{-426} pdev#1$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf54 || !\guard#1
{-427} pdev#9$wclk$8 >= pdev#1$wclk$8 || !(pdev#4$rclk$8 >= pdev#1$wclk$8) || !choice_rf39 || \guard#1
{-428} TRUE
{-429} pdev#9$wclk$8 >= pdev#1$wclk$8 || !(pdev#5$rclk$8 >= pdev#1$wclk$8) || !choice_rf43 || \guard#1
{-430} TRUE
{-431} pdev#9$wclk$8 >= pdev#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#1$wclk$8) || !choice_rf53 || !\guard#3
{-432} pdev#1$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf49 || !\guard#1 || !\guard#3
{-433} pdev#9$wclk$8 >= pdev#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#1$wclk$8) || !choice_rf48 || !\guard#3
{-434} pdev#1$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf44 || !\guard#1 || !\guard#3
{-435} TRUE
{-436} TRUE
{-437} !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf37 || \guard#1
{-438} !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf41 || \guard#1
{-439} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf50 || !\guard#3 || \guard#1
{-440} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf45 || !\guard#3 || \guard#1
{-441} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf60 || !\guard#1 || !\guard#3
{-442} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf55 || !\guard#1 || !\guard#3
{-443} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf37 || !\guard#3 || \guard#1
{-444} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf41 || !\guard#3 || \guard#1
{-445} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf50 || !\guard#3
{-446} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf45 || !\guard#3
{-447} pdev#9$wclk$8 >= pdev#2$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#2$wclk$8) || !choice_rf63 || !\guard#1
{-448} pdev#2$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf60 || !\guard#1
{-449} pdev#9$wclk$8 >= pdev#2$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#2$wclk$8) || !choice_rf58 || !\guard#1
{-450} pdev#2$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf55 || !\guard#1
{-451} pdev#9$wclk$8 >= pdev#2$wclk$8 || !(pdev#4$rclk$8 >= pdev#2$wclk$8) || !choice_rf39 || \guard#1
{-452} TRUE
{-453} pdev#9$wclk$8 >= pdev#2$wclk$8 || !(pdev#5$rclk$8 >= pdev#2$wclk$8) || !choice_rf43 || \guard#1
{-454} TRUE
{-455} pdev#9$wclk$8 >= pdev#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#2$wclk$8) || !choice_rf53 || !\guard#3
{-456} pdev#2$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf50 || !\guard#1 || !\guard#3
{-457} pdev#9$wclk$8 >= pdev#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#2$wclk$8) || !choice_rf48 || !\guard#3
{-458} pdev#2$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf45 || !\guard#1 || !\guard#3
{-459} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf61 || !\guard#1 || !\guard#3
{-460} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf56 || !\guard#1 || !\guard#3
{-461} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf38 || !\guard#3 || \guard#1
{-462} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf42 || !\guard#3 || \guard#1
{-463} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf51 || !\guard#3
{-464} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf46 || !\guard#3
{-465} TRUE
{-466} pdev#3$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf61 || !\guard#1
{-467} TRUE
{-468} pdev#3$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf56 || !\guard#1
{-469} pdev#9$wclk$8 >= pdev#3$wclk$8 || !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf39 || \guard#1
{-470} TRUE
{-471} pdev#9$wclk$8 >= pdev#3$wclk$8 || !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf43 || \guard#1
{-472} TRUE
{-473} pdev#9$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf53 || !\guard#3 || \guard#1
{-474} pdev#3$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf51 || !\guard#1 || !\guard#3
{-475} pdev#9$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf48 || !\guard#3 || \guard#1
{-476} pdev#3$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf46 || !\guard#1 || !\guard#3
{-477} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf63 || !\guard#1 || !\guard#3
{-478} pdev#6$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf62 || !\guard#1
{-479} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf58 || !\guard#1 || !\guard#3
{-480} pdev#6$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf57 || !\guard#1
{-481} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf39 || !\guard#3 || \guard#1
{-482} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf43 || !\guard#3 || \guard#1
{-483} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf53 || !\guard#3
{-484} pdev#6$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf52 || !\guard#1 || !\guard#3
{-485} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf48 || !\guard#3
{-486} pdev#6$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf47 || !\guard#1 || !\guard#3
|--------------------------
{1} (!\guard#1 && !\guard#2 || \guard#1) && \guard#3 && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) ==> (signed int)byte_extract_little_endian(mutex#6, 0l, char) == 0

file ./race-1_1-join_true-unreach-call.c line 8 function ldv_assert
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
{-21} return_value___VERIFIER_nondet_int!0@1#2 == nondet_symbol(symex::nondet1)
{-22} \guard#1 == !(return_value___VERIFIER_nondet_int!0@1#2 == 0)
{-23} thread!0@1#1 == &t1
{-24} attr!0@1#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
{-25} start_routine!0@1#1 == thread1
{-26} arg!0@1#1 == NULL
{-27} __CPROVER_next_thread_id#2 == 1ul
{-28} this_thread_id!0@1#2 == 1ul
{-29} t1#2 == 1ul
{-30} thread!1@0#1 == &t1
{-31} attr!1@0#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
{-32} start_routine!1@0#1 == thread1
{-33} arg!1@0#1 == NULL
{-34} __VERIFIER_nondet_int#return_value!1#1 == 0
{-35} pthread_mutex_destroy#return_value!1#1 == 0
{-36} __CPROVER_thread_id!1#1 == 0ul
{-37} pthread_join#return_value!1#1 == 0
{-38} __CPROVER_rounding_mode!1#1 == 0
{-39} pthread_mutex_init#return_value!1#1 == 0
{-40} module_init#return_value!1#1 == 0
{-41} pthread_mutex_lock#return_value!1#1 == 0
{-42} main#return_value!1#1 == 0
{-43} pthread_create#return_value!1#1 == 0
{-44} thread1#return_value!1#1 == NULL
{-45} pthread_mutex_unlock#return_value!1#1 == 0
{-46} pthread_create#return_value!0#1 == 0
{-47} module_init#return_value!0#1 == 0
{-48} module_init#return_value!0#2 == module_init#return_value!0#0
{-49} pthread_create#return_value!0#2 == pthread_create#return_value!0#0
{-50} pdev#3 == 3
{-51} expression!0@2#1 == (signed int)(pdev#5 == 3)
{-52} \guard#2 == (expression!0@2#1 == 0)
{-53} mutex!0@1#1 == &mutex
{-54} mutex#5 == byte_update_little_endian(mutex#4, 0l, -1, char)
{-55} pthread_mutex_destroy#return_value!0#1 == 0
{-56} module_init#return_value!0#3 == -1
{-57} pthread_mutex_destroy#return_value!0#2 == 0
{-58} module_init#return_value!0#4 == (\guard#1 ? 0 : -1)
{-59} pthread_create#return_value!0#3 == (\guard#1 ? 0 : pthread_create#return_value!0#2)
{-60} return_value___VERIFIER_nondet_int!0@1#4 == (\guard#1 ? return_value___VERIFIER_nondet_int!0@1#2 : return_value___VERIFIER_nondet_int!0@1#3)
{-61} return_value_module_init!0@1#2 == module_init#return_value!0#4
{-62} \guard#3 == (return_value_module_init!0@1#2 == 0)
{-63} thread!0@1#1 == t1#4
{-64} value_ptr!0@1#1 == &status!0@1
{-65} \guard#4 == !(__CPROVER_next_thread_id#3 >= thread!0@1#1)
{-66} pthread_join#return_value!0#1 == 3
{-67} pthread_join#return_value!0#2 == pthread_join#return_value!0#0
{-68} \guard#5 == (thread!0@1#1 == 0ul)
{-69} pthread_join#return_value!0#3 == 35
{-70} pthread_join#return_value!0#4 == pthread_join#return_value!0#2
{-71} pthread_join#return_value!0#5 == 0
{-72} pthread_join#return_value!0#6 == (\guard#5 ? 35 : 0)
{-73} pthread_join#return_value!0#7 == (\guard#4 ? 3 : pthread_join#return_value!0#6)
{-74} mutex!0@2#1 == &mutex
{-75} mutex#8 == byte_update_little_endian(mutex#7, 0l, -1, char)
{-76} pthread_mutex_destroy#return_value!0#3 == 0
{-77} pdev#6 == 5
{-78} expression!0@3#1 == (signed int)(pdev#8 == 5)
{-79} \guard#6 == (expression!0@3#1 == 0)
{-80} pthread_mutex_destroy#return_value!0#4 == 0
{-81} pthread_join#return_value!0#8 == pthread_join#return_value!0#7
{-82} main#return_value!0#1 == 0
{-83} return`!0#1 == 0
{-84} __CPROVER_thread_id!1#2 == this_thread_id!1@0#0
{-85} arg!1@1#1 == NULL
{-86} mutex!1@1#1 == &mutex
{-87} mutex#10 == mutex#9
{-88} mutex#11 == (\guard#1 ? mutex#10 : mutex#9)
{-89} mutex#12 == byte_update_little_endian(mutex#11, 0l, 1, char)
{-90} pthread_mutex_lock#return_value!1#2 == 0
{-91} pdev#9 == 6
{-92} expression!1@1#1 == (signed int)(pdev#11 == 6)
{-93} \guard#7 == (expression!1@1#1 == 0)
{-94} mutex!1@1#1 == &mutex
{-95} mutex#14 == mutex#13
{-96} mutex#15 == byte_update_little_endian(mutex#14, 0l, 0, char)
{-97} pthread_mutex_unlock#return_value!1#2 == 0
{-98} thread1#return_value!1#2 == NULL
{-99} __CPROVER_threads_exited#4 == __CPROVER_threads_exited#3 WITH [(signed long int)this_thread_id!1@0#0:=TRUE]
{-100} __CPROVER_threads_exited#2 == __CPROVER_threads_exited#1 || !choice_rf0
{-101} byte_extract_little_endian(mutex#10, 0l, char) == 0 && __CPROVER_threads_exited#2 == __CPROVER_threads_exited#4 && !\guard#7 && \guard#1 || !choice_rf1
{-102} !(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#2$rclk$8) || !choice_rf1
{-103} (\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf0 || choice_rf1 || \guard#4 || \guard#5
{-104} __CPROVER_threads_exited#3 == __CPROVER_threads_exited#1 || !choice_rf2
{-105} !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#3$rclk$8) || !choice_rf2
{-106} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf2 || \guard#7
{-107} __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#1 || !choice_rf3
{-108} __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#2 && \guard#1 || !choice_rf4
{-109} (\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf3 || choice_rf4
{-110} t1#3 == t1#1 || !choice_rf5
{-111} t1#3 == t1#2 && \guard#1 || !choice_rf6
{-112} (\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf5 || choice_rf6
{-113} t1#4 == t1#1 || !choice_rf7
{-114} t1#4 == t1#2 && \guard#1 || !choice_rf8
{-115} (\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf7 || choice_rf8
{-116} mutex#3 == mutex#1 || !choice_rf9
{-117} mutex#3 == mutex#2 || !choice_rf10
{-118} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#3 == mutex#12 && \guard#1 || !choice_rf11
{-119} !(mutex#12$wclk$8 >= mutex#3$rclk$8) || !choice_rf11
{-120} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#3 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf12
{-121} !(mutex#15$wclk$8 >= mutex#3$rclk$8) || !choice_rf12
{-122} choice_rf10 || choice_rf11 || choice_rf12 || choice_rf9 || \guard#1 || \guard#2
{-123} mutex#4 == mutex#1 || !choice_rf13
{-124} mutex#4 == mutex#2 || !choice_rf14
{-125} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#4 == mutex#12 && \guard#1 || !choice_rf15
{-126} !(mutex#12$wclk$8 >= mutex#4$rclk$8) || !choice_rf15
{-127} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#4 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf16
{-128} !(mutex#15$wclk$8 >= mutex#4$rclk$8) || !choice_rf16
{-129} choice_rf13 || choice_rf14 || choice_rf15 || choice_rf16 || \guard#1 || \guard#2
{-130} mutex#6 == mutex#1 || !choice_rf17
{-131} mutex#6 == mutex#2 || !choice_rf18
{-132} mutex#6 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf19
{-133} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#6 == mutex#12 && \guard#1 || !choice_rf20
{-134} !(mutex#12$wclk$8 >= mutex#6$rclk$8) || !choice_rf20
{-135} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#6 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf21
{-136} !(mutex#15$wclk$8 >= mutex#6$rclk$8) || !choice_rf21
{-137} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf17 || choice_rf18 || choice_rf19 || choice_rf20 || choice_rf21
{-138} mutex#7 == mutex#1 || !choice_rf22
{-139} mutex#7 == mutex#2 || !choice_rf23
{-140} mutex#7 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf24
{-141} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#7 == mutex#12 && \guard#1 || !choice_rf25
{-142} !(mutex#12$wclk$8 >= mutex#7$rclk$8) || !choice_rf25
{-143} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#7 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf26
{-144} !(mutex#15$wclk$8 >= mutex#7$rclk$8) || !choice_rf26
{-145} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf22 || choice_rf23 || choice_rf24 || choice_rf25 || choice_rf26
{-146} mutex#9 == mutex#1 || !choice_rf27
{-147} !(mutex#1$wclk$8 >= mutex#9$rclk$8) || !choice_rf27
{-148} mutex#9 == mutex#2 || !choice_rf28
{-149} !(mutex#2$wclk$8 >= mutex#9$rclk$8) || !choice_rf28
{-150} mutex#9 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf29
{-151} !(mutex#5$wclk$8 >= mutex#9$rclk$8) || !choice_rf29
{-152} mutex#9 == mutex#8 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf30
{-153} !(mutex#8$wclk$8 >= mutex#9$rclk$8) || !choice_rf30
{-154} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || choice_rf27 || choice_rf28 || choice_rf29 || choice_rf30
{-155} mutex#13 == mutex#1 || !choice_rf31
{-156} !(mutex#1$wclk$8 >= mutex#13$rclk$8) || !choice_rf31
{-157} mutex#13 == mutex#2 || !choice_rf32
{-158} !(mutex#2$wclk$8 >= mutex#13$rclk$8) || !choice_rf32
{-159} mutex#13 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf33
{-160} !(mutex#5$wclk$8 >= mutex#13$rclk$8) || !choice_rf33
{-161} mutex#13 == mutex#8 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf34
{-162} !(mutex#8$wclk$8 >= mutex#13$rclk$8) || !choice_rf34
{-163} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#13 == mutex#12 && \guard#1 || !choice_rf35
{-164} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf31 || choice_rf32 || choice_rf33 || choice_rf34 || choice_rf35 || \guard#7
{-165} pdev#4 == pdev#1 || !choice_rf36
{-166} pdev#4 == pdev#2 || !choice_rf37
{-167} pdev#4 == pdev#3 && !\guard#1 || !choice_rf38
{-168} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#4 == pdev#9 && \guard#1 || !choice_rf39
{-169} !(pdev#9$wclk$8 >= pdev#4$rclk$8) || !choice_rf39
{-170} choice_rf36 || choice_rf37 || choice_rf38 || choice_rf39 || \guard#1
{-171} pdev#5 == pdev#1 || !choice_rf40
{-172} pdev#5 == pdev#2 || !choice_rf41
{-173} pdev#5 == pdev#3 && !\guard#1 || !choice_rf42
{-174} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#5 == pdev#9 && \guard#1 || !choice_rf43
{-175} !(pdev#9$wclk$8 >= pdev#5$rclk$8) || !choice_rf43
{-176} choice_rf40 || choice_rf41 || choice_rf42 || choice_rf43 || \guard#1
{-177} pdev#7 == pdev#1 || !choice_rf44
{-178} pdev#7 == pdev#2 || !choice_rf45
{-179} pdev#7 == pdev#3 && !\guard#1 || !choice_rf46
{-180} pdev#7 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf47
{-181} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#7 == pdev#9 && \guard#1 || !choice_rf48
{-182} !(pdev#9$wclk$8 >= pdev#7$rclk$8) || !choice_rf48
{-183} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf44 || choice_rf45 || choice_rf46 || choice_rf47 || choice_rf48
{-184} pdev#8 == pdev#1 || !choice_rf49
{-185} pdev#8 == pdev#2 || !choice_rf50
{-186} pdev#8 == pdev#3 && !\guard#1 || !choice_rf51
{-187} pdev#8 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf52
{-188} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#8 == pdev#9 && \guard#1 || !choice_rf53
{-189} !(pdev#9$wclk$8 >= pdev#8$rclk$8) || !choice_rf53
{-190} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf49 || choice_rf50 || choice_rf51 || choice_rf52 || choice_rf53
{-191} pdev#10 == pdev#1 || !choice_rf54
{-192} !(pdev#1$wclk$8 >= pdev#10$rclk$8) || !choice_rf54
{-193} pdev#10 == pdev#2 || !choice_rf55
{-194} !(pdev#2$wclk$8 >= pdev#10$rclk$8) || !choice_rf55
{-195} pdev#10 == pdev#3 && !\guard#1 || !choice_rf56
{-196} !(pdev#3$wclk$8 >= pdev#10$rclk$8) || !choice_rf56
{-197} pdev#10 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf57
{-198} !(pdev#6$wclk$8 >= pdev#10$rclk$8) || !choice_rf57
{-199} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#10 == pdev#9 && \guard#1 || !choice_rf58
{-200} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf54 || choice_rf55 || choice_rf56 || choice_rf57 || choice_rf58
{-201} pdev#11 == pdev#1 || !choice_rf59
{-202} !(pdev#1$wclk$8 >= pdev#11$rclk$8) || !choice_rf59
{-203} pdev#11 == pdev#2 || !choice_rf60
{-204} !(pdev#2$wclk$8 >= pdev#11$rclk$8) || !choice_rf60
{-205} pdev#11 == pdev#3 && !\guard#1 || !choice_rf61
{-206} !(pdev#3$wclk$8 >= pdev#11$rclk$8) || !choice_rf61
{-207} pdev#11 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf62
{-208} !(pdev#6$wclk$8 >= pdev#11$rclk$8) || !choice_rf62
{-209} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#11 == pdev#9 && \guard#1 || !choice_rf63
{-210} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf59 || choice_rf60 || choice_rf61 || choice_rf62 || choice_rf63
{-211} !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_ws-ext64
{-212} !(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8) || choice_ws-ext64
{-213} !(mutex#1$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext65
{-214} !(mutex#12$wclk$8 >= mutex#1$wclk$8) || choice_ws-ext65
{-215} !(mutex#1$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext66
{-216} !(mutex#15$wclk$8 >= mutex#1$wclk$8) || choice_ws-ext66
{-217} !(mutex#2$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext67
{-218} !(mutex#12$wclk$8 >= mutex#2$wclk$8) || choice_ws-ext67
{-219} !(mutex#2$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext68
{-220} !(mutex#15$wclk$8 >= mutex#2$wclk$8) || choice_ws-ext68
{-221} !(mutex#5$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext69
{-222} !(mutex#12$wclk$8 >= mutex#5$wclk$8) || choice_ws-ext69
{-223} !(mutex#5$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext70
{-224} !(mutex#15$wclk$8 >= mutex#5$wclk$8) || choice_ws-ext70
{-225} !(mutex#8$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext71
{-226} !(mutex#12$wclk$8 >= mutex#8$wclk$8) || choice_ws-ext71
{-227} !(mutex#8$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext72
{-228} !(mutex#15$wclk$8 >= mutex#8$wclk$8) || choice_ws-ext72
{-229} !(pdev#1$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext73
{-230} !(pdev#9$wclk$8 >= pdev#1$wclk$8) || choice_ws-ext73
{-231} !(pdev#2$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext74
{-232} !(pdev#9$wclk$8 >= pdev#2$wclk$8) || choice_ws-ext74
{-233} !(pdev#3$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext75
{-234} !(pdev#9$wclk$8 >= pdev#3$wclk$8) || choice_ws-ext75
{-235} !(pdev#6$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext76
{-236} !(pdev#9$wclk$8 >= pdev#6$wclk$8) || choice_ws-ext76
{-237} !(t1$17$spwnclk$8 >= mutex#9$rclk$8)
{-238} !(t1$17$spwnclk$8 >= mutex#12$wclk$8)
{-239} !(t1$17$spwnclk$8 >= pdev#9$wclk$8)
{-240} !(t1$17$spwnclk$8 >= pdev#10$rclk$8)
{-241} !(t1$17$spwnclk$8 >= pdev#11$rclk$8)
{-242} !(t1$17$spwnclk$8 >= mutex#13$rclk$8)
{-243} !(t1$17$spwnclk$8 >= mutex#15$wclk$8)
{-244} !(t1$17$spwnclk$8 >= __CPROVER_threads_exited#3$rclk$8)
{-245} !(t1$17$spwnclk$8 >= __CPROVER_threads_exited#4$wclk$8)
{-246} !(status!0@1$wclk$8 >= __CPROVER_dead_object#1$wclk$8)
{-247} !(__CPROVER_dead_object#1$wclk$8 >= __CPROVER_deallocated#1$wclk$8)
{-248} !(__CPROVER_deallocated#1$wclk$8 >= __CPROVER_malloc_is_new_array#1$wclk$8)
{-249} !(__CPROVER_malloc_is_new_array#1$wclk$8 >= __CPROVER_malloc_object#1$wclk$8)
{-250} !(__CPROVER_malloc_object#1$wclk$8 >= __CPROVER_malloc_size#1$wclk$8)
{-251} !(__CPROVER_malloc_size#1$wclk$8 >= __CPROVER_memory_leak#1$wclk$8)
{-252} !(__CPROVER_memory_leak#1$wclk$8 >= __CPROVER_next_thread_id#1$wclk$8)
{-253} !(__CPROVER_next_thread_id#1$wclk$8 >= __CPROVER_pipe_count#1$wclk$8)
{-254} !(__CPROVER_pipe_count#1$wclk$8 >= __CPROVER_threads_exited#1$wclk$8)
{-255} !(__CPROVER_threads_exited#1$wclk$8 >= mutex#1$wclk$8)
{-256} !(mutex#1$wclk$8 >= pdev#1$wclk$8)
{-257} !(pdev#1$wclk$8 >= t1#1$wclk$8)
{-258} !(t1#1$wclk$8 >= mutex#2$wclk$8)
{-259} !(mutex#2$wclk$8 >= pdev#2$wclk$8)
{-260} !(pdev#2$wclk$8 >= __CPROVER_next_thread_id#2$wclk$8)
{-261} !(__CPROVER_next_thread_id#2$wclk$8 >= t1#2$wclk$8)
{-262} !(t1#2$wclk$8 >= t1$17$spwnclk$8)
{-263} !(t1$17$spwnclk$8 >= pdev#3$wclk$8)
{-264} !(pdev#3$wclk$8 >= pdev#4$rclk$8)
{-265} !(pdev#4$rclk$8 >= pdev#5$rclk$8)
{-266} !(pdev#5$rclk$8 >= mutex#3$rclk$8)
{-267} !(mutex#3$rclk$8 >= mutex#4$rclk$8)
{-268} !(mutex#4$rclk$8 >= mutex#5$wclk$8)
{-269} !(mutex#5$wclk$8 >= status!0@1#1$wclk$8)
{-270} !(status!0@1#1$wclk$8 >= t1#3$rclk$8)
{-271} !(t1#3$rclk$8 >= t1#4$rclk$8)
{-272} !(t1#4$rclk$8 >= __CPROVER_next_thread_id#3$rclk$8)
{-273} !(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_threads_exited#2$rclk$8)
{-274} !(__CPROVER_threads_exited#2$rclk$8 >= mutex#6$rclk$8)
{-275} !(mutex#6$rclk$8 >= mutex#7$rclk$8)
{-276} !(mutex#7$rclk$8 >= mutex#8$wclk$8)
{-277} !(mutex#8$wclk$8 >= pdev#6$wclk$8)
{-278} !(pdev#6$wclk$8 >= pdev#7$rclk$8)
{-279} !(pdev#7$rclk$8 >= pdev#8$rclk$8)
{-280} mutex#9$rclk$8 == mutex#12$wclk$8
{-281} !(mutex#12$wclk$8 >= pdev#9$wclk$8)
{-282} !(pdev#9$wclk$8 >= pdev#10$rclk$8)
{-283} !(pdev#10$rclk$8 >= pdev#11$rclk$8)
{-284} !(pdev#11$rclk$8 >= mutex#13$rclk$8)
{-285} mutex#13$rclk$8 == mutex#15$wclk$8
{-286} !(mutex#15$wclk$8 >= __CPROVER_threads_exited#3$rclk$8)
{-287} !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8)
{-288} __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_rf2 || !\guard#1 || \guard#7
{-289} __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_rf0 || !\guard#1 || !\guard#3 || \guard#4 || \guard#5 || \guard#7
{-290} __CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf1 || !\guard#3 || \guard#4 || \guard#5
{-291} (\guard#1 || \guard#2) && !\guard#1 || !(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8) || !choice_rf3 || !\guard#1 || !\guard#3
{-292} (\guard#1 || \guard#2) && !\guard#1 || !(t1#3$rclk$8 >= t1#2$wclk$8) || !choice_rf5 || !\guard#1 || !\guard#3
{-293} (\guard#1 || \guard#2) && !\guard#1 || !(t1#4$rclk$8 >= t1#2$wclk$8) || !choice_rf7 || !\guard#1 || !\guard#3
{-294} !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf13 || \guard#1 || \guard#2
{-295} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#2$wclk$8) || !choice_rf22 || !\guard#3
{-296} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf17 || !\guard#3
{-297} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(mutex#9$rclk$8 >= mutex#2$wclk$8) || !choice_rf27
{-298} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#2$wclk$8) || !choice_rf31 || !\guard#1 || \guard#7
{-299} !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf9 || \guard#1 || \guard#2
{-300} !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf13 || \guard#1 || \guard#2
{-301} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf22 || !\guard#3 || \guard#1 || \guard#2
{-302} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf17 || !\guard#3 || \guard#1 || \guard#2
{-303} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf27 || \guard#1 || \guard#2
{-304} TRUE
{-305} !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf9 || \guard#1 || \guard#2
{-306} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf13 || !\guard#3 || \guard#1 || \guard#2
{-307} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf22 || !\guard#3
{-308} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf17 || !\guard#3
{-309} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf27 || !\guard#3
{-310} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf31 || !\guard#1 || !\guard#3 || \guard#7
{-311} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf9 || !\guard#3 || \guard#1 || \guard#2
{-312} TRUE
{-313} mutex#12$wclk$8 >= mutex#1$wclk$8 || !(mutex#4$rclk$8 >= mutex#1$wclk$8) || !choice_rf15 || \guard#1 || \guard#2
{-314} mutex#1$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#12$wclk$8) || !choice_rf22 || !\guard#1 || !\guard#3
{-315} mutex#12$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#1$wclk$8) || !choice_rf25 || !\guard#3
{-316} mutex#1$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#12$wclk$8) || !choice_rf17 || !\guard#1 || !\guard#3
{-317} mutex#12$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#1$wclk$8) || !choice_rf20 || !\guard#3
{-318} mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#1$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf27 || !\guard#1
{-319} mutex#1$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf31 || !\guard#1 || \guard#7
{-320} mutex#12$wclk$8 >= mutex#1$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#1$wclk$8) || !choice_rf35 || !\guard#1 || \guard#7
{-321} TRUE
{-322} mutex#12$wclk$8 >= mutex#1$wclk$8 || !(mutex#3$rclk$8 >= mutex#1$wclk$8) || !choice_rf11 || \guard#1 || \guard#2
{-323} mutex#15$wclk$8 >= mutex#1$wclk$8 || !(mutex#4$rclk$8 >= mutex#1$wclk$8) || !choice_rf16 || \guard#1 || \guard#2
{-324} TRUE
{-325} mutex#15$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#1$wclk$8) || !choice_rf26 || !\guard#3
{-326} mutex#1$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf22 || !\guard#1 || !\guard#3 || \guard#7
{-327} mutex#15$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#1$wclk$8) || !choice_rf21 || !\guard#3
{-328} mutex#1$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf17 || !\guard#1 || !\guard#3 || \guard#7
{-329} mutex#1$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf27 || !\guard#1 || \guard#7
{-330} mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#1$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf31 || !\guard#1 || \guard#7
{-331} mutex#15$wclk$8 >= mutex#1$wclk$8 || !(mutex#3$rclk$8 >= mutex#1$wclk$8) || !choice_rf12 || \guard#1 || \guard#2
{-332} TRUE
{-333} !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf14 || \guard#1 || \guard#2
{-334} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf23 || !\guard#3 || \guard#1 || \guard#2
{-335} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf18 || !\guard#3 || \guard#1 || \guard#2
{-336} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf28 || \guard#1 || \guard#2
{-337} TRUE
{-338} !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf10 || \guard#1 || \guard#2
{-339} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf14 || !\guard#3 || \guard#1 || \guard#2
{-340} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf23 || !\guard#3
{-341} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf18 || !\guard#3
{-342} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf28 || !\guard#3
{-343} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf32 || !\guard#1 || !\guard#3 || \guard#7
{-344} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf10 || !\guard#3 || \guard#1 || \guard#2
{-345} TRUE
{-346} mutex#12$wclk$8 >= mutex#2$wclk$8 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf15 || \guard#1 || \guard#2
{-347} mutex#2$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#12$wclk$8) || !choice_rf23 || !\guard#1 || !\guard#3
{-348} mutex#12$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#2$wclk$8) || !choice_rf25 || !\guard#3
{-349} mutex#2$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#12$wclk$8) || !choice_rf18 || !\guard#1 || !\guard#3
{-350} mutex#12$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf20 || !\guard#3
{-351} mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#2$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf28 || !\guard#1
{-352} mutex#2$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf32 || !\guard#1 || \guard#7
{-353} mutex#12$wclk$8 >= mutex#2$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#2$wclk$8) || !choice_rf35 || !\guard#1 || \guard#7
{-354} TRUE
{-355} mutex#12$wclk$8 >= mutex#2$wclk$8 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf11 || \guard#1 || \guard#2
{-356} mutex#15$wclk$8 >= mutex#2$wclk$8 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf16 || \guard#1 || \guard#2
{-357} TRUE
{-358} mutex#15$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#2$wclk$8) || !choice_rf26 || !\guard#3
{-359} mutex#2$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf23 || !\guard#1 || !\guard#3 || \guard#7
{-360} mutex#15$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf21 || !\guard#3
{-361} mutex#2$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf18 || !\guard#1 || !\guard#3 || \guard#7
{-362} mutex#2$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf28 || !\guard#1 || \guard#7
{-363} mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#2$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf32 || !\guard#1 || \guard#7
{-364} mutex#15$wclk$8 >= mutex#2$wclk$8 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf12 || \guard#1 || \guard#2
{-365} TRUE
{-366} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf24 || !\guard#3
{-367} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf19 || !\guard#3
{-368} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf29 || !\guard#3
{-369} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf33 || !\guard#1 || !\guard#3 || \guard#7
{-370} mutex#12$wclk$8 >= mutex#5$wclk$8 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf15 || \guard#1 || \guard#2
{-371} mutex#5$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#12$wclk$8) || !choice_rf24 || !\guard#1 || !\guard#3
{-372} mutex#12$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf25 || !\guard#3 || \guard#1 || \guard#2
{-373} mutex#5$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#12$wclk$8) || !choice_rf19 || !\guard#1 || !\guard#3
{-374} mutex#12$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf20 || !\guard#3 || \guard#1 || \guard#2
{-375} mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#5$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf29 || !\guard#1
{-376} mutex#5$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf33 || !\guard#1 || \guard#7
{-377} TRUE
{-378} mutex#12$wclk$8 >= mutex#5$wclk$8 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf11 || \guard#1 || \guard#2
{-379} mutex#15$wclk$8 >= mutex#5$wclk$8 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf16 || \guard#1 || \guard#2
{-380} mutex#5$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf24 || !\guard#1 || !\guard#3 || \guard#7
{-381} mutex#15$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf26 || !\guard#3 || \guard#1 || \guard#2
{-382} mutex#5$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf19 || !\guard#1 || !\guard#3 || \guard#7
{-383} mutex#15$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf21 || !\guard#3 || \guard#1 || \guard#2
{-384} mutex#5$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf29 || !\guard#1 || \guard#7
{-385} mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#5$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf33 || !\guard#1 || \guard#7
{-386} mutex#15$wclk$8 >= mutex#5$wclk$8 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf12 || \guard#1 || \guard#2
{-387} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf15 || !\guard#3 || \guard#1 || \guard#2
{-388} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf25 || !\guard#3
{-389} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf20 || !\guard#3
{-390} mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#8$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf30 || !\guard#1
{-391} mutex#8$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf34 || !\guard#1 || \guard#7
{-392} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf35 || !\guard#1 || !\guard#3 || \guard#7
{-393} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf11 || !\guard#3 || \guard#1 || \guard#2
{-394} mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf16 || !\guard#3 || \guard#1 || \guard#2
{-395} mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf26 || !\guard#3
{-396} mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf21 || !\guard#3
{-397} mutex#8$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf30 || !\guard#1 || \guard#7
{-398} mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#8$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf34 || !\guard#1 || \guard#7
{-399} mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf12 || !\guard#3 || \guard#1 || \guard#2
{-400} TRUE
{-401} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf25 || !\guard#1 || !\guard#3 || \guard#7
{-402} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf20 || !\guard#1 || !\guard#3 || \guard#7
{-403} mutex#13$rclk$8 == mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf35 || !\guard#1 || \guard#7
{-404} TRUE
{-405} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#2$wclk$8) || !choice_rf59 || !\guard#1
{-406} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#2$wclk$8) || !choice_rf54 || !\guard#1
{-407} !(pdev#4$rclk$8 >= pdev#2$wclk$8) || !choice_rf36 || \guard#1
{-408} !(pdev#5$rclk$8 >= pdev#2$wclk$8) || !choice_rf40 || \guard#1
{-409} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#2$wclk$8) || !choice_rf49 || !\guard#3
{-410} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#2$wclk$8) || !choice_rf44 || !\guard#3
{-411} TRUE
{-412} TRUE
{-413} !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf36 || \guard#1
{-414} !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf40 || \guard#1
{-415} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf49 || !\guard#3 || \guard#1
{-416} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf44 || !\guard#3 || \guard#1
{-417} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf59 || !\guard#1 || !\guard#3
{-418} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf54 || !\guard#1 || !\guard#3
{-419} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf36 || !\guard#3 || \guard#1
{-420} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf40 || !\guard#3 || \guard#1
{-421} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf49 || !\guard#3
{-422} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf44 || !\guard#3
{-423} pdev#9$wclk$8 >= pdev#1$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#1$wclk$8) || !choice_rf63 || !\guard#1
{-424} pdev#1$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf59 || !\guard#1
{-425} pdev#9$wclk$8 >= pdev#1$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#1$wclk$8) || !choice_rf58 || !\guard#1
{-426} pdev#1$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf54 || !\guard#1
{-427} pdev#9$wclk$8 >= pdev#1$wclk$8 || !(pdev#4$rclk$8 >= pdev#1$wclk$8) || !choice_rf39 || \guard#1
{-428} TRUE
{-429} pdev#9$wclk$8 >= pdev#1$wclk$8 || !(pdev#5$rclk$8 >= pdev#1$wclk$8) || !choice_rf43 || \guard#1
{-430} TRUE
{-431} pdev#9$wclk$8 >= pdev#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#1$wclk$8) || !choice_rf53 || !\guard#3
{-432} pdev#1$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf49 || !\guard#1 || !\guard#3
{-433} pdev#9$wclk$8 >= pdev#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#1$wclk$8) || !choice_rf48 || !\guard#3
{-434} pdev#1$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf44 || !\guard#1 || !\guard#3
{-435} TRUE
{-436} TRUE
{-437} !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf37 || \guard#1
{-438} !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf41 || \guard#1
{-439} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf50 || !\guard#3 || \guard#1
{-440} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf45 || !\guard#3 || \guard#1
{-441} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf60 || !\guard#1 || !\guard#3
{-442} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf55 || !\guard#1 || !\guard#3
{-443} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf37 || !\guard#3 || \guard#1
{-444} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf41 || !\guard#3 || \guard#1
{-445} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf50 || !\guard#3
{-446} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf45 || !\guard#3
{-447} pdev#9$wclk$8 >= pdev#2$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#2$wclk$8) || !choice_rf63 || !\guard#1
{-448} pdev#2$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf60 || !\guard#1
{-449} pdev#9$wclk$8 >= pdev#2$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#2$wclk$8) || !choice_rf58 || !\guard#1
{-450} pdev#2$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf55 || !\guard#1
{-451} pdev#9$wclk$8 >= pdev#2$wclk$8 || !(pdev#4$rclk$8 >= pdev#2$wclk$8) || !choice_rf39 || \guard#1
{-452} TRUE
{-453} pdev#9$wclk$8 >= pdev#2$wclk$8 || !(pdev#5$rclk$8 >= pdev#2$wclk$8) || !choice_rf43 || \guard#1
{-454} TRUE
{-455} pdev#9$wclk$8 >= pdev#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#2$wclk$8) || !choice_rf53 || !\guard#3
{-456} pdev#2$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf50 || !\guard#1 || !\guard#3
{-457} pdev#9$wclk$8 >= pdev#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#2$wclk$8) || !choice_rf48 || !\guard#3
{-458} pdev#2$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf45 || !\guard#1 || !\guard#3
{-459} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf61 || !\guard#1 || !\guard#3
{-460} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf56 || !\guard#1 || !\guard#3
{-461} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf38 || !\guard#3 || \guard#1
{-462} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf42 || !\guard#3 || \guard#1
{-463} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf51 || !\guard#3
{-464} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf46 || !\guard#3
{-465} TRUE
{-466} pdev#3$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf61 || !\guard#1
{-467} TRUE
{-468} pdev#3$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf56 || !\guard#1
{-469} pdev#9$wclk$8 >= pdev#3$wclk$8 || !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf39 || \guard#1
{-470} TRUE
{-471} pdev#9$wclk$8 >= pdev#3$wclk$8 || !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf43 || \guard#1
{-472} TRUE
{-473} pdev#9$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf53 || !\guard#3 || \guard#1
{-474} pdev#3$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf51 || !\guard#1 || !\guard#3
{-475} pdev#9$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf48 || !\guard#3 || \guard#1
{-476} pdev#3$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf46 || !\guard#1 || !\guard#3
{-477} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf63 || !\guard#1 || !\guard#3
{-478} pdev#6$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf62 || !\guard#1
{-479} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf58 || !\guard#1 || !\guard#3
{-480} pdev#6$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf57 || !\guard#1
{-481} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf39 || !\guard#3 || \guard#1
{-482} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf43 || !\guard#3 || \guard#1
{-483} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf53 || !\guard#3
{-484} pdev#6$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf52 || !\guard#1 || !\guard#3
{-485} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf48 || !\guard#3
{-486} pdev#6$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf47 || !\guard#1 || !\guard#3
|--------------------------
{1} !((!\guard#1 && !\guard#2 || \guard#1) && \guard#3 && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#6)

file ./race-1_1-join_true-unreach-call.c line 8 function ldv_assert
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
{-21} return_value___VERIFIER_nondet_int!0@1#2 == nondet_symbol(symex::nondet1)
{-22} \guard#1 == !(return_value___VERIFIER_nondet_int!0@1#2 == 0)
{-23} thread!0@1#1 == &t1
{-24} attr!0@1#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
{-25} start_routine!0@1#1 == thread1
{-26} arg!0@1#1 == NULL
{-27} __CPROVER_next_thread_id#2 == 1ul
{-28} this_thread_id!0@1#2 == 1ul
{-29} t1#2 == 1ul
{-30} thread!1@0#1 == &t1
{-31} attr!1@0#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
{-32} start_routine!1@0#1 == thread1
{-33} arg!1@0#1 == NULL
{-34} __VERIFIER_nondet_int#return_value!1#1 == 0
{-35} pthread_mutex_destroy#return_value!1#1 == 0
{-36} __CPROVER_thread_id!1#1 == 0ul
{-37} pthread_join#return_value!1#1 == 0
{-38} __CPROVER_rounding_mode!1#1 == 0
{-39} pthread_mutex_init#return_value!1#1 == 0
{-40} module_init#return_value!1#1 == 0
{-41} pthread_mutex_lock#return_value!1#1 == 0
{-42} main#return_value!1#1 == 0
{-43} pthread_create#return_value!1#1 == 0
{-44} thread1#return_value!1#1 == NULL
{-45} pthread_mutex_unlock#return_value!1#1 == 0
{-46} pthread_create#return_value!0#1 == 0
{-47} module_init#return_value!0#1 == 0
{-48} module_init#return_value!0#2 == module_init#return_value!0#0
{-49} pthread_create#return_value!0#2 == pthread_create#return_value!0#0
{-50} pdev#3 == 3
{-51} expression!0@2#1 == (signed int)(pdev#5 == 3)
{-52} \guard#2 == (expression!0@2#1 == 0)
{-53} mutex!0@1#1 == &mutex
{-54} mutex#5 == byte_update_little_endian(mutex#4, 0l, -1, char)
{-55} pthread_mutex_destroy#return_value!0#1 == 0
{-56} module_init#return_value!0#3 == -1
{-57} pthread_mutex_destroy#return_value!0#2 == 0
{-58} module_init#return_value!0#4 == (\guard#1 ? 0 : -1)
{-59} pthread_create#return_value!0#3 == (\guard#1 ? 0 : pthread_create#return_value!0#2)
{-60} return_value___VERIFIER_nondet_int!0@1#4 == (\guard#1 ? return_value___VERIFIER_nondet_int!0@1#2 : return_value___VERIFIER_nondet_int!0@1#3)
{-61} return_value_module_init!0@1#2 == module_init#return_value!0#4
{-62} \guard#3 == (return_value_module_init!0@1#2 == 0)
{-63} thread!0@1#1 == t1#4
{-64} value_ptr!0@1#1 == &status!0@1
{-65} \guard#4 == !(__CPROVER_next_thread_id#3 >= thread!0@1#1)
{-66} pthread_join#return_value!0#1 == 3
{-67} pthread_join#return_value!0#2 == pthread_join#return_value!0#0
{-68} \guard#5 == (thread!0@1#1 == 0ul)
{-69} pthread_join#return_value!0#3 == 35
{-70} pthread_join#return_value!0#4 == pthread_join#return_value!0#2
{-71} pthread_join#return_value!0#5 == 0
{-72} pthread_join#return_value!0#6 == (\guard#5 ? 35 : 0)
{-73} pthread_join#return_value!0#7 == (\guard#4 ? 3 : pthread_join#return_value!0#6)
{-74} mutex!0@2#1 == &mutex
{-75} mutex#8 == byte_update_little_endian(mutex#7, 0l, -1, char)
{-76} pthread_mutex_destroy#return_value!0#3 == 0
{-77} pdev#6 == 5
{-78} expression!0@3#1 == (signed int)(pdev#8 == 5)
{-79} \guard#6 == (expression!0@3#1 == 0)
{-80} pthread_mutex_destroy#return_value!0#4 == 0
{-81} pthread_join#return_value!0#8 == pthread_join#return_value!0#7
{-82} main#return_value!0#1 == 0
{-83} return`!0#1 == 0
{-84} __CPROVER_thread_id!1#2 == this_thread_id!1@0#0
{-85} arg!1@1#1 == NULL
{-86} mutex!1@1#1 == &mutex
{-87} mutex#10 == mutex#9
{-88} mutex#11 == (\guard#1 ? mutex#10 : mutex#9)
{-89} mutex#12 == byte_update_little_endian(mutex#11, 0l, 1, char)
{-90} pthread_mutex_lock#return_value!1#2 == 0
{-91} pdev#9 == 6
{-92} expression!1@1#1 == (signed int)(pdev#11 == 6)
{-93} \guard#7 == (expression!1@1#1 == 0)
{-94} mutex!1@1#1 == &mutex
{-95} mutex#14 == mutex#13
{-96} mutex#15 == byte_update_little_endian(mutex#14, 0l, 0, char)
{-97} pthread_mutex_unlock#return_value!1#2 == 0
{-98} thread1#return_value!1#2 == NULL
{-99} __CPROVER_threads_exited#4 == __CPROVER_threads_exited#3 WITH [(signed long int)this_thread_id!1@0#0:=TRUE]
{-100} __CPROVER_threads_exited#2 == __CPROVER_threads_exited#1 || !choice_rf0
{-101} byte_extract_little_endian(mutex#10, 0l, char) == 0 && __CPROVER_threads_exited#2 == __CPROVER_threads_exited#4 && !\guard#7 && \guard#1 || !choice_rf1
{-102} !(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#2$rclk$8) || !choice_rf1
{-103} (\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf0 || choice_rf1 || \guard#4 || \guard#5
{-104} __CPROVER_threads_exited#3 == __CPROVER_threads_exited#1 || !choice_rf2
{-105} !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#3$rclk$8) || !choice_rf2
{-106} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf2 || \guard#7
{-107} __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#1 || !choice_rf3
{-108} __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#2 && \guard#1 || !choice_rf4
{-109} (\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf3 || choice_rf4
{-110} t1#3 == t1#1 || !choice_rf5
{-111} t1#3 == t1#2 && \guard#1 || !choice_rf6
{-112} (\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf5 || choice_rf6
{-113} t1#4 == t1#1 || !choice_rf7
{-114} t1#4 == t1#2 && \guard#1 || !choice_rf8
{-115} (\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf7 || choice_rf8
{-116} mutex#3 == mutex#1 || !choice_rf9
{-117} mutex#3 == mutex#2 || !choice_rf10
{-118} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#3 == mutex#12 && \guard#1 || !choice_rf11
{-119} !(mutex#12$wclk$8 >= mutex#3$rclk$8) || !choice_rf11
{-120} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#3 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf12
{-121} !(mutex#15$wclk$8 >= mutex#3$rclk$8) || !choice_rf12
{-122} choice_rf10 || choice_rf11 || choice_rf12 || choice_rf9 || \guard#1 || \guard#2
{-123} mutex#4 == mutex#1 || !choice_rf13
{-124} mutex#4 == mutex#2 || !choice_rf14
{-125} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#4 == mutex#12 && \guard#1 || !choice_rf15
{-126} !(mutex#12$wclk$8 >= mutex#4$rclk$8) || !choice_rf15
{-127} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#4 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf16
{-128} !(mutex#15$wclk$8 >= mutex#4$rclk$8) || !choice_rf16
{-129} choice_rf13 || choice_rf14 || choice_rf15 || choice_rf16 || \guard#1 || \guard#2
{-130} mutex#6 == mutex#1 || !choice_rf17
{-131} mutex#6 == mutex#2 || !choice_rf18
{-132} mutex#6 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf19
{-133} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#6 == mutex#12 && \guard#1 || !choice_rf20
{-134} !(mutex#12$wclk$8 >= mutex#6$rclk$8) || !choice_rf20
{-135} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#6 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf21
{-136} !(mutex#15$wclk$8 >= mutex#6$rclk$8) || !choice_rf21
{-137} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf17 || choice_rf18 || choice_rf19 || choice_rf20 || choice_rf21
{-138} mutex#7 == mutex#1 || !choice_rf22
{-139} mutex#7 == mutex#2 || !choice_rf23
{-140} mutex#7 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf24
{-141} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#7 == mutex#12 && \guard#1 || !choice_rf25
{-142} !(mutex#12$wclk$8 >= mutex#7$rclk$8) || !choice_rf25
{-143} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#7 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf26
{-144} !(mutex#15$wclk$8 >= mutex#7$rclk$8) || !choice_rf26
{-145} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf22 || choice_rf23 || choice_rf24 || choice_rf25 || choice_rf26
{-146} mutex#9 == mutex#1 || !choice_rf27
{-147} !(mutex#1$wclk$8 >= mutex#9$rclk$8) || !choice_rf27
{-148} mutex#9 == mutex#2 || !choice_rf28
{-149} !(mutex#2$wclk$8 >= mutex#9$rclk$8) || !choice_rf28
{-150} mutex#9 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf29
{-151} !(mutex#5$wclk$8 >= mutex#9$rclk$8) || !choice_rf29
{-152} mutex#9 == mutex#8 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf30
{-153} !(mutex#8$wclk$8 >= mutex#9$rclk$8) || !choice_rf30
{-154} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || choice_rf27 || choice_rf28 || choice_rf29 || choice_rf30
{-155} mutex#13 == mutex#1 || !choice_rf31
{-156} !(mutex#1$wclk$8 >= mutex#13$rclk$8) || !choice_rf31
{-157} mutex#13 == mutex#2 || !choice_rf32
{-158} !(mutex#2$wclk$8 >= mutex#13$rclk$8) || !choice_rf32
{-159} mutex#13 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf33
{-160} !(mutex#5$wclk$8 >= mutex#13$rclk$8) || !choice_rf33
{-161} mutex#13 == mutex#8 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf34
{-162} !(mutex#8$wclk$8 >= mutex#13$rclk$8) || !choice_rf34
{-163} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#13 == mutex#12 && \guard#1 || !choice_rf35
{-164} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf31 || choice_rf32 || choice_rf33 || choice_rf34 || choice_rf35 || \guard#7
{-165} pdev#4 == pdev#1 || !choice_rf36
{-166} pdev#4 == pdev#2 || !choice_rf37
{-167} pdev#4 == pdev#3 && !\guard#1 || !choice_rf38
{-168} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#4 == pdev#9 && \guard#1 || !choice_rf39
{-169} !(pdev#9$wclk$8 >= pdev#4$rclk$8) || !choice_rf39
{-170} choice_rf36 || choice_rf37 || choice_rf38 || choice_rf39 || \guard#1
{-171} pdev#5 == pdev#1 || !choice_rf40
{-172} pdev#5 == pdev#2 || !choice_rf41
{-173} pdev#5 == pdev#3 && !\guard#1 || !choice_rf42
{-174} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#5 == pdev#9 && \guard#1 || !choice_rf43
{-175} !(pdev#9$wclk$8 >= pdev#5$rclk$8) || !choice_rf43
{-176} choice_rf40 || choice_rf41 || choice_rf42 || choice_rf43 || \guard#1
{-177} pdev#7 == pdev#1 || !choice_rf44
{-178} pdev#7 == pdev#2 || !choice_rf45
{-179} pdev#7 == pdev#3 && !\guard#1 || !choice_rf46
{-180} pdev#7 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf47
{-181} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#7 == pdev#9 && \guard#1 || !choice_rf48
{-182} !(pdev#9$wclk$8 >= pdev#7$rclk$8) || !choice_rf48
{-183} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf44 || choice_rf45 || choice_rf46 || choice_rf47 || choice_rf48
{-184} pdev#8 == pdev#1 || !choice_rf49
{-185} pdev#8 == pdev#2 || !choice_rf50
{-186} pdev#8 == pdev#3 && !\guard#1 || !choice_rf51
{-187} pdev#8 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf52
{-188} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#8 == pdev#9 && \guard#1 || !choice_rf53
{-189} !(pdev#9$wclk$8 >= pdev#8$rclk$8) || !choice_rf53
{-190} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf49 || choice_rf50 || choice_rf51 || choice_rf52 || choice_rf53
{-191} pdev#10 == pdev#1 || !choice_rf54
{-192} !(pdev#1$wclk$8 >= pdev#10$rclk$8) || !choice_rf54
{-193} pdev#10 == pdev#2 || !choice_rf55
{-194} !(pdev#2$wclk$8 >= pdev#10$rclk$8) || !choice_rf55
{-195} pdev#10 == pdev#3 && !\guard#1 || !choice_rf56
{-196} !(pdev#3$wclk$8 >= pdev#10$rclk$8) || !choice_rf56
{-197} pdev#10 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf57
{-198} !(pdev#6$wclk$8 >= pdev#10$rclk$8) || !choice_rf57
{-199} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#10 == pdev#9 && \guard#1 || !choice_rf58
{-200} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf54 || choice_rf55 || choice_rf56 || choice_rf57 || choice_rf58
{-201} pdev#11 == pdev#1 || !choice_rf59
{-202} !(pdev#1$wclk$8 >= pdev#11$rclk$8) || !choice_rf59
{-203} pdev#11 == pdev#2 || !choice_rf60
{-204} !(pdev#2$wclk$8 >= pdev#11$rclk$8) || !choice_rf60
{-205} pdev#11 == pdev#3 && !\guard#1 || !choice_rf61
{-206} !(pdev#3$wclk$8 >= pdev#11$rclk$8) || !choice_rf61
{-207} pdev#11 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf62
{-208} !(pdev#6$wclk$8 >= pdev#11$rclk$8) || !choice_rf62
{-209} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#11 == pdev#9 && \guard#1 || !choice_rf63
{-210} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf59 || choice_rf60 || choice_rf61 || choice_rf62 || choice_rf63
{-211} !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_ws-ext64
{-212} !(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8) || choice_ws-ext64
{-213} !(mutex#1$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext65
{-214} !(mutex#12$wclk$8 >= mutex#1$wclk$8) || choice_ws-ext65
{-215} !(mutex#1$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext66
{-216} !(mutex#15$wclk$8 >= mutex#1$wclk$8) || choice_ws-ext66
{-217} !(mutex#2$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext67
{-218} !(mutex#12$wclk$8 >= mutex#2$wclk$8) || choice_ws-ext67
{-219} !(mutex#2$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext68
{-220} !(mutex#15$wclk$8 >= mutex#2$wclk$8) || choice_ws-ext68
{-221} !(mutex#5$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext69
{-222} !(mutex#12$wclk$8 >= mutex#5$wclk$8) || choice_ws-ext69
{-223} !(mutex#5$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext70
{-224} !(mutex#15$wclk$8 >= mutex#5$wclk$8) || choice_ws-ext70
{-225} !(mutex#8$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext71
{-226} !(mutex#12$wclk$8 >= mutex#8$wclk$8) || choice_ws-ext71
{-227} !(mutex#8$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext72
{-228} !(mutex#15$wclk$8 >= mutex#8$wclk$8) || choice_ws-ext72
{-229} !(pdev#1$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext73
{-230} !(pdev#9$wclk$8 >= pdev#1$wclk$8) || choice_ws-ext73
{-231} !(pdev#2$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext74
{-232} !(pdev#9$wclk$8 >= pdev#2$wclk$8) || choice_ws-ext74
{-233} !(pdev#3$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext75
{-234} !(pdev#9$wclk$8 >= pdev#3$wclk$8) || choice_ws-ext75
{-235} !(pdev#6$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext76
{-236} !(pdev#9$wclk$8 >= pdev#6$wclk$8) || choice_ws-ext76
{-237} !(t1$17$spwnclk$8 >= mutex#9$rclk$8)
{-238} !(t1$17$spwnclk$8 >= mutex#12$wclk$8)
{-239} !(t1$17$spwnclk$8 >= pdev#9$wclk$8)
{-240} !(t1$17$spwnclk$8 >= pdev#10$rclk$8)
{-241} !(t1$17$spwnclk$8 >= pdev#11$rclk$8)
{-242} !(t1$17$spwnclk$8 >= mutex#13$rclk$8)
{-243} !(t1$17$spwnclk$8 >= mutex#15$wclk$8)
{-244} !(t1$17$spwnclk$8 >= __CPROVER_threads_exited#3$rclk$8)
{-245} !(t1$17$spwnclk$8 >= __CPROVER_threads_exited#4$wclk$8)
{-246} !(status!0@1$wclk$8 >= __CPROVER_dead_object#1$wclk$8)
{-247} !(__CPROVER_dead_object#1$wclk$8 >= __CPROVER_deallocated#1$wclk$8)
{-248} !(__CPROVER_deallocated#1$wclk$8 >= __CPROVER_malloc_is_new_array#1$wclk$8)
{-249} !(__CPROVER_malloc_is_new_array#1$wclk$8 >= __CPROVER_malloc_object#1$wclk$8)
{-250} !(__CPROVER_malloc_object#1$wclk$8 >= __CPROVER_malloc_size#1$wclk$8)
{-251} !(__CPROVER_malloc_size#1$wclk$8 >= __CPROVER_memory_leak#1$wclk$8)
{-252} !(__CPROVER_memory_leak#1$wclk$8 >= __CPROVER_next_thread_id#1$wclk$8)
{-253} !(__CPROVER_next_thread_id#1$wclk$8 >= __CPROVER_pipe_count#1$wclk$8)
{-254} !(__CPROVER_pipe_count#1$wclk$8 >= __CPROVER_threads_exited#1$wclk$8)
{-255} !(__CPROVER_threads_exited#1$wclk$8 >= mutex#1$wclk$8)
{-256} !(mutex#1$wclk$8 >= pdev#1$wclk$8)
{-257} !(pdev#1$wclk$8 >= t1#1$wclk$8)
{-258} !(t1#1$wclk$8 >= mutex#2$wclk$8)
{-259} !(mutex#2$wclk$8 >= pdev#2$wclk$8)
{-260} !(pdev#2$wclk$8 >= __CPROVER_next_thread_id#2$wclk$8)
{-261} !(__CPROVER_next_thread_id#2$wclk$8 >= t1#2$wclk$8)
{-262} !(t1#2$wclk$8 >= t1$17$spwnclk$8)
{-263} !(t1$17$spwnclk$8 >= pdev#3$wclk$8)
{-264} !(pdev#3$wclk$8 >= pdev#4$rclk$8)
{-265} !(pdev#4$rclk$8 >= pdev#5$rclk$8)
{-266} !(pdev#5$rclk$8 >= mutex#3$rclk$8)
{-267} !(mutex#3$rclk$8 >= mutex#4$rclk$8)
{-268} !(mutex#4$rclk$8 >= mutex#5$wclk$8)
{-269} !(mutex#5$wclk$8 >= status!0@1#1$wclk$8)
{-270} !(status!0@1#1$wclk$8 >= t1#3$rclk$8)
{-271} !(t1#3$rclk$8 >= t1#4$rclk$8)
{-272} !(t1#4$rclk$8 >= __CPROVER_next_thread_id#3$rclk$8)
{-273} !(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_threads_exited#2$rclk$8)
{-274} !(__CPROVER_threads_exited#2$rclk$8 >= mutex#6$rclk$8)
{-275} !(mutex#6$rclk$8 >= mutex#7$rclk$8)
{-276} !(mutex#7$rclk$8 >= mutex#8$wclk$8)
{-277} !(mutex#8$wclk$8 >= pdev#6$wclk$8)
{-278} !(pdev#6$wclk$8 >= pdev#7$rclk$8)
{-279} !(pdev#7$rclk$8 >= pdev#8$rclk$8)
{-280} mutex#9$rclk$8 == mutex#12$wclk$8
{-281} !(mutex#12$wclk$8 >= pdev#9$wclk$8)
{-282} !(pdev#9$wclk$8 >= pdev#10$rclk$8)
{-283} !(pdev#10$rclk$8 >= pdev#11$rclk$8)
{-284} !(pdev#11$rclk$8 >= mutex#13$rclk$8)
{-285} mutex#13$rclk$8 == mutex#15$wclk$8
{-286} !(mutex#15$wclk$8 >= __CPROVER_threads_exited#3$rclk$8)
{-287} !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8)
{-288} __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_rf2 || !\guard#1 || \guard#7
{-289} __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_rf0 || !\guard#1 || !\guard#3 || \guard#4 || \guard#5 || \guard#7
{-290} __CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf1 || !\guard#3 || \guard#4 || \guard#5
{-291} (\guard#1 || \guard#2) && !\guard#1 || !(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8) || !choice_rf3 || !\guard#1 || !\guard#3
{-292} (\guard#1 || \guard#2) && !\guard#1 || !(t1#3$rclk$8 >= t1#2$wclk$8) || !choice_rf5 || !\guard#1 || !\guard#3
{-293} (\guard#1 || \guard#2) && !\guard#1 || !(t1#4$rclk$8 >= t1#2$wclk$8) || !choice_rf7 || !\guard#1 || !\guard#3
{-294} !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf13 || \guard#1 || \guard#2
{-295} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#2$wclk$8) || !choice_rf22 || !\guard#3
{-296} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf17 || !\guard#3
{-297} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(mutex#9$rclk$8 >= mutex#2$wclk$8) || !choice_rf27
{-298} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#2$wclk$8) || !choice_rf31 || !\guard#1 || \guard#7
{-299} !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf9 || \guard#1 || \guard#2
{-300} !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf13 || \guard#1 || \guard#2
{-301} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf22 || !\guard#3 || \guard#1 || \guard#2
{-302} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf17 || !\guard#3 || \guard#1 || \guard#2
{-303} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf27 || \guard#1 || \guard#2
{-304} TRUE
{-305} !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf9 || \guard#1 || \guard#2
{-306} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf13 || !\guard#3 || \guard#1 || \guard#2
{-307} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf22 || !\guard#3
{-308} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf17 || !\guard#3
{-309} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf27 || !\guard#3
{-310} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf31 || !\guard#1 || !\guard#3 || \guard#7
{-311} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf9 || !\guard#3 || \guard#1 || \guard#2
{-312} TRUE
{-313} mutex#12$wclk$8 >= mutex#1$wclk$8 || !(mutex#4$rclk$8 >= mutex#1$wclk$8) || !choice_rf15 || \guard#1 || \guard#2
{-314} mutex#1$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#12$wclk$8) || !choice_rf22 || !\guard#1 || !\guard#3
{-315} mutex#12$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#1$wclk$8) || !choice_rf25 || !\guard#3
{-316} mutex#1$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#12$wclk$8) || !choice_rf17 || !\guard#1 || !\guard#3
{-317} mutex#12$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#1$wclk$8) || !choice_rf20 || !\guard#3
{-318} mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#1$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf27 || !\guard#1
{-319} mutex#1$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf31 || !\guard#1 || \guard#7
{-320} mutex#12$wclk$8 >= mutex#1$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#1$wclk$8) || !choice_rf35 || !\guard#1 || \guard#7
{-321} TRUE
{-322} mutex#12$wclk$8 >= mutex#1$wclk$8 || !(mutex#3$rclk$8 >= mutex#1$wclk$8) || !choice_rf11 || \guard#1 || \guard#2
{-323} mutex#15$wclk$8 >= mutex#1$wclk$8 || !(mutex#4$rclk$8 >= mutex#1$wclk$8) || !choice_rf16 || \guard#1 || \guard#2
{-324} TRUE
{-325} mutex#15$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#1$wclk$8) || !choice_rf26 || !\guard#3
{-326} mutex#1$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf22 || !\guard#1 || !\guard#3 || \guard#7
{-327} mutex#15$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#1$wclk$8) || !choice_rf21 || !\guard#3
{-328} mutex#1$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf17 || !\guard#1 || !\guard#3 || \guard#7
{-329} mutex#1$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf27 || !\guard#1 || \guard#7
{-330} mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#1$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf31 || !\guard#1 || \guard#7
{-331} mutex#15$wclk$8 >= mutex#1$wclk$8 || !(mutex#3$rclk$8 >= mutex#1$wclk$8) || !choice_rf12 || \guard#1 || \guard#2
{-332} TRUE
{-333} !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf14 || \guard#1 || \guard#2
{-334} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf23 || !\guard#3 || \guard#1 || \guard#2
{-335} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf18 || !\guard#3 || \guard#1 || \guard#2
{-336} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf28 || \guard#1 || \guard#2
{-337} TRUE
{-338} !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf10 || \guard#1 || \guard#2
{-339} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf14 || !\guard#3 || \guard#1 || \guard#2
{-340} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf23 || !\guard#3
{-341} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf18 || !\guard#3
{-342} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf28 || !\guard#3
{-343} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf32 || !\guard#1 || !\guard#3 || \guard#7
{-344} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf10 || !\guard#3 || \guard#1 || \guard#2
{-345} TRUE
{-346} mutex#12$wclk$8 >= mutex#2$wclk$8 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf15 || \guard#1 || \guard#2
{-347} mutex#2$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#12$wclk$8) || !choice_rf23 || !\guard#1 || !\guard#3
{-348} mutex#12$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#2$wclk$8) || !choice_rf25 || !\guard#3
{-349} mutex#2$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#12$wclk$8) || !choice_rf18 || !\guard#1 || !\guard#3
{-350} mutex#12$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf20 || !\guard#3
{-351} mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#2$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf28 || !\guard#1
{-352} mutex#2$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf32 || !\guard#1 || \guard#7
{-353} mutex#12$wclk$8 >= mutex#2$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#2$wclk$8) || !choice_rf35 || !\guard#1 || \guard#7
{-354} TRUE
{-355} mutex#12$wclk$8 >= mutex#2$wclk$8 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf11 || \guard#1 || \guard#2
{-356} mutex#15$wclk$8 >= mutex#2$wclk$8 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf16 || \guard#1 || \guard#2
{-357} TRUE
{-358} mutex#15$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#2$wclk$8) || !choice_rf26 || !\guard#3
{-359} mutex#2$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf23 || !\guard#1 || !\guard#3 || \guard#7
{-360} mutex#15$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf21 || !\guard#3
{-361} mutex#2$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf18 || !\guard#1 || !\guard#3 || \guard#7
{-362} mutex#2$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf28 || !\guard#1 || \guard#7
{-363} mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#2$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf32 || !\guard#1 || \guard#7
{-364} mutex#15$wclk$8 >= mutex#2$wclk$8 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf12 || \guard#1 || \guard#2
{-365} TRUE
{-366} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf24 || !\guard#3
{-367} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf19 || !\guard#3
{-368} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf29 || !\guard#3
{-369} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf33 || !\guard#1 || !\guard#3 || \guard#7
{-370} mutex#12$wclk$8 >= mutex#5$wclk$8 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf15 || \guard#1 || \guard#2
{-371} mutex#5$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#12$wclk$8) || !choice_rf24 || !\guard#1 || !\guard#3
{-372} mutex#12$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf25 || !\guard#3 || \guard#1 || \guard#2
{-373} mutex#5$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#12$wclk$8) || !choice_rf19 || !\guard#1 || !\guard#3
{-374} mutex#12$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf20 || !\guard#3 || \guard#1 || \guard#2
{-375} mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#5$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf29 || !\guard#1
{-376} mutex#5$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf33 || !\guard#1 || \guard#7
{-377} TRUE
{-378} mutex#12$wclk$8 >= mutex#5$wclk$8 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf11 || \guard#1 || \guard#2
{-379} mutex#15$wclk$8 >= mutex#5$wclk$8 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf16 || \guard#1 || \guard#2
{-380} mutex#5$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf24 || !\guard#1 || !\guard#3 || \guard#7
{-381} mutex#15$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf26 || !\guard#3 || \guard#1 || \guard#2
{-382} mutex#5$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf19 || !\guard#1 || !\guard#3 || \guard#7
{-383} mutex#15$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf21 || !\guard#3 || \guard#1 || \guard#2
{-384} mutex#5$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf29 || !\guard#1 || \guard#7
{-385} mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#5$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf33 || !\guard#1 || \guard#7
{-386} mutex#15$wclk$8 >= mutex#5$wclk$8 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf12 || \guard#1 || \guard#2
{-387} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf15 || !\guard#3 || \guard#1 || \guard#2
{-388} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf25 || !\guard#3
{-389} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf20 || !\guard#3
{-390} mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#8$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf30 || !\guard#1
{-391} mutex#8$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf34 || !\guard#1 || \guard#7
{-392} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf35 || !\guard#1 || !\guard#3 || \guard#7
{-393} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf11 || !\guard#3 || \guard#1 || \guard#2
{-394} mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf16 || !\guard#3 || \guard#1 || \guard#2
{-395} mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf26 || !\guard#3
{-396} mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf21 || !\guard#3
{-397} mutex#8$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf30 || !\guard#1 || \guard#7
{-398} mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#8$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf34 || !\guard#1 || \guard#7
{-399} mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf12 || !\guard#3 || \guard#1 || \guard#2
{-400} TRUE
{-401} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf25 || !\guard#1 || !\guard#3 || \guard#7
{-402} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf20 || !\guard#1 || !\guard#3 || \guard#7
{-403} mutex#13$rclk$8 == mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf35 || !\guard#1 || \guard#7
{-404} TRUE
{-405} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#2$wclk$8) || !choice_rf59 || !\guard#1
{-406} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#2$wclk$8) || !choice_rf54 || !\guard#1
{-407} !(pdev#4$rclk$8 >= pdev#2$wclk$8) || !choice_rf36 || \guard#1
{-408} !(pdev#5$rclk$8 >= pdev#2$wclk$8) || !choice_rf40 || \guard#1
{-409} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#2$wclk$8) || !choice_rf49 || !\guard#3
{-410} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#2$wclk$8) || !choice_rf44 || !\guard#3
{-411} TRUE
{-412} TRUE
{-413} !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf36 || \guard#1
{-414} !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf40 || \guard#1
{-415} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf49 || !\guard#3 || \guard#1
{-416} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf44 || !\guard#3 || \guard#1
{-417} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf59 || !\guard#1 || !\guard#3
{-418} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf54 || !\guard#1 || !\guard#3
{-419} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf36 || !\guard#3 || \guard#1
{-420} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf40 || !\guard#3 || \guard#1
{-421} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf49 || !\guard#3
{-422} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf44 || !\guard#3
{-423} pdev#9$wclk$8 >= pdev#1$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#1$wclk$8) || !choice_rf63 || !\guard#1
{-424} pdev#1$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf59 || !\guard#1
{-425} pdev#9$wclk$8 >= pdev#1$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#1$wclk$8) || !choice_rf58 || !\guard#1
{-426} pdev#1$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf54 || !\guard#1
{-427} pdev#9$wclk$8 >= pdev#1$wclk$8 || !(pdev#4$rclk$8 >= pdev#1$wclk$8) || !choice_rf39 || \guard#1
{-428} TRUE
{-429} pdev#9$wclk$8 >= pdev#1$wclk$8 || !(pdev#5$rclk$8 >= pdev#1$wclk$8) || !choice_rf43 || \guard#1
{-430} TRUE
{-431} pdev#9$wclk$8 >= pdev#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#1$wclk$8) || !choice_rf53 || !\guard#3
{-432} pdev#1$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf49 || !\guard#1 || !\guard#3
{-433} pdev#9$wclk$8 >= pdev#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#1$wclk$8) || !choice_rf48 || !\guard#3
{-434} pdev#1$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf44 || !\guard#1 || !\guard#3
{-435} TRUE
{-436} TRUE
{-437} !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf37 || \guard#1
{-438} !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf41 || \guard#1
{-439} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf50 || !\guard#3 || \guard#1
{-440} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf45 || !\guard#3 || \guard#1
{-441} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf60 || !\guard#1 || !\guard#3
{-442} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf55 || !\guard#1 || !\guard#3
{-443} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf37 || !\guard#3 || \guard#1
{-444} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf41 || !\guard#3 || \guard#1
{-445} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf50 || !\guard#3
{-446} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf45 || !\guard#3
{-447} pdev#9$wclk$8 >= pdev#2$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#2$wclk$8) || !choice_rf63 || !\guard#1
{-448} pdev#2$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf60 || !\guard#1
{-449} pdev#9$wclk$8 >= pdev#2$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#2$wclk$8) || !choice_rf58 || !\guard#1
{-450} pdev#2$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf55 || !\guard#1
{-451} pdev#9$wclk$8 >= pdev#2$wclk$8 || !(pdev#4$rclk$8 >= pdev#2$wclk$8) || !choice_rf39 || \guard#1
{-452} TRUE
{-453} pdev#9$wclk$8 >= pdev#2$wclk$8 || !(pdev#5$rclk$8 >= pdev#2$wclk$8) || !choice_rf43 || \guard#1
{-454} TRUE
{-455} pdev#9$wclk$8 >= pdev#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#2$wclk$8) || !choice_rf53 || !\guard#3
{-456} pdev#2$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf50 || !\guard#1 || !\guard#3
{-457} pdev#9$wclk$8 >= pdev#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#2$wclk$8) || !choice_rf48 || !\guard#3
{-458} pdev#2$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf45 || !\guard#1 || !\guard#3
{-459} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf61 || !\guard#1 || !\guard#3
{-460} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf56 || !\guard#1 || !\guard#3
{-461} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf38 || !\guard#3 || \guard#1
{-462} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf42 || !\guard#3 || \guard#1
{-463} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf51 || !\guard#3
{-464} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf46 || !\guard#3
{-465} TRUE
{-466} pdev#3$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf61 || !\guard#1
{-467} TRUE
{-468} pdev#3$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf56 || !\guard#1
{-469} pdev#9$wclk$8 >= pdev#3$wclk$8 || !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf39 || \guard#1
{-470} TRUE
{-471} pdev#9$wclk$8 >= pdev#3$wclk$8 || !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf43 || \guard#1
{-472} TRUE
{-473} pdev#9$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf53 || !\guard#3 || \guard#1
{-474} pdev#3$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf51 || !\guard#1 || !\guard#3
{-475} pdev#9$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf48 || !\guard#3 || \guard#1
{-476} pdev#3$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf46 || !\guard#1 || !\guard#3
{-477} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf63 || !\guard#1 || !\guard#3
{-478} pdev#6$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf62 || !\guard#1
{-479} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf58 || !\guard#1 || !\guard#3
{-480} pdev#6$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf57 || !\guard#1
{-481} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf39 || !\guard#3 || \guard#1
{-482} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf43 || !\guard#3 || \guard#1
{-483} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf53 || !\guard#3
{-484} pdev#6$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf52 || !\guard#1 || !\guard#3
{-485} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf48 || !\guard#3
{-486} pdev#6$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf47 || !\guard#1 || !\guard#3
|--------------------------
{1} !(\guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && \guard#7)

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
{-21} return_value___VERIFIER_nondet_int!0@1#2 == nondet_symbol(symex::nondet1)
{-22} \guard#1 == !(return_value___VERIFIER_nondet_int!0@1#2 == 0)
{-23} thread!0@1#1 == &t1
{-24} attr!0@1#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
{-25} start_routine!0@1#1 == thread1
{-26} arg!0@1#1 == NULL
{-27} __CPROVER_next_thread_id#2 == 1ul
{-28} this_thread_id!0@1#2 == 1ul
{-29} t1#2 == 1ul
{-30} thread!1@0#1 == &t1
{-31} attr!1@0#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
{-32} start_routine!1@0#1 == thread1
{-33} arg!1@0#1 == NULL
{-34} __VERIFIER_nondet_int#return_value!1#1 == 0
{-35} pthread_mutex_destroy#return_value!1#1 == 0
{-36} __CPROVER_thread_id!1#1 == 0ul
{-37} pthread_join#return_value!1#1 == 0
{-38} __CPROVER_rounding_mode!1#1 == 0
{-39} pthread_mutex_init#return_value!1#1 == 0
{-40} module_init#return_value!1#1 == 0
{-41} pthread_mutex_lock#return_value!1#1 == 0
{-42} main#return_value!1#1 == 0
{-43} pthread_create#return_value!1#1 == 0
{-44} thread1#return_value!1#1 == NULL
{-45} pthread_mutex_unlock#return_value!1#1 == 0
{-46} pthread_create#return_value!0#1 == 0
{-47} module_init#return_value!0#1 == 0
{-48} module_init#return_value!0#2 == module_init#return_value!0#0
{-49} pthread_create#return_value!0#2 == pthread_create#return_value!0#0
{-50} pdev#3 == 3
{-51} expression!0@2#1 == (signed int)(pdev#5 == 3)
{-52} \guard#2 == (expression!0@2#1 == 0)
{-53} mutex!0@1#1 == &mutex
{-54} mutex#5 == byte_update_little_endian(mutex#4, 0l, -1, char)
{-55} pthread_mutex_destroy#return_value!0#1 == 0
{-56} module_init#return_value!0#3 == -1
{-57} pthread_mutex_destroy#return_value!0#2 == 0
{-58} module_init#return_value!0#4 == (\guard#1 ? 0 : -1)
{-59} pthread_create#return_value!0#3 == (\guard#1 ? 0 : pthread_create#return_value!0#2)
{-60} return_value___VERIFIER_nondet_int!0@1#4 == (\guard#1 ? return_value___VERIFIER_nondet_int!0@1#2 : return_value___VERIFIER_nondet_int!0@1#3)
{-61} return_value_module_init!0@1#2 == module_init#return_value!0#4
{-62} \guard#3 == (return_value_module_init!0@1#2 == 0)
{-63} thread!0@1#1 == t1#4
{-64} value_ptr!0@1#1 == &status!0@1
{-65} \guard#4 == !(__CPROVER_next_thread_id#3 >= thread!0@1#1)
{-66} pthread_join#return_value!0#1 == 3
{-67} pthread_join#return_value!0#2 == pthread_join#return_value!0#0
{-68} \guard#5 == (thread!0@1#1 == 0ul)
{-69} pthread_join#return_value!0#3 == 35
{-70} pthread_join#return_value!0#4 == pthread_join#return_value!0#2
{-71} pthread_join#return_value!0#5 == 0
{-72} pthread_join#return_value!0#6 == (\guard#5 ? 35 : 0)
{-73} pthread_join#return_value!0#7 == (\guard#4 ? 3 : pthread_join#return_value!0#6)
{-74} mutex!0@2#1 == &mutex
{-75} mutex#8 == byte_update_little_endian(mutex#7, 0l, -1, char)
{-76} pthread_mutex_destroy#return_value!0#3 == 0
{-77} pdev#6 == 5
{-78} expression!0@3#1 == (signed int)(pdev#8 == 5)
{-79} \guard#6 == (expression!0@3#1 == 0)
{-80} pthread_mutex_destroy#return_value!0#4 == 0
{-81} pthread_join#return_value!0#8 == pthread_join#return_value!0#7
{-82} main#return_value!0#1 == 0
{-83} return`!0#1 == 0
{-84} __CPROVER_thread_id!1#2 == this_thread_id!1@0#0
{-85} arg!1@1#1 == NULL
{-86} mutex!1@1#1 == &mutex
{-87} mutex#10 == mutex#9
{-88} mutex#11 == (\guard#1 ? mutex#10 : mutex#9)
{-89} mutex#12 == byte_update_little_endian(mutex#11, 0l, 1, char)
{-90} pthread_mutex_lock#return_value!1#2 == 0
{-91} pdev#9 == 6
{-92} expression!1@1#1 == (signed int)(pdev#11 == 6)
{-93} \guard#7 == (expression!1@1#1 == 0)
{-94} mutex!1@1#1 == &mutex
{-95} mutex#14 == mutex#13
{-96} mutex#15 == byte_update_little_endian(mutex#14, 0l, 0, char)
{-97} pthread_mutex_unlock#return_value!1#2 == 0
{-98} thread1#return_value!1#2 == NULL
{-99} __CPROVER_threads_exited#4 == __CPROVER_threads_exited#3 WITH [(signed long int)this_thread_id!1@0#0:=TRUE]
{-100} __CPROVER_threads_exited#2 == __CPROVER_threads_exited#1 || !choice_rf0
{-101} byte_extract_little_endian(mutex#10, 0l, char) == 0 && __CPROVER_threads_exited#2 == __CPROVER_threads_exited#4 && !\guard#7 && \guard#1 || !choice_rf1
{-102} !(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#2$rclk$8) || !choice_rf1
{-103} (\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf0 || choice_rf1 || \guard#4 || \guard#5
{-104} __CPROVER_threads_exited#3 == __CPROVER_threads_exited#1 || !choice_rf2
{-105} !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#3$rclk$8) || !choice_rf2
{-106} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf2 || \guard#7
{-107} __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#1 || !choice_rf3
{-108} __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#2 && \guard#1 || !choice_rf4
{-109} (\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf3 || choice_rf4
{-110} t1#3 == t1#1 || !choice_rf5
{-111} t1#3 == t1#2 && \guard#1 || !choice_rf6
{-112} (\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf5 || choice_rf6
{-113} t1#4 == t1#1 || !choice_rf7
{-114} t1#4 == t1#2 && \guard#1 || !choice_rf8
{-115} (\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf7 || choice_rf8
{-116} mutex#3 == mutex#1 || !choice_rf9
{-117} mutex#3 == mutex#2 || !choice_rf10
{-118} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#3 == mutex#12 && \guard#1 || !choice_rf11
{-119} !(mutex#12$wclk$8 >= mutex#3$rclk$8) || !choice_rf11
{-120} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#3 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf12
{-121} !(mutex#15$wclk$8 >= mutex#3$rclk$8) || !choice_rf12
{-122} choice_rf10 || choice_rf11 || choice_rf12 || choice_rf9 || \guard#1 || \guard#2
{-123} mutex#4 == mutex#1 || !choice_rf13
{-124} mutex#4 == mutex#2 || !choice_rf14
{-125} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#4 == mutex#12 && \guard#1 || !choice_rf15
{-126} !(mutex#12$wclk$8 >= mutex#4$rclk$8) || !choice_rf15
{-127} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#4 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf16
{-128} !(mutex#15$wclk$8 >= mutex#4$rclk$8) || !choice_rf16
{-129} choice_rf13 || choice_rf14 || choice_rf15 || choice_rf16 || \guard#1 || \guard#2
{-130} mutex#6 == mutex#1 || !choice_rf17
{-131} mutex#6 == mutex#2 || !choice_rf18
{-132} mutex#6 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf19
{-133} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#6 == mutex#12 && \guard#1 || !choice_rf20
{-134} !(mutex#12$wclk$8 >= mutex#6$rclk$8) || !choice_rf20
{-135} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#6 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf21
{-136} !(mutex#15$wclk$8 >= mutex#6$rclk$8) || !choice_rf21
{-137} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf17 || choice_rf18 || choice_rf19 || choice_rf20 || choice_rf21
{-138} mutex#7 == mutex#1 || !choice_rf22
{-139} mutex#7 == mutex#2 || !choice_rf23
{-140} mutex#7 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf24
{-141} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#7 == mutex#12 && \guard#1 || !choice_rf25
{-142} !(mutex#12$wclk$8 >= mutex#7$rclk$8) || !choice_rf25
{-143} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#7 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf26
{-144} !(mutex#15$wclk$8 >= mutex#7$rclk$8) || !choice_rf26
{-145} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf22 || choice_rf23 || choice_rf24 || choice_rf25 || choice_rf26
{-146} mutex#9 == mutex#1 || !choice_rf27
{-147} !(mutex#1$wclk$8 >= mutex#9$rclk$8) || !choice_rf27
{-148} mutex#9 == mutex#2 || !choice_rf28
{-149} !(mutex#2$wclk$8 >= mutex#9$rclk$8) || !choice_rf28
{-150} mutex#9 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf29
{-151} !(mutex#5$wclk$8 >= mutex#9$rclk$8) || !choice_rf29
{-152} mutex#9 == mutex#8 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf30
{-153} !(mutex#8$wclk$8 >= mutex#9$rclk$8) || !choice_rf30
{-154} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || choice_rf27 || choice_rf28 || choice_rf29 || choice_rf30
{-155} mutex#13 == mutex#1 || !choice_rf31
{-156} !(mutex#1$wclk$8 >= mutex#13$rclk$8) || !choice_rf31
{-157} mutex#13 == mutex#2 || !choice_rf32
{-158} !(mutex#2$wclk$8 >= mutex#13$rclk$8) || !choice_rf32
{-159} mutex#13 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf33
{-160} !(mutex#5$wclk$8 >= mutex#13$rclk$8) || !choice_rf33
{-161} mutex#13 == mutex#8 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf34
{-162} !(mutex#8$wclk$8 >= mutex#13$rclk$8) || !choice_rf34
{-163} byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#13 == mutex#12 && \guard#1 || !choice_rf35
{-164} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf31 || choice_rf32 || choice_rf33 || choice_rf34 || choice_rf35 || \guard#7
{-165} pdev#4 == pdev#1 || !choice_rf36
{-166} pdev#4 == pdev#2 || !choice_rf37
{-167} pdev#4 == pdev#3 && !\guard#1 || !choice_rf38
{-168} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#4 == pdev#9 && \guard#1 || !choice_rf39
{-169} !(pdev#9$wclk$8 >= pdev#4$rclk$8) || !choice_rf39
{-170} choice_rf36 || choice_rf37 || choice_rf38 || choice_rf39 || \guard#1
{-171} pdev#5 == pdev#1 || !choice_rf40
{-172} pdev#5 == pdev#2 || !choice_rf41
{-173} pdev#5 == pdev#3 && !\guard#1 || !choice_rf42
{-174} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#5 == pdev#9 && \guard#1 || !choice_rf43
{-175} !(pdev#9$wclk$8 >= pdev#5$rclk$8) || !choice_rf43
{-176} choice_rf40 || choice_rf41 || choice_rf42 || choice_rf43 || \guard#1
{-177} pdev#7 == pdev#1 || !choice_rf44
{-178} pdev#7 == pdev#2 || !choice_rf45
{-179} pdev#7 == pdev#3 && !\guard#1 || !choice_rf46
{-180} pdev#7 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf47
{-181} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#7 == pdev#9 && \guard#1 || !choice_rf48
{-182} !(pdev#9$wclk$8 >= pdev#7$rclk$8) || !choice_rf48
{-183} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf44 || choice_rf45 || choice_rf46 || choice_rf47 || choice_rf48
{-184} pdev#8 == pdev#1 || !choice_rf49
{-185} pdev#8 == pdev#2 || !choice_rf50
{-186} pdev#8 == pdev#3 && !\guard#1 || !choice_rf51
{-187} pdev#8 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf52
{-188} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#8 == pdev#9 && \guard#1 || !choice_rf53
{-189} !(pdev#9$wclk$8 >= pdev#8$rclk$8) || !choice_rf53
{-190} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf49 || choice_rf50 || choice_rf51 || choice_rf52 || choice_rf53
{-191} pdev#10 == pdev#1 || !choice_rf54
{-192} !(pdev#1$wclk$8 >= pdev#10$rclk$8) || !choice_rf54
{-193} pdev#10 == pdev#2 || !choice_rf55
{-194} !(pdev#2$wclk$8 >= pdev#10$rclk$8) || !choice_rf55
{-195} pdev#10 == pdev#3 && !\guard#1 || !choice_rf56
{-196} !(pdev#3$wclk$8 >= pdev#10$rclk$8) || !choice_rf56
{-197} pdev#10 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf57
{-198} !(pdev#6$wclk$8 >= pdev#10$rclk$8) || !choice_rf57
{-199} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#10 == pdev#9 && \guard#1 || !choice_rf58
{-200} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf54 || choice_rf55 || choice_rf56 || choice_rf57 || choice_rf58
{-201} pdev#11 == pdev#1 || !choice_rf59
{-202} !(pdev#1$wclk$8 >= pdev#11$rclk$8) || !choice_rf59
{-203} pdev#11 == pdev#2 || !choice_rf60
{-204} !(pdev#2$wclk$8 >= pdev#11$rclk$8) || !choice_rf60
{-205} pdev#11 == pdev#3 && !\guard#1 || !choice_rf61
{-206} !(pdev#3$wclk$8 >= pdev#11$rclk$8) || !choice_rf61
{-207} pdev#11 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf62
{-208} !(pdev#6$wclk$8 >= pdev#11$rclk$8) || !choice_rf62
{-209} byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#11 == pdev#9 && \guard#1 || !choice_rf63
{-210} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf59 || choice_rf60 || choice_rf61 || choice_rf62 || choice_rf63
{-211} !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_ws-ext64
{-212} !(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8) || choice_ws-ext64
{-213} !(mutex#1$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext65
{-214} !(mutex#12$wclk$8 >= mutex#1$wclk$8) || choice_ws-ext65
{-215} !(mutex#1$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext66
{-216} !(mutex#15$wclk$8 >= mutex#1$wclk$8) || choice_ws-ext66
{-217} !(mutex#2$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext67
{-218} !(mutex#12$wclk$8 >= mutex#2$wclk$8) || choice_ws-ext67
{-219} !(mutex#2$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext68
{-220} !(mutex#15$wclk$8 >= mutex#2$wclk$8) || choice_ws-ext68
{-221} !(mutex#5$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext69
{-222} !(mutex#12$wclk$8 >= mutex#5$wclk$8) || choice_ws-ext69
{-223} !(mutex#5$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext70
{-224} !(mutex#15$wclk$8 >= mutex#5$wclk$8) || choice_ws-ext70
{-225} !(mutex#8$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext71
{-226} !(mutex#12$wclk$8 >= mutex#8$wclk$8) || choice_ws-ext71
{-227} !(mutex#8$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext72
{-228} !(mutex#15$wclk$8 >= mutex#8$wclk$8) || choice_ws-ext72
{-229} !(pdev#1$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext73
{-230} !(pdev#9$wclk$8 >= pdev#1$wclk$8) || choice_ws-ext73
{-231} !(pdev#2$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext74
{-232} !(pdev#9$wclk$8 >= pdev#2$wclk$8) || choice_ws-ext74
{-233} !(pdev#3$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext75
{-234} !(pdev#9$wclk$8 >= pdev#3$wclk$8) || choice_ws-ext75
{-235} !(pdev#6$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext76
{-236} !(pdev#9$wclk$8 >= pdev#6$wclk$8) || choice_ws-ext76
{-237} !(t1$17$spwnclk$8 >= mutex#9$rclk$8)
{-238} !(t1$17$spwnclk$8 >= mutex#12$wclk$8)
{-239} !(t1$17$spwnclk$8 >= pdev#9$wclk$8)
{-240} !(t1$17$spwnclk$8 >= pdev#10$rclk$8)
{-241} !(t1$17$spwnclk$8 >= pdev#11$rclk$8)
{-242} !(t1$17$spwnclk$8 >= mutex#13$rclk$8)
{-243} !(t1$17$spwnclk$8 >= mutex#15$wclk$8)
{-244} !(t1$17$spwnclk$8 >= __CPROVER_threads_exited#3$rclk$8)
{-245} !(t1$17$spwnclk$8 >= __CPROVER_threads_exited#4$wclk$8)
{-246} !(status!0@1$wclk$8 >= __CPROVER_dead_object#1$wclk$8)
{-247} !(__CPROVER_dead_object#1$wclk$8 >= __CPROVER_deallocated#1$wclk$8)
{-248} !(__CPROVER_deallocated#1$wclk$8 >= __CPROVER_malloc_is_new_array#1$wclk$8)
{-249} !(__CPROVER_malloc_is_new_array#1$wclk$8 >= __CPROVER_malloc_object#1$wclk$8)
{-250} !(__CPROVER_malloc_object#1$wclk$8 >= __CPROVER_malloc_size#1$wclk$8)
{-251} !(__CPROVER_malloc_size#1$wclk$8 >= __CPROVER_memory_leak#1$wclk$8)
{-252} !(__CPROVER_memory_leak#1$wclk$8 >= __CPROVER_next_thread_id#1$wclk$8)
{-253} !(__CPROVER_next_thread_id#1$wclk$8 >= __CPROVER_pipe_count#1$wclk$8)
{-254} !(__CPROVER_pipe_count#1$wclk$8 >= __CPROVER_threads_exited#1$wclk$8)
{-255} !(__CPROVER_threads_exited#1$wclk$8 >= mutex#1$wclk$8)
{-256} !(mutex#1$wclk$8 >= pdev#1$wclk$8)
{-257} !(pdev#1$wclk$8 >= t1#1$wclk$8)
{-258} !(t1#1$wclk$8 >= mutex#2$wclk$8)
{-259} !(mutex#2$wclk$8 >= pdev#2$wclk$8)
{-260} !(pdev#2$wclk$8 >= __CPROVER_next_thread_id#2$wclk$8)
{-261} !(__CPROVER_next_thread_id#2$wclk$8 >= t1#2$wclk$8)
{-262} !(t1#2$wclk$8 >= t1$17$spwnclk$8)
{-263} !(t1$17$spwnclk$8 >= pdev#3$wclk$8)
{-264} !(pdev#3$wclk$8 >= pdev#4$rclk$8)
{-265} !(pdev#4$rclk$8 >= pdev#5$rclk$8)
{-266} !(pdev#5$rclk$8 >= mutex#3$rclk$8)
{-267} !(mutex#3$rclk$8 >= mutex#4$rclk$8)
{-268} !(mutex#4$rclk$8 >= mutex#5$wclk$8)
{-269} !(mutex#5$wclk$8 >= status!0@1#1$wclk$8)
{-270} !(status!0@1#1$wclk$8 >= t1#3$rclk$8)
{-271} !(t1#3$rclk$8 >= t1#4$rclk$8)
{-272} !(t1#4$rclk$8 >= __CPROVER_next_thread_id#3$rclk$8)
{-273} !(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_threads_exited#2$rclk$8)
{-274} !(__CPROVER_threads_exited#2$rclk$8 >= mutex#6$rclk$8)
{-275} !(mutex#6$rclk$8 >= mutex#7$rclk$8)
{-276} !(mutex#7$rclk$8 >= mutex#8$wclk$8)
{-277} !(mutex#8$wclk$8 >= pdev#6$wclk$8)
{-278} !(pdev#6$wclk$8 >= pdev#7$rclk$8)
{-279} !(pdev#7$rclk$8 >= pdev#8$rclk$8)
{-280} mutex#9$rclk$8 == mutex#12$wclk$8
{-281} !(mutex#12$wclk$8 >= pdev#9$wclk$8)
{-282} !(pdev#9$wclk$8 >= pdev#10$rclk$8)
{-283} !(pdev#10$rclk$8 >= pdev#11$rclk$8)
{-284} !(pdev#11$rclk$8 >= mutex#13$rclk$8)
{-285} mutex#13$rclk$8 == mutex#15$wclk$8
{-286} !(mutex#15$wclk$8 >= __CPROVER_threads_exited#3$rclk$8)
{-287} !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8)
{-288} __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_rf2 || !\guard#1 || \guard#7
{-289} __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_rf0 || !\guard#1 || !\guard#3 || \guard#4 || \guard#5 || \guard#7
{-290} __CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf1 || !\guard#3 || \guard#4 || \guard#5
{-291} (\guard#1 || \guard#2) && !\guard#1 || !(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8) || !choice_rf3 || !\guard#1 || !\guard#3
{-292} (\guard#1 || \guard#2) && !\guard#1 || !(t1#3$rclk$8 >= t1#2$wclk$8) || !choice_rf5 || !\guard#1 || !\guard#3
{-293} (\guard#1 || \guard#2) && !\guard#1 || !(t1#4$rclk$8 >= t1#2$wclk$8) || !choice_rf7 || !\guard#1 || !\guard#3
{-294} !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf13 || \guard#1 || \guard#2
{-295} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#2$wclk$8) || !choice_rf22 || !\guard#3
{-296} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf17 || !\guard#3
{-297} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(mutex#9$rclk$8 >= mutex#2$wclk$8) || !choice_rf27
{-298} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#2$wclk$8) || !choice_rf31 || !\guard#1 || \guard#7
{-299} !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf9 || \guard#1 || \guard#2
{-300} !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf13 || \guard#1 || \guard#2
{-301} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf22 || !\guard#3 || \guard#1 || \guard#2
{-302} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf17 || !\guard#3 || \guard#1 || \guard#2
{-303} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf27 || \guard#1 || \guard#2
{-304} TRUE
{-305} !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf9 || \guard#1 || \guard#2
{-306} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf13 || !\guard#3 || \guard#1 || \guard#2
{-307} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf22 || !\guard#3
{-308} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf17 || !\guard#3
{-309} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf27 || !\guard#3
{-310} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf31 || !\guard#1 || !\guard#3 || \guard#7
{-311} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf9 || !\guard#3 || \guard#1 || \guard#2
{-312} TRUE
{-313} mutex#12$wclk$8 >= mutex#1$wclk$8 || !(mutex#4$rclk$8 >= mutex#1$wclk$8) || !choice_rf15 || \guard#1 || \guard#2
{-314} mutex#1$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#12$wclk$8) || !choice_rf22 || !\guard#1 || !\guard#3
{-315} mutex#12$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#1$wclk$8) || !choice_rf25 || !\guard#3
{-316} mutex#1$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#12$wclk$8) || !choice_rf17 || !\guard#1 || !\guard#3
{-317} mutex#12$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#1$wclk$8) || !choice_rf20 || !\guard#3
{-318} mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#1$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf27 || !\guard#1
{-319} mutex#1$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf31 || !\guard#1 || \guard#7
{-320} mutex#12$wclk$8 >= mutex#1$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#1$wclk$8) || !choice_rf35 || !\guard#1 || \guard#7
{-321} TRUE
{-322} mutex#12$wclk$8 >= mutex#1$wclk$8 || !(mutex#3$rclk$8 >= mutex#1$wclk$8) || !choice_rf11 || \guard#1 || \guard#2
{-323} mutex#15$wclk$8 >= mutex#1$wclk$8 || !(mutex#4$rclk$8 >= mutex#1$wclk$8) || !choice_rf16 || \guard#1 || \guard#2
{-324} TRUE
{-325} mutex#15$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#1$wclk$8) || !choice_rf26 || !\guard#3
{-326} mutex#1$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf22 || !\guard#1 || !\guard#3 || \guard#7
{-327} mutex#15$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#1$wclk$8) || !choice_rf21 || !\guard#3
{-328} mutex#1$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf17 || !\guard#1 || !\guard#3 || \guard#7
{-329} mutex#1$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf27 || !\guard#1 || \guard#7
{-330} mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#1$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf31 || !\guard#1 || \guard#7
{-331} mutex#15$wclk$8 >= mutex#1$wclk$8 || !(mutex#3$rclk$8 >= mutex#1$wclk$8) || !choice_rf12 || \guard#1 || \guard#2
{-332} TRUE
{-333} !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf14 || \guard#1 || \guard#2
{-334} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf23 || !\guard#3 || \guard#1 || \guard#2
{-335} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf18 || !\guard#3 || \guard#1 || \guard#2
{-336} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf28 || \guard#1 || \guard#2
{-337} TRUE
{-338} !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf10 || \guard#1 || \guard#2
{-339} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf14 || !\guard#3 || \guard#1 || \guard#2
{-340} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf23 || !\guard#3
{-341} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf18 || !\guard#3
{-342} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf28 || !\guard#3
{-343} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf32 || !\guard#1 || !\guard#3 || \guard#7
{-344} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf10 || !\guard#3 || \guard#1 || \guard#2
{-345} TRUE
{-346} mutex#12$wclk$8 >= mutex#2$wclk$8 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf15 || \guard#1 || \guard#2
{-347} mutex#2$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#12$wclk$8) || !choice_rf23 || !\guard#1 || !\guard#3
{-348} mutex#12$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#2$wclk$8) || !choice_rf25 || !\guard#3
{-349} mutex#2$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#12$wclk$8) || !choice_rf18 || !\guard#1 || !\guard#3
{-350} mutex#12$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf20 || !\guard#3
{-351} mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#2$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf28 || !\guard#1
{-352} mutex#2$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf32 || !\guard#1 || \guard#7
{-353} mutex#12$wclk$8 >= mutex#2$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#2$wclk$8) || !choice_rf35 || !\guard#1 || \guard#7
{-354} TRUE
{-355} mutex#12$wclk$8 >= mutex#2$wclk$8 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf11 || \guard#1 || \guard#2
{-356} mutex#15$wclk$8 >= mutex#2$wclk$8 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf16 || \guard#1 || \guard#2
{-357} TRUE
{-358} mutex#15$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#2$wclk$8) || !choice_rf26 || !\guard#3
{-359} mutex#2$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf23 || !\guard#1 || !\guard#3 || \guard#7
{-360} mutex#15$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf21 || !\guard#3
{-361} mutex#2$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf18 || !\guard#1 || !\guard#3 || \guard#7
{-362} mutex#2$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf28 || !\guard#1 || \guard#7
{-363} mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#2$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf32 || !\guard#1 || \guard#7
{-364} mutex#15$wclk$8 >= mutex#2$wclk$8 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf12 || \guard#1 || \guard#2
{-365} TRUE
{-366} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf24 || !\guard#3
{-367} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf19 || !\guard#3
{-368} (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf29 || !\guard#3
{-369} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf33 || !\guard#1 || !\guard#3 || \guard#7
{-370} mutex#12$wclk$8 >= mutex#5$wclk$8 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf15 || \guard#1 || \guard#2
{-371} mutex#5$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#12$wclk$8) || !choice_rf24 || !\guard#1 || !\guard#3
{-372} mutex#12$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf25 || !\guard#3 || \guard#1 || \guard#2
{-373} mutex#5$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#12$wclk$8) || !choice_rf19 || !\guard#1 || !\guard#3
{-374} mutex#12$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf20 || !\guard#3 || \guard#1 || \guard#2
{-375} mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#5$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf29 || !\guard#1
{-376} mutex#5$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf33 || !\guard#1 || \guard#7
{-377} TRUE
{-378} mutex#12$wclk$8 >= mutex#5$wclk$8 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf11 || \guard#1 || \guard#2
{-379} mutex#15$wclk$8 >= mutex#5$wclk$8 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf16 || \guard#1 || \guard#2
{-380} mutex#5$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf24 || !\guard#1 || !\guard#3 || \guard#7
{-381} mutex#15$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf26 || !\guard#3 || \guard#1 || \guard#2
{-382} mutex#5$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf19 || !\guard#1 || !\guard#3 || \guard#7
{-383} mutex#15$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf21 || !\guard#3 || \guard#1 || \guard#2
{-384} mutex#5$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf29 || !\guard#1 || \guard#7
{-385} mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#5$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf33 || !\guard#1 || \guard#7
{-386} mutex#15$wclk$8 >= mutex#5$wclk$8 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf12 || \guard#1 || \guard#2
{-387} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf15 || !\guard#3 || \guard#1 || \guard#2
{-388} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf25 || !\guard#3
{-389} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf20 || !\guard#3
{-390} mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#8$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf30 || !\guard#1
{-391} mutex#8$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf34 || !\guard#1 || \guard#7
{-392} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf35 || !\guard#1 || !\guard#3 || \guard#7
{-393} mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf11 || !\guard#3 || \guard#1 || \guard#2
{-394} mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf16 || !\guard#3 || \guard#1 || \guard#2
{-395} mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf26 || !\guard#3
{-396} mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf21 || !\guard#3
{-397} mutex#8$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf30 || !\guard#1 || \guard#7
{-398} mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#8$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf34 || !\guard#1 || \guard#7
{-399} mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf12 || !\guard#3 || \guard#1 || \guard#2
{-400} TRUE
{-401} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf25 || !\guard#1 || !\guard#3 || \guard#7
{-402} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf20 || !\guard#1 || !\guard#3 || \guard#7
{-403} mutex#13$rclk$8 == mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf35 || !\guard#1 || \guard#7
{-404} TRUE
{-405} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#2$wclk$8) || !choice_rf59 || !\guard#1
{-406} !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#2$wclk$8) || !choice_rf54 || !\guard#1
{-407} !(pdev#4$rclk$8 >= pdev#2$wclk$8) || !choice_rf36 || \guard#1
{-408} !(pdev#5$rclk$8 >= pdev#2$wclk$8) || !choice_rf40 || \guard#1
{-409} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#2$wclk$8) || !choice_rf49 || !\guard#3
{-410} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#2$wclk$8) || !choice_rf44 || !\guard#3
{-411} TRUE
{-412} TRUE
{-413} !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf36 || \guard#1
{-414} !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf40 || \guard#1
{-415} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf49 || !\guard#3 || \guard#1
{-416} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf44 || !\guard#3 || \guard#1
{-417} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf59 || !\guard#1 || !\guard#3
{-418} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf54 || !\guard#1 || !\guard#3
{-419} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf36 || !\guard#3 || \guard#1
{-420} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf40 || !\guard#3 || \guard#1
{-421} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf49 || !\guard#3
{-422} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf44 || !\guard#3
{-423} pdev#9$wclk$8 >= pdev#1$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#1$wclk$8) || !choice_rf63 || !\guard#1
{-424} pdev#1$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf59 || !\guard#1
{-425} pdev#9$wclk$8 >= pdev#1$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#1$wclk$8) || !choice_rf58 || !\guard#1
{-426} pdev#1$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf54 || !\guard#1
{-427} pdev#9$wclk$8 >= pdev#1$wclk$8 || !(pdev#4$rclk$8 >= pdev#1$wclk$8) || !choice_rf39 || \guard#1
{-428} TRUE
{-429} pdev#9$wclk$8 >= pdev#1$wclk$8 || !(pdev#5$rclk$8 >= pdev#1$wclk$8) || !choice_rf43 || \guard#1
{-430} TRUE
{-431} pdev#9$wclk$8 >= pdev#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#1$wclk$8) || !choice_rf53 || !\guard#3
{-432} pdev#1$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf49 || !\guard#1 || !\guard#3
{-433} pdev#9$wclk$8 >= pdev#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#1$wclk$8) || !choice_rf48 || !\guard#3
{-434} pdev#1$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf44 || !\guard#1 || !\guard#3
{-435} TRUE
{-436} TRUE
{-437} !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf37 || \guard#1
{-438} !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf41 || \guard#1
{-439} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf50 || !\guard#3 || \guard#1
{-440} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf45 || !\guard#3 || \guard#1
{-441} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf60 || !\guard#1 || !\guard#3
{-442} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf55 || !\guard#1 || !\guard#3
{-443} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf37 || !\guard#3 || \guard#1
{-444} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf41 || !\guard#3 || \guard#1
{-445} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf50 || !\guard#3
{-446} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf45 || !\guard#3
{-447} pdev#9$wclk$8 >= pdev#2$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#2$wclk$8) || !choice_rf63 || !\guard#1
{-448} pdev#2$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf60 || !\guard#1
{-449} pdev#9$wclk$8 >= pdev#2$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#2$wclk$8) || !choice_rf58 || !\guard#1
{-450} pdev#2$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf55 || !\guard#1
{-451} pdev#9$wclk$8 >= pdev#2$wclk$8 || !(pdev#4$rclk$8 >= pdev#2$wclk$8) || !choice_rf39 || \guard#1
{-452} TRUE
{-453} pdev#9$wclk$8 >= pdev#2$wclk$8 || !(pdev#5$rclk$8 >= pdev#2$wclk$8) || !choice_rf43 || \guard#1
{-454} TRUE
{-455} pdev#9$wclk$8 >= pdev#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#2$wclk$8) || !choice_rf53 || !\guard#3
{-456} pdev#2$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf50 || !\guard#1 || !\guard#3
{-457} pdev#9$wclk$8 >= pdev#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#2$wclk$8) || !choice_rf48 || !\guard#3
{-458} pdev#2$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf45 || !\guard#1 || !\guard#3
{-459} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf61 || !\guard#1 || !\guard#3
{-460} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf56 || !\guard#1 || !\guard#3
{-461} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf38 || !\guard#3 || \guard#1
{-462} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf42 || !\guard#3 || \guard#1
{-463} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf51 || !\guard#3
{-464} (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf46 || !\guard#3
{-465} TRUE
{-466} pdev#3$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf61 || !\guard#1
{-467} TRUE
{-468} pdev#3$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf56 || !\guard#1
{-469} pdev#9$wclk$8 >= pdev#3$wclk$8 || !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf39 || \guard#1
{-470} TRUE
{-471} pdev#9$wclk$8 >= pdev#3$wclk$8 || !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf43 || \guard#1
{-472} TRUE
{-473} pdev#9$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf53 || !\guard#3 || \guard#1
{-474} pdev#3$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf51 || !\guard#1 || !\guard#3
{-475} pdev#9$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf48 || !\guard#3 || \guard#1
{-476} pdev#3$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf46 || !\guard#1 || !\guard#3
{-477} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf63 || !\guard#1 || !\guard#3
{-478} pdev#6$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf62 || !\guard#1
{-479} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf58 || !\guard#1 || !\guard#3
{-480} pdev#6$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf57 || !\guard#1
{-481} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf39 || !\guard#3 || \guard#1
{-482} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf43 || !\guard#3 || \guard#1
{-483} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf53 || !\guard#3
{-484} pdev#6$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf52 || !\guard#1 || !\guard#3
{-485} pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf48 || !\guard#3
{-486} pdev#6$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf47 || !\guard#1 || !\guard#3
|--------------------------
{1} \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && !\guard#7 ==> (signed int)byte_extract_little_endian(mutex#14, 0l, char) == 1

