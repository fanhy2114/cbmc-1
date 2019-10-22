CBMC version 5.10 (cbmc-5.10-1886-g656277c-dirty) 64-bit x86_64 linux
Parsing ./race-1_1-join_true-unreach-call.c
Converting
Type-checking race-1_1-join_true-unreach-call
Generating GOTO Program
Adding CPROVER library (x86_64)
Removal of function pointers and virtual functions
file <builtin-library-pthread_create> line 34 function __spawned_thread: replacing function pointer by 1 possible targets
Generic Property Instrumentation
Running with 8 object bits, 56 offset bits (default)
Starting Bounded Model Checking
Adding SC constraints
Shared __CPROVER_threads_exited: 2R/2W
Shared __CPROVER_next_thread_id: 1R/2W
Shared t1: 2R/2W
Shared mutex: 6R/6W
Shared pdev: 3R/5W
function: pthread_join ssa: !choice_rf0 || __CPROVER_threads_exited#2 == __CPROVER_threads_exited#1
function: pthread_join ssa: !choice_rf1 || \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && __CPROVER_threads_exited#2 == __CPROVER_threads_exited#4
function: pthread_join ssa: !choice_rf1 || !(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#2$rclk$8)
!choice_rf1 || !(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#2$rclk$8)
function: pthread_join ssa: !\guard#2 || \guard#3 || \guard#4 || choice_rf0 || choice_rf1
function: pthread_join ssa: !choice_rf3 || __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#1
function: pthread_join ssa: !choice_rf4 || \guard#1 && __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#2
function: pthread_join ssa: !\guard#2 || choice_rf3 || choice_rf4
function: pthread_join ssa: !(t1#4$rclk$8 >= __CPROVER_next_thread_id#3$rclk$8)
function: pthread_join ssa: !(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_threads_exited#2$rclk$8)
function: pthread_join ssa: !\guard#2 || \guard#3 || \guard#4 || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || !choice_rf0 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#4$wclk$8)
function: pthread_join ssa: !\guard#2 || \guard#3 || \guard#4 || __CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !choice_rf1 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#1$wclk$8)
function: pthread_join ssa: !\guard#2 || !\guard#1 || !choice_rf3 || !(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8)

Fix SSA expressions: 1

size of program expression: 539 steps
no slicing due to threads
Generated 7 VCC(s), 6 remaining after simplification

Program constraints:
// 101 file ./race-1_1-join_true-unreach-call.c line 45 function module_exit
(1) SHARED_WRITE(status!0@1)
// 108 
// 108 
// 61 file <built-in-additions> line 20
(2) SHARED_WRITE(__CPROVER_alloca_object#1)
// 61 file <built-in-additions> line 20
(3) __CPROVER_alloca_object#1 == NULL
// 62 file <built-in-additions> line 14
(4) SHARED_WRITE(__CPROVER_dead_object#1)
// 62 file <built-in-additions> line 14
(5) __CPROVER_dead_object#1 == NULL
// 63 file <built-in-additions> line 13
(6) SHARED_WRITE(__CPROVER_deallocated#1)
// 63 file <built-in-additions> line 13
(7) __CPROVER_deallocated#1 == NULL
// 64 file <built-in-additions> line 17
(8) SHARED_WRITE(__CPROVER_malloc_is_new_array#1)
// 64 file <built-in-additions> line 17
(9) __CPROVER_malloc_is_new_array#1 == FALSE
// 65 file <built-in-additions> line 15
(10) SHARED_WRITE(__CPROVER_malloc_object#1)
// 65 file <built-in-additions> line 15
(11) __CPROVER_malloc_object#1 == NULL
// 66 file <built-in-additions> line 16
(12) SHARED_WRITE(__CPROVER_malloc_size#1)
// 66 file <built-in-additions> line 16
(13) __CPROVER_malloc_size#1 == 0ul
// 67 file <built-in-additions> line 18
(14) SHARED_WRITE(__CPROVER_memory_leak#1)
// 67 file <built-in-additions> line 18
(15) __CPROVER_memory_leak#1 == NULL
// 68 file <built-in-additions> line 8
(16) SHARED_WRITE(__CPROVER_next_thread_id#1)
// 68 file <built-in-additions> line 8
(17) __CPROVER_next_thread_id#1 == 0ul
// 69 file <built-in-additions> line 11
(18) __CPROVER_next_thread_key!0#1 == 0ul
// 70 file <built-in-additions> line 33
(19) SHARED_WRITE(__CPROVER_pipe_count#1)
// 70 file <built-in-additions> line 33
(20) __CPROVER_pipe_count#1 == 0u
// 71 file <built-in-additions> line 24
(21) __CPROVER_rounding_mode!0#1 == 0
// 72 file <built-in-additions> line 6
(22) __CPROVER_thread_id!0#1 == 0ul
// 73 file <built-in-additions> line 10
(23) __CPROVER_thread_key_dtors!0#1 == ARRAY_OF(((const void (*)(const void *))NULL))
// 74 file <built-in-additions> line 9
(24) __CPROVER_thread_keys!0#1 == ARRAY_OF(NULL)
// 75 file <built-in-additions> line 7
(25) SHARED_WRITE(__CPROVER_threads_exited#1)
// 75 file <built-in-additions> line 7
(26) __CPROVER_threads_exited#1 == ARRAY_OF(FALSE)
// 76 file ./race-1_1-join_true-unreach-call.c line 11
(27) SHARED_WRITE(mutex#1)
// 76 file ./race-1_1-join_true-unreach-call.c line 11
(28) mutex#1 == byte_extract_little_endian({ .__lock=0, .__count=0u, .__owner=0, .__nusers=0u, .__kind=0,
    .__spins=0, .__elision=0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } }, 0l, union { struct __pthread_mutex_s __data; char __size[40l]; signed long int __align; })
// 77 file ./race-1_1-join_true-unreach-call.c line 12
(29) SHARED_WRITE(pdev#1)
// 77 file ./race-1_1-join_true-unreach-call.c line 12
(30) pdev#1 == 0
// 78 file ./race-1_1-join_true-unreach-call.c line 10
(31) SHARED_WRITE(t1#1)
// 78 file ./race-1_1-join_true-unreach-call.c line 10
(32) t1#1 == 0ul
// 79 
// 109 file ./race-1_1-join_true-unreach-call.c line 56
// 109 file ./race-1_1-join_true-unreach-call.c line 56
// 0 file ./race-1_1-join_true-unreach-call.c line 57 function main
// 1 file ./race-1_1-join_true-unreach-call.c line 57 function main
// 1 file ./race-1_1-join_true-unreach-call.c line 57 function main
// 86 file ./race-1_1-join_true-unreach-call.c line 23 function module_init
// 86 file ./race-1_1-join_true-unreach-call.c line 23 function module_init
// 86 file ./race-1_1-join_true-unreach-call.c line 23 function module_init
(33) mutex!0@1#1 == &mutex
// 86 file ./race-1_1-join_true-unreach-call.c line 23 function module_init
(34) mutexattr!0@1#1 == ((union { char __size[4l]; signed int __align; } *)NULL)
// 42 file <builtin-library-pthread_mutex_init> line 31 function pthread_mutex_init
(35) SHARED_WRITE(mutex#2)
// 42 file <builtin-library-pthread_mutex_init> line 31 function pthread_mutex_init
(36) mutex#2 == byte_update_little_endian(mutex#1, 0l, 0, char)
// 43 file <builtin-library-pthread_mutex_init> line 32 function pthread_mutex_init
// 45 file <builtin-library-pthread_mutex_init> line 42 function pthread_mutex_init
(37) pthread_mutex_init#return_value!0#1 == 0
// 46 file <builtin-library-pthread_mutex_init> line 43 function pthread_mutex_init
// 87 file ./race-1_1-join_true-unreach-call.c line 25 function module_init
(38) SHARED_WRITE(pdev#2)
// 87 file ./race-1_1-join_true-unreach-call.c line 25 function module_init
(39) pdev#2 == 1
// 89 file ./race-1_1-join_true-unreach-call.c line 29 function module_init
// 90 file ./race-1_1-join_true-unreach-call.c line 29 function module_init
(40) return_value___VERIFIER_nondet_int!0@1#2 == nondet_symbol(symex::nondet1)
// 91 file ./race-1_1-join_true-unreach-call.c line 29 function module_init
// 91 file ./race-1_1-join_true-unreach-call.c line 29 function module_init
(41) \guard#1 == !(return_value___VERIFIER_nondet_int!0@1#2 == 0)
// 92 file ./race-1_1-join_true-unreach-call.c line 31 function module_init
// 92 file ./race-1_1-join_true-unreach-call.c line 31 function module_init
// 92 file ./race-1_1-join_true-unreach-call.c line 31 function module_init
(42) thread!0@1#1 == &t1
     guard: \guard#1
// 92 file ./race-1_1-join_true-unreach-call.c line 31 function module_init
(43) attr!0@1#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
     guard: \guard#1
// 92 file ./race-1_1-join_true-unreach-call.c line 31 function module_init
(44) start_routine!0@1#1 == thread1
     guard: \guard#1
// 92 file ./race-1_1-join_true-unreach-call.c line 31 function module_init
(45) arg!0@1#1 == NULL
     guard: \guard#1
// 9 file <builtin-library-pthread_create> line 56 function pthread_create
// 10 file <builtin-library-pthread_create> line 57 function pthread_create
// 11 file <builtin-library-pthread_create> line 58 function pthread_create
(46) __CPROVER_next_thread_id#2 == 1ul
     guard: \guard#1
// 12 file <builtin-library-pthread_create> line 58 function pthread_create
(47) this_thread_id!0@1#2 == 1ul
     guard: \guard#1
// 13 file <builtin-library-pthread_create> line 59 function pthread_create
(48) SHARED_WRITE(__CPROVER_next_thread_id#2)
     guard: \guard#1
// 13 file <builtin-library-pthread_create> line 59 function pthread_create
// 14 file <builtin-library-pthread_create> line 62 function pthread_create
(49) SHARED_WRITE(t1#2)
     guard: \guard#1
// 14 file <builtin-library-pthread_create> line 62 function pthread_create
(50) t1#2 == 1ul
     guard: \guard#1
// 15 file <builtin-library-pthread_create> line 68 function pthread_create
// 17 file <builtin-library-pthread_create> line 70 function pthread_create
// 18 file <builtin-library-pthread_create> line 70 function pthread_create
(51) next_thread_key!0@1#2 == 0ul
     guard: \guard#1
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(52) thread!1@0#1 == &t1
     guard: \guard#1
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(53) attr!1@0#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
     guard: \guard#1
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(54) start_routine!1@0#1 == thread1
     guard: \guard#1
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(55) arg!1@0#1 == NULL
     guard: \guard#1
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(56) this_thread_id!1@0#1 == 1ul
     guard: \guard#1
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(57) next_thread_key!1@0#1 == 0ul
     guard: \guard#1
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(58) thread1#return_value!1#1 == NULL
     guard: \guard#1
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(59) __VERIFIER_nondet_int#return_value!1#1 == 0
     guard: \guard#1
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(60) pthread_mutex_unlock#return_value!1#1 == 0
     guard: \guard#1
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(61) pthread_mutex_lock#return_value!1#1 == 0
     guard: \guard#1
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(62) pthread_mutex_init#return_value!1#1 == 0
     guard: \guard#1
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(63) pthread_mutex_destroy#return_value!1#1 == 0
     guard: \guard#1
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(64) pthread_join#return_value!1#1 == 0
     guard: \guard#1
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(65) __CPROVER_next_thread_key!1#1 == 0ul
     guard: \guard#1
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(66) __CPROVER_rounding_mode!1#1 == 0
     guard: \guard#1
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(67) __CPROVER_thread_id!1#1 == 0ul
     guard: \guard#1
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(68) __CPROVER_thread_keys!1#1 == ARRAY_OF(NULL)
     guard: \guard#1
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(69) __CPROVER_thread_key_dtors!1#1 == ARRAY_OF(((const void (*)(const void *))NULL))
     guard: \guard#1
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(70) main#return_value!1#1 == 0
     guard: \guard#1
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(71) module_init#return_value!1#1 == 0
     guard: \guard#1
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(72) pthread_create#return_value!1#1 == 0
     guard: \guard#1
// 20 file <builtin-library-pthread_create> line 73 function pthread_create
// 23 file <builtin-library-pthread_create> line 81 function pthread_create
(73) pthread_create#return_value!0#1 == 0
     guard: \guard#1
// 26 file <builtin-library-pthread_create> line 82 function pthread_create
// 93 file ./race-1_1-join_true-unreach-call.c line 35 function module_init
(74) module_init#return_value!0#1 == 0
     guard: \guard#1
// 94 file ./race-1_1-join_true-unreach-call.c line 35 function module_init
// 95 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(75) SHARED_WRITE(pdev#3)
     guard: !\guard#1
// 95 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(76) pdev#3 == 3
     guard: !\guard#1
// 96 file ./race-1_1-join_true-unreach-call.c line 39 function module_init
(77) SHARED_READ(pdev#4)
     guard: !\guard#1
// 96 file ./race-1_1-join_true-unreach-call.c line 39 function module_init
(78) ASSERT(!\guard#1 ==> pdev#4 == 3) 
     guard: !\guard#1
// 97 file ./race-1_1-join_true-unreach-call.c line 40 function module_init
// 97 file ./race-1_1-join_true-unreach-call.c line 40 function module_init
// 97 file ./race-1_1-join_true-unreach-call.c line 40 function module_init
(79) mutex!0@1#1 == &mutex
     guard: !\guard#1
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(80) SHARED_READ(mutex#3)
     guard: !\guard#1
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(81) ASSERT(!\guard#1 ==> (signed int)byte_extract_little_endian(mutex#3, 0l, char) == 0) 
     guard: !\guard#1
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(82) SHARED_READ(mutex#4)
     guard: !\guard#1
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(83) SHARED_WRITE(mutex#5)
     guard: !\guard#1
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(84) mutex#5 == byte_update_little_endian(mutex#4, 0l, -1, char)
     guard: !\guard#1
// 40 file <builtin-library-pthread_mutex_destroy> line 41 function pthread_mutex_destroy
(85) pthread_mutex_destroy#return_value!0#1 == 0
     guard: !\guard#1
// 41 file <builtin-library-pthread_mutex_destroy> line 42 function pthread_mutex_destroy
// 98 file ./race-1_1-join_true-unreach-call.c line 41 function module_init
(86) module_init#return_value!0#2 == -1
     guard: !\guard#1
// 100 file ./race-1_1-join_true-unreach-call.c line 42 function module_init
(87) return_value___VERIFIER_nondet_int!0@1#4 == (\guard#1 ? return_value___VERIFIER_nondet_int!0@1#2 : return_value___VERIFIER_nondet_int!0@1#3)
// 100 file ./race-1_1-join_true-unreach-call.c line 42 function module_init
(88) module_init#return_value!0#3 == (\guard#1 ? 0 : -1)
// 100 file ./race-1_1-join_true-unreach-call.c line 42 function module_init
(89) pthread_mutex_destroy#return_value!0#2 == 0
// 100 file ./race-1_1-join_true-unreach-call.c line 42 function module_init
// 2 file ./race-1_1-join_true-unreach-call.c line 57 function main
(90) return_value_module_init!0@1#2 == module_init#return_value!0#3
// 4 file ./race-1_1-join_true-unreach-call.c line 57 function main
// 4 file ./race-1_1-join_true-unreach-call.c line 57 function main
(91) \guard#2 == (return_value_module_init!0@1#2 == 0)
// 5 file ./race-1_1-join_true-unreach-call.c line 58 function main
// 5 file ./race-1_1-join_true-unreach-call.c line 58 function main
// 101 file ./race-1_1-join_true-unreach-call.c line 45 function module_exit
// 101 file ./race-1_1-join_true-unreach-call.c line 45 function module_exit
(92) SHARED_WRITE(status!0@1#1)
     guard: \guard#2
// 102 file ./race-1_1-join_true-unreach-call.c line 49 function module_exit
// 102 file ./race-1_1-join_true-unreach-call.c line 49 function module_exit
(93) SHARED_READ(t1#3)
     guard: \guard#2
// 102 file ./race-1_1-join_true-unreach-call.c line 49 function module_exit
// 102 file ./race-1_1-join_true-unreach-call.c line 49 function module_exit
(94) SHARED_READ(t1#4)
     guard: \guard#2
// 102 file ./race-1_1-join_true-unreach-call.c line 49 function module_exit
(95) thread!0@1#1 == t1#4
     guard: \guard#2
// 102 file ./race-1_1-join_true-unreach-call.c line 49 function module_exit
(96) value_ptr!0@1#1 == &status!0@1
     guard: \guard#2
// 27 file <builtin-library-pthread_join> line 25 function pthread_join
(97) SHARED_READ(__CPROVER_next_thread_id#3)
     guard: \guard#2
// 27 file <builtin-library-pthread_join> line 25 function pthread_join
// 27 file <builtin-library-pthread_join> line 25 function pthread_join
(98) \guard#3 == !(__CPROVER_next_thread_id#3 >= thread!0@1#1)
// 28 file <builtin-library-pthread_join> line 25 function pthread_join
(99) pthread_join#return_value!0#1 == 3
     guard: \guard#2 && \guard#3
// 29 file <builtin-library-pthread_join> line 25 function pthread_join
// 30 file <builtin-library-pthread_join> line 26 function pthread_join
// 30 file <builtin-library-pthread_join> line 26 function pthread_join
(100) \guard#4 == (thread!0@1#1 == 0ul)
// 31 file <builtin-library-pthread_join> line 26 function pthread_join
(101) pthread_join#return_value!0#2 == 35
      guard: \guard#2 && !\guard#3 && \guard#4
// 32 file <builtin-library-pthread_join> line 26 function pthread_join
// 33 file <builtin-library-pthread_join> line 27 function pthread_join
(102) pthread_join#return_value!0#3 == 3
// 33 file <builtin-library-pthread_join> line 27 function pthread_join
// 35 file <builtin-library-pthread_join> line 28 function pthread_join
(103) SHARED_READ(__CPROVER_threads_exited#2)
      guard: \guard#2 && !\guard#3 && !\guard#4
// 36 file <builtin-library-pthread_join> line 30 function pthread_join
(104) pthread_join#return_value!0#4 == 0
      guard: \guard#2 && !\guard#3 && !\guard#4 && __CPROVER_threads_exited#2[(signed long int)thread!0@1#1]
// 37 file <builtin-library-pthread_join> line 31 function pthread_join
(105) pthread_join#return_value!0#5 == (\guard#4 ? 35 : 0)
// 37 file <builtin-library-pthread_join> line 31 function pthread_join
(106) pthread_join#return_value!0#6 == (\guard#3 ? 3 : pthread_join#return_value!0#5)
// 37 file <builtin-library-pthread_join> line 31 function pthread_join
// 103 file ./race-1_1-join_true-unreach-call.c line 50 function module_exit
// 103 file ./race-1_1-join_true-unreach-call.c line 50 function module_exit
// 103 file ./race-1_1-join_true-unreach-call.c line 50 function module_exit
(107) mutex!0@2#1 == &mutex
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3)
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(108) SHARED_READ(mutex#6)
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3)
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(109) ASSERT(\guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3) ==> (signed int)byte_extract_little_endian(mutex#6, 0l, char) == 0) 
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3)
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(110) SHARED_READ(mutex#7)
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3)
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(111) SHARED_WRITE(mutex#8)
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3)
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(112) mutex#8 == byte_update_little_endian(mutex#7, 0l, -1, char)
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3)
// 40 file <builtin-library-pthread_mutex_destroy> line 41 function pthread_mutex_destroy
(113) pthread_mutex_destroy#return_value!0#3 == 0
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3)
// 41 file <builtin-library-pthread_mutex_destroy> line 42 function pthread_mutex_destroy
// 104 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(114) SHARED_WRITE(pdev#5)
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3)
// 104 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(115) pdev#5 == 5
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3)
// 105 file ./race-1_1-join_true-unreach-call.c line 53 function module_exit
(116) SHARED_READ(pdev#6)
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3)
// 105 file ./race-1_1-join_true-unreach-call.c line 53 function module_exit
(117) ASSERT(\guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3) ==> pdev#6 == 5) 
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3)
// 107 file ./race-1_1-join_true-unreach-call.c line 54 function module_exit
// 6 file ./race-1_1-join_true-unreach-call.c line 60 function main
(118) pthread_mutex_destroy#return_value!0#4 == 0
// 6 file ./race-1_1-join_true-unreach-call.c line 60 function main
(119) pthread_join#return_value!0#7 == pthread_join#return_value!0#6
// 6 file ./race-1_1-join_true-unreach-call.c line 60 function main
(120) main#return_value!0#1 == 0
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3) || !\guard#2
// 8 file ./race-1_1-join_true-unreach-call.c line 61 function main
// 110 file ./race-1_1-join_true-unreach-call.c line 56
(121) return'!0#1 == 0
      guard: \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3) || !\guard#2
// 112 file ./race-1_1-join_true-unreach-call.c line 56
// 113 
// 21 file <builtin-library-pthread_create> line 74 function pthread_create
// 21 file <builtin-library-pthread_create> line 74 function pthread_create
// 21 file <builtin-library-pthread_create> line 74 function pthread_create
(122) this_thread_id!1@1#1 == 1ul
      guard: \guard#1
// 21 file <builtin-library-pthread_create> line 74 function pthread_create
(123) next_thread_key!1@1#1 == 0ul
      guard: \guard#1
// 21 file <builtin-library-pthread_create> line 74 function pthread_create
(124) start_routine!1@1#1 == thread1
      guard: \guard#1
// 21 file <builtin-library-pthread_create> line 74 function pthread_create
(125) arg!1@1#1 == NULL
      guard: \guard#1
// 114 file <builtin-library-pthread_create> line 23 function __spawned_thread
(126) __CPROVER_thread_id!1#2 == 1ul
      guard: \guard#1
// 115 file <builtin-library-pthread_create> line 24 function __spawned_thread
(127) __CPROVER_next_thread_key!1#2 == 0ul
      guard: \guard#1
// 117 file <builtin-library-pthread_create> line 34 function __spawned_thread
// 118 file <builtin-library-pthread_create> line 34 function __spawned_thread
// 118 file <builtin-library-pthread_create> line 34 function __spawned_thread
// 118 file <builtin-library-pthread_create> line 34 function __spawned_thread
(128) arg!1@1#1 == NULL
      guard: \guard#1
// 80 file ./race-1_1-join_true-unreach-call.c line 15 function thread1
// 80 file ./race-1_1-join_true-unreach-call.c line 15 function thread1
// 80 file ./race-1_1-join_true-unreach-call.c line 15 function thread1
(129) mutex!1@1#1 == &mutex
      guard: \guard#1
// 47 file <builtin-library-pthread_mutex_lock> line 37 function pthread_mutex_lock
// 48 file <builtin-library-pthread_mutex_lock> line 38 function pthread_mutex_lock
(130) mutex#10 == mutex#9
      guard: \guard#1
// 49 file <builtin-library-pthread_mutex_lock> line 39 function pthread_mutex_lock
(131) mutex#11 == (\guard#1 ? mutex#10 : mutex#9)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 49 file <builtin-library-pthread_mutex_lock> line 39 function pthread_mutex_lock
(132) mutex#12 == byte_update_little_endian(mutex#11, 0l, 1, char)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(133) SHARED_READ(mutex#9)
      guard: \guard#1 || \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(134) SHARED_WRITE(mutex#12)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
// 51 file <builtin-library-pthread_mutex_lock> line 42 function pthread_mutex_lock
// 52 file <builtin-library-pthread_mutex_lock> line 46 function pthread_mutex_lock
(135) pthread_mutex_lock#return_value!1#2 == 0
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 53 file <builtin-library-pthread_mutex_lock> line 47 function pthread_mutex_lock
// 81 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(136) SHARED_WRITE(pdev#7)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 81 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(137) pdev#7 == 6
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(138) SHARED_READ(pdev#8)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(139) ASSERT(\guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 ==> pdev#8 == 6) 
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 83 file ./race-1_1-join_true-unreach-call.c line 18 function thread1
// 83 file ./race-1_1-join_true-unreach-call.c line 18 function thread1
// 83 file ./race-1_1-join_true-unreach-call.c line 18 function thread1
(140) mutex!1@1#1 == &mutex
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 54 file <builtin-library-pthread_mutex_unlock> line 36 function pthread_mutex_unlock
// 55 file <builtin-library-pthread_mutex_unlock> line 38 function pthread_mutex_unlock
// 56 file <builtin-library-pthread_mutex_unlock> line 39 function pthread_mutex_unlock
(141) mutex#14 == mutex#13
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 56 file <builtin-library-pthread_mutex_unlock> line 39 function pthread_mutex_unlock
(142) ASSERT(\guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 ==> (signed int)byte_extract_little_endian(mutex#14, 0l, char) == 1) 
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 57 file <builtin-library-pthread_mutex_unlock> line 41 function pthread_mutex_unlock
(143) mutex#15 == byte_update_little_endian(mutex#14, 0l, 0, char)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(144) SHARED_READ(mutex#13)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(145) SHARED_WRITE(mutex#15)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
// 59 file <builtin-library-pthread_mutex_unlock> line 45 function pthread_mutex_unlock
(146) pthread_mutex_unlock#return_value!1#2 == 0
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 60 file <builtin-library-pthread_mutex_unlock> line 46 function pthread_mutex_unlock
// 84 file ./race-1_1-join_true-unreach-call.c line 19 function thread1
(147) thread1#return_value!1#2 == NULL
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 85 file ./race-1_1-join_true-unreach-call.c line 20 function thread1
// 119 file <builtin-library-pthread_create> line 35 function __spawned_thread
// 120 file <builtin-library-pthread_create> line 46 function __spawned_thread
(148) SHARED_READ(__CPROVER_threads_exited#3)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 120 file <builtin-library-pthread_create> line 46 function __spawned_thread
(149) SHARED_WRITE(__CPROVER_threads_exited#4)
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 120 file <builtin-library-pthread_create> line 46 function __spawned_thread
(150) __CPROVER_threads_exited#4 == __CPROVER_threads_exited#3 WITH [1l:=TRUE]
      guard: \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0
// 121 file <builtin-library-pthread_create> line 47 function __spawned_thread
// 26 file <builtin-library-pthread_create> line 82 function pthread_create
// 35 file <builtin-library-pthread_join> line 28 function pthread_join
(151) CONSTRAINT(!choice_rf0 || __CPROVER_threads_exited#2 == __CPROVER_threads_exited#1) 
// 35 file <builtin-library-pthread_join> line 28 function pthread_join
(152) CONSTRAINT(!choice_rf1 || \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && __CPROVER_threads_exited#2 == __CPROVER_threads_exited#4) 
// 35 file <builtin-library-pthread_join> line 28 function pthread_join
(153) CONSTRAINT(!choice_rf1 || !(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#2$rclk$8)) 
// 35 file <builtin-library-pthread_join> line 28 function pthread_join
(154) CONSTRAINT(!\guard#2 || \guard#3 || \guard#4 || choice_rf0 || choice_rf1) 
// 120 file <builtin-library-pthread_create> line 46 function __spawned_thread
(155) CONSTRAINT(!choice_rf2 || __CPROVER_threads_exited#3 == __CPROVER_threads_exited#1) 
// 120 file <builtin-library-pthread_create> line 46 function __spawned_thread
(156) CONSTRAINT(!choice_rf2 || !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#3$rclk$8)) 
// 120 file <builtin-library-pthread_create> line 46 function __spawned_thread
(157) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || choice_rf2) 
// 27 file <builtin-library-pthread_join> line 25 function pthread_join
(158) CONSTRAINT(!choice_rf3 || __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#1) 
// 27 file <builtin-library-pthread_join> line 25 function pthread_join
(159) CONSTRAINT(!choice_rf4 || \guard#1 && __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#2) 
// 27 file <builtin-library-pthread_join> line 25 function pthread_join
(160) CONSTRAINT(!\guard#2 || choice_rf3 || choice_rf4) 
// 102 file ./race-1_1-join_true-unreach-call.c line 49 function module_exit
(161) CONSTRAINT(!choice_rf5 || t1#3 == t1#1) 
// 102 file ./race-1_1-join_true-unreach-call.c line 49 function module_exit
(162) CONSTRAINT(!choice_rf6 || \guard#1 && t1#3 == t1#2) 
// 102 file ./race-1_1-join_true-unreach-call.c line 49 function module_exit
(163) CONSTRAINT(!\guard#2 || choice_rf5 || choice_rf6) 
// 102 file ./race-1_1-join_true-unreach-call.c line 49 function module_exit
(164) CONSTRAINT(!choice_rf7 || t1#4 == t1#1) 
// 102 file ./race-1_1-join_true-unreach-call.c line 49 function module_exit
(165) CONSTRAINT(!choice_rf8 || \guard#1 && t1#4 == t1#2) 
// 102 file ./race-1_1-join_true-unreach-call.c line 49 function module_exit
(166) CONSTRAINT(!\guard#2 || choice_rf7 || choice_rf8) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(167) CONSTRAINT(!choice_rf9 || mutex#3 == mutex#1) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(168) CONSTRAINT(!choice_rf10 || mutex#3 == mutex#2) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(169) CONSTRAINT(!choice_rf11 || \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#3 == mutex#12) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(170) CONSTRAINT(!choice_rf11 || !(mutex#12$wclk$8 >= mutex#3$rclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(171) CONSTRAINT(!choice_rf12 || \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#3 == mutex#15) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(172) CONSTRAINT(!choice_rf12 || !(mutex#15$wclk$8 >= mutex#3$rclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(173) CONSTRAINT(\guard#1 || choice_rf9 || choice_rf10 || choice_rf11 || choice_rf12) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(174) CONSTRAINT(!choice_rf13 || mutex#4 == mutex#1) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(175) CONSTRAINT(!choice_rf14 || mutex#4 == mutex#2) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(176) CONSTRAINT(!choice_rf15 || \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#4 == mutex#12) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(177) CONSTRAINT(!choice_rf15 || !(mutex#12$wclk$8 >= mutex#4$rclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(178) CONSTRAINT(!choice_rf16 || \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#4 == mutex#15) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(179) CONSTRAINT(!choice_rf16 || !(mutex#15$wclk$8 >= mutex#4$rclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(180) CONSTRAINT(\guard#1 || choice_rf13 || choice_rf14 || choice_rf15 || choice_rf16) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(181) CONSTRAINT(!choice_rf17 || mutex#6 == mutex#1) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(182) CONSTRAINT(!choice_rf18 || mutex#6 == mutex#2) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(183) CONSTRAINT(!choice_rf19 || !\guard#1 && mutex#6 == mutex#5) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(184) CONSTRAINT(!choice_rf20 || \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#6 == mutex#12) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(185) CONSTRAINT(!choice_rf20 || !(mutex#12$wclk$8 >= mutex#6$rclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(186) CONSTRAINT(!choice_rf21 || \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#6 == mutex#15) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(187) CONSTRAINT(!choice_rf21 || !(mutex#15$wclk$8 >= mutex#6$rclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(188) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || choice_rf17 || choice_rf18 || choice_rf19 || choice_rf20 || choice_rf21) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(189) CONSTRAINT(!choice_rf22 || mutex#7 == mutex#1) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(190) CONSTRAINT(!choice_rf23 || mutex#7 == mutex#2) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(191) CONSTRAINT(!choice_rf24 || !\guard#1 && mutex#7 == mutex#5) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(192) CONSTRAINT(!choice_rf25 || \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#7 == mutex#12) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(193) CONSTRAINT(!choice_rf25 || !(mutex#12$wclk$8 >= mutex#7$rclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(194) CONSTRAINT(!choice_rf26 || \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#7 == mutex#15) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(195) CONSTRAINT(!choice_rf26 || !(mutex#15$wclk$8 >= mutex#7$rclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(196) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || choice_rf22 || choice_rf23 || choice_rf24 || choice_rf25 || choice_rf26) 
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(197) CONSTRAINT(!choice_rf27 || mutex#9 == mutex#1) 
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(198) CONSTRAINT(!choice_rf27 || !(mutex#1$wclk$8 >= mutex#9$rclk$8)) 
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(199) CONSTRAINT(!choice_rf28 || mutex#9 == mutex#2) 
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(200) CONSTRAINT(!choice_rf28 || !(mutex#2$wclk$8 >= mutex#9$rclk$8)) 
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(201) CONSTRAINT(!choice_rf29 || !\guard#1 && mutex#9 == mutex#5) 
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(202) CONSTRAINT(!choice_rf29 || !(mutex#5$wclk$8 >= mutex#9$rclk$8)) 
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(203) CONSTRAINT(!choice_rf30 || \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3) && mutex#9 == mutex#8) 
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(204) CONSTRAINT(!choice_rf30 || !(mutex#8$wclk$8 >= mutex#9$rclk$8)) 
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(205) CONSTRAINT(!\guard#1 && (!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0)) || choice_rf27 || choice_rf28 || choice_rf29 || choice_rf30) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(206) CONSTRAINT(!choice_rf31 || mutex#13 == mutex#1) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(207) CONSTRAINT(!choice_rf31 || !(mutex#1$wclk$8 >= mutex#13$rclk$8)) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(208) CONSTRAINT(!choice_rf32 || mutex#13 == mutex#2) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(209) CONSTRAINT(!choice_rf32 || !(mutex#2$wclk$8 >= mutex#13$rclk$8)) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(210) CONSTRAINT(!choice_rf33 || !\guard#1 && mutex#13 == mutex#5) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(211) CONSTRAINT(!choice_rf33 || !(mutex#5$wclk$8 >= mutex#13$rclk$8)) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(212) CONSTRAINT(!choice_rf34 || \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3) && mutex#13 == mutex#8) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(213) CONSTRAINT(!choice_rf34 || !(mutex#8$wclk$8 >= mutex#13$rclk$8)) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(214) CONSTRAINT(!choice_rf35 || \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && mutex#13 == mutex#12) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(215) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || choice_rf31 || choice_rf32 || choice_rf33 || choice_rf34 || choice_rf35) 
// 96 file ./race-1_1-join_true-unreach-call.c line 39 function module_init
(216) CONSTRAINT(!choice_rf36 || pdev#4 == pdev#1) 
// 96 file ./race-1_1-join_true-unreach-call.c line 39 function module_init
(217) CONSTRAINT(!choice_rf37 || pdev#4 == pdev#2) 
// 96 file ./race-1_1-join_true-unreach-call.c line 39 function module_init
(218) CONSTRAINT(!choice_rf38 || !\guard#1 && pdev#4 == pdev#3) 
// 96 file ./race-1_1-join_true-unreach-call.c line 39 function module_init
(219) CONSTRAINT(!choice_rf39 || \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#4 == pdev#7) 
// 96 file ./race-1_1-join_true-unreach-call.c line 39 function module_init
(220) CONSTRAINT(!choice_rf39 || !(pdev#7$wclk$8 >= pdev#4$rclk$8)) 
// 96 file ./race-1_1-join_true-unreach-call.c line 39 function module_init
(221) CONSTRAINT(\guard#1 || choice_rf36 || choice_rf37 || choice_rf38 || choice_rf39) 
// 105 file ./race-1_1-join_true-unreach-call.c line 53 function module_exit
(222) CONSTRAINT(!choice_rf40 || pdev#6 == pdev#1) 
// 105 file ./race-1_1-join_true-unreach-call.c line 53 function module_exit
(223) CONSTRAINT(!choice_rf41 || pdev#6 == pdev#2) 
// 105 file ./race-1_1-join_true-unreach-call.c line 53 function module_exit
(224) CONSTRAINT(!choice_rf42 || !\guard#1 && pdev#6 == pdev#3) 
// 105 file ./race-1_1-join_true-unreach-call.c line 53 function module_exit
(225) CONSTRAINT(!choice_rf43 || \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3) && pdev#6 == pdev#5) 
// 105 file ./race-1_1-join_true-unreach-call.c line 53 function module_exit
(226) CONSTRAINT(!choice_rf44 || \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#6 == pdev#7) 
// 105 file ./race-1_1-join_true-unreach-call.c line 53 function module_exit
(227) CONSTRAINT(!choice_rf44 || !(pdev#7$wclk$8 >= pdev#6$rclk$8)) 
// 105 file ./race-1_1-join_true-unreach-call.c line 53 function module_exit
(228) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || choice_rf40 || choice_rf41 || choice_rf42 || choice_rf43 || choice_rf44) 
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(229) CONSTRAINT(!choice_rf45 || pdev#8 == pdev#1) 
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(230) CONSTRAINT(!choice_rf45 || !(pdev#1$wclk$8 >= pdev#8$rclk$8)) 
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(231) CONSTRAINT(!choice_rf46 || pdev#8 == pdev#2) 
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(232) CONSTRAINT(!choice_rf46 || !(pdev#2$wclk$8 >= pdev#8$rclk$8)) 
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(233) CONSTRAINT(!choice_rf47 || !\guard#1 && pdev#8 == pdev#3) 
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(234) CONSTRAINT(!choice_rf47 || !(pdev#3$wclk$8 >= pdev#8$rclk$8)) 
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(235) CONSTRAINT(!choice_rf48 || \guard#2 && (!\guard#3 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#4 || \guard#4) || \guard#3) && pdev#8 == pdev#5) 
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(236) CONSTRAINT(!choice_rf48 || !(pdev#5$wclk$8 >= pdev#8$rclk$8)) 
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(237) CONSTRAINT(!choice_rf49 || \guard#1 && byte_extract_little_endian(mutex#10, 0l, char) == 0 && pdev#8 == pdev#7) 
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(238) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || choice_rf45 || choice_rf46 || choice_rf47 || choice_rf48 || choice_rf49) 
// 75 file <built-in-additions> line 7
(239) CONSTRAINT(!choice_ws-ext50 || !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8)) 
// 75 file <built-in-additions> line 7
(240) CONSTRAINT(choice_ws-ext50 || !(__CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8)) 
// 76 file ./race-1_1-join_true-unreach-call.c line 11
(241) CONSTRAINT(!choice_ws-ext51 || !(mutex#1$wclk$8 >= mutex#12$wclk$8)) 
// 76 file ./race-1_1-join_true-unreach-call.c line 11
(242) CONSTRAINT(choice_ws-ext51 || !(mutex#12$wclk$8 >= mutex#1$wclk$8)) 
// 76 file ./race-1_1-join_true-unreach-call.c line 11
(243) CONSTRAINT(!choice_ws-ext52 || !(mutex#1$wclk$8 >= mutex#15$wclk$8)) 
// 76 file ./race-1_1-join_true-unreach-call.c line 11
(244) CONSTRAINT(choice_ws-ext52 || !(mutex#15$wclk$8 >= mutex#1$wclk$8)) 
// 42 file <builtin-library-pthread_mutex_init> line 31 function pthread_mutex_init
(245) CONSTRAINT(!choice_ws-ext53 || !(mutex#2$wclk$8 >= mutex#12$wclk$8)) 
// 42 file <builtin-library-pthread_mutex_init> line 31 function pthread_mutex_init
(246) CONSTRAINT(choice_ws-ext53 || !(mutex#12$wclk$8 >= mutex#2$wclk$8)) 
// 42 file <builtin-library-pthread_mutex_init> line 31 function pthread_mutex_init
(247) CONSTRAINT(!choice_ws-ext54 || !(mutex#2$wclk$8 >= mutex#15$wclk$8)) 
// 42 file <builtin-library-pthread_mutex_init> line 31 function pthread_mutex_init
(248) CONSTRAINT(choice_ws-ext54 || !(mutex#15$wclk$8 >= mutex#2$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(249) CONSTRAINT(!choice_ws-ext55 || !(mutex#5$wclk$8 >= mutex#12$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(250) CONSTRAINT(choice_ws-ext55 || !(mutex#12$wclk$8 >= mutex#5$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(251) CONSTRAINT(!choice_ws-ext56 || !(mutex#5$wclk$8 >= mutex#15$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(252) CONSTRAINT(choice_ws-ext56 || !(mutex#15$wclk$8 >= mutex#5$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(253) CONSTRAINT(!choice_ws-ext57 || !(mutex#8$wclk$8 >= mutex#12$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(254) CONSTRAINT(choice_ws-ext57 || !(mutex#12$wclk$8 >= mutex#8$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(255) CONSTRAINT(!choice_ws-ext58 || !(mutex#8$wclk$8 >= mutex#15$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(256) CONSTRAINT(choice_ws-ext58 || !(mutex#15$wclk$8 >= mutex#8$wclk$8)) 
// 77 file ./race-1_1-join_true-unreach-call.c line 12
(257) CONSTRAINT(!choice_ws-ext59 || !(pdev#1$wclk$8 >= pdev#7$wclk$8)) 
// 77 file ./race-1_1-join_true-unreach-call.c line 12
(258) CONSTRAINT(choice_ws-ext59 || !(pdev#7$wclk$8 >= pdev#1$wclk$8)) 
// 87 file ./race-1_1-join_true-unreach-call.c line 25 function module_init
(259) CONSTRAINT(!choice_ws-ext60 || !(pdev#2$wclk$8 >= pdev#7$wclk$8)) 
// 87 file ./race-1_1-join_true-unreach-call.c line 25 function module_init
(260) CONSTRAINT(choice_ws-ext60 || !(pdev#7$wclk$8 >= pdev#2$wclk$8)) 
// 95 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(261) CONSTRAINT(!choice_ws-ext61 || !(pdev#3$wclk$8 >= pdev#7$wclk$8)) 
// 95 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(262) CONSTRAINT(choice_ws-ext61 || !(pdev#7$wclk$8 >= pdev#3$wclk$8)) 
// 104 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(263) CONSTRAINT(!choice_ws-ext62 || !(pdev#5$wclk$8 >= pdev#7$wclk$8)) 
// 104 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(264) CONSTRAINT(choice_ws-ext62 || !(pdev#7$wclk$8 >= pdev#5$wclk$8)) 
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(265) CONSTRAINT(!(t1$18$spwnclk$8 >= mutex#9$rclk$8)) 
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(266) CONSTRAINT(!(t1$18$spwnclk$8 >= mutex#12$wclk$8)) 
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(267) CONSTRAINT(!(t1$18$spwnclk$8 >= pdev#7$wclk$8)) 
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(268) CONSTRAINT(!(t1$18$spwnclk$8 >= pdev#8$rclk$8)) 
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(269) CONSTRAINT(!(t1$18$spwnclk$8 >= mutex#13$rclk$8)) 
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(270) CONSTRAINT(!(t1$18$spwnclk$8 >= mutex#15$wclk$8)) 
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(271) CONSTRAINT(!(t1$18$spwnclk$8 >= __CPROVER_threads_exited#3$rclk$8)) 
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(272) CONSTRAINT(!(t1$18$spwnclk$8 >= __CPROVER_threads_exited#4$wclk$8)) 
// 61 file <built-in-additions> line 20
(273) CONSTRAINT(!(status!0@1$wclk$8 >= __CPROVER_alloca_object#1$wclk$8)) 
// 62 file <built-in-additions> line 14
(274) CONSTRAINT(!(__CPROVER_alloca_object#1$wclk$8 >= __CPROVER_dead_object#1$wclk$8)) 
// 63 file <built-in-additions> line 13
(275) CONSTRAINT(!(__CPROVER_dead_object#1$wclk$8 >= __CPROVER_deallocated#1$wclk$8)) 
// 64 file <built-in-additions> line 17
(276) CONSTRAINT(!(__CPROVER_deallocated#1$wclk$8 >= __CPROVER_malloc_is_new_array#1$wclk$8)) 
// 65 file <built-in-additions> line 15
(277) CONSTRAINT(!(__CPROVER_malloc_is_new_array#1$wclk$8 >= __CPROVER_malloc_object#1$wclk$8)) 
// 66 file <built-in-additions> line 16
(278) CONSTRAINT(!(__CPROVER_malloc_object#1$wclk$8 >= __CPROVER_malloc_size#1$wclk$8)) 
// 67 file <built-in-additions> line 18
(279) CONSTRAINT(!(__CPROVER_malloc_size#1$wclk$8 >= __CPROVER_memory_leak#1$wclk$8)) 
// 68 file <built-in-additions> line 8
(280) CONSTRAINT(!(__CPROVER_memory_leak#1$wclk$8 >= __CPROVER_next_thread_id#1$wclk$8)) 
// 70 file <built-in-additions> line 33
(281) CONSTRAINT(!(__CPROVER_next_thread_id#1$wclk$8 >= __CPROVER_pipe_count#1$wclk$8)) 
// 75 file <built-in-additions> line 7
(282) CONSTRAINT(!(__CPROVER_pipe_count#1$wclk$8 >= __CPROVER_threads_exited#1$wclk$8)) 
// 76 file ./race-1_1-join_true-unreach-call.c line 11
(283) CONSTRAINT(!(__CPROVER_threads_exited#1$wclk$8 >= mutex#1$wclk$8)) 
// 77 file ./race-1_1-join_true-unreach-call.c line 12
(284) CONSTRAINT(!(mutex#1$wclk$8 >= pdev#1$wclk$8)) 
// 78 file ./race-1_1-join_true-unreach-call.c line 10
(285) CONSTRAINT(!(pdev#1$wclk$8 >= t1#1$wclk$8)) 
// 42 file <builtin-library-pthread_mutex_init> line 31 function pthread_mutex_init
(286) CONSTRAINT(!(t1#1$wclk$8 >= mutex#2$wclk$8)) 
// 87 file ./race-1_1-join_true-unreach-call.c line 25 function module_init
(287) CONSTRAINT(!(mutex#2$wclk$8 >= pdev#2$wclk$8)) 
// 13 file <builtin-library-pthread_create> line 59 function pthread_create
(288) CONSTRAINT(!(pdev#2$wclk$8 >= __CPROVER_next_thread_id#2$wclk$8)) 
// 14 file <builtin-library-pthread_create> line 62 function pthread_create
(289) CONSTRAINT(!(__CPROVER_next_thread_id#2$wclk$8 >= t1#2$wclk$8)) 
// 19 file <builtin-library-pthread_create> line 73 function pthread_create
(290) CONSTRAINT(!(t1#2$wclk$8 >= t1$18$spwnclk$8)) 
// 95 file ./race-1_1-join_true-unreach-call.c line 38 function module_init
(291) CONSTRAINT(!(t1$18$spwnclk$8 >= pdev#3$wclk$8)) 
// 96 file ./race-1_1-join_true-unreach-call.c line 39 function module_init
(292) CONSTRAINT(!(pdev#3$wclk$8 >= pdev#4$rclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(293) CONSTRAINT(!(pdev#4$rclk$8 >= mutex#3$rclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(294) CONSTRAINT(!(mutex#3$rclk$8 >= mutex#4$rclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(295) CONSTRAINT(!(mutex#4$rclk$8 >= mutex#5$wclk$8)) 
// 101 file ./race-1_1-join_true-unreach-call.c line 45 function module_exit
(296) CONSTRAINT(!(mutex#5$wclk$8 >= status!0@1#1$wclk$8)) 
// 102 file ./race-1_1-join_true-unreach-call.c line 49 function module_exit
(297) CONSTRAINT(!(status!0@1#1$wclk$8 >= t1#3$rclk$8)) 
// 102 file ./race-1_1-join_true-unreach-call.c line 49 function module_exit
(298) CONSTRAINT(!(t1#3$rclk$8 >= t1#4$rclk$8)) 
// 27 file <builtin-library-pthread_join> line 25 function pthread_join
(299) CONSTRAINT(!(t1#4$rclk$8 >= __CPROVER_next_thread_id#3$rclk$8)) 
// 35 file <builtin-library-pthread_join> line 28 function pthread_join
(300) CONSTRAINT(!(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_threads_exited#2$rclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(301) CONSTRAINT(!(__CPROVER_threads_exited#2$rclk$8 >= mutex#6$rclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(302) CONSTRAINT(!(mutex#6$rclk$8 >= mutex#7$rclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(303) CONSTRAINT(!(mutex#7$rclk$8 >= mutex#8$wclk$8)) 
// 104 file ./race-1_1-join_true-unreach-call.c line 52 function module_exit
(304) CONSTRAINT(!(mutex#8$wclk$8 >= pdev#5$wclk$8)) 
// 105 file ./race-1_1-join_true-unreach-call.c line 53 function module_exit
(305) CONSTRAINT(!(pdev#5$wclk$8 >= pdev#6$rclk$8)) 
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(306) CONSTRAINT(mutex#9$rclk$8 == mutex#12$wclk$8) 
// 81 file ./race-1_1-join_true-unreach-call.c line 16 function thread1
(307) CONSTRAINT(!(mutex#12$wclk$8 >= pdev#7$wclk$8)) 
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(308) CONSTRAINT(!(pdev#7$wclk$8 >= pdev#8$rclk$8)) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(309) CONSTRAINT(!(pdev#8$rclk$8 >= mutex#13$rclk$8)) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(310) CONSTRAINT(mutex#13$rclk$8 == mutex#15$wclk$8) 
// 120 file <builtin-library-pthread_create> line 46 function __spawned_thread
(311) CONSTRAINT(!(mutex#15$wclk$8 >= __CPROVER_threads_exited#3$rclk$8)) 
// 120 file <builtin-library-pthread_create> line 46 function __spawned_thread
(312) CONSTRAINT(!(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8)) 
// 120 file <builtin-library-pthread_create> line 46 function __spawned_thread
(313) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || !choice_rf2 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#4$wclk$8)) 
// 35 file <builtin-library-pthread_join> line 28 function pthread_join
(314) CONSTRAINT(!\guard#2 || \guard#3 || \guard#4 || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$wclk$8 || !choice_rf0 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#4$wclk$8)) 
// 35 file <builtin-library-pthread_join> line 28 function pthread_join
(315) CONSTRAINT(!\guard#2 || \guard#3 || \guard#4 || __CPROVER_threads_exited#4$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !choice_rf1 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#1$wclk$8)) 
// 27 file <builtin-library-pthread_join> line 25 function pthread_join
(316) CONSTRAINT(!\guard#2 || !\guard#1 || !choice_rf3 || !(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8)) 
// 102 file ./race-1_1-join_true-unreach-call.c line 49 function module_exit
(317) CONSTRAINT(!\guard#2 || !\guard#1 || !choice_rf7 || !(t1#4$rclk$8 >= t1#2$wclk$8)) 
// 102 file ./race-1_1-join_true-unreach-call.c line 49 function module_exit
(318) CONSTRAINT(!\guard#2 || !\guard#1 || !choice_rf5 || !(t1#3$rclk$8 >= t1#2$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(319) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf22 || !(mutex#7$rclk$8 >= mutex#2$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(320) CONSTRAINT(\guard#1 || !choice_rf9 || !(mutex#3$rclk$8 >= mutex#2$wclk$8)) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(321) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf31 || !(mutex#13$rclk$8 >= mutex#2$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(322) CONSTRAINT(\guard#1 || !choice_rf13 || !(mutex#4$rclk$8 >= mutex#2$wclk$8)) 
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(323) CONSTRAINT(!\guard#1 && (!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0)) || !choice_rf27 || !(mutex#9$rclk$8 >= mutex#2$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(324) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf17 || !(mutex#6$rclk$8 >= mutex#2$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(325) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || \guard#1 || !choice_rf22 || !(mutex#7$rclk$8 >= mutex#5$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(326) CONSTRAINT(\guard#1 || !choice_rf9 || !(mutex#3$rclk$8 >= mutex#5$wclk$8)) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(327) CONSTRAINT(TRUE) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(328) CONSTRAINT(\guard#1 || !choice_rf13 || !(mutex#4$rclk$8 >= mutex#5$wclk$8)) 
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(329) CONSTRAINT(!\guard#1 && (!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0)) || \guard#1 || !choice_rf27 || !(mutex#9$rclk$8 >= mutex#5$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(330) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || \guard#1 || !choice_rf17 || !(mutex#6$rclk$8 >= mutex#5$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(331) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf22 || !(mutex#7$rclk$8 >= mutex#8$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(332) CONSTRAINT(\guard#1 || !\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf9 || !(mutex#3$rclk$8 >= mutex#8$wclk$8)) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(333) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf31 || !(mutex#13$rclk$8 >= mutex#8$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(334) CONSTRAINT(\guard#1 || !\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf13 || !(mutex#4$rclk$8 >= mutex#8$wclk$8)) 
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(335) CONSTRAINT(!\guard#1 && (!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0)) || !\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf27 || !(mutex#9$rclk$8 >= mutex#8$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(336) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf17 || !(mutex#6$rclk$8 >= mutex#8$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(337) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#1$wclk$8 >= mutex#12$wclk$8 || !choice_rf22 || !(mutex#7$rclk$8 >= mutex#12$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(338) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || mutex#12$wclk$8 >= mutex#1$wclk$8 || !choice_rf25 || !(mutex#7$rclk$8 >= mutex#1$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(339) CONSTRAINT(TRUE) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(340) CONSTRAINT(\guard#1 || mutex#12$wclk$8 >= mutex#1$wclk$8 || !choice_rf11 || !(mutex#3$rclk$8 >= mutex#1$wclk$8)) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(341) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#1$wclk$8 >= mutex#12$wclk$8 || !choice_rf31 || !(mutex#13$rclk$8 >= mutex#12$wclk$8)) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(342) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#12$wclk$8 >= mutex#1$wclk$8 || !choice_rf35 || !(mutex#13$rclk$8 >= mutex#1$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(343) CONSTRAINT(TRUE) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(344) CONSTRAINT(\guard#1 || mutex#12$wclk$8 >= mutex#1$wclk$8 || !choice_rf15 || !(mutex#4$rclk$8 >= mutex#1$wclk$8)) 
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(345) CONSTRAINT(!\guard#1 && (!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0)) || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#1$wclk$8 >= mutex#12$wclk$8 || !choice_rf27 || mutex#9$rclk$8 == mutex#12$wclk$8) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(346) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#1$wclk$8 >= mutex#12$wclk$8 || !choice_rf17 || !(mutex#6$rclk$8 >= mutex#12$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(347) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || mutex#12$wclk$8 >= mutex#1$wclk$8 || !choice_rf20 || !(mutex#6$rclk$8 >= mutex#1$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(348) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || mutex#15$wclk$8 >= mutex#1$wclk$8 || !choice_rf26 || !(mutex#7$rclk$8 >= mutex#1$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(349) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#1$wclk$8 >= mutex#15$wclk$8 || !choice_rf22 || !(mutex#7$rclk$8 >= mutex#15$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(350) CONSTRAINT(\guard#1 || mutex#15$wclk$8 >= mutex#1$wclk$8 || !choice_rf12 || !(mutex#3$rclk$8 >= mutex#1$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(351) CONSTRAINT(TRUE) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(352) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#1$wclk$8 >= mutex#15$wclk$8 || !choice_rf31 || mutex#13$rclk$8 == mutex#15$wclk$8) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(353) CONSTRAINT(\guard#1 || mutex#15$wclk$8 >= mutex#1$wclk$8 || !choice_rf16 || !(mutex#4$rclk$8 >= mutex#1$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(354) CONSTRAINT(TRUE) 
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(355) CONSTRAINT(!\guard#1 && (!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0)) || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#1$wclk$8 >= mutex#15$wclk$8 || !choice_rf27 || !(mutex#9$rclk$8 >= mutex#15$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(356) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || mutex#15$wclk$8 >= mutex#1$wclk$8 || !choice_rf21 || !(mutex#6$rclk$8 >= mutex#1$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(357) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#1$wclk$8 >= mutex#15$wclk$8 || !choice_rf17 || !(mutex#6$rclk$8 >= mutex#15$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(358) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || \guard#1 || !choice_rf23 || !(mutex#7$rclk$8 >= mutex#5$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(359) CONSTRAINT(\guard#1 || !choice_rf10 || !(mutex#3$rclk$8 >= mutex#5$wclk$8)) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(360) CONSTRAINT(TRUE) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(361) CONSTRAINT(\guard#1 || !choice_rf14 || !(mutex#4$rclk$8 >= mutex#5$wclk$8)) 
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(362) CONSTRAINT(!\guard#1 && (!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0)) || \guard#1 || !choice_rf28 || !(mutex#9$rclk$8 >= mutex#5$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(363) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || \guard#1 || !choice_rf18 || !(mutex#6$rclk$8 >= mutex#5$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(364) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf23 || !(mutex#7$rclk$8 >= mutex#8$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(365) CONSTRAINT(\guard#1 || !\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf10 || !(mutex#3$rclk$8 >= mutex#8$wclk$8)) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(366) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf32 || !(mutex#13$rclk$8 >= mutex#8$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(367) CONSTRAINT(\guard#1 || !\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf14 || !(mutex#4$rclk$8 >= mutex#8$wclk$8)) 
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(368) CONSTRAINT(!\guard#1 && (!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0)) || !\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf28 || !(mutex#9$rclk$8 >= mutex#8$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(369) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf18 || !(mutex#6$rclk$8 >= mutex#8$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(370) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#2$wclk$8 >= mutex#12$wclk$8 || !choice_rf23 || !(mutex#7$rclk$8 >= mutex#12$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(371) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || mutex#12$wclk$8 >= mutex#2$wclk$8 || !choice_rf25 || !(mutex#7$rclk$8 >= mutex#2$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(372) CONSTRAINT(TRUE) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(373) CONSTRAINT(\guard#1 || mutex#12$wclk$8 >= mutex#2$wclk$8 || !choice_rf11 || !(mutex#3$rclk$8 >= mutex#2$wclk$8)) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(374) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#2$wclk$8 >= mutex#12$wclk$8 || !choice_rf32 || !(mutex#13$rclk$8 >= mutex#12$wclk$8)) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(375) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#12$wclk$8 >= mutex#2$wclk$8 || !choice_rf35 || !(mutex#13$rclk$8 >= mutex#2$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(376) CONSTRAINT(TRUE) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(377) CONSTRAINT(\guard#1 || mutex#12$wclk$8 >= mutex#2$wclk$8 || !choice_rf15 || !(mutex#4$rclk$8 >= mutex#2$wclk$8)) 
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(378) CONSTRAINT(!\guard#1 && (!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0)) || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#2$wclk$8 >= mutex#12$wclk$8 || !choice_rf28 || mutex#9$rclk$8 == mutex#12$wclk$8) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(379) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#2$wclk$8 >= mutex#12$wclk$8 || !choice_rf18 || !(mutex#6$rclk$8 >= mutex#12$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(380) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || mutex#12$wclk$8 >= mutex#2$wclk$8 || !choice_rf20 || !(mutex#6$rclk$8 >= mutex#2$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(381) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#2$wclk$8 >= mutex#15$wclk$8 || !choice_rf23 || !(mutex#7$rclk$8 >= mutex#15$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(382) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || mutex#15$wclk$8 >= mutex#2$wclk$8 || !choice_rf26 || !(mutex#7$rclk$8 >= mutex#2$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(383) CONSTRAINT(TRUE) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(384) CONSTRAINT(\guard#1 || mutex#15$wclk$8 >= mutex#2$wclk$8 || !choice_rf12 || !(mutex#3$rclk$8 >= mutex#2$wclk$8)) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(385) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#2$wclk$8 >= mutex#15$wclk$8 || !choice_rf32 || mutex#13$rclk$8 == mutex#15$wclk$8) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(386) CONSTRAINT(TRUE) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(387) CONSTRAINT(\guard#1 || mutex#15$wclk$8 >= mutex#2$wclk$8 || !choice_rf16 || !(mutex#4$rclk$8 >= mutex#2$wclk$8)) 
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(388) CONSTRAINT(!\guard#1 && (!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0)) || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#2$wclk$8 >= mutex#15$wclk$8 || !choice_rf28 || !(mutex#9$rclk$8 >= mutex#15$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(389) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#2$wclk$8 >= mutex#15$wclk$8 || !choice_rf18 || !(mutex#6$rclk$8 >= mutex#15$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(390) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || mutex#15$wclk$8 >= mutex#2$wclk$8 || !choice_rf21 || !(mutex#6$rclk$8 >= mutex#2$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(391) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf24 || !(mutex#7$rclk$8 >= mutex#8$wclk$8)) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(392) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf33 || !(mutex#13$rclk$8 >= mutex#8$wclk$8)) 
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(393) CONSTRAINT(!\guard#1 && (!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0)) || !\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf29 || !(mutex#9$rclk$8 >= mutex#8$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(394) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf19 || !(mutex#6$rclk$8 >= mutex#8$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(395) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#5$wclk$8 >= mutex#12$wclk$8 || !choice_rf24 || !(mutex#7$rclk$8 >= mutex#12$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(396) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || \guard#1 || mutex#12$wclk$8 >= mutex#5$wclk$8 || !choice_rf25 || !(mutex#7$rclk$8 >= mutex#5$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(397) CONSTRAINT(\guard#1 || mutex#12$wclk$8 >= mutex#5$wclk$8 || !choice_rf11 || !(mutex#3$rclk$8 >= mutex#5$wclk$8)) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(398) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#5$wclk$8 >= mutex#12$wclk$8 || !choice_rf33 || !(mutex#13$rclk$8 >= mutex#12$wclk$8)) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(399) CONSTRAINT(TRUE) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(400) CONSTRAINT(\guard#1 || mutex#12$wclk$8 >= mutex#5$wclk$8 || !choice_rf15 || !(mutex#4$rclk$8 >= mutex#5$wclk$8)) 
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(401) CONSTRAINT(!\guard#1 && (!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0)) || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#5$wclk$8 >= mutex#12$wclk$8 || !choice_rf29 || mutex#9$rclk$8 == mutex#12$wclk$8) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(402) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#5$wclk$8 >= mutex#12$wclk$8 || !choice_rf19 || !(mutex#6$rclk$8 >= mutex#12$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(403) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || \guard#1 || mutex#12$wclk$8 >= mutex#5$wclk$8 || !choice_rf20 || !(mutex#6$rclk$8 >= mutex#5$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(404) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#5$wclk$8 >= mutex#15$wclk$8 || !choice_rf24 || !(mutex#7$rclk$8 >= mutex#15$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(405) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || \guard#1 || mutex#15$wclk$8 >= mutex#5$wclk$8 || !choice_rf26 || !(mutex#7$rclk$8 >= mutex#5$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(406) CONSTRAINT(\guard#1 || mutex#15$wclk$8 >= mutex#5$wclk$8 || !choice_rf12 || !(mutex#3$rclk$8 >= mutex#5$wclk$8)) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(407) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#5$wclk$8 >= mutex#15$wclk$8 || !choice_rf33 || mutex#13$rclk$8 == mutex#15$wclk$8) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(408) CONSTRAINT(\guard#1 || mutex#15$wclk$8 >= mutex#5$wclk$8 || !choice_rf16 || !(mutex#4$rclk$8 >= mutex#5$wclk$8)) 
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(409) CONSTRAINT(!\guard#1 && (!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0)) || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#5$wclk$8 >= mutex#15$wclk$8 || !choice_rf29 || !(mutex#9$rclk$8 >= mutex#15$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(410) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#5$wclk$8 >= mutex#15$wclk$8 || !choice_rf19 || !(mutex#6$rclk$8 >= mutex#15$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(411) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || \guard#1 || mutex#15$wclk$8 >= mutex#5$wclk$8 || !choice_rf21 || !(mutex#6$rclk$8 >= mutex#5$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(412) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || mutex#12$wclk$8 >= mutex#8$wclk$8 || !choice_rf25 || !(mutex#7$rclk$8 >= mutex#8$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(413) CONSTRAINT(\guard#1 || !\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || mutex#12$wclk$8 >= mutex#8$wclk$8 || !choice_rf11 || !(mutex#3$rclk$8 >= mutex#8$wclk$8)) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(414) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#8$wclk$8 >= mutex#12$wclk$8 || !choice_rf34 || !(mutex#13$rclk$8 >= mutex#12$wclk$8)) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(415) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || mutex#12$wclk$8 >= mutex#8$wclk$8 || !choice_rf35 || !(mutex#13$rclk$8 >= mutex#8$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(416) CONSTRAINT(\guard#1 || !\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || mutex#12$wclk$8 >= mutex#8$wclk$8 || !choice_rf15 || !(mutex#4$rclk$8 >= mutex#8$wclk$8)) 
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(417) CONSTRAINT(!\guard#1 && (!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0)) || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#8$wclk$8 >= mutex#12$wclk$8 || !choice_rf30 || mutex#9$rclk$8 == mutex#12$wclk$8) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(418) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || mutex#12$wclk$8 >= mutex#8$wclk$8 || !choice_rf20 || !(mutex#6$rclk$8 >= mutex#8$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(419) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || mutex#15$wclk$8 >= mutex#8$wclk$8 || !choice_rf26 || !(mutex#7$rclk$8 >= mutex#8$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(420) CONSTRAINT(\guard#1 || !\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || mutex#15$wclk$8 >= mutex#8$wclk$8 || !choice_rf12 || !(mutex#3$rclk$8 >= mutex#8$wclk$8)) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(421) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#8$wclk$8 >= mutex#15$wclk$8 || !choice_rf34 || mutex#13$rclk$8 == mutex#15$wclk$8) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(422) CONSTRAINT(\guard#1 || !\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || mutex#15$wclk$8 >= mutex#8$wclk$8 || !choice_rf16 || !(mutex#4$rclk$8 >= mutex#8$wclk$8)) 
// 50 file <builtin-library-pthread_mutex_lock> line 40 function pthread_mutex_lock
(423) CONSTRAINT(!\guard#1 && (!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0)) || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || mutex#8$wclk$8 >= mutex#15$wclk$8 || !choice_rf30 || !(mutex#9$rclk$8 >= mutex#15$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(424) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || mutex#15$wclk$8 >= mutex#8$wclk$8 || !choice_rf21 || !(mutex#6$rclk$8 >= mutex#8$wclk$8)) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(425) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf25 || !(mutex#7$rclk$8 >= mutex#15$wclk$8)) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(426) CONSTRAINT(TRUE) 
// 58 file <builtin-library-pthread_mutex_unlock> line 42 function pthread_mutex_unlock
(427) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf35 || mutex#13$rclk$8 == mutex#15$wclk$8) 
// 39 file <builtin-library-pthread_mutex_destroy> line 37 function pthread_mutex_destroy
(428) CONSTRAINT(TRUE) 
// 38 file <builtin-library-pthread_mutex_destroy> line 35 function pthread_mutex_destroy
(429) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf20 || !(mutex#6$rclk$8 >= mutex#15$wclk$8)) 
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(430) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !choice_rf45 || !(pdev#8$rclk$8 >= pdev#2$wclk$8)) 
// 105 file ./race-1_1-join_true-unreach-call.c line 53 function module_exit
(431) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf40 || !(pdev#6$rclk$8 >= pdev#2$wclk$8)) 
// 96 file ./race-1_1-join_true-unreach-call.c line 39 function module_init
(432) CONSTRAINT(\guard#1 || !choice_rf36 || !(pdev#4$rclk$8 >= pdev#2$wclk$8)) 
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(433) CONSTRAINT(TRUE) 
// 105 file ./race-1_1-join_true-unreach-call.c line 53 function module_exit
(434) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || \guard#1 || !choice_rf40 || !(pdev#6$rclk$8 >= pdev#3$wclk$8)) 
// 96 file ./race-1_1-join_true-unreach-call.c line 39 function module_init
(435) CONSTRAINT(\guard#1 || !choice_rf36 || !(pdev#4$rclk$8 >= pdev#3$wclk$8)) 
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(436) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf45 || !(pdev#8$rclk$8 >= pdev#5$wclk$8)) 
// 105 file ./race-1_1-join_true-unreach-call.c line 53 function module_exit
(437) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf40 || !(pdev#6$rclk$8 >= pdev#5$wclk$8)) 
// 96 file ./race-1_1-join_true-unreach-call.c line 39 function module_init
(438) CONSTRAINT(\guard#1 || !\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf36 || !(pdev#4$rclk$8 >= pdev#5$wclk$8)) 
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(439) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || pdev#7$wclk$8 >= pdev#1$wclk$8 || !choice_rf49 || !(pdev#8$rclk$8 >= pdev#1$wclk$8)) 
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(440) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || pdev#1$wclk$8 >= pdev#7$wclk$8 || !choice_rf45 || !(pdev#8$rclk$8 >= pdev#7$wclk$8)) 
// 105 file ./race-1_1-join_true-unreach-call.c line 53 function module_exit
(441) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || pdev#7$wclk$8 >= pdev#1$wclk$8 || !choice_rf44 || !(pdev#6$rclk$8 >= pdev#1$wclk$8)) 
// 105 file ./race-1_1-join_true-unreach-call.c line 53 function module_exit
(442) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || pdev#1$wclk$8 >= pdev#7$wclk$8 || !choice_rf40 || !(pdev#6$rclk$8 >= pdev#7$wclk$8)) 
// 96 file ./race-1_1-join_true-unreach-call.c line 39 function module_init
(443) CONSTRAINT(\guard#1 || pdev#7$wclk$8 >= pdev#1$wclk$8 || !choice_rf39 || !(pdev#4$rclk$8 >= pdev#1$wclk$8)) 
// 96 file ./race-1_1-join_true-unreach-call.c line 39 function module_init
(444) CONSTRAINT(TRUE) 
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(445) CONSTRAINT(TRUE) 
// 105 file ./race-1_1-join_true-unreach-call.c line 53 function module_exit
(446) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || \guard#1 || !choice_rf41 || !(pdev#6$rclk$8 >= pdev#3$wclk$8)) 
// 96 file ./race-1_1-join_true-unreach-call.c line 39 function module_init
(447) CONSTRAINT(\guard#1 || !choice_rf37 || !(pdev#4$rclk$8 >= pdev#3$wclk$8)) 
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(448) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf46 || !(pdev#8$rclk$8 >= pdev#5$wclk$8)) 
// 105 file ./race-1_1-join_true-unreach-call.c line 53 function module_exit
(449) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf41 || !(pdev#6$rclk$8 >= pdev#5$wclk$8)) 
// 96 file ./race-1_1-join_true-unreach-call.c line 39 function module_init
(450) CONSTRAINT(\guard#1 || !\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf37 || !(pdev#4$rclk$8 >= pdev#5$wclk$8)) 
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(451) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || pdev#2$wclk$8 >= pdev#7$wclk$8 || !choice_rf46 || !(pdev#8$rclk$8 >= pdev#7$wclk$8)) 
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(452) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || pdev#7$wclk$8 >= pdev#2$wclk$8 || !choice_rf49 || !(pdev#8$rclk$8 >= pdev#2$wclk$8)) 
// 105 file ./race-1_1-join_true-unreach-call.c line 53 function module_exit
(453) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || pdev#2$wclk$8 >= pdev#7$wclk$8 || !choice_rf41 || !(pdev#6$rclk$8 >= pdev#7$wclk$8)) 
// 105 file ./race-1_1-join_true-unreach-call.c line 53 function module_exit
(454) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || pdev#7$wclk$8 >= pdev#2$wclk$8 || !choice_rf44 || !(pdev#6$rclk$8 >= pdev#2$wclk$8)) 
// 96 file ./race-1_1-join_true-unreach-call.c line 39 function module_init
(455) CONSTRAINT(TRUE) 
// 96 file ./race-1_1-join_true-unreach-call.c line 39 function module_init
(456) CONSTRAINT(\guard#1 || pdev#7$wclk$8 >= pdev#2$wclk$8 || !choice_rf39 || !(pdev#4$rclk$8 >= pdev#2$wclk$8)) 
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(457) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf47 || !(pdev#8$rclk$8 >= pdev#5$wclk$8)) 
// 105 file ./race-1_1-join_true-unreach-call.c line 53 function module_exit
(458) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf42 || !(pdev#6$rclk$8 >= pdev#5$wclk$8)) 
// 96 file ./race-1_1-join_true-unreach-call.c line 39 function module_init
(459) CONSTRAINT(\guard#1 || !\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf38 || !(pdev#4$rclk$8 >= pdev#5$wclk$8)) 
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(460) CONSTRAINT(TRUE) 
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(461) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || pdev#3$wclk$8 >= pdev#7$wclk$8 || !choice_rf47 || !(pdev#8$rclk$8 >= pdev#7$wclk$8)) 
// 105 file ./race-1_1-join_true-unreach-call.c line 53 function module_exit
(462) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || \guard#1 || pdev#7$wclk$8 >= pdev#3$wclk$8 || !choice_rf44 || !(pdev#6$rclk$8 >= pdev#3$wclk$8)) 
// 105 file ./race-1_1-join_true-unreach-call.c line 53 function module_exit
(463) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || pdev#3$wclk$8 >= pdev#7$wclk$8 || !choice_rf42 || !(pdev#6$rclk$8 >= pdev#7$wclk$8)) 
// 96 file ./race-1_1-join_true-unreach-call.c line 39 function module_init
(464) CONSTRAINT(\guard#1 || pdev#7$wclk$8 >= pdev#3$wclk$8 || !choice_rf39 || !(pdev#4$rclk$8 >= pdev#3$wclk$8)) 
// 96 file ./race-1_1-join_true-unreach-call.c line 39 function module_init
(465) CONSTRAINT(TRUE) 
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(466) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || !\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || pdev#7$wclk$8 >= pdev#5$wclk$8 || !choice_rf49 || !(pdev#8$rclk$8 >= pdev#5$wclk$8)) 
// 82 file ./race-1_1-join_true-unreach-call.c line 17 function thread1
(467) CONSTRAINT(!\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || pdev#5$wclk$8 >= pdev#7$wclk$8 || !choice_rf48 || !(pdev#8$rclk$8 >= pdev#7$wclk$8)) 
// 105 file ./race-1_1-join_true-unreach-call.c line 53 function module_exit
(468) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || pdev#7$wclk$8 >= pdev#5$wclk$8 || !choice_rf44 || !(pdev#6$rclk$8 >= pdev#5$wclk$8)) 
// 105 file ./race-1_1-join_true-unreach-call.c line 53 function module_exit
(469) CONSTRAINT(!\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || !\guard#1 || !(byte_extract_little_endian(mutex#10, 0l, char) == 0) || pdev#5$wclk$8 >= pdev#7$wclk$8 || !choice_rf43 || !(pdev#6$rclk$8 >= pdev#7$wclk$8)) 
// 96 file ./race-1_1-join_true-unreach-call.c line 39 function module_init
(470) CONSTRAINT(\guard#1 || !\guard#2 || (\guard#3 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#4) && !\guard#4) && !\guard#3 || pdev#7$wclk$8 >= pdev#5$wclk$8 || !choice_rf39 || !(pdev#4$rclk$8 >= pdev#5$wclk$8)) 
