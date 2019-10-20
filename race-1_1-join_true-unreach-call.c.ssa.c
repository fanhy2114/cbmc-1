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
Adding SC constraints
Shared __CPROVER_threads_exited: 2R/2W
Shared __CPROVER_next_thread_id: 1R/2W
Shared t1: 2R/2W
Shared mutex: 6R/6W
Shared pdev: 3R/5W
size of program expression: 523 steps
no slicing due to threads
Generated 7 VCC(s), 6 remaining after simplification

Program constraints:
// 99 file race-1_1-join_true-unreach-call.c line 44 function module_exit
(1) SHARED_WRITE(status!0@1)
// 106
// 106
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
// 74 file race-1_1-join_true-unreach-call.c line 10
(22) SHARED_WRITE(mutex#1)
// 74 file race-1_1-join_true-unreach-call.c line 10
(23) mutex#1 == byte_extract_little_endian({ .__lock=0, .__count=0u, .__owner=0, .__nusers=0u, .__kind=0,
    .__spins=0, .__elision=0, .__list={ .__prev=((struct __pthread_internal_list { struct __pthread_internal_list *__prev; struct __pthread_internal_list *__next; } *)NULL), .__next=((struct __pthread_internal_list { struct __pthread_internal_list *__prev; struct __pthread_internal_list *__next; } *)NULL) } }, 0l, union { struct __pthread_mutex_s { signed int __lock; unsigned int __count; signed int __owner; unsigned int __nusers; signed int __kind; signed short int __spins; signed short int __elision; struct __pthread_internal_list { struct __pthread_internal_list *__prev; struct __pthread_internal_list *__next; } __list; } __data; char __size[40l]; signed long int __align; })
