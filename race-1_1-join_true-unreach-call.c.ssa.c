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

Program constraints:
// 103 file ./race-1_1-join_true-unreach-call.c line 44 function module_exit
(1) SHARED_WRITE(status!0@1)
// 110
// 110
// 63 file <built-in-additions> line 11
(2) SHARED_WRITE(__CPROVER_dead_object#1)
// 63 file <built-in-additions> line 11
(3) __CPROVER_dead_object#1 == NULL
// 64 file <built-in-additions> line 10
(4) SHARED_WRITE(__CPROVER_deallocated#1)
// 64 file <built-in-additions> line 10
(5) __CPROVER_deallocated#1 == NULL
// 65 file <built-in-additions> line 14
(6) SHARED_WRITE(__CPROVER_malloc_is_new_array#1)
// 65 file <built-in-additions> line 14
(7) __CPROVER_malloc_is_new_array#1 == FALSE
// 66 file <built-in-additions> line 12
(8) SHARED_WRITE(__CPROVER_malloc_object#1)
// 66 file <built-in-additions> line 12
(9) __CPROVER_malloc_object#1 == NULL
// 67 file <built-in-additions> line 13
(10) SHARED_WRITE(__CPROVER_malloc_size#1)
// 67 file <built-in-additions> line 13
(11) __CPROVER_malloc_size#1 == 0ul
// 68 file <built-in-additions> line 15
(12) SHARED_WRITE(__CPROVER_memory_leak#1)
// 68 file <built-in-additions> line 15
(13) __CPROVER_memory_leak#1 == NULL
// 69 file <built-in-additions> line 8
(14) SHARED_WRITE(__CPROVER_next_thread_id#1)
// 69 file <built-in-additions> line 8
(15) __CPROVER_next_thread_id#1 == 0ul
// 70 file <built-in-additions> line 29
(16) SHARED_WRITE(__CPROVER_pipe_count#1)
// 70 file <built-in-additions> line 29
(17) __CPROVER_pipe_count#1 == 0u
// 71 file <built-in-additions> line 20
(18) __CPROVER_rounding_mode!0#1 == 0
// 72 file <built-in-additions> line 6
(19) __CPROVER_thread_id!0#1 == 0ul
// 73 file <built-in-additions> line 7
(20) SHARED_WRITE(__CPROVER_threads_exited#1)
// 73 file <built-in-additions> line 7
(21) __CPROVER_threads_exited#1 == ARRAY_OF(FALSE)
// 74 file ./race-1_1-join_true-unreach-call.c line 10
(22) SHARED_WRITE(mutex#1)
// 74 file ./race-1_1-join_true-unreach-call.c line 10
(23) mutex#1 == byte_extract_little_endian({ .__lock=0, .__count=0u, .__owner=0, .__nusers=0u, .__kind=0,
    .__spins=0, .__elision=0, .__list={ .__prev=((struct __pthread_internal_list { struct __pthread_internal_list *__prev; struct __pthread_internal_list *__next; } *)NULL), .__next=((struct __pthread_internal_list { struct __pthread_internal_list *__prev; struct __pthread_internal_list *__next; } *)NULL) } }, 0l, union { struct __pthread_mutex_s { signed int __lock; unsigned int __count; signed int __owner; unsigned int __nusers; signed int __kind; signed short int __spins; signed short int __elision; struct __pthread_internal_list { struct __pthread_internal_list *__prev; struct __pthread_internal_list *__next; } __list; } __data; char __size[40l]; signed long int __align; })
// 75 file ./race-1_1-join_true-unreach-call.c line 11
(24) SHARED_WRITE(pdev#1)
// 75 file ./race-1_1-join_true-unreach-call.c line 11
(25) pdev#1 == 0
// 76 file ./race-1_1-join_true-unreach-call.c line 9
(26) SHARED_WRITE(t1#1)
// 76 file ./race-1_1-join_true-unreach-call.c line 9
(27) t1#1 == 0ul
// 77
// 111 file ./race-1_1-join_true-unreach-call.c line 55
// 111 file ./race-1_1-join_true-unreach-call.c line 55
// 0 file ./race-1_1-join_true-unreach-call.c line 56 function main
// 1 file ./race-1_1-join_true-unreach-call.c line 56 function main
// 1 file ./race-1_1-join_true-unreach-call.c line 56 function main
// 88 file ./race-1_1-join_true-unreach-call.c line 22 function module_init
// 88 file ./race-1_1-join_true-unreach-call.c line 22 function module_init
// 88 file ./race-1_1-join_true-unreach-call.c line 22 function module_init
(28) mutex!0@1#1 == &mutex
// 88 file ./race-1_1-join_true-unreach-call.c line 22 function module_init
(29) mutexattr!0@1#1 == ((union { char __size[4l]; signed int __align; } *)NULL)
// 44 file <builtin-library-pthread_mutex_init> line 31 function pthread_mutex_init
(30) SHARED_WRITE(mutex#2)
// 44 file <builtin-library-pthread_mutex_init> line 31 function pthread_mutex_init
(31) mutex#2 == byte_update_little_endian(mutex#1, 0l, 0, char)
// 45 file <builtin-library-pthread_mutex_init> line 32 function pthread_mutex_init
// 47 file <builtin-library-pthread_mutex_init> line 42 function pthread_mutex_init
(32) pthread_mutex_init#return_value!0#1 == 0
// 48 file <builtin-library-pthread_mutex_init> line 43 function pthread_mutex_init
// 89 file ./race-1_1-join_true-unreach-call.c line 24 function module_init
(33) SHARED_WRITE(pdev#2)
// 89 file ./race-1_1-join_true-unreach-call.c line 24 function module_init
(34) pdev#2 == 1
// 90 file ./race-1_1-join_true-unreach-call.c line 25 function module_init
// 90 file ./race-1_1-join_true-unreach-call.c line 25 function module_init
// 90 file ./race-1_1-join_true-unreach-call.c line 25 function module_init
(35) expression!0@1#1 == 1
// 78 file ./race-1_1-join_true-unreach-call.c line 8 function ldv_assert
// 81 file ./race-1_1-join_true-unreach-call.c line 8 function ldv_assert
// 91 file ./race-1_1-join_true-unreach-call.c line 28 function module_init
// 92 file ./race-1_1-join_true-unreach-call.c line 28 function module_init
(36) return_value___VERIFIER_nondet_int!0@1#2 == nondet_symbol(symex::nondet1)
// 93 file ./race-1_1-join_true-unreach-call.c line 28 function module_init
// 93 file ./race-1_1-join_true-unreach-call.c line 28 function module_init
(37) \guard#1 == !(return_value___VERIFIER_nondet_int!0@1#2 == 0)
// 94 file ./race-1_1-join_true-unreach-call.c line 30 function module_init
// 94 file ./race-1_1-join_true-unreach-call.c line 30 function module_init
// 94 file ./race-1_1-join_true-unreach-call.c line 30 function module_init
(38) thread!0@1#1 == &t1
     guard: \guard#1
// 94 file ./race-1_1-join_true-unreach-call.c line 30 function module_init
(39) attr!0@1#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
     guard: \guard#1
// 94 file ./race-1_1-join_true-unreach-call.c line 30 function module_init
(40) start_routine!0@1#1 == thread1
     guard: \guard#1
// 94 file ./race-1_1-join_true-unreach-call.c line 30 function module_init
(41) arg!0@1#1 == NULL
     guard: \guard#1
// 9 file <builtin-library-pthread_create> line 18 function pthread_create
// 10 file <builtin-library-pthread_create> line 19 function pthread_create
// 11 file <builtin-library-pthread_create> line 20 function pthread_create
(42) __CPROVER_next_thread_id#2 == 1ul
     guard: \guard#1
// 12 file <builtin-library-pthread_create> line 20 function pthread_create
(43) this_thread_id!0@1#2 == 1ul
     guard: \guard#1
// 13 file <builtin-library-pthread_create> line 21 function pthread_create
(44) SHARED_WRITE(__CPROVER_next_thread_id#2)
     guard: \guard#1
// 13 file <builtin-library-pthread_create> line 21 function pthread_create
// 14 file <builtin-library-pthread_create> line 24 function pthread_create
(45) SHARED_WRITE(t1#2)
     guard: \guard#1
// 14 file <builtin-library-pthread_create> line 24 function pthread_create
(46) t1#2 == 1ul
     guard: \guard#1
// 15 file <builtin-library-pthread_create> line 30 function pthread_create
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(47) thread!1@0#1 == &t1
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(48) attr!1@0#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(49) start_routine!1@0#1 == thread1
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(50) arg!1@0#1 == NULL
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(51) __VERIFIER_nondet_int#return_value!1#1 == 0
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(52) pthread_mutex_destroy#return_value!1#1 == 0
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(53) __CPROVER_thread_id!1#1 == 0ul
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(54) pthread_join#return_value!1#1 == 0
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(55) __CPROVER_rounding_mode!1#1 == 0
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(56) pthread_mutex_init#return_value!1#1 == 0
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(57) module_init#return_value!1#1 == 0
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(58) pthread_mutex_lock#return_value!1#1 == 0
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(59) main#return_value!1#1 == 0
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(60) pthread_create#return_value!1#1 == 0
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(61) thread1#return_value!1#1 == NULL
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(62) pthread_mutex_unlock#return_value!1#1 == 0
     guard: \guard#1
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
// 26 file <builtin-library-pthread_create> line 44 function pthread_create
(63) pthread_create#return_value!0#1 == 0
     guard: \guard#1
// 28 file <builtin-library-pthread_create> line 45 function pthread_create
// 95 file ./race-1_1-join_true-unreach-call.c line 34 function module_init
(64) module_init#return_value!0#1 == 0
     guard: \guard#1
// 96 file ./race-1_1-join_true-unreach-call.c line 34 function module_init
// 97 file ./race-1_1-join_true-unreach-call.c line 37 function module_init
(65) module_init#return_value!0#2 == module_init#return_value!0#0
// 97 file ./race-1_1-join_true-unreach-call.c line 37 function module_init
(66) pthread_create#return_value!0#2 == pthread_create#return_value!0#0
// 97 file ./race-1_1-join_true-unreach-call.c line 37 function module_init
(67) SHARED_WRITE(pdev#3)
     guard: !\guard#1
// 97 file ./race-1_1-join_true-unreach-call.c line 37 function module_init
(68) pdev#3 == 3
     guard: !\guard#1
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(69) SHARED_READ(pdev#4)
     guard: !\guard#1
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(70) SHARED_READ(pdev#5)
     guard: !\guard#1
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(71) expression!0@2#1 == (signed int)(pdev#5 == 3)
     guard: !\guard#1
// 78 file ./race-1_1-join_true-unreach-call.c line 8 function ldv_assert
// 78 file ./race-1_1-join_true-unreach-call.c line 8 function ldv_assert
(72) \guard#2 == (expression!0@2#1 == 0)
// 79 file ./race-1_1-join_true-unreach-call.c line 8 function ldv_assert
(73) ASSERT(!(!\guard#1 && \guard#2))
     guard: !\guard#1 && \guard#2
// 81 file ./race-1_1-join_true-unreach-call.c line 8 function ldv_assert
// 99 file ./race-1_1-join_true-unreach-call.c line 39 function module_init
// 99 file ./race-1_1-join_true-unreach-call.c line 39 function module_init
// 99 file ./race-1_1-join_true-unreach-call.c line 39 function module_init
(74) mutex!0@1#1 == &mutex
     guard: !\guard#1 && !\guard#2
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(75) SHARED_READ(mutex#3)
     guard: !\guard#1 && !\guard#2
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(76) ASSERT(!\guard#1 && !\guard#2 ==> (signed int)byte_extract_little_endian(mutex#3, 0l, char) == 0)
     guard: !\guard#1 && !\guard#2
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(77) SHARED_READ(mutex#4)
     guard: !\guard#1 && !\guard#2
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(78) SHARED_WRITE(mutex#5)
     guard: !\guard#1 && !\guard#2
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(79) mutex#5 == byte_update_little_endian(mutex#4, 0l, -1, char)
     guard: !\guard#1 && !\guard#2
// 42 file <builtin-library-pthread_mutex_destroy> line 41 function pthread_mutex_destroy
(80) pthread_mutex_destroy#return_value!0#1 == 0
     guard: !\guard#1 && !\guard#2
// 43 file <builtin-library-pthread_mutex_destroy> line 42 function pthread_mutex_destroy
// 100 file ./race-1_1-join_true-unreach-call.c line 40 function module_init
(81) module_init#return_value!0#3 == -1
     guard: !\guard#1 && !\guard#2
// 102 file ./race-1_1-join_true-unreach-call.c line 41 function module_init
(82) pthread_mutex_destroy#return_value!0#2 == 0
// 102 file ./race-1_1-join_true-unreach-call.c line 41 function module_init
(83) module_init#return_value!0#4 == (\guard#1 ? 0 : -1)
// 102 file ./race-1_1-join_true-unreach-call.c line 41 function module_init
(84) pthread_create#return_value!0#3 == (\guard#1 ? 0 : pthread_create#return_value!0#2)
// 102 file ./race-1_1-join_true-unreach-call.c line 41 function module_init
(85) return_value___VERIFIER_nondet_int!0@1#4 == (\guard#1 ? return_value___VERIFIER_nondet_int!0@1#2 : return_value___VERIFIER_nondet_int!0@1#3)
// 102 file ./race-1_1-join_true-unreach-call.c line 41 function module_init
// 2 file ./race-1_1-join_true-unreach-call.c line 56 function main
(86) return_value_module_init!0@1#2 == module_init#return_value!0#4
     guard: !\guard#1 && !\guard#2 || \guard#1
// 4 file ./race-1_1-join_true-unreach-call.c line 56 function main
// 4 file ./race-1_1-join_true-unreach-call.c line 56 function main
(87) \guard#3 == (return_value_module_init!0@1#2 == 0)
// 5 file ./race-1_1-join_true-unreach-call.c line 57 function main
// 5 file ./race-1_1-join_true-unreach-call.c line 57 function main
// 103 file ./race-1_1-join_true-unreach-call.c line 44 function module_exit
// 103 file ./race-1_1-join_true-unreach-call.c line 44 function module_exit
(88) SHARED_WRITE(status!0@1#1)
     guard: (!\guard#1 && !\guard#2 || \guard#1) && \guard#3
// 104 file ./race-1_1-join_true-unreach-call.c line 48 function module_exit
// 104 file ./race-1_1-join_true-unreach-call.c line 48 function module_exit
// 104 file ./race-1_1-join_true-unreach-call.c line 48 function module_exit
(89) SHARED_READ(t1#3)
     guard: (!\guard#1 && !\guard#2 || \guard#1) && \guard#3
// 104 file ./race-1_1-join_true-unreach-call.c line 48 function module_exit
(90) SHARED_READ(t1#4)
     guard: (!\guard#1 && !\guard#2 || \guard#1) && \guard#3
// 104 file ./race-1_1-join_true-unreach-call.c line 48 function module_exit
(91) thread!0@1#1 == t1#4
     guard: (!\guard#1 && !\guard#2 || \guard#1) && \guard#3
// 104 file ./race-1_1-join_true-unreach-call.c line 48 function module_exit
(92) value_ptr!0@1#1 == &status!0@1
     guard: (!\guard#1 && !\guard#2 || \guard#1) && \guard#3
// 29 file <builtin-library-pthread_join> line 25 function pthread_join
(93) SHARED_READ(__CPROVER_next_thread_id#3)
     guard: (!\guard#1 && !\guard#2 || \guard#1) && \guard#3
// 29 file <builtin-library-pthread_join> line 25 function pthread_join
// 29 file <builtin-library-pthread_join> line 25 function pthread_join
(94) \guard#4 == !(__CPROVER_next_thread_id#3 >= thread!0@1#1)
// 30 file <builtin-library-pthread_join> line 25 function pthread_join
(95) pthread_join#return_value!0#1 == 3
     guard: (!\guard#1 && !\guard#2 || \guard#1) && \guard#3 && \guard#4
// 31 file <builtin-library-pthread_join> line 25 function pthread_join
// 32 file <builtin-library-pthread_join> line 26 function pthread_join
(96) pthread_join#return_value!0#2 == pthread_join#return_value!0#0
// 32 file <builtin-library-pthread_join> line 26 function pthread_join
// 32 file <builtin-library-pthread_join> line 26 function pthread_join
(97) \guard#5 == (thread!0@1#1 == 0ul)
// 33 file <builtin-library-pthread_join> line 26 function pthread_join
(98) pthread_join#return_value!0#3 == 35
     guard: (!\guard#1 && !\guard#2 || \guard#1) && \guard#3 && !\guard#4 && \guard#5
// 34 file <builtin-library-pthread_join> line 26 function pthread_join
// 35 file <builtin-library-pthread_join> line 27 function pthread_join
(99) pthread_join#return_value!0#4 == pthread_join#return_value!0#2
// 35 file <builtin-library-pthread_join> line 27 function pthread_join
// 37 file <builtin-library-pthread_join> line 28 function pthread_join
(100) SHARED_READ(__CPROVER_threads_exited#2)
      guard: (!\guard#1 && !\guard#2 || \guard#1) && \guard#3 && !\guard#4 && !\guard#5
// 38 file <builtin-library-pthread_join> line 30 function pthread_join
(101) pthread_join#return_value!0#5 == 0
      guard: (!\guard#1 && !\guard#2 || \guard#1) && \guard#3 && !\guard#4 && !\guard#5 && __CPROVER_threads_exited#2[(signed long int)thread!0@1#1]
// 39 file <builtin-library-pthread_join> line 31 function pthread_join
(102) pthread_join#return_value!0#6 == (\guard#5 ? 35 : 0)
// 39 file <builtin-library-pthread_join> line 31 function pthread_join
(103) pthread_join#return_value!0#7 == (\guard#4 ? 3 : pthread_join#return_value!0#6)
// 39 file <builtin-library-pthread_join> line 31 function pthread_join
// 105 file ./race-1_1-join_true-unreach-call.c line 49 function module_exit
// 105 file ./race-1_1-join_true-unreach-call.c line 49 function module_exit
// 105 file ./race-1_1-join_true-unreach-call.c line 49 function module_exit
(104) mutex!0@2#1 == &mutex
      guard: (!\guard#1 && !\guard#2 || \guard#1) && \guard#3 && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(105) SHARED_READ(mutex#6)
      guard: (!\guard#1 && !\guard#2 || \guard#1) && \guard#3 && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(106) ASSERT((!\guard#1 && !\guard#2 || \guard#1) && \guard#3 && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) ==> (signed int)byte_extract_little_endian(mutex#6, 0l, char) == 0)
      guard: (!\guard#1 && !\guard#2 || \guard#1) && \guard#3 && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(107) SHARED_READ(mutex#7)
      guard: (!\guard#1 && !\guard#2 || \guard#1) && \guard#3 && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(108) SHARED_WRITE(mutex#8)
      guard: (!\guard#1 && !\guard#2 || \guard#1) && \guard#3 && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(109) mutex#8 == byte_update_little_endian(mutex#7, 0l, -1, char)
      guard: (!\guard#1 && !\guard#2 || \guard#1) && \guard#3 && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4)
// 42 file <builtin-library-pthread_mutex_destroy> line 41 function pthread_mutex_destroy
(110) pthread_mutex_destroy#return_value!0#3 == 0
      guard: (!\guard#1 && !\guard#2 || \guard#1) && \guard#3 && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4)
// 43 file <builtin-library-pthread_mutex_destroy> line 42 function pthread_mutex_destroy
// 106 file ./race-1_1-join_true-unreach-call.c line 51 function module_exit
(111) SHARED_WRITE(pdev#6)
      guard: (!\guard#1 && !\guard#2 || \guard#1) && \guard#3 && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4)
// 106 file ./race-1_1-join_true-unreach-call.c line 51 function module_exit
(112) pdev#6 == 5
      guard: (!\guard#1 && !\guard#2 || \guard#1) && \guard#3 && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(113) SHARED_READ(pdev#7)
      guard: (!\guard#1 && !\guard#2 || \guard#1) && \guard#3 && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(114) SHARED_READ(pdev#8)
      guard: (!\guard#1 && !\guard#2 || \guard#1) && \guard#3 && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(115) expression!0@3#1 == (signed int)(pdev#8 == 5)
      guard: (!\guard#1 && !\guard#2 || \guard#1) && \guard#3 && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4)
// 78 file ./race-1_1-join_true-unreach-call.c line 8 function ldv_assert
// 78 file ./race-1_1-join_true-unreach-call.c line 8 function ldv_assert
(116) \guard#6 == (expression!0@3#1 == 0)
// 79 file ./race-1_1-join_true-unreach-call.c line 8 function ldv_assert
(117) ASSERT(!((!\guard#1 && !\guard#2 || \guard#1) && \guard#3 && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#6))
      guard: (!\guard#1 && !\guard#2 || \guard#1) && \guard#3 && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#6
// 81 file ./race-1_1-join_true-unreach-call.c line 8 function ldv_assert
// 109 file ./race-1_1-join_true-unreach-call.c line 53 function module_exit
// 6 file ./race-1_1-join_true-unreach-call.c line 59 function main
(118) pthread_mutex_destroy#return_value!0#4 == 0
// 6 file ./race-1_1-join_true-unreach-call.c line 59 function main
(119) pthread_join#return_value!0#8 == pthread_join#return_value!0#7
// 6 file ./race-1_1-join_true-unreach-call.c line 59 function main
(120) main#return_value!0#1 == 0
      guard: (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#6 && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !\guard#3)
// 8 file ./race-1_1-join_true-unreach-call.c line 60 function main
// 112 file ./race-1_1-join_true-unreach-call.c line 55
(121) return`!0#1 == 0
      guard: (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#6 && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !\guard#3)
// 114 file ./race-1_1-join_true-unreach-call.c line 55
// 115
// 19 file <builtin-library-pthread_create> line 33 function pthread_create
(122) __CPROVER_thread_id!1#2 == this_thread_id!1@0#0
      guard: \guard#1
// 21 file <builtin-library-pthread_create> line 39 function pthread_create
// 22 file <builtin-library-pthread_create> line 39 function pthread_create
// 22 file <builtin-library-pthread_create> line 39 function pthread_create
// 22 file <builtin-library-pthread_create> line 39 function pthread_create
(123) arg!1@1#1 == NULL
      guard: \guard#1
// 82 file ./race-1_1-join_true-unreach-call.c line 14 function thread1
// 82 file ./race-1_1-join_true-unreach-call.c line 14 function thread1
// 82 file ./race-1_1-join_true-unreach-call.c line 14 function thread1
(124) mutex!1@1#1 == &mutex
      guard: \guard#1
// 49 file <builtin-library-pthread_mutex_lock> line 37 function pthread_mutex_lock
// 50 file <builtin-library-pthread_mutex_lock> line 38 function pthread_mutex_lock
(125) mutex#10 == mutex#9
      guard: \guard#1
// 51 file <builtin-library-pthread_mutex_lock> line 39 function pthread_mutex_lock
(126) mutex#11 == (\guard#1 ? mutex#10 : mutex#9)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 51 file <builtin-library-pthread_mutex_lock> line 39 function pthread_mutex_lock
(127) mutex#12 == byte_update_little_endian(mutex#11, 0l, 1, char)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(128) SHARED_READ(mutex#9)
      guard: byte_extract_little_endian(mutex#10, 0l, char) == 0 && \guard#1 || \guard#1
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(129) SHARED_WRITE(mutex#12)
      guard: byte_extract_little_endian(mutex#10, 0l, char) == 0 && \guard#1
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
// 53 file <builtin-library-pthread_mutex_lock> line 42 function pthread_mutex_lock
// 54 file <builtin-library-pthread_mutex_lock> line 46 function pthread_mutex_lock
(130) pthread_mutex_lock#return_value!1#2 == 0
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 55 file <builtin-library-pthread_mutex_lock> line 47 function pthread_mutex_lock
// 83 file ./race-1_1-join_true-unreach-call.c line 15 function thread1
(131) SHARED_WRITE(pdev#9)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 83 file ./race-1_1-join_true-unreach-call.c line 15 function thread1
(132) pdev#9 == 6
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(133) SHARED_READ(pdev#10)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(134) SHARED_READ(pdev#11)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(135) expression!1@1#1 == (signed int)(pdev#11 == 6)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 78 file ./race-1_1-join_true-unreach-call.c line 8 function ldv_assert
// 78 file ./race-1_1-join_true-unreach-call.c line 8 function ldv_assert
(136) \guard#7 == (expression!1@1#1 == 0)
// 79 file ./race-1_1-join_true-unreach-call.c line 8 function ldv_assert
(137) ASSERT(!(\guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && \guard#7))
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && \guard#7
// 81 file ./race-1_1-join_true-unreach-call.c line 8 function ldv_assert
// 85 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
// 85 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
// 85 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(138) mutex!1@1#1 == &mutex
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && !\guard#7
// 56 file <builtin-library-pthread_mutex_unlock> line 36 function pthread_mutex_unlock
// 57 file <builtin-library-pthread_mutex_unlock> line 38 function pthread_mutex_unlock
// 58 file <builtin-library-pthread_mutex_unlock> line 39 function pthread_mutex_unlock
(139) mutex#14 == mutex#13
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && !\guard#7
// 58 file <builtin-library-pthread_mutex_unlock> line 39 function pthread_mutex_unlock
(140) ASSERT(\guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && !\guard#7 ==> (signed int)byte_extract_little_endian(mutex#14, 0l, char) == 1)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && !\guard#7
// 59 file <builtin-library-pthread_mutex_unlock> line 41 function pthread_mutex_unlock
(141) mutex#15 == byte_update_little_endian(mutex#14, 0l, 0, char)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && !\guard#7
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(142) SHARED_READ(mutex#13)
      guard: byte_extract_little_endian(mutex#10, 0l, char) == 0 && !\guard#7 && \guard#1
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(143) SHARED_WRITE(mutex#15)
      guard: byte_extract_little_endian(mutex#10, 0l, char) == 0 && !\guard#7 && \guard#1
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
// 61 file <builtin-library-pthread_mutex_unlock> line 45 function pthread_mutex_unlock
(144) pthread_mutex_unlock#return_value!1#2 == 0
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && !\guard#7
// 62 file <builtin-library-pthread_mutex_unlock> line 46 function pthread_mutex_unlock
// 86 file ./race-1_1-join_true-unreach-call.c line 18 function thread1
(145) thread1#return_value!1#2 == NULL
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && !\guard#7
// 87 file ./race-1_1-join_true-unreach-call.c line 19 function thread1
// 23 file <builtin-library-pthread_create> line 40 function pthread_create
// 24 file <builtin-library-pthread_create> line 42 function pthread_create
(146) SHARED_READ(__CPROVER_threads_exited#3)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && !\guard#7
// 24 file <builtin-library-pthread_create> line 42 function pthread_create
(147) SHARED_WRITE(__CPROVER_threads_exited#4)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && !\guard#7
// 24 file <builtin-library-pthread_create> line 42 function pthread_create
(148) __CPROVER_threads_exited#4 == __CPROVER_threads_exited#3 WITH [(signed long int)this_thread_id!1@0#0:=TRUE]
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && !\guard#7
// 28 file <builtin-library-pthread_create> line 45 function pthread_create
// 37 file <builtin-library-pthread_join> line 28 function pthread_join
(149) CONSTRAINT(__CPROVER_threads_exited#2 == __CPROVER_threads_exited#1 || !choice_rf0)
// 37 file <builtin-library-pthread_join> line 28 function pthread_join
(150) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && __CPROVER_threads_exited#2 == __CPROVER_threads_exited#4 && !\guard#7 && \guard#1 || !choice_rf1)
// 37 file <builtin-library-pthread_join> line 28 function pthread_join
(151) CONSTRAINT(!(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#2$rclk$8) || !choice_rf1)
// 37 file <builtin-library-pthread_join> line 28 function pthread_join
(152) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf0 || choice_rf1 || \guard#4 || \guard#5)
// 24 file <builtin-library-pthread_create> line 42 function pthread_create
(153) CONSTRAINT(__CPROVER_threads_exited#3 == __CPROVER_threads_exited#1 || !choice_rf2)
// 24 file <builtin-library-pthread_create> line 42 function pthread_create
(154) CONSTRAINT(!(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#3$rclk$8) || !choice_rf2)
// 24 file <builtin-library-pthread_create> line 42 function pthread_create
(155) CONSTRAINT(!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf2 || \guard#7)
// 29 file <builtin-library-pthread_join> line 25 function pthread_join
(156) CONSTRAINT(__CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#1 || !choice_rf3)
// 29 file <builtin-library-pthread_join> line 25 function pthread_join
(157) CONSTRAINT(__CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#2 && \guard#1 || !choice_rf4)
// 29 file <builtin-library-pthread_join> line 25 function pthread_join
(158) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf3 || choice_rf4)
// 104 file ./race-1_1-join_true-unreach-call.c line 48 function module_exit
(159) CONSTRAINT(t1#3 == t1#1 || !choice_rf5)
// 104 file ./race-1_1-join_true-unreach-call.c line 48 function module_exit
(160) CONSTRAINT(t1#3 == t1#2 && \guard#1 || !choice_rf6)
// 104 file ./race-1_1-join_true-unreach-call.c line 48 function module_exit
(161) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf5 || choice_rf6)
// 104 file ./race-1_1-join_true-unreach-call.c line 48 function module_exit
(162) CONSTRAINT(t1#4 == t1#1 || !choice_rf7)
// 104 file ./race-1_1-join_true-unreach-call.c line 48 function module_exit
(163) CONSTRAINT(t1#4 == t1#2 && \guard#1 || !choice_rf8)
// 104 file ./race-1_1-join_true-unreach-call.c line 48 function module_exit
(164) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || !\guard#3 || choice_rf7 || choice_rf8)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(165) CONSTRAINT(mutex#3 == mutex#1 || !choice_rf9)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(166) CONSTRAINT(mutex#3 == mutex#2 || !choice_rf10)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(167) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#3 == mutex#12 && \guard#1 || !choice_rf11)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(168) CONSTRAINT(!(mutex#12$wclk$8 >= mutex#3$rclk$8) || !choice_rf11)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(169) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#3 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf12)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(170) CONSTRAINT(!(mutex#15$wclk$8 >= mutex#3$rclk$8) || !choice_rf12)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(171) CONSTRAINT(choice_rf10 || choice_rf11 || choice_rf12 || choice_rf9 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(172) CONSTRAINT(mutex#4 == mutex#1 || !choice_rf13)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(173) CONSTRAINT(mutex#4 == mutex#2 || !choice_rf14)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(174) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#4 == mutex#12 && \guard#1 || !choice_rf15)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(175) CONSTRAINT(!(mutex#12$wclk$8 >= mutex#4$rclk$8) || !choice_rf15)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(176) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#4 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf16)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(177) CONSTRAINT(!(mutex#15$wclk$8 >= mutex#4$rclk$8) || !choice_rf16)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(178) CONSTRAINT(choice_rf13 || choice_rf14 || choice_rf15 || choice_rf16 || \guard#1 || \guard#2)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(179) CONSTRAINT(mutex#6 == mutex#1 || !choice_rf17)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(180) CONSTRAINT(mutex#6 == mutex#2 || !choice_rf18)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(181) CONSTRAINT(mutex#6 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf19)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(182) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#6 == mutex#12 && \guard#1 || !choice_rf20)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(183) CONSTRAINT(!(mutex#12$wclk$8 >= mutex#6$rclk$8) || !choice_rf20)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(184) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#6 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf21)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(185) CONSTRAINT(!(mutex#15$wclk$8 >= mutex#6$rclk$8) || !choice_rf21)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(186) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf17 || choice_rf18 || choice_rf19 || choice_rf20 || choice_rf21)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(187) CONSTRAINT(mutex#7 == mutex#1 || !choice_rf22)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(188) CONSTRAINT(mutex#7 == mutex#2 || !choice_rf23)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(189) CONSTRAINT(mutex#7 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf24)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(190) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#7 == mutex#12 && \guard#1 || !choice_rf25)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(191) CONSTRAINT(!(mutex#12$wclk$8 >= mutex#7$rclk$8) || !choice_rf25)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(192) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#7 == mutex#15 && !\guard#7 && \guard#1 || !choice_rf26)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(193) CONSTRAINT(!(mutex#15$wclk$8 >= mutex#7$rclk$8) || !choice_rf26)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(194) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf22 || choice_rf23 || choice_rf24 || choice_rf25 || choice_rf26)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(195) CONSTRAINT(mutex#9 == mutex#1 || !choice_rf27)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(196) CONSTRAINT(!(mutex#1$wclk$8 >= mutex#9$rclk$8) || !choice_rf27)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(197) CONSTRAINT(mutex#9 == mutex#2 || !choice_rf28)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(198) CONSTRAINT(!(mutex#2$wclk$8 >= mutex#9$rclk$8) || !choice_rf28)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(199) CONSTRAINT(mutex#9 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf29)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(200) CONSTRAINT(!(mutex#5$wclk$8 >= mutex#9$rclk$8) || !choice_rf29)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(201) CONSTRAINT(mutex#9 == mutex#8 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf30)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(202) CONSTRAINT(!(mutex#8$wclk$8 >= mutex#9$rclk$8) || !choice_rf30)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(203) CONSTRAINT((!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || choice_rf27 || choice_rf28 || choice_rf29 || choice_rf30)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(204) CONSTRAINT(mutex#13 == mutex#1 || !choice_rf31)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(205) CONSTRAINT(!(mutex#1$wclk$8 >= mutex#13$rclk$8) || !choice_rf31)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(206) CONSTRAINT(mutex#13 == mutex#2 || !choice_rf32)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(207) CONSTRAINT(!(mutex#2$wclk$8 >= mutex#13$rclk$8) || !choice_rf32)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(208) CONSTRAINT(mutex#13 == mutex#5 && !\guard#1 && !\guard#2 || !choice_rf33)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(209) CONSTRAINT(!(mutex#5$wclk$8 >= mutex#13$rclk$8) || !choice_rf33)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(210) CONSTRAINT(mutex#13 == mutex#8 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf34)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(211) CONSTRAINT(!(mutex#8$wclk$8 >= mutex#13$rclk$8) || !choice_rf34)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(212) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#13 == mutex#12 && \guard#1 || !choice_rf35)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(213) CONSTRAINT(!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf31 || choice_rf32 || choice_rf33 || choice_rf34 || choice_rf35 || \guard#7)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(214) CONSTRAINT(pdev#4 == pdev#1 || !choice_rf36)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(215) CONSTRAINT(pdev#4 == pdev#2 || !choice_rf37)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(216) CONSTRAINT(pdev#4 == pdev#3 && !\guard#1 || !choice_rf38)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(217) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#4 == pdev#9 && \guard#1 || !choice_rf39)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(218) CONSTRAINT(!(pdev#9$wclk$8 >= pdev#4$rclk$8) || !choice_rf39)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(219) CONSTRAINT(choice_rf36 || choice_rf37 || choice_rf38 || choice_rf39 || \guard#1)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(220) CONSTRAINT(pdev#5 == pdev#1 || !choice_rf40)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(221) CONSTRAINT(pdev#5 == pdev#2 || !choice_rf41)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(222) CONSTRAINT(pdev#5 == pdev#3 && !\guard#1 || !choice_rf42)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(223) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#5 == pdev#9 && \guard#1 || !choice_rf43)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(224) CONSTRAINT(!(pdev#9$wclk$8 >= pdev#5$rclk$8) || !choice_rf43)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(225) CONSTRAINT(choice_rf40 || choice_rf41 || choice_rf42 || choice_rf43 || \guard#1)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(226) CONSTRAINT(pdev#7 == pdev#1 || !choice_rf44)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(227) CONSTRAINT(pdev#7 == pdev#2 || !choice_rf45)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(228) CONSTRAINT(pdev#7 == pdev#3 && !\guard#1 || !choice_rf46)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(229) CONSTRAINT(pdev#7 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf47)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(230) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#7 == pdev#9 && \guard#1 || !choice_rf48)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(231) CONSTRAINT(!(pdev#9$wclk$8 >= pdev#7$rclk$8) || !choice_rf48)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(232) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf44 || choice_rf45 || choice_rf46 || choice_rf47 || choice_rf48)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(233) CONSTRAINT(pdev#8 == pdev#1 || !choice_rf49)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(234) CONSTRAINT(pdev#8 == pdev#2 || !choice_rf50)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(235) CONSTRAINT(pdev#8 == pdev#3 && !\guard#1 || !choice_rf51)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(236) CONSTRAINT(pdev#8 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf52)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(237) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#8 == pdev#9 && \guard#1 || !choice_rf53)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(238) CONSTRAINT(!(pdev#9$wclk$8 >= pdev#8$rclk$8) || !choice_rf53)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(239) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !\guard#3 || choice_rf49 || choice_rf50 || choice_rf51 || choice_rf52 || choice_rf53)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(240) CONSTRAINT(pdev#10 == pdev#1 || !choice_rf54)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(241) CONSTRAINT(!(pdev#1$wclk$8 >= pdev#10$rclk$8) || !choice_rf54)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(242) CONSTRAINT(pdev#10 == pdev#2 || !choice_rf55)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(243) CONSTRAINT(!(pdev#2$wclk$8 >= pdev#10$rclk$8) || !choice_rf55)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(244) CONSTRAINT(pdev#10 == pdev#3 && !\guard#1 || !choice_rf56)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(245) CONSTRAINT(!(pdev#3$wclk$8 >= pdev#10$rclk$8) || !choice_rf56)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(246) CONSTRAINT(pdev#10 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf57)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(247) CONSTRAINT(!(pdev#6$wclk$8 >= pdev#10$rclk$8) || !choice_rf57)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(248) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#10 == pdev#9 && \guard#1 || !choice_rf58)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(249) CONSTRAINT(!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf54 || choice_rf55 || choice_rf56 || choice_rf57 || choice_rf58)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(250) CONSTRAINT(pdev#11 == pdev#1 || !choice_rf59)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(251) CONSTRAINT(!(pdev#1$wclk$8 >= pdev#11$rclk$8) || !choice_rf59)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(252) CONSTRAINT(pdev#11 == pdev#2 || !choice_rf60)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(253) CONSTRAINT(!(pdev#2$wclk$8 >= pdev#11$rclk$8) || !choice_rf60)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(254) CONSTRAINT(pdev#11 == pdev#3 && !\guard#1 || !choice_rf61)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(255) CONSTRAINT(!(pdev#3$wclk$8 >= pdev#11$rclk$8) || !choice_rf61)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(256) CONSTRAINT(pdev#11 == pdev#6 && (!\guard#1 && !\guard#2 || \guard#1) && (!\guard#4 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#5 || \guard#5) || \guard#4) && \guard#3 || !choice_rf62)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(257) CONSTRAINT(!(pdev#6$wclk$8 >= pdev#11$rclk$8) || !choice_rf62)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(258) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#11 == pdev#9 && \guard#1 || !choice_rf63)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(259) CONSTRAINT(!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf59 || choice_rf60 || choice_rf61 || choice_rf62 || choice_rf63)
// 73 file <built-in-additions> line 7
(260) CONSTRAINT(!(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_ws-ext64)
// 73 file <built-in-additions> line 7
(261) CONSTRAINT(!(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8) || choice_ws-ext64)
// 74 file ./race-1_1-join_true-unreach-call.c line 10
(262) CONSTRAINT(!(mutex#1$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext65)
// 74 file ./race-1_1-join_true-unreach-call.c line 10
(263) CONSTRAINT(!(mutex#12$wclk$8 >= mutex#1$wclk$8) || choice_ws-ext65)
// 74 file ./race-1_1-join_true-unreach-call.c line 10
(264) CONSTRAINT(!(mutex#1$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext66)
// 74 file ./race-1_1-join_true-unreach-call.c line 10
(265) CONSTRAINT(!(mutex#15$wclk$8 >= mutex#1$wclk$8) || choice_ws-ext66)
// 44 file <builtin-library-pthread_mutex_init> line 31 function pthread_mutex_init
(266) CONSTRAINT(!(mutex#2$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext67)
// 44 file <builtin-library-pthread_mutex_init> line 31 function pthread_mutex_init
(267) CONSTRAINT(!(mutex#12$wclk$8 >= mutex#2$wclk$8) || choice_ws-ext67)
// 44 file <builtin-library-pthread_mutex_init> line 31 function pthread_mutex_init
(268) CONSTRAINT(!(mutex#2$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext68)
// 44 file <builtin-library-pthread_mutex_init> line 31 function pthread_mutex_init
(269) CONSTRAINT(!(mutex#15$wclk$8 >= mutex#2$wclk$8) || choice_ws-ext68)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(270) CONSTRAINT(!(mutex#5$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext69)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(271) CONSTRAINT(!(mutex#12$wclk$8 >= mutex#5$wclk$8) || choice_ws-ext69)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(272) CONSTRAINT(!(mutex#5$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext70)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(273) CONSTRAINT(!(mutex#15$wclk$8 >= mutex#5$wclk$8) || choice_ws-ext70)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(274) CONSTRAINT(!(mutex#8$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext71)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(275) CONSTRAINT(!(mutex#12$wclk$8 >= mutex#8$wclk$8) || choice_ws-ext71)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(276) CONSTRAINT(!(mutex#8$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext72)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(277) CONSTRAINT(!(mutex#15$wclk$8 >= mutex#8$wclk$8) || choice_ws-ext72)
// 75 file ./race-1_1-join_true-unreach-call.c line 11
(278) CONSTRAINT(!(pdev#1$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext73)
// 75 file ./race-1_1-join_true-unreach-call.c line 11
(279) CONSTRAINT(!(pdev#9$wclk$8 >= pdev#1$wclk$8) || choice_ws-ext73)
// 89 file ./race-1_1-join_true-unreach-call.c line 24 function module_init
(280) CONSTRAINT(!(pdev#2$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext74)
// 89 file ./race-1_1-join_true-unreach-call.c line 24 function module_init
(281) CONSTRAINT(!(pdev#9$wclk$8 >= pdev#2$wclk$8) || choice_ws-ext74)
// 97 file ./race-1_1-join_true-unreach-call.c line 37 function module_init
(282) CONSTRAINT(!(pdev#3$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext75)
// 97 file ./race-1_1-join_true-unreach-call.c line 37 function module_init
(283) CONSTRAINT(!(pdev#9$wclk$8 >= pdev#3$wclk$8) || choice_ws-ext75)
// 106 file ./race-1_1-join_true-unreach-call.c line 51 function module_exit
(284) CONSTRAINT(!(pdev#6$wclk$8 >= pdev#9$wclk$8) || !choice_ws-ext76)
// 106 file ./race-1_1-join_true-unreach-call.c line 51 function module_exit
(285) CONSTRAINT(!(pdev#9$wclk$8 >= pdev#6$wclk$8) || choice_ws-ext76)
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(286) CONSTRAINT(!(t1$17$spwnclk$8 >= mutex#9$rclk$8))
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(287) CONSTRAINT(!(t1$17$spwnclk$8 >= mutex#12$wclk$8))
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(288) CONSTRAINT(!(t1$17$spwnclk$8 >= pdev#9$wclk$8))
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(289) CONSTRAINT(!(t1$17$spwnclk$8 >= pdev#10$rclk$8))
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(290) CONSTRAINT(!(t1$17$spwnclk$8 >= pdev#11$rclk$8))
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(291) CONSTRAINT(!(t1$17$spwnclk$8 >= mutex#13$rclk$8))
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(292) CONSTRAINT(!(t1$17$spwnclk$8 >= mutex#15$wclk$8))
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(293) CONSTRAINT(!(t1$17$spwnclk$8 >= __CPROVER_threads_exited#3$rclk$8))
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(294) CONSTRAINT(!(t1$17$spwnclk$8 >= __CPROVER_threads_exited#4$wclk$8))
// 63 file <built-in-additions> line 11
(295) CONSTRAINT(!(status!0@1$wclk$8 >= __CPROVER_dead_object#1$wclk$8))
// 64 file <built-in-additions> line 10
(296) CONSTRAINT(!(__CPROVER_dead_object#1$wclk$8 >= __CPROVER_deallocated#1$wclk$8))
// 65 file <built-in-additions> line 14
(297) CONSTRAINT(!(__CPROVER_deallocated#1$wclk$8 >= __CPROVER_malloc_is_new_array#1$wclk$8))
// 66 file <built-in-additions> line 12
(298) CONSTRAINT(!(__CPROVER_malloc_is_new_array#1$wclk$8 >= __CPROVER_malloc_object#1$wclk$8))
// 67 file <built-in-additions> line 13
(299) CONSTRAINT(!(__CPROVER_malloc_object#1$wclk$8 >= __CPROVER_malloc_size#1$wclk$8))
// 68 file <built-in-additions> line 15
(300) CONSTRAINT(!(__CPROVER_malloc_size#1$wclk$8 >= __CPROVER_memory_leak#1$wclk$8))
// 69 file <built-in-additions> line 8
(301) CONSTRAINT(!(__CPROVER_memory_leak#1$wclk$8 >= __CPROVER_next_thread_id#1$wclk$8))
// 70 file <built-in-additions> line 29
(302) CONSTRAINT(!(__CPROVER_next_thread_id#1$wclk$8 >= __CPROVER_pipe_count#1$wclk$8))
// 73 file <built-in-additions> line 7
(303) CONSTRAINT(!(__CPROVER_pipe_count#1$wclk$8 >= __CPROVER_threads_exited#1$wclk$8))
// 74 file ./race-1_1-join_true-unreach-call.c line 10
(304) CONSTRAINT(!(__CPROVER_threads_exited#1$wclk$8 >= mutex#1$wclk$8))
// 75 file ./race-1_1-join_true-unreach-call.c line 11
(305) CONSTRAINT(!(mutex#1$wclk$8 >= pdev#1$wclk$8))
// 76 file ./race-1_1-join_true-unreach-call.c line 9
(306) CONSTRAINT(!(pdev#1$wclk$8 >= t1#1$wclk$8))
// 44 file <builtin-library-pthread_mutex_init> line 31 function pthread_mutex_init
(307) CONSTRAINT(!(t1#1$wclk$8 >= mutex#2$wclk$8))
// 89 file ./race-1_1-join_true-unreach-call.c line 24 function module_init
(308) CONSTRAINT(!(mutex#2$wclk$8 >= pdev#2$wclk$8))
// 13 file <builtin-library-pthread_create> line 21 function pthread_create
(309) CONSTRAINT(!(pdev#2$wclk$8 >= __CPROVER_next_thread_id#2$wclk$8))
// 14 file <builtin-library-pthread_create> line 24 function pthread_create
(310) CONSTRAINT(!(__CPROVER_next_thread_id#2$wclk$8 >= t1#2$wclk$8))
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(311) CONSTRAINT(!(t1#2$wclk$8 >= t1$17$spwnclk$8))
// 97 file ./race-1_1-join_true-unreach-call.c line 37 function module_init
(312) CONSTRAINT(!(t1$17$spwnclk$8 >= pdev#3$wclk$8))
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(313) CONSTRAINT(!(pdev#3$wclk$8 >= pdev#4$rclk$8))
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(314) CONSTRAINT(!(pdev#4$rclk$8 >= pdev#5$rclk$8))
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(315) CONSTRAINT(!(pdev#5$rclk$8 >= mutex#3$rclk$8))
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(316) CONSTRAINT(!(mutex#3$rclk$8 >= mutex#4$rclk$8))
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(317) CONSTRAINT(!(mutex#4$rclk$8 >= mutex#5$wclk$8))
// 103 file ./race-1_1-join_true-unreach-call.c line 44 function module_exit
(318) CONSTRAINT(!(mutex#5$wclk$8 >= status!0@1#1$wclk$8))
// 104 file ./race-1_1-join_true-unreach-call.c line 48 function module_exit
(319) CONSTRAINT(!(status!0@1#1$wclk$8 >= t1#3$rclk$8))
// 104 file ./race-1_1-join_true-unreach-call.c line 48 function module_exit
(320) CONSTRAINT(!(t1#3$rclk$8 >= t1#4$rclk$8))
// 29 file <builtin-library-pthread_join> line 25 function pthread_join
(321) CONSTRAINT(!(t1#4$rclk$8 >= __CPROVER_next_thread_id#3$rclk$8))
// 37 file <builtin-library-pthread_join> line 28 function pthread_join
(322) CONSTRAINT(!(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_threads_exited#2$rclk$8))
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(323) CONSTRAINT(!(__CPROVER_threads_exited#2$rclk$8 >= mutex#6$rclk$8))
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(324) CONSTRAINT(!(mutex#6$rclk$8 >= mutex#7$rclk$8))
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(325) CONSTRAINT(!(mutex#7$rclk$8 >= mutex#8$wclk$8))
// 106 file ./race-1_1-join_true-unreach-call.c line 51 function module_exit
(326) CONSTRAINT(!(mutex#8$wclk$8 >= pdev#6$wclk$8))
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(327) CONSTRAINT(!(pdev#6$wclk$8 >= pdev#7$rclk$8))
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(328) CONSTRAINT(!(pdev#7$rclk$8 >= pdev#8$rclk$8))
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(329) CONSTRAINT(mutex#9$rclk$8 == mutex#12$wclk$8)
// 83 file ./race-1_1-join_true-unreach-call.c line 15 function thread1
(330) CONSTRAINT(!(mutex#12$wclk$8 >= pdev#9$wclk$8))
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(331) CONSTRAINT(!(pdev#9$wclk$8 >= pdev#10$rclk$8))
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(332) CONSTRAINT(!(pdev#10$rclk$8 >= pdev#11$rclk$8))
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(333) CONSTRAINT(!(pdev#11$rclk$8 >= mutex#13$rclk$8))
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(334) CONSTRAINT(mutex#13$rclk$8 == mutex#15$wclk$8)
// 24 file <builtin-library-pthread_create> line 42 function pthread_create
(335) CONSTRAINT(!(mutex#15$wclk$8 >= __CPROVER_threads_exited#3$rclk$8))
// 24 file <builtin-library-pthread_create> line 42 function pthread_create
(336) CONSTRAINT(!(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8))
// 24 file <builtin-library-pthread_create> line 42 function pthread_create
(337) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_rf2 || !\guard#1 || \guard#7)
// 37 file <builtin-library-pthread_join> line 28 function pthread_join
(338) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_rf0 || !\guard#1 || !\guard#3 || \guard#4 || \guard#5 || \guard#7)
// 37 file <builtin-library-pthread_join> line 28 function pthread_join
(339) CONSTRAINT(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf1 || !\guard#3 || \guard#4 || \guard#5)
// 29 file <builtin-library-pthread_join> line 25 function pthread_join
(340) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || !(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8) || !choice_rf3 || !\guard#1 || !\guard#3)
// 104 file ./race-1_1-join_true-unreach-call.c line 48 function module_exit
(341) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || !(t1#3$rclk$8 >= t1#2$wclk$8) || !choice_rf5 || !\guard#1 || !\guard#3)
// 104 file ./race-1_1-join_true-unreach-call.c line 48 function module_exit
(342) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || !(t1#4$rclk$8 >= t1#2$wclk$8) || !choice_rf7 || !\guard#1 || !\guard#3)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(343) CONSTRAINT(!(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf13 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(344) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#2$wclk$8) || !choice_rf22 || !\guard#3)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(345) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf17 || !\guard#3)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(346) CONSTRAINT((!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(mutex#9$rclk$8 >= mutex#2$wclk$8) || !choice_rf27)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(347) CONSTRAINT(!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#2$wclk$8) || !choice_rf31 || !\guard#1 || \guard#7)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(348) CONSTRAINT(!(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf9 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(349) CONSTRAINT(!(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf13 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(350) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf22 || !\guard#3 || \guard#1 || \guard#2)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(351) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf17 || !\guard#3 || \guard#1 || \guard#2)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(352) CONSTRAINT((!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf27 || \guard#1 || \guard#2)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(353) CONSTRAINT(TRUE)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(354) CONSTRAINT(!(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf9 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(355) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf13 || !\guard#3 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(356) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf22 || !\guard#3)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(357) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf17 || !\guard#3)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(358) CONSTRAINT((!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf27 || !\guard#3)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(359) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf31 || !\guard#1 || !\guard#3 || \guard#7)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(360) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf9 || !\guard#3 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(361) CONSTRAINT(TRUE)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(362) CONSTRAINT(mutex#12$wclk$8 >= mutex#1$wclk$8 || !(mutex#4$rclk$8 >= mutex#1$wclk$8) || !choice_rf15 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(363) CONSTRAINT(mutex#1$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#12$wclk$8) || !choice_rf22 || !\guard#1 || !\guard#3)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(364) CONSTRAINT(mutex#12$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#1$wclk$8) || !choice_rf25 || !\guard#3)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(365) CONSTRAINT(mutex#1$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#12$wclk$8) || !choice_rf17 || !\guard#1 || !\guard#3)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(366) CONSTRAINT(mutex#12$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#1$wclk$8) || !choice_rf20 || !\guard#3)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(367) CONSTRAINT(mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#1$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf27 || !\guard#1)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(368) CONSTRAINT(mutex#1$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf31 || !\guard#1 || \guard#7)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(369) CONSTRAINT(mutex#12$wclk$8 >= mutex#1$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#1$wclk$8) || !choice_rf35 || !\guard#1 || \guard#7)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(370) CONSTRAINT(TRUE)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(371) CONSTRAINT(mutex#12$wclk$8 >= mutex#1$wclk$8 || !(mutex#3$rclk$8 >= mutex#1$wclk$8) || !choice_rf11 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(372) CONSTRAINT(mutex#15$wclk$8 >= mutex#1$wclk$8 || !(mutex#4$rclk$8 >= mutex#1$wclk$8) || !choice_rf16 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(373) CONSTRAINT(TRUE)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(374) CONSTRAINT(mutex#15$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#1$wclk$8) || !choice_rf26 || !\guard#3)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(375) CONSTRAINT(mutex#1$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf22 || !\guard#1 || !\guard#3 || \guard#7)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(376) CONSTRAINT(mutex#15$wclk$8 >= mutex#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#1$wclk$8) || !choice_rf21 || !\guard#3)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(377) CONSTRAINT(mutex#1$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf17 || !\guard#1 || !\guard#3 || \guard#7)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(378) CONSTRAINT(mutex#1$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf27 || !\guard#1 || \guard#7)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(379) CONSTRAINT(mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#1$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf31 || !\guard#1 || \guard#7)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(380) CONSTRAINT(mutex#15$wclk$8 >= mutex#1$wclk$8 || !(mutex#3$rclk$8 >= mutex#1$wclk$8) || !choice_rf12 || \guard#1 || \guard#2)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(381) CONSTRAINT(TRUE)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(382) CONSTRAINT(!(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf14 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(383) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf23 || !\guard#3 || \guard#1 || \guard#2)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(384) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf18 || !\guard#3 || \guard#1 || \guard#2)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(385) CONSTRAINT((!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf28 || \guard#1 || \guard#2)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(386) CONSTRAINT(TRUE)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(387) CONSTRAINT(!(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf10 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(388) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf14 || !\guard#3 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(389) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf23 || !\guard#3)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(390) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf18 || !\guard#3)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(391) CONSTRAINT((!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf28 || !\guard#3)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(392) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf32 || !\guard#1 || !\guard#3 || \guard#7)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(393) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf10 || !\guard#3 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(394) CONSTRAINT(TRUE)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(395) CONSTRAINT(mutex#12$wclk$8 >= mutex#2$wclk$8 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf15 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(396) CONSTRAINT(mutex#2$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#12$wclk$8) || !choice_rf23 || !\guard#1 || !\guard#3)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(397) CONSTRAINT(mutex#12$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#2$wclk$8) || !choice_rf25 || !\guard#3)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(398) CONSTRAINT(mutex#2$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#12$wclk$8) || !choice_rf18 || !\guard#1 || !\guard#3)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(399) CONSTRAINT(mutex#12$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf20 || !\guard#3)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(400) CONSTRAINT(mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#2$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf28 || !\guard#1)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(401) CONSTRAINT(mutex#2$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf32 || !\guard#1 || \guard#7)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(402) CONSTRAINT(mutex#12$wclk$8 >= mutex#2$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#2$wclk$8) || !choice_rf35 || !\guard#1 || \guard#7)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(403) CONSTRAINT(TRUE)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(404) CONSTRAINT(mutex#12$wclk$8 >= mutex#2$wclk$8 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf11 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(405) CONSTRAINT(mutex#15$wclk$8 >= mutex#2$wclk$8 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf16 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(406) CONSTRAINT(TRUE)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(407) CONSTRAINT(mutex#15$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#2$wclk$8) || !choice_rf26 || !\guard#3)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(408) CONSTRAINT(mutex#2$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf23 || !\guard#1 || !\guard#3 || \guard#7)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(409) CONSTRAINT(mutex#15$wclk$8 >= mutex#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf21 || !\guard#3)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(410) CONSTRAINT(mutex#2$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf18 || !\guard#1 || !\guard#3 || \guard#7)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(411) CONSTRAINT(mutex#2$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf28 || !\guard#1 || \guard#7)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(412) CONSTRAINT(mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#2$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf32 || !\guard#1 || \guard#7)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(413) CONSTRAINT(mutex#15$wclk$8 >= mutex#2$wclk$8 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf12 || \guard#1 || \guard#2)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(414) CONSTRAINT(TRUE)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(415) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf24 || !\guard#3)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(416) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf19 || !\guard#3)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(417) CONSTRAINT((!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf29 || !\guard#3)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(418) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf33 || !\guard#1 || !\guard#3 || \guard#7)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(419) CONSTRAINT(mutex#12$wclk$8 >= mutex#5$wclk$8 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf15 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(420) CONSTRAINT(mutex#5$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#12$wclk$8) || !choice_rf24 || !\guard#1 || !\guard#3)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(421) CONSTRAINT(mutex#12$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf25 || !\guard#3 || \guard#1 || \guard#2)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(422) CONSTRAINT(mutex#5$wclk$8 >= mutex#12$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#12$wclk$8) || !choice_rf19 || !\guard#1 || !\guard#3)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(423) CONSTRAINT(mutex#12$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf20 || !\guard#3 || \guard#1 || \guard#2)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(424) CONSTRAINT(mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#5$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf29 || !\guard#1)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(425) CONSTRAINT(mutex#5$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf33 || !\guard#1 || \guard#7)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(426) CONSTRAINT(TRUE)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(427) CONSTRAINT(mutex#12$wclk$8 >= mutex#5$wclk$8 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf11 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(428) CONSTRAINT(mutex#15$wclk$8 >= mutex#5$wclk$8 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf16 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(429) CONSTRAINT(mutex#5$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf24 || !\guard#1 || !\guard#3 || \guard#7)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(430) CONSTRAINT(mutex#15$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf26 || !\guard#3 || \guard#1 || \guard#2)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(431) CONSTRAINT(mutex#5$wclk$8 >= mutex#15$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf19 || !\guard#1 || !\guard#3 || \guard#7)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(432) CONSTRAINT(mutex#15$wclk$8 >= mutex#5$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf21 || !\guard#3 || \guard#1 || \guard#2)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(433) CONSTRAINT(mutex#5$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf29 || !\guard#1 || \guard#7)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(434) CONSTRAINT(mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#5$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf33 || !\guard#1 || \guard#7)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(435) CONSTRAINT(mutex#15$wclk$8 >= mutex#5$wclk$8 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf12 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(436) CONSTRAINT(mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf15 || !\guard#3 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(437) CONSTRAINT(mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf25 || !\guard#3)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(438) CONSTRAINT(mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf20 || !\guard#3)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(439) CONSTRAINT(mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#8$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf30 || !\guard#1)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(440) CONSTRAINT(mutex#8$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf34 || !\guard#1 || \guard#7)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(441) CONSTRAINT(mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf35 || !\guard#1 || !\guard#3 || \guard#7)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(442) CONSTRAINT(mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf11 || !\guard#3 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(443) CONSTRAINT(mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf16 || !\guard#3 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(444) CONSTRAINT(mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf26 || !\guard#3)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(445) CONSTRAINT(mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf21 || !\guard#3)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(446) CONSTRAINT(mutex#8$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf30 || !\guard#1 || \guard#7)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(447) CONSTRAINT(mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#8$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf34 || !\guard#1 || \guard#7)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(448) CONSTRAINT(mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf12 || !\guard#3 || \guard#1 || \guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(449) CONSTRAINT(TRUE)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(450) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf25 || !\guard#1 || !\guard#3 || \guard#7)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(451) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf20 || !\guard#1 || !\guard#3 || \guard#7)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(452) CONSTRAINT(mutex#13$rclk$8 == mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf35 || !\guard#1 || \guard#7)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(453) CONSTRAINT(TRUE)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(454) CONSTRAINT(!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#2$wclk$8) || !choice_rf59 || !\guard#1)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(455) CONSTRAINT(!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#2$wclk$8) || !choice_rf54 || !\guard#1)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(456) CONSTRAINT(!(pdev#4$rclk$8 >= pdev#2$wclk$8) || !choice_rf36 || \guard#1)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(457) CONSTRAINT(!(pdev#5$rclk$8 >= pdev#2$wclk$8) || !choice_rf40 || \guard#1)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(458) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#2$wclk$8) || !choice_rf49 || !\guard#3)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(459) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#2$wclk$8) || !choice_rf44 || !\guard#3)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(460) CONSTRAINT(TRUE)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(461) CONSTRAINT(TRUE)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(462) CONSTRAINT(!(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf36 || \guard#1)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(463) CONSTRAINT(!(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf40 || \guard#1)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(464) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf49 || !\guard#3 || \guard#1)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(465) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf44 || !\guard#3 || \guard#1)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(466) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf59 || !\guard#1 || !\guard#3)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(467) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf54 || !\guard#1 || !\guard#3)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(468) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf36 || !\guard#3 || \guard#1)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(469) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf40 || !\guard#3 || \guard#1)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(470) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf49 || !\guard#3)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(471) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf44 || !\guard#3)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(472) CONSTRAINT(pdev#9$wclk$8 >= pdev#1$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#1$wclk$8) || !choice_rf63 || !\guard#1)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(473) CONSTRAINT(pdev#1$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf59 || !\guard#1)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(474) CONSTRAINT(pdev#9$wclk$8 >= pdev#1$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#1$wclk$8) || !choice_rf58 || !\guard#1)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(475) CONSTRAINT(pdev#1$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf54 || !\guard#1)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(476) CONSTRAINT(pdev#9$wclk$8 >= pdev#1$wclk$8 || !(pdev#4$rclk$8 >= pdev#1$wclk$8) || !choice_rf39 || \guard#1)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(477) CONSTRAINT(TRUE)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(478) CONSTRAINT(pdev#9$wclk$8 >= pdev#1$wclk$8 || !(pdev#5$rclk$8 >= pdev#1$wclk$8) || !choice_rf43 || \guard#1)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(479) CONSTRAINT(TRUE)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(480) CONSTRAINT(pdev#9$wclk$8 >= pdev#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#1$wclk$8) || !choice_rf53 || !\guard#3)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(481) CONSTRAINT(pdev#1$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf49 || !\guard#1 || !\guard#3)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(482) CONSTRAINT(pdev#9$wclk$8 >= pdev#1$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#1$wclk$8) || !choice_rf48 || !\guard#3)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(483) CONSTRAINT(pdev#1$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf44 || !\guard#1 || !\guard#3)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(484) CONSTRAINT(TRUE)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(485) CONSTRAINT(TRUE)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(486) CONSTRAINT(!(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf37 || \guard#1)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(487) CONSTRAINT(!(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf41 || \guard#1)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(488) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf50 || !\guard#3 || \guard#1)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(489) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf45 || !\guard#3 || \guard#1)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(490) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf60 || !\guard#1 || !\guard#3)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(491) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf55 || !\guard#1 || !\guard#3)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(492) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf37 || !\guard#3 || \guard#1)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(493) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf41 || !\guard#3 || \guard#1)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(494) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf50 || !\guard#3)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(495) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf45 || !\guard#3)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(496) CONSTRAINT(pdev#9$wclk$8 >= pdev#2$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#2$wclk$8) || !choice_rf63 || !\guard#1)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(497) CONSTRAINT(pdev#2$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf60 || !\guard#1)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(498) CONSTRAINT(pdev#9$wclk$8 >= pdev#2$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#2$wclk$8) || !choice_rf58 || !\guard#1)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(499) CONSTRAINT(pdev#2$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf55 || !\guard#1)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(500) CONSTRAINT(pdev#9$wclk$8 >= pdev#2$wclk$8 || !(pdev#4$rclk$8 >= pdev#2$wclk$8) || !choice_rf39 || \guard#1)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(501) CONSTRAINT(TRUE)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(502) CONSTRAINT(pdev#9$wclk$8 >= pdev#2$wclk$8 || !(pdev#5$rclk$8 >= pdev#2$wclk$8) || !choice_rf43 || \guard#1)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(503) CONSTRAINT(TRUE)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(504) CONSTRAINT(pdev#9$wclk$8 >= pdev#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#2$wclk$8) || !choice_rf53 || !\guard#3)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(505) CONSTRAINT(pdev#2$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf50 || !\guard#1 || !\guard#3)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(506) CONSTRAINT(pdev#9$wclk$8 >= pdev#2$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#2$wclk$8) || !choice_rf48 || !\guard#3)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(507) CONSTRAINT(pdev#2$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf45 || !\guard#1 || !\guard#3)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(508) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf61 || !\guard#1 || !\guard#3)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(509) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf56 || !\guard#1 || !\guard#3)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(510) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf38 || !\guard#3 || \guard#1)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(511) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf42 || !\guard#3 || \guard#1)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(512) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf51 || !\guard#3)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(513) CONSTRAINT((\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf46 || !\guard#3)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(514) CONSTRAINT(TRUE)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(515) CONSTRAINT(pdev#3$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf61 || !\guard#1)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(516) CONSTRAINT(TRUE)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(517) CONSTRAINT(pdev#3$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf56 || !\guard#1)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(518) CONSTRAINT(pdev#9$wclk$8 >= pdev#3$wclk$8 || !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf39 || \guard#1)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(519) CONSTRAINT(TRUE)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(520) CONSTRAINT(pdev#9$wclk$8 >= pdev#3$wclk$8 || !(pdev#5$rclk$8 >= pdev#3$wclk$8) || !choice_rf43 || \guard#1)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(521) CONSTRAINT(TRUE)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(522) CONSTRAINT(pdev#9$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#3$wclk$8) || !choice_rf53 || !\guard#3 || \guard#1)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(523) CONSTRAINT(pdev#3$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf51 || !\guard#1 || !\guard#3)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(524) CONSTRAINT(pdev#9$wclk$8 >= pdev#3$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#3$wclk$8) || !choice_rf48 || !\guard#3 || \guard#1)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(525) CONSTRAINT(pdev#3$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf46 || !\guard#1 || !\guard#3)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(526) CONSTRAINT(pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#6$wclk$8) || !choice_rf63 || !\guard#1 || !\guard#3)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(527) CONSTRAINT(pdev#6$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#11$rclk$8 >= pdev#9$wclk$8) || !choice_rf62 || !\guard#1)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(528) CONSTRAINT(pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#6$wclk$8) || !choice_rf58 || !\guard#1 || !\guard#3)
// 84 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(529) CONSTRAINT(pdev#6$wclk$8 >= pdev#9$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#10$rclk$8 >= pdev#9$wclk$8) || !choice_rf57 || !\guard#1)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(530) CONSTRAINT(pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#4$rclk$8 >= pdev#6$wclk$8) || !choice_rf39 || !\guard#3 || \guard#1)
// 98 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(531) CONSTRAINT(pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#5$rclk$8 >= pdev#6$wclk$8) || !choice_rf43 || !\guard#3 || \guard#1)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(532) CONSTRAINT(pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#8$rclk$8 >= pdev#6$wclk$8) || !choice_rf53 || !\guard#3)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(533) CONSTRAINT(pdev#6$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#9$wclk$8) || !choice_rf52 || !\guard#1 || !\guard#3)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(534) CONSTRAINT(pdev#9$wclk$8 >= pdev#6$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(pdev#7$rclk$8 >= pdev#6$wclk$8) || !choice_rf48 || !\guard#3)
// 107 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(535) CONSTRAINT(pdev#6$wclk$8 >= pdev#9$wclk$8 || (\guard#1 || \guard#2) && !\guard#1 || (\guard#4 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#5) && !\guard#5) && !\guard#4 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#7$rclk$8 >= pdev#9$wclk$8) || !choice_rf47 || !\guard#1 || !\guard#3)