// 75 file race-1_1-join_true-unreach-call.c line 11
(24) SHARED_WRITE(pdev#1)
// 75 file race-1_1-join_true-unreach-call.c line 11
(25) pdev#1 == 0
// 76 file race-1_1-join_true-unreach-call.c line 9
(26) SHARED_WRITE(t1#1)
// 76 file race-1_1-join_true-unreach-call.c line 9
(27) t1#1 == 0ul
// 77
// 107 file race-1_1-join_true-unreach-call.c line 55
// 107 file race-1_1-join_true-unreach-call.c line 55
// 0 file race-1_1-join_true-unreach-call.c line 56 function main
// 1 file race-1_1-join_true-unreach-call.c line 56 function main
// 1 file race-1_1-join_true-unreach-call.c line 56 function main
// 84 file race-1_1-join_true-unreach-call.c line 22 function module_init
// 84 file race-1_1-join_true-unreach-call.c line 22 function module_init
// 84 file race-1_1-join_true-unreach-call.c line 22 function module_init
(28) mutex!0@1#1 == &mutex
// 84 file race-1_1-join_true-unreach-call.c line 22 function module_init
(29) mutexattr!0@1#1 == ((union { char __size[4l]; signed int __align; } *)NULL)
// 44 file <builtin-library-pthread_mutex_init> line 31 function pthread_mutex_init
(30) SHARED_WRITE(mutex#2)
// 44 file <builtin-library-pthread_mutex_init> line 31 function pthread_mutex_init
(31) mutex#2 == byte_update_little_endian(mutex#1, 0l, 0, char)
// 45 file <builtin-library-pthread_mutex_init> line 32 function pthread_mutex_init
// 47 file <builtin-library-pthread_mutex_init> line 42 function pthread_mutex_init
(32) pthread_mutex_init#return_value!0#1 == 0
// 48 file <builtin-library-pthread_mutex_init> line 43 function pthread_mutex_init
// 85 file race-1_1-join_true-unreach-call.c line 24 function module_init
(33) SHARED_WRITE(pdev#2)
// 85 file race-1_1-join_true-unreach-call.c line 24 function module_init
(34) pdev#2 == 1
// 87 file race-1_1-join_true-unreach-call.c line 28 function module_init
// 88 file race-1_1-join_true-unreach-call.c line 28 function module_init
(35) return_value___VERIFIER_nondet_int!0@1#2 == nondet_symbol(symex::nondet1)
// 89 file race-1_1-join_true-unreach-call.c line 28 function module_init
// 89 file race-1_1-join_true-unreach-call.c line 28 function module_init
(36) \guard#1 == !(return_value___VERIFIER_nondet_int!0@1#2 == 0)
// 90 file race-1_1-join_true-unreach-call.c line 30 function module_init
// 90 file race-1_1-join_true-unreach-call.c line 30 function module_init
// 90 file race-1_1-join_true-unreach-call.c line 30 function module_init
(37) thread!0@1#1 == &t1
     guard: \guard#1
// 90 file race-1_1-join_true-unreach-call.c line 30 function module_init
(38) attr!0@1#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
     guard: \guard#1
// 90 file race-1_1-join_true-unreach-call.c line 30 function module_init
(39) start_routine!0@1#1 == thread1
     guard: \guard#1
// 90 file race-1_1-join_true-unreach-call.c line 30 function module_init
(40) arg!0@1#1 == NULL
     guard: \guard#1
// 9 file <builtin-library-pthread_create> line 18 function pthread_create
// 10 file <builtin-library-pthread_create> line 19 function pthread_create
// 11 file <builtin-library-pthread_create> line 20 function pthread_create
(41) __CPROVER_next_thread_id#2 == 1ul
     guard: \guard#1
// 12 file <builtin-library-pthread_create> line 20 function pthread_create
(42) this_thread_id!0@1#2 == 1ul
     guard: \guard#1
// 13 file <builtin-library-pthread_create> line 21 function pthread_create
(43) SHARED_WRITE(__CPROVER_next_thread_id#2)
     guard: \guard#1
// 13 file <builtin-library-pthread_create> line 21 function pthread_create
// 14 file <builtin-library-pthread_create> line 24 function pthread_create
(44) SHARED_WRITE(t1#2)
     guard: \guard#1
// 14 file <builtin-library-pthread_create> line 24 function pthread_create
(45) t1#2 == 1ul
     guard: \guard#1
// 15 file <builtin-library-pthread_create> line 30 function pthread_create
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(46) thread!1@0#1 == &t1
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(47) attr!1@0#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(48) start_routine!1@0#1 == thread1
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(49) arg!1@0#1 == NULL
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(50) __CPROVER_rounding_mode!1#1 == 0
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(51) __VERIFIER_nondet_int#return_value!1#1 == 0
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(52) pthread_join#return_value!1#1 == 0
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(53) pthread_mutex_lock#return_value!1#1 == 0
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(54) module_init#return_value!1#1 == 0
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(55) __CPROVER_thread_id!1#1 == 0ul
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(56) main#return_value!1#1 == 0
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(57) pthread_mutex_init#return_value!1#1 == 0
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(58) pthread_mutex_unlock#return_value!1#1 == 0
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(59) assert#return_value!1#1 == 0
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(60) pthread_create#return_value!1#1 == 0
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(61) thread1#return_value!1#1 == NULL
     guard: \guard#1
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(62) pthread_mutex_destroy#return_value!1#1 == 0
     guard: \guard#1
// 18 file <builtin-library-pthread_create> line 32 function pthread_create
// 26 file <builtin-library-pthread_create> line 44 function pthread_create
(63) pthread_create#return_value!0#1 == 0
     guard: \guard#1
// 28 file <builtin-library-pthread_create> line 45 function pthread_create
// 91 file race-1_1-join_true-unreach-call.c line 34 function module_init
(64) module_init#return_value!0#1 == 0
     guard: \guard#1
// 92 file race-1_1-join_true-unreach-call.c line 34 function module_init
// 93 file race-1_1-join_true-unreach-call.c line 37 function module_init
(65) module_init#return_value!0#2 == module_init#return_value!0#0
// 93 file race-1_1-join_true-unreach-call.c line 37 function module_init
(66) pthread_create#return_value!0#2 == pthread_create#return_value!0#0
// 93 file race-1_1-join_true-unreach-call.c line 37 function module_init
(67) SHARED_WRITE(pdev#3)
     guard: !\guard#1
// 93 file race-1_1-join_true-unreach-call.c line 37 function module_init
(68) pdev#3 == 3
     guard: !\guard#1
// 94 file race-1_1-join_true-unreach-call.c line 38 function module_init
(69) SHARED_READ(pdev#4)
     guard: !\guard#1
// 94 file race-1_1-join_true-unreach-call.c line 38 function module_init
(70) ASSERT(!\guard#1 ==> pdev#4 == 3)
     guard: !\guard#1
// 95 file race-1_1-join_true-unreach-call.c line 39 function module_init
// 95 file race-1_1-join_true-unreach-call.c line 39 function module_init
// 95 file race-1_1-join_true-unreach-call.c line 39 function module_init
(71) mutex!0@1#1 == &mutex
     guard: !\guard#1
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(72) SHARED_READ(mutex#3)
     guard: !\guard#1
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(73) ASSERT(!\guard#1 ==> (signed int)byte_extract_little_endian(mutex#3, 0l, char) == 0)
     guard: !\guard#1
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(74) SHARED_READ(mutex#4)
     guard: !\guard#1
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(75) SHARED_WRITE(mutex#5)
     guard: !\guard#1
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(76) mutex#5 == byte_update_little_endian(mutex#4, 0l, -1, char)
     guard: !\guard#1
// 42 file <builtin-library-pthread_mutex_destroy> line 41 function pthread_mutex_destroy
(77) pthread_mutex_destroy#return_value!0#1 == 0
     guard: !\guard#1
// 43 file <builtin-library-pthread_mutex_destroy> line 42 function pthread_mutex_destroy
// 96 file race-1_1-join_true-unreach-call.c line 40 function module_init
(78) module_init#return_value!0#3 == -1
     guard: !\guard#1
// 98 file race-1_1-join_true-unreach-call.c line 41 function module_init
(79) module_init#return_value!0#4 == (\guard#1 ? 0 : -1)
// 98 file race-1_1-join_true-unreach-call.c line 41 function module_init
(80) pthread_mutex_destroy#return_value!0#2 == 0
// 98 file race-1_1-join_true-unreach-call.c line 41 function module_init
(81) pthread_create#return_value!0#3 == (\guard#1 ? 0 : pthread_create#return_value!0#2)
// 98 file race-1_1-join_true-unreach-call.c line 41 function module_init
(82) return_value___VERIFIER_nondet_int!0@1#4 == (\guard#1 ? return_value___VERIFIER_nondet_int!0@1#2 : return_value___VERIFIER_nondet_int!0@1#3)
// 98 file race-1_1-join_true-unreach-call.c line 41 function module_init
// 2 file race-1_1-join_true-unreach-call.c line 56 function main
(83) return_value_module_init!0@1#2 == module_init#return_value!0#4
// 4 file race-1_1-join_true-unreach-call.c line 56 function main
// 4 file race-1_1-join_true-unreach-call.c line 56 function main
(84) \guard#2 == (return_value_module_init!0@1#2 == 0)
// 5 file race-1_1-join_true-unreach-call.c line 57 function main
// 5 file race-1_1-join_true-unreach-call.c line 57 function main
// 99 file race-1_1-join_true-unreach-call.c line 44 function module_exit
// 99 file race-1_1-join_true-unreach-call.c line 44 function module_exit
(85) SHARED_WRITE(status!0@1#1)
     guard: \guard#2
// 100 file race-1_1-join_true-unreach-call.c line 48 function module_exit
// 100 file race-1_1-join_true-unreach-call.c line 48 function module_exit
// 100 file race-1_1-join_true-unreach-call.c line 48 function module_exit
(86) SHARED_READ(t1#3)
     guard: \guard#2
// 100 file race-1_1-join_true-unreach-call.c line 48 function module_exit
(87) SHARED_READ(t1#4)
     guard: \guard#2
// 100 file race-1_1-join_true-unreach-call.c line 48 function module_exit
(88) thread!0@1#1 == t1#4
     guard: \guard#2
// 100 file race-1_1-join_true-unreach-call.c line 48 function module_exit
(89) value_ptr!0@1#1 == &status!0@1
     guard: \guard#2
// 29 file <builtin-library-pthread_join> line 25 function pthread_join
(90) SHARED_READ(__CPROVER_next_thread_id#3)
     guard: \guard#2
// 29 file <builtin-library-pthread_join> line 25 function pthread_join
// 29 file <builtin-library-pthread_join> line 25 function pthread_join
(91) \guard#3 == !(__CPROVER_next_thread_id#3 >= thread!0@1#1)
// 30 file <builtin-library-pthread_join> line 25 function pthread_join
(92) pthread_join#return_value!0#1 == 3
     guard: \guard#2 && \guard#3
// 31 file <builtin-library-pthread_join> line 25 function pthread_join
// 32 file <builtin-library-pthread_join> line 26 function pthread_join
(93) pthread_join#return_value!0#2 == pthread_join#return_value!0#0
// 32 file <builtin-library-pthread_join> line 26 function pthread_join
// 32 file <builtin-library-pthread_join> line 26 function pthread_join
(94) \guard#4 == (thread!0@1#1 == 0ul)
// 33 file <builtin-library-pthread_join> line 26 function pthread_join
(95) pthread_join#return_value!0#3 == 35
     guard: \guard#2 && !\guard#3 && \guard#4
// 34 file <builtin-library-pthread_join> line 26 function pthread_join
// 35 file <builtin-library-pthread_join> line 27 function pthread_join
(96) pthread_join#return_value!0#4 == pthread_join#return_value!0#2
// 35 file <builtin-library-pthread_join> line 27 function pthread_join
// 37 file <builtin-library-pthread_join> line 28 function pthread_join
(97) SHARED_READ(__CPROVER_threads_exited#2)
     guard: \guard#2 && !\guard#3 && !\guard#4
// 38 file <builtin-library-pthread_join> line 30 function pthread_join
(98) pthread_join#return_value!0#5 == 0
     guard: \guard#2 && !\guard#3 && !\guard#4 && __CPROVER_threads_exited#2[(signed long int)thread!0@1#1]
// 39 file <builtin-library-pthread_join> line 31 function pthread_join
(99) pthread_join#return_value!0#6 == (\guard#4 ? 35 : 0)
// 39 file <builtin-library-pthread_join> line 31 function pthread_join
(100) pthread_join#return_value!0#7 == (\guard#3 ? 3 : pthread_join#return_value!0#6)
// 39 file <builtin-library-pthread_join> line 31 function pthread_join
// 101 file race-1_1-join_true-unreach-call.c line 49 function module_exit
// 101 file race-1_1-join_true-unreach-call.c line 49 function module_exit
// 101 file race-1_1-join_true-unreach-call.c line 49 function module_exit
(101) mutex!0@2#1 == &mutex
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(102) SHARED_READ(mutex#6)
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(103) ASSERT(\guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3) ==> (signed int)byte_extract_little_endian(mutex#6, 0l, char) == 0)
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(104) SHARED_READ(mutex#7)
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(105) SHARED_WRITE(mutex#8)
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(106) mutex#8 == byte_update_little_endian(mutex#7, 0l, -1, char)
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3)
// 42 file <builtin-library-pthread_mutex_destroy> line 41 function pthread_mutex_destroy
(107) pthread_mutex_destroy#return_value!0#3 == 0
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3)
// 43 file <builtin-library-pthread_mutex_destroy> line 42 function pthread_mutex_destroy
// 102 file race-1_1-join_true-unreach-call.c line 51 function module_exit
(108) SHARED_WRITE(pdev#5)
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3)
// 102 file race-1_1-join_true-unreach-call.c line 51 function module_exit
(109) pdev#5 == 5
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3)
// 103 file race-1_1-join_true-unreach-call.c line 52 function module_exit
(110) SHARED_READ(pdev#6)
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3)
// 103 file race-1_1-join_true-unreach-call.c line 52 function module_exit
(111) ASSERT(\guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3) ==> pdev#6 == 5)
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3)
// 105 file race-1_1-join_true-unreach-call.c line 53 function module_exit
// 6 file race-1_1-join_true-unreach-call.c line 59 function main
(112) pthread_join#return_value!0#8 == pthread_join#return_value!0#7
// 6 file race-1_1-join_true-unreach-call.c line 59 function main
(113) pthread_mutex_destroy#return_value!0#4 == 0
// 6 file race-1_1-join_true-unreach-call.c line 59 function main
(114) main#return_value!0#1 == 0
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3) || !\guard#2
// 8 file race-1_1-join_true-unreach-call.c line 60 function main
// 108 file race-1_1-join_true-unreach-call.c line 55
(115) return`!0#1 == 0
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3) || !\guard#2
// 110 file race-1_1-join_true-unreach-call.c line 55
// 111
// 19 file <builtin-library-pthread_create> line 33 function pthread_create
(116) __CPROVER_thread_id!1#2 == this_thread_id!1@0#0
      guard: \guard#1
// 21 file <builtin-library-pthread_create> line 39 function pthread_create
// 22 file <builtin-library-pthread_create> line 39 function pthread_create
// 22 file <builtin-library-pthread_create> line 39 function pthread_create
// 22 file <builtin-library-pthread_create> line 39 function pthread_create
(117) arg!1@1#1 == NULL
      guard: \guard#1
// 78 file race-1_1-join_true-unreach-call.c line 14 function thread1
// 78 file race-1_1-join_true-unreach-call.c line 14 function thread1
// 78 file race-1_1-join_true-unreach-call.c line 14 function thread1
(118) mutex!1@1#1 == &mutex
      guard: \guard#1
// 49 file <builtin-library-pthread_mutex_lock> line 37 function pthread_mutex_lock
// 50 file <builtin-library-pthread_mutex_lock> line 38 function pthread_mutex_lock
(119) mutex#10 == mutex#9
      guard: \guard#1
// 51 file <builtin-library-pthread_mutex_lock> line 39 function pthread_mutex_lock
(120) mutex#11 == (\guard#1 ? mutex#10 : mutex#9)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 51 file <builtin-library-pthread_mutex_lock> line 39 function pthread_mutex_lock
(121) mutex#12 == byte_update_little_endian(mutex#11, 0l, 1, char)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(122) SHARED_READ(mutex#9)
      guard: byte_extract_little_endian(mutex#10, 0l, char) == 0 && \guard#1 || \guard#1
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(123) SHARED_WRITE(mutex#12)
      guard: byte_extract_little_endian(mutex#10, 0l, char) == 0 && \guard#1
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
// 53 file <builtin-library-pthread_mutex_lock> line 42 function pthread_mutex_lock
// 54 file <builtin-library-pthread_mutex_lock> line 46 function pthread_mutex_lock
(124) pthread_mutex_lock#return_value!1#2 == 0
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 55 file <builtin-library-pthread_mutex_lock> line 47 function pthread_mutex_lock
// 79 file race-1_1-join_true-unreach-call.c line 15 function thread1
(125) SHARED_WRITE(pdev#7)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 79 file race-1_1-join_true-unreach-call.c line 15 function thread1
(126) pdev#7 == 6
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(127) SHARED_READ(pdev#8)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(128) ASSERT(\guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 ==> pdev#8 == 6)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 81 file race-1_1-join_true-unreach-call.c line 17 function thread1
// 81 file race-1_1-join_true-unreach-call.c line 17 function thread1
// 81 file race-1_1-join_true-unreach-call.c line 17 function thread1
(129) mutex!1@1#1 == &mutex
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 56 file <builtin-library-pthread_mutex_unlock> line 36 function pthread_mutex_unlock
// 57 file <builtin-library-pthread_mutex_unlock> line 38 function pthread_mutex_unlock
// 58 file <builtin-library-pthread_mutex_unlock> line 39 function pthread_mutex_unlock
(130) mutex#14 == mutex#13
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 58 file <builtin-library-pthread_mutex_unlock> line 39 function pthread_mutex_unlock
(131) ASSERT(\guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 ==> (signed int)byte_extract_little_endian(mutex#14, 0l, char) == 1)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 59 file <builtin-library-pthread_mutex_unlock> line 41 function pthread_mutex_unlock
(132) mutex#15 == byte_update_little_endian(mutex#14, 0l, 0, char)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(133) SHARED_READ(mutex#13)
      guard: byte_extract_little_endian(mutex#10, 0l, char) == 0 && \guard#1
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(134) SHARED_WRITE(mutex#15)
      guard: byte_extract_little_endian(mutex#10, 0l, char) == 0 && \guard#1
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
// 61 file <builtin-library-pthread_mutex_unlock> line 45 function pthread_mutex_unlock
(135) pthread_mutex_unlock#return_value!1#2 == 0
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 62 file <builtin-library-pthread_mutex_unlock> line 46 function pthread_mutex_unlock
// 82 file race-1_1-join_true-unreach-call.c line 18 function thread1
(136) thread1#return_value!1#2 == NULL
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 83 file race-1_1-join_true-unreach-call.c line 19 function thread1
// 23 file <builtin-library-pthread_create> line 40 function pthread_create
// 24 file <builtin-library-pthread_create> line 42 function pthread_create
(137) SHARED_READ(__CPROVER_threads_exited#3)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 24 file <builtin-library-pthread_create> line 42 function pthread_create
(138) SHARED_WRITE(__CPROVER_threads_exited#4)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 24 file <builtin-library-pthread_create> line 42 function pthread_create
(139) __CPROVER_threads_exited#4 == __CPROVER_threads_exited#3 WITH [(signed long int)this_thread_id!1@0#0:=TRUE]
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 28 file <builtin-library-pthread_create> line 45 function pthread_create
// 37 file <builtin-library-pthread_join> line 28 function pthread_join
(140) CONSTRAINT(__CPROVER_threads_exited#2 == __CPROVER_threads_exited#1 || !choice_rf0)
// 37 file <builtin-library-pthread_join> line 28 function pthread_join
(141) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && __CPROVER_threads_exited#2 == __CPROVER_threads_exited#4 && \guard#1 || !choice_rf1)
// 37 file <builtin-library-pthread_join> line 28 function pthread_join
(142) CONSTRAINT(!(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#2$rclk$8) || !choice_rf1)
// 37 file <builtin-library-pthread_join> line 28 function pthread_join
(143) CONSTRAINT(!\guard#2 || choice_rf0 || choice_rf1 || \guard#3 || \guard#4)
// 24 file <builtin-library-pthread_create> line 42 function pthread_create
(144) CONSTRAINT(__CPROVER_threads_exited#3 == __CPROVER_threads_exited#1 || !choice_rf2)
// 24 file <builtin-library-pthread_create> line 42 function pthread_create
(145) CONSTRAINT(!(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#3$rclk$8) || !choice_rf2)
// 24 file <builtin-library-pthread_create> line 42 function pthread_create
(146) CONSTRAINT(!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf2)
// 29 file <builtin-library-pthread_join> line 25 function pthread_join
(147) CONSTRAINT(__CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#1 || !choice_rf3)
// 29 file <builtin-library-pthread_join> line 25 function pthread_join
(148) CONSTRAINT(__CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#2 && \guard#1 || !choice_rf4)
// 29 file <builtin-library-pthread_join> line 25 function pthread_join
(149) CONSTRAINT(!\guard#2 || choice_rf3 || choice_rf4)
// 100 file race-1_1-join_true-unreach-call.c line 48 function module_exit
(150) CONSTRAINT(t1#3 == t1#1 || !choice_rf5)
// 100 file race-1_1-join_true-unreach-call.c line 48 function module_exit
(151) CONSTRAINT(t1#3 == t1#2 && \guard#1 || !choice_rf6)
// 100 file race-1_1-join_true-unreach-call.c line 48 function module_exit
(152) CONSTRAINT(!\guard#2 || choice_rf5 || choice_rf6)
// 100 file race-1_1-join_true-unreach-call.c line 48 function module_exit
(153) CONSTRAINT(t1#4 == t1#1 || !choice_rf7)
// 100 file race-1_1-join_true-unreach-call.c line 48 function module_exit
(154) CONSTRAINT(t1#4 == t1#2 && \guard#1 || !choice_rf8)
// 100 file race-1_1-join_true-unreach-call.c line 48 function module_exit
(155) CONSTRAINT(!\guard#2 || choice_rf7 || choice_rf8)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(156) CONSTRAINT(mutex#3 == mutex#1 || !choice_rf9)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(157) CONSTRAINT(mutex#3 == mutex#2 || !choice_rf10)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(158) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#3 == mutex#12 && \guard#1 || !choice_rf11)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(159) CONSTRAINT(!(mutex#12$wclk$8 >= mutex#3$rclk$8) || !choice_rf11)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(160) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#3 == mutex#15 && \guard#1 || !choice_rf12)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(161) CONSTRAINT(!(mutex#15$wclk$8 >= mutex#3$rclk$8) || !choice_rf12)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(162) CONSTRAINT(choice_rf10 || choice_rf11 || choice_rf12 || choice_rf9 || \guard#1)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(163) CONSTRAINT(mutex#4 == mutex#1 || !choice_rf13)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(164) CONSTRAINT(mutex#4 == mutex#2 || !choice_rf14)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(165) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#4 == mutex#12 && \guard#1 || !choice_rf15)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(166) CONSTRAINT(!(mutex#12$wclk$8 >= mutex#4$rclk$8) || !choice_rf15)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(167) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#4 == mutex#15 && \guard#1 || !choice_rf16)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(168) CONSTRAINT(!(mutex#15$wclk$8 >= mutex#4$rclk$8) || !choice_rf16)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(169) CONSTRAINT(choice_rf13 || choice_rf14 || choice_rf15 || choice_rf16 || \guard#1)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(170) CONSTRAINT(mutex#6 == mutex#1 || !choice_rf17)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(171) CONSTRAINT(mutex#6 == mutex#2 || !choice_rf18)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(172) CONSTRAINT(mutex#6 == mutex#5 && !\guard#1 || !choice_rf19)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(173) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#6 == mutex#12 && \guard#1 || !choice_rf20)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(174) CONSTRAINT(!(mutex#12$wclk$8 >= mutex#6$rclk$8) || !choice_rf20)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(175) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#6 == mutex#15 && \guard#1 || !choice_rf21)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(176) CONSTRAINT(!(mutex#15$wclk$8 >= mutex#6$rclk$8) || !choice_rf21)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(177) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !\guard#2 || choice_rf17 || choice_rf18 || choice_rf19 || choice_rf20 || choice_rf21)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(178) CONSTRAINT(mutex#7 == mutex#1 || !choice_rf22)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(179) CONSTRAINT(mutex#7 == mutex#2 || !choice_rf23)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(180) CONSTRAINT(mutex#7 == mutex#5 && !\guard#1 || !choice_rf24)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(181) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#7 == mutex#12 && \guard#1 || !choice_rf25)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(182) CONSTRAINT(!(mutex#12$wclk$8 >= mutex#7$rclk$8) || !choice_rf25)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(183) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#7 == mutex#15 && \guard#1 || !choice_rf26)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(184) CONSTRAINT(!(mutex#15$wclk$8 >= mutex#7$rclk$8) || !choice_rf26)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(185) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !\guard#2 || choice_rf22 || choice_rf23 || choice_rf24 || choice_rf25 || choice_rf26)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(186) CONSTRAINT(mutex#9 == mutex#1 || !choice_rf27)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(187) CONSTRAINT(!(mutex#1$wclk$8 >= mutex#9$rclk$8) || !choice_rf27)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(188) CONSTRAINT(mutex#9 == mutex#2 || !choice_rf28)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(189) CONSTRAINT(!(mutex#2$wclk$8 >= mutex#9$rclk$8) || !choice_rf28)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(190) CONSTRAINT(mutex#9 == mutex#5 && !\guard#1 || !choice_rf29)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(191) CONSTRAINT(!(mutex#5$wclk$8 >= mutex#9$rclk$8) || !choice_rf29)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(192) CONSTRAINT(mutex#9 == mutex#8 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3) && \guard#2 || !choice_rf30)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(193) CONSTRAINT(!(mutex#8$wclk$8 >= mutex#9$rclk$8) || !choice_rf30)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(194) CONSTRAINT((!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || choice_rf27 || choice_rf28 || choice_rf29 || choice_rf30)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(195) CONSTRAINT(mutex#13 == mutex#1 || !choice_rf31)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(196) CONSTRAINT(!(mutex#1$wclk$8 >= mutex#13$rclk$8) || !choice_rf31)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(197) CONSTRAINT(mutex#13 == mutex#2 || !choice_rf32)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(198) CONSTRAINT(!(mutex#2$wclk$8 >= mutex#13$rclk$8) || !choice_rf32)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(199) CONSTRAINT(mutex#13 == mutex#5 && !\guard#1 || !choice_rf33)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(200) CONSTRAINT(!(mutex#5$wclk$8 >= mutex#13$rclk$8) || !choice_rf33)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(201) CONSTRAINT(mutex#13 == mutex#8 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3) && \guard#2 || !choice_rf34)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(202) CONSTRAINT(!(mutex#8$wclk$8 >= mutex#13$rclk$8) || !choice_rf34)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(203) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#13 == mutex#12 && \guard#1 || !choice_rf35)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(204) CONSTRAINT(!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf31 || choice_rf32 || choice_rf33 || choice_rf34 || choice_rf35)
// 94 file race-1_1-join_true-unreach-call.c line 38 function module_init
(205) CONSTRAINT(pdev#4 == pdev#1 || !choice_rf36)
// 94 file race-1_1-join_true-unreach-call.c line 38 function module_init
(206) CONSTRAINT(pdev#4 == pdev#2 || !choice_rf37)
// 94 file race-1_1-join_true-unreach-call.c line 38 function module_init
(207) CONSTRAINT(pdev#4 == pdev#3 && !\guard#1 || !choice_rf38)
// 94 file race-1_1-join_true-unreach-call.c line 38 function module_init
(208) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#4 == pdev#7 && \guard#1 || !choice_rf39)
// 94 file race-1_1-join_true-unreach-call.c line 38 function module_init
(209) CONSTRAINT(!(pdev#7$wclk$8 >= pdev#4$rclk$8) || !choice_rf39)
// 94 file race-1_1-join_true-unreach-call.c line 38 function module_init
(210) CONSTRAINT(choice_rf36 || choice_rf37 || choice_rf38 || choice_rf39 || \guard#1)
// 103 file race-1_1-join_true-unreach-call.c line 52 function module_exit
(211) CONSTRAINT(pdev#6 == pdev#1 || !choice_rf40)
// 103 file race-1_1-join_true-unreach-call.c line 52 function module_exit
(212) CONSTRAINT(pdev#6 == pdev#2 || !choice_rf41)
// 103 file race-1_1-join_true-unreach-call.c line 52 function module_exit
(213) CONSTRAINT(pdev#6 == pdev#3 && !\guard#1 || !choice_rf42)
// 103 file race-1_1-join_true-unreach-call.c line 52 function module_exit
(214) CONSTRAINT(pdev#6 == pdev#5 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3) && \guard#2 || !choice_rf43)
// 103 file race-1_1-join_true-unreach-call.c line 52 function module_exit
(215) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#6 == pdev#7 && \guard#1 || !choice_rf44)
// 103 file race-1_1-join_true-unreach-call.c line 52 function module_exit
(216) CONSTRAINT(!(pdev#7$wclk$8 >= pdev#6$rclk$8) || !choice_rf44)
// 103 file race-1_1-join_true-unreach-call.c line 52 function module_exit
(217) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !\guard#2 || choice_rf40 || choice_rf41 || choice_rf42 || choice_rf43 || choice_rf44)
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(218) CONSTRAINT(pdev#8 == pdev#1 || !choice_rf45)
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(219) CONSTRAINT(!(pdev#1$wclk$8 >= pdev#8$rclk$8) || !choice_rf45)
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(220) CONSTRAINT(pdev#8 == pdev#2 || !choice_rf46)
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(221) CONSTRAINT(!(pdev#2$wclk$8 >= pdev#8$rclk$8) || !choice_rf46)
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(222) CONSTRAINT(pdev#8 == pdev#3 && !\guard#1 || !choice_rf47)
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(223) CONSTRAINT(!(pdev#3$wclk$8 >= pdev#8$rclk$8) || !choice_rf47)
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(224) CONSTRAINT(pdev#8 == pdev#5 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3) && \guard#2 || !choice_rf48)
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(225) CONSTRAINT(!(pdev#5$wclk$8 >= pdev#8$rclk$8) || !choice_rf48)
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(226) CONSTRAINT(byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#8 == pdev#7 && \guard#1 || !choice_rf49)
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(227) CONSTRAINT(!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1 || choice_rf45 || choice_rf46 || choice_rf47 || choice_rf48 || choice_rf49)
// 73 file <built-in-additions> line 7
(228) CONSTRAINT(!(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_ws-ext50)
// 73 file <built-in-additions> line 7
(229) CONSTRAINT(!(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8) || choice_ws-ext50)
// 74 file race-1_1-join_true-unreach-call.c line 10
(230) CONSTRAINT(!(mutex#1$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext51)
// 74 file race-1_1-join_true-unreach-call.c line 10
(231) CONSTRAINT(!(mutex#12$wclk$8 >= mutex#1$wclk$8) || choice_ws-ext51)
// 74 file race-1_1-join_true-unreach-call.c line 10
(232) CONSTRAINT(!(mutex#1$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext52)
// 74 file race-1_1-join_true-unreach-call.c line 10
(233) CONSTRAINT(!(mutex#15$wclk$8 >= mutex#1$wclk$8) || choice_ws-ext52)
// 44 file <builtin-library-pthread_mutex_init> line 31 function pthread_mutex_init
(234) CONSTRAINT(!(mutex#2$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext53)
// 44 file <builtin-library-pthread_mutex_init> line 31 function pthread_mutex_init
(235) CONSTRAINT(!(mutex#12$wclk$8 >= mutex#2$wclk$8) || choice_ws-ext53)
// 44 file <builtin-library-pthread_mutex_init> line 31 function pthread_mutex_init
(236) CONSTRAINT(!(mutex#2$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext54)
// 44 file <builtin-library-pthread_mutex_init> line 31 function pthread_mutex_init
(237) CONSTRAINT(!(mutex#15$wclk$8 >= mutex#2$wclk$8) || choice_ws-ext54)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(238) CONSTRAINT(!(mutex#5$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext55)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(239) CONSTRAINT(!(mutex#12$wclk$8 >= mutex#5$wclk$8) || choice_ws-ext55)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(240) CONSTRAINT(!(mutex#5$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext56)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(241) CONSTRAINT(!(mutex#15$wclk$8 >= mutex#5$wclk$8) || choice_ws-ext56)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(242) CONSTRAINT(!(mutex#8$wclk$8 >= mutex#12$wclk$8) || !choice_ws-ext57)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(243) CONSTRAINT(!(mutex#12$wclk$8 >= mutex#8$wclk$8) || choice_ws-ext57)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(244) CONSTRAINT(!(mutex#8$wclk$8 >= mutex#15$wclk$8) || !choice_ws-ext58)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(245) CONSTRAINT(!(mutex#15$wclk$8 >= mutex#8$wclk$8) || choice_ws-ext58)
// 75 file race-1_1-join_true-unreach-call.c line 11
(246) CONSTRAINT(!(pdev#1$wclk$8 >= pdev#7$wclk$8) || !choice_ws-ext59)
// 75 file race-1_1-join_true-unreach-call.c line 11
(247) CONSTRAINT(!(pdev#7$wclk$8 >= pdev#1$wclk$8) || choice_ws-ext59)
// 85 file race-1_1-join_true-unreach-call.c line 24 function module_init
(248) CONSTRAINT(!(pdev#2$wclk$8 >= pdev#7$wclk$8) || !choice_ws-ext60)
// 85 file race-1_1-join_true-unreach-call.c line 24 function module_init
(249) CONSTRAINT(!(pdev#7$wclk$8 >= pdev#2$wclk$8) || choice_ws-ext60)
// 93 file race-1_1-join_true-unreach-call.c line 37 function module_init
(250) CONSTRAINT(!(pdev#3$wclk$8 >= pdev#7$wclk$8) || !choice_ws-ext61)
// 93 file race-1_1-join_true-unreach-call.c line 37 function module_init
(251) CONSTRAINT(!(pdev#7$wclk$8 >= pdev#3$wclk$8) || choice_ws-ext61)
// 102 file race-1_1-join_true-unreach-call.c line 51 function module_exit
(252) CONSTRAINT(!(pdev#5$wclk$8 >= pdev#7$wclk$8) || !choice_ws-ext62)
// 102 file race-1_1-join_true-unreach-call.c line 51 function module_exit
(253) CONSTRAINT(!(pdev#7$wclk$8 >= pdev#5$wclk$8) || choice_ws-ext62)
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(254) CONSTRAINT(!(t1$17$spwnclk$8 >= mutex#9$rclk$8))
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(255) CONSTRAINT(!(t1$17$spwnclk$8 >= mutex#12$wclk$8))
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(256) CONSTRAINT(!(t1$17$spwnclk$8 >= pdev#7$wclk$8))
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(257) CONSTRAINT(!(t1$17$spwnclk$8 >= pdev#8$rclk$8))
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(258) CONSTRAINT(!(t1$17$spwnclk$8 >= mutex#13$rclk$8))
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(259) CONSTRAINT(!(t1$17$spwnclk$8 >= mutex#15$wclk$8))
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(260) CONSTRAINT(!(t1$17$spwnclk$8 >= __CPROVER_threads_exited#3$rclk$8))
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(261) CONSTRAINT(!(t1$17$spwnclk$8 >= __CPROVER_threads_exited#4$wclk$8))
// 63 file <built-in-additions> line 11
(262) CONSTRAINT(!(status!0@1$wclk$8 >= __CPROVER_dead_object#1$wclk$8))
// 64 file <built-in-additions> line 10
(263) CONSTRAINT(!(__CPROVER_dead_object#1$wclk$8 >= __CPROVER_deallocated#1$wclk$8))
// 65 file <built-in-additions> line 14
(264) CONSTRAINT(!(__CPROVER_deallocated#1$wclk$8 >= __CPROVER_malloc_is_new_array#1$wclk$8))
// 66 file <built-in-additions> line 12
(265) CONSTRAINT(!(__CPROVER_malloc_is_new_array#1$wclk$8 >= __CPROVER_malloc_object#1$wclk$8))
// 67 file <built-in-additions> line 13
(266) CONSTRAINT(!(__CPROVER_malloc_object#1$wclk$8 >= __CPROVER_malloc_size#1$wclk$8))
// 68 file <built-in-additions> line 15
(267) CONSTRAINT(!(__CPROVER_malloc_size#1$wclk$8 >= __CPROVER_memory_leak#1$wclk$8))
// 69 file <built-in-additions> line 8
(268) CONSTRAINT(!(__CPROVER_memory_leak#1$wclk$8 >= __CPROVER_next_thread_id#1$wclk$8))
// 70 file <built-in-additions> line 29
(269) CONSTRAINT(!(__CPROVER_next_thread_id#1$wclk$8 >= __CPROVER_pipe_count#1$wclk$8))
// 73 file <built-in-additions> line 7
(270) CONSTRAINT(!(__CPROVER_pipe_count#1$wclk$8 >= __CPROVER_threads_exited#1$wclk$8))
// 74 file race-1_1-join_true-unreach-call.c line 10
(271) CONSTRAINT(!(__CPROVER_threads_exited#1$wclk$8 >= mutex#1$wclk$8))
// 75 file race-1_1-join_true-unreach-call.c line 11
(272) CONSTRAINT(!(mutex#1$wclk$8 >= pdev#1$wclk$8))
// 76 file race-1_1-join_true-unreach-call.c line 9
(273) CONSTRAINT(!(pdev#1$wclk$8 >= t1#1$wclk$8))
// 44 file <builtin-library-pthread_mutex_init> line 31 function pthread_mutex_init
(274) CONSTRAINT(!(t1#1$wclk$8 >= mutex#2$wclk$8))
// 85 file race-1_1-join_true-unreach-call.c line 24 function module_init
(275) CONSTRAINT(!(mutex#2$wclk$8 >= pdev#2$wclk$8))
// 13 file <builtin-library-pthread_create> line 21 function pthread_create
(276) CONSTRAINT(!(pdev#2$wclk$8 >= __CPROVER_next_thread_id#2$wclk$8))
// 14 file <builtin-library-pthread_create> line 24 function pthread_create
(277) CONSTRAINT(!(__CPROVER_next_thread_id#2$wclk$8 >= t1#2$wclk$8))
// 17 file <builtin-library-pthread_create> line 32 function pthread_create
(278) CONSTRAINT(!(t1#2$wclk$8 >= t1$17$spwnclk$8))
// 93 file race-1_1-join_true-unreach-call.c line 37 function module_init
(279) CONSTRAINT(!(t1$17$spwnclk$8 >= pdev#3$wclk$8))
// 94 file race-1_1-join_true-unreach-call.c line 38 function module_init
(280) CONSTRAINT(!(pdev#3$wclk$8 >= pdev#4$rclk$8))
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(281) CONSTRAINT(!(pdev#4$rclk$8 >= mutex#3$rclk$8))
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(282) CONSTRAINT(!(mutex#3$rclk$8 >= mutex#4$rclk$8))
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(283) CONSTRAINT(!(mutex#4$rclk$8 >= mutex#5$wclk$8))
// 99 file race-1_1-join_true-unreach-call.c line 44 function module_exit
(284) CONSTRAINT(!(mutex#5$wclk$8 >= status!0@1#1$wclk$8))
// 100 file race-1_1-join_true-unreach-call.c line 48 function module_exit
(285) CONSTRAINT(!(status!0@1#1$wclk$8 >= t1#3$rclk$8))
// 100 file race-1_1-join_true-unreach-call.c line 48 function module_exit
(286) CONSTRAINT(!(t1#3$rclk$8 >= t1#4$rclk$8))
// 29 file <builtin-library-pthread_join> line 25 function pthread_join
(287) CONSTRAINT(!(t1#4$rclk$8 >= __CPROVER_next_thread_id#3$rclk$8))
// 37 file <builtin-library-pthread_join> line 28 function pthread_join
(288) CONSTRAINT(!(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_threads_exited#2$rclk$8))
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(289) CONSTRAINT(!(__CPROVER_threads_exited#2$rclk$8 >= mutex#6$rclk$8))
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(290) CONSTRAINT(!(mutex#6$rclk$8 >= mutex#7$rclk$8))
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(291) CONSTRAINT(!(mutex#7$rclk$8 >= mutex#8$wclk$8))
// 102 file race-1_1-join_true-unreach-call.c line 51 function module_exit
(292) CONSTRAINT(!(mutex#8$wclk$8 >= pdev#5$wclk$8))
// 103 file race-1_1-join_true-unreach-call.c line 52 function module_exit
(293) CONSTRAINT(!(pdev#5$wclk$8 >= pdev#6$rclk$8))
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(294) CONSTRAINT(mutex#9$rclk$8 == mutex#12$wclk$8)
// 79 file race-1_1-join_true-unreach-call.c line 15 function thread1
(295) CONSTRAINT(!(mutex#12$wclk$8 >= pdev#7$wclk$8))
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(296) CONSTRAINT(!(pdev#7$wclk$8 >= pdev#8$rclk$8))
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(297) CONSTRAINT(!(pdev#8$rclk$8 >= mutex#13$rclk$8))
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(298) CONSTRAINT(mutex#13$rclk$8 == mutex#15$wclk$8)
// 24 file <builtin-library-pthread_create> line 42 function pthread_create
(299) CONSTRAINT(!(mutex#15$wclk$8 >= __CPROVER_threads_exited#3$rclk$8))
// 24 file <builtin-library-pthread_create> line 42 function pthread_create
(300) CONSTRAINT(!(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8))
// 24 file <builtin-library-pthread_create> line 42 function pthread_create
(301) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_rf2 || !\guard#1)
// 37 file <builtin-library-pthread_join> line 28 function pthread_join
(302) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#4$wclk$8) || !choice_rf0 || !\guard#1 || !\guard#2 || \guard#3 || \guard#4)
// 37 file <builtin-library-pthread_join> line 28 function pthread_join
(303) CONSTRAINT(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf1 || !\guard#2 || \guard#3 || \guard#4)
// 29 file <builtin-library-pthread_join> line 25 function pthread_join
(304) CONSTRAINT(!(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8) || !choice_rf3 || !\guard#1 || !\guard#2)
// 100 file race-1_1-join_true-unreach-call.c line 48 function module_exit
(305) CONSTRAINT(!(t1#3$rclk$8 >= t1#2$wclk$8) || !choice_rf5 || !\guard#1 || !\guard#2)
// 100 file race-1_1-join_true-unreach-call.c line 48 function module_exit
(306) CONSTRAINT(!(t1#4$rclk$8 >= t1#2$wclk$8) || !choice_rf7 || !\guard#1 || !\guard#2)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(307) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf17 || !\guard#2)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(308) CONSTRAINT((!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(mutex#9$rclk$8 >= mutex#2$wclk$8) || !choice_rf27)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(309) CONSTRAINT(!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#2$wclk$8) || !choice_rf31 || !\guard#1)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(310) CONSTRAINT(!(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf13 || \guard#1)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(311) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#7$rclk$8 >= mutex#2$wclk$8) || !choice_rf22 || !\guard#2)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(312) CONSTRAINT(!(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf9 || \guard#1)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(313) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf17 || !\guard#2 || \guard#1)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(314) CONSTRAINT((!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf27 || \guard#1)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(315) CONSTRAINT(TRUE)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(316) CONSTRAINT(!(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf13 || \guard#1)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(317) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf22 || !\guard#2 || \guard#1)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(318) CONSTRAINT(!(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf9 || \guard#1)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(319) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf17 || !\guard#2)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(320) CONSTRAINT((!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf27 || !\guard#2)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(321) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf31 || !\guard#1 || !\guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(322) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf13 || !\guard#2 || \guard#1)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(323) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf22 || !\guard#2)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(324) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf9 || !\guard#2 || \guard#1)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(325) CONSTRAINT(mutex#12$wclk$8 >= mutex#1$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#6$rclk$8 >= mutex#1$wclk$8) || !choice_rf20 || !\guard#2)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(326) CONSTRAINT(mutex#1$wclk$8 >= mutex#12$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#12$wclk$8) || !choice_rf17 || !\guard#1 || !\guard#2)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(327) CONSTRAINT(mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#1$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf27 || !\guard#1)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(328) CONSTRAINT(mutex#12$wclk$8 >= mutex#1$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#1$wclk$8) || !choice_rf35 || !\guard#1)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(329) CONSTRAINT(mutex#1$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf31 || !\guard#1)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(330) CONSTRAINT(mutex#12$wclk$8 >= mutex#1$wclk$8 || !(mutex#4$rclk$8 >= mutex#1$wclk$8) || !choice_rf15 || \guard#1)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(331) CONSTRAINT(TRUE)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(332) CONSTRAINT(mutex#12$wclk$8 >= mutex#1$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#7$rclk$8 >= mutex#1$wclk$8) || !choice_rf25 || !\guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(333) CONSTRAINT(mutex#1$wclk$8 >= mutex#12$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#12$wclk$8) || !choice_rf22 || !\guard#1 || !\guard#2)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(334) CONSTRAINT(mutex#12$wclk$8 >= mutex#1$wclk$8 || !(mutex#3$rclk$8 >= mutex#1$wclk$8) || !choice_rf11 || \guard#1)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(335) CONSTRAINT(TRUE)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(336) CONSTRAINT(mutex#15$wclk$8 >= mutex#1$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#6$rclk$8 >= mutex#1$wclk$8) || !choice_rf21 || !\guard#2)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(337) CONSTRAINT(mutex#1$wclk$8 >= mutex#15$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf17 || !\guard#1 || !\guard#2)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(338) CONSTRAINT(mutex#1$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf27 || !\guard#1)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(339) CONSTRAINT(mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#1$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf31 || !\guard#1)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(340) CONSTRAINT(mutex#15$wclk$8 >= mutex#1$wclk$8 || !(mutex#4$rclk$8 >= mutex#1$wclk$8) || !choice_rf16 || \guard#1)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(341) CONSTRAINT(TRUE)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(342) CONSTRAINT(mutex#15$wclk$8 >= mutex#1$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#7$rclk$8 >= mutex#1$wclk$8) || !choice_rf26 || !\guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(343) CONSTRAINT(mutex#1$wclk$8 >= mutex#15$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf22 || !\guard#1 || !\guard#2)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(344) CONSTRAINT(mutex#15$wclk$8 >= mutex#1$wclk$8 || !(mutex#3$rclk$8 >= mutex#1$wclk$8) || !choice_rf12 || \guard#1)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(345) CONSTRAINT(TRUE)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(346) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf18 || !\guard#2 || \guard#1)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(347) CONSTRAINT((!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(mutex#9$rclk$8 >= mutex#5$wclk$8) || !choice_rf28 || \guard#1)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(348) CONSTRAINT(TRUE)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(349) CONSTRAINT(!(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf14 || \guard#1)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(350) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf23 || !\guard#2 || \guard#1)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(351) CONSTRAINT(!(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf10 || \guard#1)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(352) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf18 || !\guard#2)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(353) CONSTRAINT((!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf28 || !\guard#2)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(354) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf32 || !\guard#1 || !\guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(355) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf14 || !\guard#2 || \guard#1)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(356) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf23 || !\guard#2)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(357) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf10 || !\guard#2 || \guard#1)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(358) CONSTRAINT(mutex#2$wclk$8 >= mutex#12$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#12$wclk$8) || !choice_rf18 || !\guard#1 || !\guard#2)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(359) CONSTRAINT(mutex#12$wclk$8 >= mutex#2$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf20 || !\guard#2)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(360) CONSTRAINT(mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#2$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf28 || !\guard#1)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(361) CONSTRAINT(mutex#2$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf32 || !\guard#1)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(362) CONSTRAINT(mutex#12$wclk$8 >= mutex#2$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#2$wclk$8) || !choice_rf35 || !\guard#1)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(363) CONSTRAINT(TRUE)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(364) CONSTRAINT(mutex#12$wclk$8 >= mutex#2$wclk$8 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf15 || \guard#1)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(365) CONSTRAINT(mutex#2$wclk$8 >= mutex#12$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#12$wclk$8) || !choice_rf23 || !\guard#1 || !\guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(366) CONSTRAINT(mutex#12$wclk$8 >= mutex#2$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#7$rclk$8 >= mutex#2$wclk$8) || !choice_rf25 || !\guard#2)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(367) CONSTRAINT(TRUE)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(368) CONSTRAINT(mutex#12$wclk$8 >= mutex#2$wclk$8 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf11 || \guard#1)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(369) CONSTRAINT(mutex#2$wclk$8 >= mutex#15$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf18 || !\guard#1 || !\guard#2)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(370) CONSTRAINT(mutex#15$wclk$8 >= mutex#2$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#6$rclk$8 >= mutex#2$wclk$8) || !choice_rf21 || !\guard#2)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(371) CONSTRAINT(mutex#2$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf28 || !\guard#1)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(372) CONSTRAINT(mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#2$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf32 || !\guard#1)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(373) CONSTRAINT(TRUE)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(374) CONSTRAINT(mutex#15$wclk$8 >= mutex#2$wclk$8 || !(mutex#4$rclk$8 >= mutex#2$wclk$8) || !choice_rf16 || \guard#1)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(375) CONSTRAINT(mutex#2$wclk$8 >= mutex#15$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf23 || !\guard#1 || !\guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(376) CONSTRAINT(mutex#15$wclk$8 >= mutex#2$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#7$rclk$8 >= mutex#2$wclk$8) || !choice_rf26 || !\guard#2)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(377) CONSTRAINT(TRUE)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(378) CONSTRAINT(mutex#15$wclk$8 >= mutex#2$wclk$8 || !(mutex#3$rclk$8 >= mutex#2$wclk$8) || !choice_rf12 || \guard#1)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(379) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf19 || !\guard#2)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(380) CONSTRAINT((!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#9$rclk$8 >= mutex#8$wclk$8) || !choice_rf29 || !\guard#2)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(381) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf33 || !\guard#1 || !\guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(382) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf24 || !\guard#2)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(383) CONSTRAINT(mutex#12$wclk$8 >= mutex#5$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf20 || !\guard#2 || \guard#1)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(384) CONSTRAINT(mutex#5$wclk$8 >= mutex#12$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#12$wclk$8) || !choice_rf19 || !\guard#1 || !\guard#2)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(385) CONSTRAINT(mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#5$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf29 || !\guard#1)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(386) CONSTRAINT(TRUE)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(387) CONSTRAINT(mutex#5$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf33 || !\guard#1)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(388) CONSTRAINT(mutex#12$wclk$8 >= mutex#5$wclk$8 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf15 || \guard#1)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(389) CONSTRAINT(mutex#12$wclk$8 >= mutex#5$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf25 || !\guard#2 || \guard#1)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(390) CONSTRAINT(mutex#5$wclk$8 >= mutex#12$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#12$wclk$8) || !choice_rf24 || !\guard#1 || !\guard#2)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(391) CONSTRAINT(mutex#12$wclk$8 >= mutex#5$wclk$8 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf11 || \guard#1)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(392) CONSTRAINT(mutex#5$wclk$8 >= mutex#15$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf19 || !\guard#1 || !\guard#2)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(393) CONSTRAINT(mutex#15$wclk$8 >= mutex#5$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#6$rclk$8 >= mutex#5$wclk$8) || !choice_rf21 || !\guard#2 || \guard#1)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(394) CONSTRAINT(mutex#5$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf29 || !\guard#1)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(395) CONSTRAINT(mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#5$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf33 || !\guard#1)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(396) CONSTRAINT(mutex#15$wclk$8 >= mutex#5$wclk$8 || !(mutex#4$rclk$8 >= mutex#5$wclk$8) || !choice_rf16 || \guard#1)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(397) CONSTRAINT(mutex#5$wclk$8 >= mutex#15$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf24 || !\guard#1 || !\guard#2)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(398) CONSTRAINT(mutex#15$wclk$8 >= mutex#5$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#7$rclk$8 >= mutex#5$wclk$8) || !choice_rf26 || !\guard#2 || \guard#1)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(399) CONSTRAINT(mutex#15$wclk$8 >= mutex#5$wclk$8 || !(mutex#3$rclk$8 >= mutex#5$wclk$8) || !choice_rf12 || \guard#1)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(400) CONSTRAINT(mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf20 || !\guard#2)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(401) CONSTRAINT(mutex#9$rclk$8 == mutex#12$wclk$8 || mutex#8$wclk$8 >= mutex#12$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf30 || !\guard#1)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(402) CONSTRAINT(mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#8$wclk$8) || !choice_rf35 || !\guard#1 || !\guard#2)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(403) CONSTRAINT(mutex#8$wclk$8 >= mutex#12$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#13$rclk$8 >= mutex#12$wclk$8) || !choice_rf34 || !\guard#1)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(404) CONSTRAINT(mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf15 || !\guard#2 || \guard#1)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(405) CONSTRAINT(mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf25 || !\guard#2)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(406) CONSTRAINT(mutex#12$wclk$8 >= mutex#8$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf11 || !\guard#2 || \guard#1)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(407) CONSTRAINT(mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#6$rclk$8 >= mutex#8$wclk$8) || !choice_rf21 || !\guard#2)
// 52 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(408) CONSTRAINT(mutex#8$wclk$8 >= mutex#15$wclk$8 || (!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#1) && !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#9$rclk$8 >= mutex#15$wclk$8) || !choice_rf30 || !\guard#1)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(409) CONSTRAINT(mutex#13$rclk$8 == mutex#15$wclk$8 || mutex#8$wclk$8 >= mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf34 || !\guard#1)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(410) CONSTRAINT(mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#4$rclk$8 >= mutex#8$wclk$8) || !choice_rf16 || !\guard#2 || \guard#1)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(411) CONSTRAINT(mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#7$rclk$8 >= mutex#8$wclk$8) || !choice_rf26 || !\guard#2)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(412) CONSTRAINT(mutex#15$wclk$8 >= mutex#8$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(mutex#3$rclk$8 >= mutex#8$wclk$8) || !choice_rf12 || !\guard#2 || \guard#1)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(413) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#6$rclk$8 >= mutex#15$wclk$8) || !choice_rf20 || !\guard#1 || !\guard#2)
// 60 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(414) CONSTRAINT(mutex#13$rclk$8 == mutex#15$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf35 || !\guard#1)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(415) CONSTRAINT(TRUE)
// 41 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(416) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(mutex#7$rclk$8 >= mutex#15$wclk$8) || !choice_rf25 || !\guard#1 || !\guard#2)
// 40 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(417) CONSTRAINT(TRUE)
// 94 file race-1_1-join_true-unreach-call.c line 38 function module_init
(418) CONSTRAINT(!(pdev#4$rclk$8 >= pdev#2$wclk$8) || !choice_rf36 || \guard#1)
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(419) CONSTRAINT(!(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#2$wclk$8) || !choice_rf45 || !\guard#1)
// 103 file race-1_1-join_true-unreach-call.c line 52 function module_exit
(420) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(pdev#6$rclk$8 >= pdev#2$wclk$8) || !choice_rf40 || !\guard#2)
// 94 file race-1_1-join_true-unreach-call.c line 38 function module_init
(421) CONSTRAINT(!(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf36 || \guard#1)
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(422) CONSTRAINT(TRUE)
// 103 file race-1_1-join_true-unreach-call.c line 52 function module_exit
(423) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(pdev#6$rclk$8 >= pdev#3$wclk$8) || !choice_rf40 || !\guard#2 || \guard#1)
// 94 file race-1_1-join_true-unreach-call.c line 38 function module_init
(424) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(pdev#4$rclk$8 >= pdev#5$wclk$8) || !choice_rf36 || !\guard#2 || \guard#1)
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(425) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#5$wclk$8) || !choice_rf45 || !\guard#1 || !\guard#2)
// 103 file race-1_1-join_true-unreach-call.c line 52 function module_exit
(426) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(pdev#6$rclk$8 >= pdev#5$wclk$8) || !choice_rf40 || !\guard#2)
// 94 file race-1_1-join_true-unreach-call.c line 38 function module_init
(427) CONSTRAINT(pdev#7$wclk$8 >= pdev#1$wclk$8 || !(pdev#4$rclk$8 >= pdev#1$wclk$8) || !choice_rf39 || \guard#1)
// 94 file race-1_1-join_true-unreach-call.c line 38 function module_init
(428) CONSTRAINT(TRUE)
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(429) CONSTRAINT(pdev#7$wclk$8 >= pdev#1$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#1$wclk$8) || !choice_rf49 || !\guard#1)
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(430) CONSTRAINT(pdev#1$wclk$8 >= pdev#7$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#7$wclk$8) || !choice_rf45 || !\guard#1)
// 103 file race-1_1-join_true-unreach-call.c line 52 function module_exit
(431) CONSTRAINT(pdev#7$wclk$8 >= pdev#1$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(pdev#6$rclk$8 >= pdev#1$wclk$8) || !choice_rf44 || !\guard#2)
// 103 file race-1_1-join_true-unreach-call.c line 52 function module_exit
(432) CONSTRAINT(pdev#1$wclk$8 >= pdev#7$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#6$rclk$8 >= pdev#7$wclk$8) || !choice_rf40 || !\guard#1 || !\guard#2)
// 94 file race-1_1-join_true-unreach-call.c line 38 function module_init
(433) CONSTRAINT(!(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf37 || \guard#1)
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(434) CONSTRAINT(TRUE)
// 103 file race-1_1-join_true-unreach-call.c line 52 function module_exit
(435) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(pdev#6$rclk$8 >= pdev#3$wclk$8) || !choice_rf41 || !\guard#2 || \guard#1)
// 94 file race-1_1-join_true-unreach-call.c line 38 function module_init
(436) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(pdev#4$rclk$8 >= pdev#5$wclk$8) || !choice_rf37 || !\guard#2 || \guard#1)
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(437) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#5$wclk$8) || !choice_rf46 || !\guard#1 || !\guard#2)
// 103 file race-1_1-join_true-unreach-call.c line 52 function module_exit
(438) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(pdev#6$rclk$8 >= pdev#5$wclk$8) || !choice_rf41 || !\guard#2)
// 94 file race-1_1-join_true-unreach-call.c line 38 function module_init
(439) CONSTRAINT(pdev#7$wclk$8 >= pdev#2$wclk$8 || !(pdev#4$rclk$8 >= pdev#2$wclk$8) || !choice_rf39 || \guard#1)
// 94 file race-1_1-join_true-unreach-call.c line 38 function module_init
(440) CONSTRAINT(TRUE)
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(441) CONSTRAINT(pdev#7$wclk$8 >= pdev#2$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#2$wclk$8) || !choice_rf49 || !\guard#1)
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(442) CONSTRAINT(pdev#2$wclk$8 >= pdev#7$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#7$wclk$8) || !choice_rf46 || !\guard#1)
// 103 file race-1_1-join_true-unreach-call.c line 52 function module_exit
(443) CONSTRAINT(pdev#7$wclk$8 >= pdev#2$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(pdev#6$rclk$8 >= pdev#2$wclk$8) || !choice_rf44 || !\guard#2)
// 103 file race-1_1-join_true-unreach-call.c line 52 function module_exit
(444) CONSTRAINT(pdev#2$wclk$8 >= pdev#7$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#6$rclk$8 >= pdev#7$wclk$8) || !choice_rf41 || !\guard#1 || !\guard#2)
// 94 file race-1_1-join_true-unreach-call.c line 38 function module_init
(445) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(pdev#4$rclk$8 >= pdev#5$wclk$8) || !choice_rf38 || !\guard#2 || \guard#1)
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(446) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#5$wclk$8) || !choice_rf47 || !\guard#1 || !\guard#2)
// 103 file race-1_1-join_true-unreach-call.c line 52 function module_exit
(447) CONSTRAINT((\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(pdev#6$rclk$8 >= pdev#5$wclk$8) || !choice_rf42 || !\guard#2)
// 94 file race-1_1-join_true-unreach-call.c line 38 function module_init
(448) CONSTRAINT(pdev#7$wclk$8 >= pdev#3$wclk$8 || !(pdev#4$rclk$8 >= pdev#3$wclk$8) || !choice_rf39 || \guard#1)
// 94 file race-1_1-join_true-unreach-call.c line 38 function module_init
(449) CONSTRAINT(TRUE)
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(450) CONSTRAINT(TRUE)
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(451) CONSTRAINT(pdev#3$wclk$8 >= pdev#7$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#7$wclk$8) || !choice_rf47 || !\guard#1)
// 103 file race-1_1-join_true-unreach-call.c line 52 function module_exit
(452) CONSTRAINT(pdev#7$wclk$8 >= pdev#3$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(pdev#6$rclk$8 >= pdev#3$wclk$8) || !choice_rf44 || !\guard#2 || \guard#1)
// 103 file race-1_1-join_true-unreach-call.c line 52 function module_exit
(453) CONSTRAINT(pdev#3$wclk$8 >= pdev#7$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#6$rclk$8 >= pdev#7$wclk$8) || !choice_rf42 || !\guard#1 || !\guard#2)
// 94 file race-1_1-join_true-unreach-call.c line 38 function module_init
(454) CONSTRAINT(pdev#7$wclk$8 >= pdev#5$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(pdev#4$rclk$8 >= pdev#5$wclk$8) || !choice_rf39 || !\guard#2 || \guard#1)
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(455) CONSTRAINT(pdev#7$wclk$8 >= pdev#5$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#5$wclk$8) || !choice_rf49 || !\guard#1 || !\guard#2)
// 80 file race-1_1-join_true-unreach-call.c line 16 function thread1
(456) CONSTRAINT(pdev#5$wclk$8 >= pdev#7$wclk$8 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#8$rclk$8 >= pdev#7$wclk$8) || !choice_rf48 || !\guard#1)
// 103 file race-1_1-join_true-unreach-call.c line 52 function module_exit
(457) CONSTRAINT(pdev#7$wclk$8 >= pdev#5$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(pdev#6$rclk$8 >= pdev#5$wclk$8) || !choice_rf44 || !\guard#2)
// 103 file race-1_1-join_true-unreach-call.c line 52 function module_exit
(458) CONSTRAINT(pdev#5$wclk$8 >= pdev#7$wclk$8 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !(pdev#6$rclk$8 >= pdev#7$wclk$8) || !choice_rf43 || !\guard#1 || !\guard#2)
