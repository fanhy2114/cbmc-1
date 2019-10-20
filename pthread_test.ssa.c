CBMC version 5.10 (cbmc-5.10) 64-bit x86_64 linux
Parsing pthread_test.c
Converting
Type-checking pthread_test
Generating GOTO Program
Adding CPROVER library (x86_64)
Removal of function pointers and virtual functions
file <builtin-library-pthread_create> line 39 function pthread_create: replacing function pointer by 2 possible targets
Generic Property Instrumentation
Running with 8 object bits, 56 offset bits (default)
Starting Bounded Model Checking
aborting path on assume(false) at file pthread_test.c line 7 function __VERIFIER_assert thread 0
Adding SC constraints
Shared __CPROVER_threads_exited: 4R/3W
Shared __CPROVER_next_thread_id: 3R/3W
Shared a: 5R/3W
Shared b: 4R/3W
Shared start::1::t1!0@1: 2R/2W
Shared start::1::t2!0@1: 2R/2W
size of program expression: 458 steps
no slicing due to threads
Generated 1 VCC(s), 1 remaining after simplification

Program constraints:
// 92
// 92
// 50 file <built-in-additions> line 11
(1) SHARED_WRITE(__CPROVER_dead_object#1)
// 50 file <built-in-additions> line 11
(2) __CPROVER_dead_object#1 == NULL
// 51 file <built-in-additions> line 10
(3) SHARED_WRITE(__CPROVER_deallocated#1)
// 51 file <built-in-additions> line 10
(4) __CPROVER_deallocated#1 == NULL
// 52 file <built-in-additions> line 14
(5) SHARED_WRITE(__CPROVER_malloc_is_new_array#1)
// 52 file <built-in-additions> line 14
(6) __CPROVER_malloc_is_new_array#1 == FALSE
// 53 file <built-in-additions> line 12
(7) SHARED_WRITE(__CPROVER_malloc_object#1)
// 53 file <built-in-additions> line 12
(8) __CPROVER_malloc_object#1 == NULL
// 54 file <built-in-additions> line 13
(9) SHARED_WRITE(__CPROVER_malloc_size#1)
// 54 file <built-in-additions> line 13
(10) __CPROVER_malloc_size#1 == 0ul
// 55 file <built-in-additions> line 15
(11) SHARED_WRITE(__CPROVER_memory_leak#1)
// 55 file <built-in-additions> line 15
(12) __CPROVER_memory_leak#1 == NULL
// 56 file <built-in-additions> line 8
(13) SHARED_WRITE(__CPROVER_next_thread_id#1)
// 56 file <built-in-additions> line 8
(14) __CPROVER_next_thread_id#1 == 0ul
// 57 file <built-in-additions> line 29
(15) SHARED_WRITE(__CPROVER_pipe_count#1)
// 57 file <built-in-additions> line 29
(16) __CPROVER_pipe_count#1 == 0u
// 58 file <built-in-additions> line 20
(17) __CPROVER_rounding_mode!0#1 == 0
// 59 file <built-in-additions> line 6
(18) __CPROVER_thread_id!0#1 == 0ul
// 60 file <built-in-additions> line 7
(19) SHARED_WRITE(__CPROVER_threads_exited#1)
// 60 file <built-in-additions> line 7
(20) __CPROVER_threads_exited#1 == ARRAY_OF(FALSE)
// 61 file pthread_test.c line 13
(21) SHARED_WRITE(a#1)
// 61 file pthread_test.c line 13
(22) a#1 == 0u
// 62 file pthread_test.c line 13
(23) SHARED_WRITE(b#1)
// 62 file pthread_test.c line 13
(24) b#1 == 0u
// 63
// 93 file pthread_test.c line 46
// 93 file pthread_test.c line 46
// 0 file pthread_test.c line 51 function main
// 1 file pthread_test.c line 51 function main
(25) a_in!0@1#2 == 8u
// 2 file pthread_test.c line 52 function main
// 3 file pthread_test.c line 52 function main
(26) b_in!0@1#2 == 6u
// 6 file pthread_test.c line 56 function main
// 7 file pthread_test.c line 56 function main
// 7 file pthread_test.c line 56 function main
// 7 file pthread_test.c line 56 function main
(27) a_in!0@1#1 == 8u
// 7 file pthread_test.c line 56 function main
(28) b_in!0@1#1 == 6u
// 78 file pthread_test.c line 32 function start
(29) SHARED_WRITE(a#2)
// 78 file pthread_test.c line 32 function start
(30) a#2 == 8u
// 79 file pthread_test.c line 33 function start
(31) SHARED_WRITE(b#2)
// 79 file pthread_test.c line 33 function start
(32) b#2 == 6u
// 80 file pthread_test.c line 34 function start
// 80 file pthread_test.c line 34 function start
(33) SHARED_WRITE(t1!0@1#1)
// 81 file pthread_test.c line 34 function start
// 81 file pthread_test.c line 34 function start
(34) SHARED_WRITE(t2!0@1#1)
// 82 file pthread_test.c line 35 function start
// 82 file pthread_test.c line 35 function start
// 82 file pthread_test.c line 35 function start
(35) thread!0@1#1 == &t1!0@1
// 82 file pthread_test.c line 35 function start
(36) attr!0@1#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
// 82 file pthread_test.c line 35 function start
(37) start_routine!0@1#1 == dec_a
// 82 file pthread_test.c line 35 function start
(38) arg!0@1#1 == NULL
// 16 file <builtin-library-pthread_create> line 18 function pthread_create
// 17 file <builtin-library-pthread_create> line 19 function pthread_create
// 18 file <builtin-library-pthread_create> line 20 function pthread_create
(39) __CPROVER_next_thread_id#2 == 1ul
// 19 file <builtin-library-pthread_create> line 20 function pthread_create
(40) this_thread_id!0@1#2 == 1ul
// 20 file <builtin-library-pthread_create> line 21 function pthread_create
(41) SHARED_WRITE(__CPROVER_next_thread_id#2)
// 20 file <builtin-library-pthread_create> line 21 function pthread_create
// 21 file <builtin-library-pthread_create> line 24 function pthread_create
(42) SHARED_WRITE(t1!0@1#2)
// 21 file <builtin-library-pthread_create> line 24 function pthread_create
(43) t1!0@1#2 == 1ul
// 22 file <builtin-library-pthread_create> line 30 function pthread_create
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(44) thread!1@0#1 == &t1!0@1
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(45) attr!1@0#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(46) start_routine!1@0#1 == dec_a
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(47) arg!1@0#1 == NULL
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(48) pthread_join#return_value!1#1 == 0
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(49) dec_b#return_value!1#1 == NULL
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(50) __CPROVER_thread_id!1#1 == 0ul
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(51) main#return_value!1#1 == 0
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(52) __CPROVER_rounding_mode!1#1 == 0
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(53) dec_a#return_value!1#1 == NULL
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(54) pthread_create#return_value!1#1 == 0
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(55) start#return_value!1#1 == 0u
// 25 file <builtin-library-pthread_create> line 32 function pthread_create
// 36 file <builtin-library-pthread_create> line 44 function pthread_create
(56) pthread_create#return_value!0#1 == 0
// 38 file <builtin-library-pthread_create> line 45 function pthread_create
// 83 file pthread_test.c line 36 function start
// 83 file pthread_test.c line 36 function start
// 83 file pthread_test.c line 36 function start
(57) thread!0@2#1 == &t2!0@1
// 83 file pthread_test.c line 36 function start
(58) attr!0@2#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
// 83 file pthread_test.c line 36 function start
(59) start_routine!0@2#1 == dec_b
// 83 file pthread_test.c line 36 function start
(60) arg!0@2#1 == NULL
// 16 file <builtin-library-pthread_create> line 18 function pthread_create
// 17 file <builtin-library-pthread_create> line 19 function pthread_create
// 18 file <builtin-library-pthread_create> line 20 function pthread_create
(61) __CPROVER_next_thread_id#4 == __CPROVER_next_thread_id#3
// 18 file <builtin-library-pthread_create> line 20 function pthread_create
(62) __CPROVER_next_thread_id#5 == 1ul + __CPROVER_next_thread_id#4
// 19 file <builtin-library-pthread_create> line 20 function pthread_create
(63) this_thread_id!0@2#2 == __CPROVER_next_thread_id#5
// 20 file <builtin-library-pthread_create> line 21 function pthread_create
(64) SHARED_READ(__CPROVER_next_thread_id#3)
// 20 file <builtin-library-pthread_create> line 21 function pthread_create
(65) SHARED_WRITE(__CPROVER_next_thread_id#5)
// 20 file <builtin-library-pthread_create> line 21 function pthread_create
// 21 file <builtin-library-pthread_create> line 24 function pthread_create
(66) SHARED_WRITE(t2!0@1#2)
// 21 file <builtin-library-pthread_create> line 24 function pthread_create
(67) t2!0@1#2 == this_thread_id!0@2#2
// 22 file <builtin-library-pthread_create> line 30 function pthread_create
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(68) thread!2@0#1 == &t2!0@1
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(69) attr!2@0#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(70) start_routine!2@0#1 == dec_b
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(71) arg!2@0#1 == NULL
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(72) pthread_join#return_value!2#1 == 0
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(73) dec_b#return_value!2#1 == NULL
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(74) __CPROVER_thread_id!2#1 == 0ul
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(75) main#return_value!2#1 == 0
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(76) __CPROVER_rounding_mode!2#1 == 0
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(77) dec_a#return_value!2#1 == NULL
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(78) pthread_create#return_value!2#1 == 0
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(79) start#return_value!2#1 == 0u
// 25 file <builtin-library-pthread_create> line 32 function pthread_create
// 36 file <builtin-library-pthread_create> line 44 function pthread_create
(80) pthread_create#return_value!0#2 == 0
// 38 file <builtin-library-pthread_create> line 45 function pthread_create
// 84 file pthread_test.c line 37 function start
// 84 file pthread_test.c line 37 function start
// 84 file pthread_test.c line 37 function start
(81) SHARED_READ(t1!0@1#3)
// 84 file pthread_test.c line 37 function start
(82) SHARED_READ(t1!0@1#4)
// 84 file pthread_test.c line 37 function start
(83) thread!0@1#1 == t1!0@1#4
// 84 file pthread_test.c line 37 function start
(84) value_ptr!0@1#1 == ((const void **)NULL)
// 39 file <builtin-library-pthread_join> line 25 function pthread_join
(85) SHARED_READ(__CPROVER_next_thread_id#6)
// 39 file <builtin-library-pthread_join> line 25 function pthread_join
// 39 file <builtin-library-pthread_join> line 25 function pthread_join
(86) \guard#1 == !(__CPROVER_next_thread_id#6 >= thread!0@1#1)
// 40 file <builtin-library-pthread_join> line 25 function pthread_join
(87) pthread_join#return_value!0#1 == 3
     guard: \guard#1
// 41 file <builtin-library-pthread_join> line 25 function pthread_join
// 42 file <builtin-library-pthread_join> line 26 function pthread_join
(88) pthread_join#return_value!0#2 == pthread_join#return_value!0#0
// 42 file <builtin-library-pthread_join> line 26 function pthread_join
// 42 file <builtin-library-pthread_join> line 26 function pthread_join
(89) \guard#2 == (thread!0@1#1 == 0ul)
// 43 file <builtin-library-pthread_join> line 26 function pthread_join
(90) pthread_join#return_value!0#3 == 35
     guard: !\guard#1 && \guard#2
// 44 file <builtin-library-pthread_join> line 26 function pthread_join
// 45 file <builtin-library-pthread_join> line 27 function pthread_join
(91) pthread_join#return_value!0#4 == pthread_join#return_value!0#2
// 45 file <builtin-library-pthread_join> line 27 function pthread_join
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(92) SHARED_READ(__CPROVER_threads_exited#2)
     guard: !\guard#1 && !\guard#2
// 48 file <builtin-library-pthread_join> line 30 function pthread_join
(93) pthread_join#return_value!0#5 == 0
     guard: !\guard#1 && !\guard#2 && __CPROVER_threads_exited#2[(signed long int)thread!0@1#1]
// 49 file <builtin-library-pthread_join> line 31 function pthread_join
(94) pthread_join#return_value!0#6 == (\guard#2 ? 35 : 0)
// 49 file <builtin-library-pthread_join> line 31 function pthread_join
(95) pthread_join#return_value!0#7 == (\guard#1 ? 3 : pthread_join#return_value!0#6)
// 49 file <builtin-library-pthread_join> line 31 function pthread_join
// 85 file pthread_test.c line 38 function start
// 85 file pthread_test.c line 38 function start
// 85 file pthread_test.c line 38 function start
(96) SHARED_READ(t2!0@1#3)
     guard: !\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1
// 85 file pthread_test.c line 38 function start
(97) SHARED_READ(t2!0@1#4)
     guard: !\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1
// 85 file pthread_test.c line 38 function start
(98) thread!0@2#1 == t2!0@1#4
     guard: !\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1
// 85 file pthread_test.c line 38 function start
(99) value_ptr!0@2#1 == ((const void **)NULL)
     guard: !\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1
// 39 file <builtin-library-pthread_join> line 25 function pthread_join
(100) SHARED_READ(__CPROVER_next_thread_id#7)
      guard: !\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1
// 39 file <builtin-library-pthread_join> line 25 function pthread_join
// 39 file <builtin-library-pthread_join> line 25 function pthread_join
(101) \guard#3 == !(__CPROVER_next_thread_id#7 >= thread!0@2#1)
// 40 file <builtin-library-pthread_join> line 25 function pthread_join
(102) pthread_join#return_value!0#8 == 3
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && \guard#3
// 41 file <builtin-library-pthread_join> line 25 function pthread_join
// 42 file <builtin-library-pthread_join> line 26 function pthread_join
(103) pthread_join#return_value!0#9 == pthread_join#return_value!0#7
// 42 file <builtin-library-pthread_join> line 26 function pthread_join
// 42 file <builtin-library-pthread_join> line 26 function pthread_join
(104) \guard#4 == (thread!0@2#1 == 0ul)
// 43 file <builtin-library-pthread_join> line 26 function pthread_join
(105) pthread_join#return_value!0#10 == 35
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && !\guard#3 && \guard#4
// 44 file <builtin-library-pthread_join> line 26 function pthread_join
// 45 file <builtin-library-pthread_join> line 27 function pthread_join
(106) pthread_join#return_value!0#11 == pthread_join#return_value!0#9
// 45 file <builtin-library-pthread_join> line 27 function pthread_join
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(107) SHARED_READ(__CPROVER_threads_exited#3)
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && !\guard#3 && !\guard#4
// 48 file <builtin-library-pthread_join> line 30 function pthread_join
(108) pthread_join#return_value!0#12 == 0
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && !\guard#3 && !\guard#4 && __CPROVER_threads_exited#3[(signed long int)thread!0@2#1]
// 49 file <builtin-library-pthread_join> line 31 function pthread_join
(109) pthread_join#return_value!0#13 == (\guard#4 ? 35 : 0)
// 49 file <builtin-library-pthread_join> line 31 function pthread_join
(110) pthread_join#return_value!0#14 == (\guard#3 ? 3 : pthread_join#return_value!0#13)
// 49 file <builtin-library-pthread_join> line 31 function pthread_join
// 86 file pthread_test.c line 39 function start
(111) SHARED_READ(a#3)
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3)
// 86 file pthread_test.c line 39 function start
(112) start#return_value!0#1 == a#3
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3)
// 89 file pthread_test.c line 40 function start
// 8 file pthread_test.c line 56 function main
(113) return_value_start!0@1#2 == start#return_value!0#1
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3)
// 10 file pthread_test.c line 56 function main
// 10 file pthread_test.c line 56 function main
// 10 file pthread_test.c line 56 function main
(114) a_in!0@1#1 == 8u
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3)
// 10 file pthread_test.c line 56 function main
(115) b_in!0@1#1 == 6u
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3)
// 10 file pthread_test.c line 56 function main
(116) gcd!0@1#1 == return_value_start!0@1#2
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3)
// 90 file pthread_test.c line 43 function check_gcd
// 90 file pthread_test.c line 43 function check_gcd
// 90 file pthread_test.c line 43 function check_gcd
(117) cond!0@1#1 == (signed int)(!(gcd!0@1#1 == 6u) && !(gcd!0@1#1 == 8u))
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3)
// 64 file pthread_test.c line 6 function __VERIFIER_assert
// 64 file pthread_test.c line 6 function __VERIFIER_assert
(118) \guard#5 == (cond!0@1#1 == 0)
// 65 file pthread_test.c line 7 function __VERIFIER_assert
(119) ASSERT(!((!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3) && \guard#5))
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3) && \guard#5
// 67 file pthread_test.c line 10 function __VERIFIER_assert
// 91 file pthread_test.c line 44 function check_gcd
// 11 file pthread_test.c line 57 function main
(120) main#return_value!0#1 == 0
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3) && !\guard#5
// 15 file pthread_test.c line 58 function main
// 94 file pthread_test.c line 46
(121) return`!0#1 == 0
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3) && !\guard#5
// 96 file pthread_test.c line 46
// 97
// 26 file <builtin-library-pthread_create> line 33 function pthread_create
(122) __CPROVER_thread_id!1#2 == this_thread_id!1@0#0
// 28 file <builtin-library-pthread_create> line 39 function pthread_create
// 29 file <builtin-library-pthread_create> line 39 function pthread_create
// 32 file <builtin-library-pthread_create> line 39 function pthread_create
// 32 file <builtin-library-pthread_create> line 39 function pthread_create
// 32 file <builtin-library-pthread_create> line 39 function pthread_create
(123) arg!1@1#1 == NULL
// 69 file pthread_test.c line 17 function dec_a
(124) SHARED_READ(a#4)
// 69 file pthread_test.c line 17 function dec_a
(125) SHARED_READ(b#3)
// 69 file pthread_test.c line 17 function dec_a
// 69 file pthread_test.c line 17 function dec_a
(126) \guard#6 == !(b#3 >= a#4)
// 70 file pthread_test.c line 18 function dec_a
(127) SHARED_READ(a#5)
      guard: \guard#6
// 70 file pthread_test.c line 18 function dec_a
(128) SHARED_READ(b#4)
      guard: \guard#6
// 70 file pthread_test.c line 18 function dec_a
(129) SHARED_WRITE(a#6)
      guard: \guard#6
// 70 file pthread_test.c line 18 function dec_a
(130) a#6 == a#5 + -b#4
      guard: \guard#6
// 71 file pthread_test.c line 19 function dec_a
(131) dec_a#return_value!1#2 == NULL
// 72 file pthread_test.c line 20 function dec_a
// 33 file <builtin-library-pthread_create> line 40 function pthread_create
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(132) SHARED_READ(__CPROVER_threads_exited#4)
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(133) SHARED_WRITE(__CPROVER_threads_exited#5)
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(134) __CPROVER_threads_exited#5 == __CPROVER_threads_exited#4 WITH [(signed long int)this_thread_id!1@0#0:=TRUE]
// 38 file <builtin-library-pthread_create> line 45 function pthread_create
// 26 file <builtin-library-pthread_create> line 33 function pthread_create
(135) __CPROVER_thread_id!2#2 == this_thread_id!2@0#0
// 28 file <builtin-library-pthread_create> line 39 function pthread_create
// 30 file <builtin-library-pthread_create> line 39 function pthread_create
// 30 file <builtin-library-pthread_create> line 39 function pthread_create
// 30 file <builtin-library-pthread_create> line 39 function pthread_create
(136) arg!2@1#1 == NULL
// 74 file pthread_test.c line 25 function dec_b
(137) SHARED_READ(b#5)
// 74 file pthread_test.c line 25 function dec_b
(138) SHARED_READ(a#7)
// 74 file pthread_test.c line 25 function dec_b
// 74 file pthread_test.c line 25 function dec_b
(139) \guard#7 == !(a#7 >= b#5)
// 75 file pthread_test.c line 26 function dec_b
(140) SHARED_READ(b#6)
      guard: \guard#7
// 75 file pthread_test.c line 26 function dec_b
(141) SHARED_READ(a#8)
      guard: \guard#7
// 75 file pthread_test.c line 26 function dec_b
(142) SHARED_WRITE(b#7)
      guard: \guard#7
// 75 file pthread_test.c line 26 function dec_b
(143) b#7 == b#6 + -a#8
      guard: \guard#7
// 76 file pthread_test.c line 27 function dec_b
(144) dec_b#return_value!2#2 == NULL
// 77 file pthread_test.c line 28 function dec_b
// 31 file <builtin-library-pthread_create> line 39 function pthread_create
// 33 file <builtin-library-pthread_create> line 40 function pthread_create
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(145) SHARED_READ(__CPROVER_threads_exited#6)
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(146) SHARED_WRITE(__CPROVER_threads_exited#7)
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(147) __CPROVER_threads_exited#7 == __CPROVER_threads_exited#6 WITH [(signed long int)this_thread_id!2@0#0:=TRUE]
// 38 file <builtin-library-pthread_create> line 45 function pthread_create
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(148) CONSTRAINT(__CPROVER_threads_exited#2 == __CPROVER_threads_exited#1 || !choice_rf0)
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(149) CONSTRAINT(__CPROVER_threads_exited#2 == __CPROVER_threads_exited#5 || !choice_rf1)
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(150) CONSTRAINT(!(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#2$rclk$8) || !choice_rf1)
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(151) CONSTRAINT(__CPROVER_threads_exited#2 == __CPROVER_threads_exited#7 || !choice_rf2)
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(152) CONSTRAINT(!(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#2$rclk$8) || !choice_rf2)
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(153) CONSTRAINT(choice_rf0 || choice_rf1 || choice_rf2 || \guard#1 || \guard#2)
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(154) CONSTRAINT(__CPROVER_threads_exited#3 == __CPROVER_threads_exited#1 || !choice_rf3)
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(155) CONSTRAINT(__CPROVER_threads_exited#3 == __CPROVER_threads_exited#5 || !choice_rf4)
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(156) CONSTRAINT(!(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#3$rclk$8) || !choice_rf4)
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(157) CONSTRAINT(__CPROVER_threads_exited#3 == __CPROVER_threads_exited#7 || !choice_rf5)
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(158) CONSTRAINT(!(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#3$rclk$8) || !choice_rf5)
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(159) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf3 || choice_rf4 || choice_rf5 || \guard#3 || \guard#4)
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(160) CONSTRAINT(__CPROVER_threads_exited#4 == __CPROVER_threads_exited#1 || !choice_rf6)
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(161) CONSTRAINT(!(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$rclk$8) || !choice_rf6)
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(162) CONSTRAINT(__CPROVER_threads_exited#4 == __CPROVER_threads_exited#7 || !choice_rf7)
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(163) CONSTRAINT(!(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#4$rclk$8) || !choice_rf7)
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(164) CONSTRAINT(choice_rf6 || choice_rf7)
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(165) CONSTRAINT(__CPROVER_threads_exited#6 == __CPROVER_threads_exited#1 || !choice_rf8)
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(166) CONSTRAINT(!(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#6$rclk$8) || !choice_rf8)
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(167) CONSTRAINT(__CPROVER_threads_exited#6 == __CPROVER_threads_exited#5 || !choice_rf9)
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(168) CONSTRAINT(!(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#6$rclk$8) || !choice_rf9)
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(169) CONSTRAINT(choice_rf8 || choice_rf9)
// 20 file <builtin-library-pthread_create> line 21 function pthread_create
(170) CONSTRAINT(__CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#1 || !choice_rf10)
// 20 file <builtin-library-pthread_create> line 21 function pthread_create
(171) CONSTRAINT(__CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#2 || !choice_rf11)
// 20 file <builtin-library-pthread_create> line 21 function pthread_create
(172) CONSTRAINT(choice_rf10 || choice_rf11)
// 39 file <builtin-library-pthread_join> line 25 function pthread_join
(173) CONSTRAINT(__CPROVER_next_thread_id#6 == __CPROVER_next_thread_id#1 || !choice_rf12)
// 39 file <builtin-library-pthread_join> line 25 function pthread_join
(174) CONSTRAINT(__CPROVER_next_thread_id#6 == __CPROVER_next_thread_id#2 || !choice_rf13)
// 39 file <builtin-library-pthread_join> line 25 function pthread_join
(175) CONSTRAINT(__CPROVER_next_thread_id#6 == __CPROVER_next_thread_id#5 || !choice_rf14)
// 39 file <builtin-library-pthread_join> line 25 function pthread_join
(176) CONSTRAINT(choice_rf12 || choice_rf13 || choice_rf14)
// 39 file <builtin-library-pthread_join> line 25 function pthread_join
(177) CONSTRAINT(__CPROVER_next_thread_id#7 == __CPROVER_next_thread_id#1 || !choice_rf15)
// 39 file <builtin-library-pthread_join> line 25 function pthread_join
(178) CONSTRAINT(__CPROVER_next_thread_id#7 == __CPROVER_next_thread_id#2 || !choice_rf16)
// 39 file <builtin-library-pthread_join> line 25 function pthread_join
(179) CONSTRAINT(__CPROVER_next_thread_id#7 == __CPROVER_next_thread_id#5 || !choice_rf17)
// 39 file <builtin-library-pthread_join> line 25 function pthread_join
(180) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf15 || choice_rf16 || choice_rf17)
// 86 file pthread_test.c line 39 function start
(181) CONSTRAINT(a#3 == a#1 || !choice_rf18)
// 86 file pthread_test.c line 39 function start
(182) CONSTRAINT(a#3 == a#2 || !choice_rf19)
// 86 file pthread_test.c line 39 function start
(183) CONSTRAINT(a#3 == a#6 && \guard#6 || !choice_rf20)
// 86 file pthread_test.c line 39 function start
(184) CONSTRAINT(!(a#6$wclk$8 >= a#3$rclk$8) || !choice_rf20)
// 86 file pthread_test.c line 39 function start
(185) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] || \guard#4) && !\guard#4) && !\guard#3 || choice_rf18 || choice_rf19 || choice_rf20)
// 69 file pthread_test.c line 17 function dec_a
(186) CONSTRAINT(a#4 == a#1 || !choice_rf21)
// 69 file pthread_test.c line 17 function dec_a
(187) CONSTRAINT(!(a#1$wclk$8 >= a#4$rclk$8) || !choice_rf21)
// 69 file pthread_test.c line 17 function dec_a
(188) CONSTRAINT(a#4 == a#2 || !choice_rf22)
// 69 file pthread_test.c line 17 function dec_a
(189) CONSTRAINT(!(a#2$wclk$8 >= a#4$rclk$8) || !choice_rf22)
// 69 file pthread_test.c line 17 function dec_a
(190) CONSTRAINT(choice_rf21 || choice_rf22)
// 70 file pthread_test.c line 18 function dec_a
(191) CONSTRAINT(a#5 == a#1 || !choice_rf23)
// 70 file pthread_test.c line 18 function dec_a
(192) CONSTRAINT(!(a#1$wclk$8 >= a#5$rclk$8) || !choice_rf23)
// 70 file pthread_test.c line 18 function dec_a
(193) CONSTRAINT(a#5 == a#2 || !choice_rf24)
// 70 file pthread_test.c line 18 function dec_a
(194) CONSTRAINT(!(a#2$wclk$8 >= a#5$rclk$8) || !choice_rf24)
// 70 file pthread_test.c line 18 function dec_a
(195) CONSTRAINT(!\guard#6 || choice_rf23 || choice_rf24)
// 74 file pthread_test.c line 25 function dec_b
(196) CONSTRAINT(a#7 == a#1 || !choice_rf25)
// 74 file pthread_test.c line 25 function dec_b
(197) CONSTRAINT(!(a#1$wclk$8 >= a#7$rclk$8) || !choice_rf25)
// 74 file pthread_test.c line 25 function dec_b
(198) CONSTRAINT(a#7 == a#2 || !choice_rf26)
// 74 file pthread_test.c line 25 function dec_b
(199) CONSTRAINT(!(a#2$wclk$8 >= a#7$rclk$8) || !choice_rf26)
// 74 file pthread_test.c line 25 function dec_b
(200) CONSTRAINT(a#7 == a#6 && \guard#6 || !choice_rf27)
// 74 file pthread_test.c line 25 function dec_b
(201) CONSTRAINT(!(a#6$wclk$8 >= a#7$rclk$8) || !choice_rf27)
// 74 file pthread_test.c line 25 function dec_b
(202) CONSTRAINT(choice_rf25 || choice_rf26 || choice_rf27)
// 75 file pthread_test.c line 26 function dec_b
(203) CONSTRAINT(a#8 == a#1 || !choice_rf28)
// 75 file pthread_test.c line 26 function dec_b
(204) CONSTRAINT(!(a#1$wclk$8 >= a#8$rclk$8) || !choice_rf28)
// 75 file pthread_test.c line 26 function dec_b
(205) CONSTRAINT(a#8 == a#2 || !choice_rf29)
// 75 file pthread_test.c line 26 function dec_b
(206) CONSTRAINT(!(a#2$wclk$8 >= a#8$rclk$8) || !choice_rf29)
// 75 file pthread_test.c line 26 function dec_b
(207) CONSTRAINT(a#8 == a#6 && \guard#6 || !choice_rf30)
// 75 file pthread_test.c line 26 function dec_b
(208) CONSTRAINT(!(a#6$wclk$8 >= a#8$rclk$8) || !choice_rf30)
// 75 file pthread_test.c line 26 function dec_b
(209) CONSTRAINT(!\guard#7 || choice_rf28 || choice_rf29 || choice_rf30)
// 69 file pthread_test.c line 17 function dec_a
(210) CONSTRAINT(b#3 == b#1 || !choice_rf31)
// 69 file pthread_test.c line 17 function dec_a
(211) CONSTRAINT(!(b#1$wclk$8 >= b#3$rclk$8) || !choice_rf31)
// 69 file pthread_test.c line 17 function dec_a
(212) CONSTRAINT(b#3 == b#2 || !choice_rf32)
// 69 file pthread_test.c line 17 function dec_a
(213) CONSTRAINT(!(b#2$wclk$8 >= b#3$rclk$8) || !choice_rf32)
// 69 file pthread_test.c line 17 function dec_a
(214) CONSTRAINT(b#3 == b#7 && \guard#7 || !choice_rf33)
// 69 file pthread_test.c line 17 function dec_a
(215) CONSTRAINT(!(b#7$wclk$8 >= b#3$rclk$8) || !choice_rf33)
// 69 file pthread_test.c line 17 function dec_a
(216) CONSTRAINT(choice_rf31 || choice_rf32 || choice_rf33)
// 70 file pthread_test.c line 18 function dec_a
(217) CONSTRAINT(b#4 == b#1 || !choice_rf34)
// 70 file pthread_test.c line 18 function dec_a
(218) CONSTRAINT(!(b#1$wclk$8 >= b#4$rclk$8) || !choice_rf34)
// 70 file pthread_test.c line 18 function dec_a
(219) CONSTRAINT(b#4 == b#2 || !choice_rf35)
// 70 file pthread_test.c line 18 function dec_a
(220) CONSTRAINT(!(b#2$wclk$8 >= b#4$rclk$8) || !choice_rf35)
// 70 file pthread_test.c line 18 function dec_a
(221) CONSTRAINT(b#4 == b#7 && \guard#7 || !choice_rf36)
// 70 file pthread_test.c line 18 function dec_a
(222) CONSTRAINT(!(b#7$wclk$8 >= b#4$rclk$8) || !choice_rf36)
// 70 file pthread_test.c line 18 function dec_a
(223) CONSTRAINT(!\guard#6 || choice_rf34 || choice_rf35 || choice_rf36)
// 74 file pthread_test.c line 25 function dec_b
(224) CONSTRAINT(b#5 == b#1 || !choice_rf37)
// 74 file pthread_test.c line 25 function dec_b
(225) CONSTRAINT(!(b#1$wclk$8 >= b#5$rclk$8) || !choice_rf37)
// 74 file pthread_test.c line 25 function dec_b
(226) CONSTRAINT(b#5 == b#2 || !choice_rf38)
// 74 file pthread_test.c line 25 function dec_b
(227) CONSTRAINT(!(b#2$wclk$8 >= b#5$rclk$8) || !choice_rf38)
// 74 file pthread_test.c line 25 function dec_b
(228) CONSTRAINT(choice_rf37 || choice_rf38)
// 75 file pthread_test.c line 26 function dec_b
(229) CONSTRAINT(b#6 == b#1 || !choice_rf39)
// 75 file pthread_test.c line 26 function dec_b
(230) CONSTRAINT(!(b#1$wclk$8 >= b#6$rclk$8) || !choice_rf39)
// 75 file pthread_test.c line 26 function dec_b
(231) CONSTRAINT(b#6 == b#2 || !choice_rf40)
// 75 file pthread_test.c line 26 function dec_b
(232) CONSTRAINT(!(b#2$wclk$8 >= b#6$rclk$8) || !choice_rf40)
// 75 file pthread_test.c line 26 function dec_b
(233) CONSTRAINT(!\guard#7 || choice_rf39 || choice_rf40)
// 84 file pthread_test.c line 37 function start
(234) CONSTRAINT(t1!0@1#3 == t1!0@1#1 || !choice_rf41)
// 84 file pthread_test.c line 37 function start
(235) CONSTRAINT(t1!0@1#3 == t1!0@1#2 || !choice_rf42)
// 84 file pthread_test.c line 37 function start
(236) CONSTRAINT(choice_rf41 || choice_rf42)
// 84 file pthread_test.c line 37 function start
(237) CONSTRAINT(t1!0@1#4 == t1!0@1#1 || !choice_rf43)
// 84 file pthread_test.c line 37 function start
(238) CONSTRAINT(t1!0@1#4 == t1!0@1#2 || !choice_rf44)
// 84 file pthread_test.c line 37 function start
(239) CONSTRAINT(choice_rf43 || choice_rf44)
// 85 file pthread_test.c line 38 function start
(240) CONSTRAINT(t2!0@1#3 == t2!0@1#1 || !choice_rf45)
// 85 file pthread_test.c line 38 function start
(241) CONSTRAINT(t2!0@1#3 == t2!0@1#2 || !choice_rf46)
// 85 file pthread_test.c line 38 function start
(242) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf45 || choice_rf46)
// 85 file pthread_test.c line 38 function start
(243) CONSTRAINT(t2!0@1#4 == t2!0@1#1 || !choice_rf47)
// 85 file pthread_test.c line 38 function start
(244) CONSTRAINT(t2!0@1#4 == t2!0@1#2 || !choice_rf48)
// 85 file pthread_test.c line 38 function start
(245) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf47 || choice_rf48)
// 60 file <built-in-additions> line 7
(246) CONSTRAINT(!(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#5$wclk$8) || !choice_ws-ext49)
// 60 file <built-in-additions> line 7
(247) CONSTRAINT(!(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#1$wclk$8) || choice_ws-ext49)
// 60 file <built-in-additions> line 7
(248) CONSTRAINT(!(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_ws-ext50)
// 60 file <built-in-additions> line 7
(249) CONSTRAINT(!(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#1$wclk$8) || choice_ws-ext50)
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(250) CONSTRAINT(!(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_ws-ext51)
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(251) CONSTRAINT(!(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#5$wclk$8) || choice_ws-ext51)
// 61 file pthread_test.c line 13
(252) CONSTRAINT(!(a#1$wclk$8 >= a#6$wclk$8) || !choice_ws-ext52)
// 61 file pthread_test.c line 13
(253) CONSTRAINT(!(a#6$wclk$8 >= a#1$wclk$8) || choice_ws-ext52)
// 78 file pthread_test.c line 32 function start
(254) CONSTRAINT(!(a#2$wclk$8 >= a#6$wclk$8) || !choice_ws-ext53)
// 78 file pthread_test.c line 32 function start
(255) CONSTRAINT(!(a#6$wclk$8 >= a#2$wclk$8) || choice_ws-ext53)
// 62 file pthread_test.c line 13
(256) CONSTRAINT(!(b#1$wclk$8 >= b#7$wclk$8) || !choice_ws-ext54)
// 62 file pthread_test.c line 13
(257) CONSTRAINT(!(b#7$wclk$8 >= b#1$wclk$8) || choice_ws-ext54)
// 79 file pthread_test.c line 33 function start
(258) CONSTRAINT(!(b#2$wclk$8 >= b#7$wclk$8) || !choice_ws-ext55)
// 79 file pthread_test.c line 33 function start
(259) CONSTRAINT(!(b#7$wclk$8 >= b#2$wclk$8) || choice_ws-ext55)
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(260) CONSTRAINT(!(t1$17$spwnclk$8 >= a#4$rclk$8))
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(261) CONSTRAINT(!(t1$17$spwnclk$8 >= b#3$rclk$8))
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(262) CONSTRAINT(!(t1$17$spwnclk$8 >= a#5$rclk$8))
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(263) CONSTRAINT(!(t1$17$spwnclk$8 >= b#4$rclk$8))
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(264) CONSTRAINT(!(t1$17$spwnclk$8 >= a#6$wclk$8))
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(265) CONSTRAINT(!(t1$17$spwnclk$8 >= __CPROVER_threads_exited#4$rclk$8))
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(266) CONSTRAINT(!(t1$17$spwnclk$8 >= __CPROVER_threads_exited#5$wclk$8))
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(267) CONSTRAINT(!(t1$21$spwnclk$8 >= b#5$rclk$8))
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(268) CONSTRAINT(!(t1$21$spwnclk$8 >= a#7$rclk$8))
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(269) CONSTRAINT(!(t1$21$spwnclk$8 >= b#6$rclk$8))
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(270) CONSTRAINT(!(t1$21$spwnclk$8 >= a#8$rclk$8))
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(271) CONSTRAINT(!(t1$21$spwnclk$8 >= b#7$wclk$8))
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(272) CONSTRAINT(!(t1$21$spwnclk$8 >= __CPROVER_threads_exited#6$rclk$8))
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(273) CONSTRAINT(!(t1$21$spwnclk$8 >= __CPROVER_threads_exited#7$wclk$8))
// 51 file <built-in-additions> line 10
(274) CONSTRAINT(!(__CPROVER_dead_object#1$wclk$8 >= __CPROVER_deallocated#1$wclk$8))
// 52 file <built-in-additions> line 14
(275) CONSTRAINT(!(__CPROVER_deallocated#1$wclk$8 >= __CPROVER_malloc_is_new_array#1$wclk$8))
// 53 file <built-in-additions> line 12
(276) CONSTRAINT(!(__CPROVER_malloc_is_new_array#1$wclk$8 >= __CPROVER_malloc_object#1$wclk$8))
// 54 file <built-in-additions> line 13
(277) CONSTRAINT(!(__CPROVER_malloc_object#1$wclk$8 >= __CPROVER_malloc_size#1$wclk$8))
// 55 file <built-in-additions> line 15
(278) CONSTRAINT(!(__CPROVER_malloc_size#1$wclk$8 >= __CPROVER_memory_leak#1$wclk$8))
// 56 file <built-in-additions> line 8
(279) CONSTRAINT(!(__CPROVER_memory_leak#1$wclk$8 >= __CPROVER_next_thread_id#1$wclk$8))
// 57 file <built-in-additions> line 29
(280) CONSTRAINT(!(__CPROVER_next_thread_id#1$wclk$8 >= __CPROVER_pipe_count#1$wclk$8))
// 60 file <built-in-additions> line 7
(281) CONSTRAINT(!(__CPROVER_pipe_count#1$wclk$8 >= __CPROVER_threads_exited#1$wclk$8))
// 61 file pthread_test.c line 13
(282) CONSTRAINT(!(__CPROVER_threads_exited#1$wclk$8 >= a#1$wclk$8))
// 62 file pthread_test.c line 13
(283) CONSTRAINT(!(a#1$wclk$8 >= b#1$wclk$8))
// 78 file pthread_test.c line 32 function start
(284) CONSTRAINT(!(b#1$wclk$8 >= a#2$wclk$8))
// 79 file pthread_test.c line 33 function start
(285) CONSTRAINT(!(a#2$wclk$8 >= b#2$wclk$8))
// 80 file pthread_test.c line 34 function start
(286) CONSTRAINT(!(b#2$wclk$8 >= t1!0@1#1$wclk$8))
// 81 file pthread_test.c line 34 function start
(287) CONSTRAINT(!(t1!0@1#1$wclk$8 >= t2!0@1#1$wclk$8))
// 20 file <builtin-library-pthread_create> line 21 function pthread_create
(288) CONSTRAINT(!(t2!0@1#1$wclk$8 >= __CPROVER_next_thread_id#2$wclk$8))
// 21 file <builtin-library-pthread_create> line 24 function pthread_create
(289) CONSTRAINT(!(__CPROVER_next_thread_id#2$wclk$8 >= t1!0@1#2$wclk$8))
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(290) CONSTRAINT(!(t1!0@1#2$wclk$8 >= t1$17$spwnclk$8))
// 20 file <builtin-library-pthread_create> line 21 function pthread_create
(291) CONSTRAINT(!(t1$17$spwnclk$8 >= __CPROVER_next_thread_id#3$rclk$8))
// 20 file <builtin-library-pthread_create> line 21 function pthread_create
(292) CONSTRAINT(__CPROVER_next_thread_id#3$rclk$8 == __CPROVER_next_thread_id#5$wclk$8)
// 21 file <builtin-library-pthread_create> line 24 function pthread_create
(293) CONSTRAINT(!(__CPROVER_next_thread_id#5$wclk$8 >= t2!0@1#2$wclk$8))
// 24 file <builtin-library-pthread_create> line 32 function pthread_create
(294) CONSTRAINT(!(t2!0@1#2$wclk$8 >= t1$21$spwnclk$8))
// 84 file pthread_test.c line 37 function start
(295) CONSTRAINT(!(t1$21$spwnclk$8 >= t1!0@1#3$rclk$8))
// 84 file pthread_test.c line 37 function start
(296) CONSTRAINT(!(t1!0@1#3$rclk$8 >= t1!0@1#4$rclk$8))
// 39 file <builtin-library-pthread_join> line 25 function pthread_join
(297) CONSTRAINT(!(t1!0@1#4$rclk$8 >= __CPROVER_next_thread_id#6$rclk$8))
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(298) CONSTRAINT(!(__CPROVER_next_thread_id#6$rclk$8 >= __CPROVER_threads_exited#2$rclk$8))
// 85 file pthread_test.c line 38 function start
(299) CONSTRAINT(!(__CPROVER_threads_exited#2$rclk$8 >= t2!0@1#3$rclk$8))
// 85 file pthread_test.c line 38 function start
(300) CONSTRAINT(!(t2!0@1#3$rclk$8 >= t2!0@1#4$rclk$8))
// 39 file <builtin-library-pthread_join> line 25 function pthread_join
(301) CONSTRAINT(!(t2!0@1#4$rclk$8 >= __CPROVER_next_thread_id#7$rclk$8))
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(302) CONSTRAINT(!(__CPROVER_next_thread_id#7$rclk$8 >= __CPROVER_threads_exited#3$rclk$8))
// 86 file pthread_test.c line 39 function start
(303) CONSTRAINT(!(__CPROVER_threads_exited#3$rclk$8 >= a#3$rclk$8))
// 69 file pthread_test.c line 17 function dec_a
(304) CONSTRAINT(!(a#4$rclk$8 >= b#3$rclk$8))
// 70 file pthread_test.c line 18 function dec_a
(305) CONSTRAINT(!(b#3$rclk$8 >= a#5$rclk$8))
// 70 file pthread_test.c line 18 function dec_a
(306) CONSTRAINT(!(a#5$rclk$8 >= b#4$rclk$8))
// 70 file pthread_test.c line 18 function dec_a
(307) CONSTRAINT(!(b#4$rclk$8 >= a#6$wclk$8))
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(308) CONSTRAINT(!(a#6$wclk$8 >= __CPROVER_threads_exited#4$rclk$8))
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(309) CONSTRAINT(!(__CPROVER_threads_exited#4$rclk$8 >= __CPROVER_threads_exited#5$wclk$8))
// 74 file pthread_test.c line 25 function dec_b
(310) CONSTRAINT(!(b#5$rclk$8 >= a#7$rclk$8))
// 75 file pthread_test.c line 26 function dec_b
(311) CONSTRAINT(!(a#7$rclk$8 >= b#6$rclk$8))
// 75 file pthread_test.c line 26 function dec_b
(312) CONSTRAINT(!(b#6$rclk$8 >= a#8$rclk$8))
// 75 file pthread_test.c line 26 function dec_b
(313) CONSTRAINT(!(a#8$rclk$8 >= b#7$wclk$8))
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(314) CONSTRAINT(!(b#7$wclk$8 >= __CPROVER_threads_exited#6$rclk$8))
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(315) CONSTRAINT(!(__CPROVER_threads_exited#6$rclk$8 >= __CPROVER_threads_exited#7$wclk$8))
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(316) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !(__CPROVER_threads_exited#4$rclk$8 >= __CPROVER_threads_exited#5$wclk$8) || !choice_rf6)
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(317) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#5$wclk$8) || !choice_rf0 || \guard#1 || \guard#2)
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(318) CONSTRAINT(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf1 || \guard#1 || \guard#2)
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(319) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !(__CPROVER_threads_exited#6$rclk$8 >= __CPROVER_threads_exited#5$wclk$8) || !choice_rf8)
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(320) CONSTRAINT(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !(__CPROVER_threads_exited#6$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf9)
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(321) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#5$wclk$8) || !choice_rf3 || \guard#3 || \guard#4)
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(322) CONSTRAINT(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf4 || \guard#3 || \guard#4)
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(323) CONSTRAINT(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !(__CPROVER_threads_exited#4$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf7)
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(324) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !(__CPROVER_threads_exited#4$rclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_rf6)
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(325) CONSTRAINT(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf2 || \guard#1 || \guard#2)
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(326) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_rf0 || \guard#1 || \guard#2)
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(327) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !(__CPROVER_threads_exited#6$rclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_rf8)
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(328) CONSTRAINT(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#1$wclk$8) || !choice_rf5 || \guard#3 || \guard#4)
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(329) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_rf3 || \guard#3 || \guard#4)
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(330) CONSTRAINT(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !(__CPROVER_threads_exited#4$rclk$8 >= __CPROVER_threads_exited#5$wclk$8) || !choice_rf7)
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(331) CONSTRAINT(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#5$wclk$8) || !choice_rf2 || \guard#1 || \guard#2)
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(332) CONSTRAINT(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_rf1 || \guard#1 || \guard#2)
// 34 file <builtin-library-pthread_create> line 42 function pthread_create
(333) CONSTRAINT(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !(__CPROVER_threads_exited#6$rclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_rf9)
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(334) CONSTRAINT(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#5$wclk$8) || !choice_rf5 || \guard#3 || \guard#4)
// 47 file <builtin-library-pthread_join> line 28 function pthread_join
(335) CONSTRAINT(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#7$wclk$8) || !choice_rf4 || \guard#3 || \guard#4)
// 39 file <builtin-library-pthread_join> line 25 function pthread_join
(336) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_next_thread_id#7$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8) || !choice_rf15)
// 20 file <builtin-library-pthread_create> line 21 function pthread_create
(337) CONSTRAINT(!(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8) || !choice_rf10)
// 39 file <builtin-library-pthread_join> line 25 function pthread_join
(338) CONSTRAINT(!(__CPROVER_next_thread_id#6$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8) || !choice_rf12)
// 39 file <builtin-library-pthread_join> line 25 function pthread_join
(339) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_next_thread_id#7$rclk$8 >= __CPROVER_next_thread_id#5$wclk$8) || !choice_rf15)
// 20 file <builtin-library-pthread_create> line 21 function pthread_create
(340) CONSTRAINT(__CPROVER_next_thread_id#3$rclk$8 == __CPROVER_next_thread_id#5$wclk$8 || !choice_rf10)
// 39 file <builtin-library-pthread_join> line 25 function pthread_join
(341) CONSTRAINT(!(__CPROVER_next_thread_id#6$rclk$8 >= __CPROVER_next_thread_id#5$wclk$8) || !choice_rf12)
// 39 file <builtin-library-pthread_join> line 25 function pthread_join
(342) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(__CPROVER_next_thread_id#7$rclk$8 >= __CPROVER_next_thread_id#5$wclk$8) || !choice_rf16)
// 20 file <builtin-library-pthread_create> line 21 function pthread_create
(343) CONSTRAINT(__CPROVER_next_thread_id#3$rclk$8 == __CPROVER_next_thread_id#5$wclk$8 || !choice_rf11)
// 39 file <builtin-library-pthread_join> line 25 function pthread_join
(344) CONSTRAINT(!(__CPROVER_next_thread_id#6$rclk$8 >= __CPROVER_next_thread_id#5$wclk$8) || !choice_rf13)
// 69 file pthread_test.c line 17 function dec_a
(345) CONSTRAINT(!(a#4$rclk$8 >= a#2$wclk$8) || !choice_rf21)
// 74 file pthread_test.c line 25 function dec_b
(346) CONSTRAINT(!(a#7$rclk$8 >= a#2$wclk$8) || !choice_rf25)
// 75 file pthread_test.c line 26 function dec_b
(347) CONSTRAINT(!(a#8$rclk$8 >= a#2$wclk$8) || !choice_rf28 || !\guard#7)
// 86 file pthread_test.c line 39 function start
(348) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] || \guard#4) && !\guard#4) && !\guard#3 || !(a#3$rclk$8 >= a#2$wclk$8) || !choice_rf18)
// 70 file pthread_test.c line 18 function dec_a
(349) CONSTRAINT(!(a#5$rclk$8 >= a#2$wclk$8) || !choice_rf23 || !\guard#6)
// 69 file pthread_test.c line 17 function dec_a
(350) CONSTRAINT(a#1$wclk$8 >= a#6$wclk$8 || !(a#4$rclk$8 >= a#6$wclk$8) || !choice_rf21 || !\guard#6)
// 74 file pthread_test.c line 25 function dec_b
(351) CONSTRAINT(a#6$wclk$8 >= a#1$wclk$8 || !(a#7$rclk$8 >= a#1$wclk$8) || !choice_rf27)
// 74 file pthread_test.c line 25 function dec_b
(352) CONSTRAINT(a#1$wclk$8 >= a#6$wclk$8 || !(a#7$rclk$8 >= a#6$wclk$8) || !choice_rf25 || !\guard#6)
// 75 file pthread_test.c line 26 function dec_b
(353) CONSTRAINT(a#6$wclk$8 >= a#1$wclk$8 || !(a#8$rclk$8 >= a#1$wclk$8) || !choice_rf30 || !\guard#7)
// 75 file pthread_test.c line 26 function dec_b
(354) CONSTRAINT(a#1$wclk$8 >= a#6$wclk$8 || !(a#8$rclk$8 >= a#6$wclk$8) || !choice_rf28 || !\guard#6 || !\guard#7)
// 86 file pthread_test.c line 39 function start
(355) CONSTRAINT(a#6$wclk$8 >= a#1$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] || \guard#4) && !\guard#4) && !\guard#3 || !(a#3$rclk$8 >= a#1$wclk$8) || !choice_rf20)
// 86 file pthread_test.c line 39 function start
(356) CONSTRAINT(a#1$wclk$8 >= a#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] || \guard#4) && !\guard#4) && !\guard#3 || !(a#3$rclk$8 >= a#6$wclk$8) || !choice_rf18 || !\guard#6)
// 70 file pthread_test.c line 18 function dec_a
(357) CONSTRAINT(a#1$wclk$8 >= a#6$wclk$8 || !(a#5$rclk$8 >= a#6$wclk$8) || !choice_rf23 || !\guard#6)
// 69 file pthread_test.c line 17 function dec_a
(358) CONSTRAINT(a#2$wclk$8 >= a#6$wclk$8 || !(a#4$rclk$8 >= a#6$wclk$8) || !choice_rf22 || !\guard#6)
// 74 file pthread_test.c line 25 function dec_b
(359) CONSTRAINT(a#6$wclk$8 >= a#2$wclk$8 || !(a#7$rclk$8 >= a#2$wclk$8) || !choice_rf27)
// 74 file pthread_test.c line 25 function dec_b
(360) CONSTRAINT(a#2$wclk$8 >= a#6$wclk$8 || !(a#7$rclk$8 >= a#6$wclk$8) || !choice_rf26 || !\guard#6)
// 75 file pthread_test.c line 26 function dec_b
(361) CONSTRAINT(a#6$wclk$8 >= a#2$wclk$8 || !(a#8$rclk$8 >= a#2$wclk$8) || !choice_rf30 || !\guard#7)
// 75 file pthread_test.c line 26 function dec_b
(362) CONSTRAINT(a#2$wclk$8 >= a#6$wclk$8 || !(a#8$rclk$8 >= a#6$wclk$8) || !choice_rf29 || !\guard#6 || !\guard#7)
// 86 file pthread_test.c line 39 function start
(363) CONSTRAINT(a#6$wclk$8 >= a#2$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] || \guard#4) && !\guard#4) && !\guard#3 || !(a#3$rclk$8 >= a#2$wclk$8) || !choice_rf20)
// 86 file pthread_test.c line 39 function start
(364) CONSTRAINT(a#2$wclk$8 >= a#6$wclk$8 || (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] || \guard#4) && !\guard#4) && !\guard#3 || !(a#3$rclk$8 >= a#6$wclk$8) || !choice_rf19 || !\guard#6)
// 70 file pthread_test.c line 18 function dec_a
(365) CONSTRAINT(a#2$wclk$8 >= a#6$wclk$8 || !(a#5$rclk$8 >= a#6$wclk$8) || !choice_rf24 || !\guard#6)
// 74 file pthread_test.c line 25 function dec_b
(366) CONSTRAINT(!(b#5$rclk$8 >= b#2$wclk$8) || !choice_rf37)
// 69 file pthread_test.c line 17 function dec_a
(367) CONSTRAINT(!(b#3$rclk$8 >= b#2$wclk$8) || !choice_rf31)
// 75 file pthread_test.c line 26 function dec_b
(368) CONSTRAINT(!(b#6$rclk$8 >= b#2$wclk$8) || !choice_rf39 || !\guard#7)
// 70 file pthread_test.c line 18 function dec_a
(369) CONSTRAINT(!(b#4$rclk$8 >= b#2$wclk$8) || !choice_rf34 || !\guard#6)
// 74 file pthread_test.c line 25 function dec_b
(370) CONSTRAINT(b#1$wclk$8 >= b#7$wclk$8 || !(b#5$rclk$8 >= b#7$wclk$8) || !choice_rf37 || !\guard#7)
// 69 file pthread_test.c line 17 function dec_a
(371) CONSTRAINT(b#1$wclk$8 >= b#7$wclk$8 || !(b#3$rclk$8 >= b#7$wclk$8) || !choice_rf31 || !\guard#7)
// 69 file pthread_test.c line 17 function dec_a
(372) CONSTRAINT(b#7$wclk$8 >= b#1$wclk$8 || !(b#3$rclk$8 >= b#1$wclk$8) || !choice_rf33)
// 75 file pthread_test.c line 26 function dec_b
(373) CONSTRAINT(b#1$wclk$8 >= b#7$wclk$8 || !(b#6$rclk$8 >= b#7$wclk$8) || !choice_rf39 || !\guard#7)
// 70 file pthread_test.c line 18 function dec_a
(374) CONSTRAINT(b#1$wclk$8 >= b#7$wclk$8 || !(b#4$rclk$8 >= b#7$wclk$8) || !choice_rf34 || !\guard#6 || !\guard#7)
// 70 file pthread_test.c line 18 function dec_a
(375) CONSTRAINT(b#7$wclk$8 >= b#1$wclk$8 || !(b#4$rclk$8 >= b#1$wclk$8) || !choice_rf36 || !\guard#6)
// 74 file pthread_test.c line 25 function dec_b
(376) CONSTRAINT(b#2$wclk$8 >= b#7$wclk$8 || !(b#5$rclk$8 >= b#7$wclk$8) || !choice_rf38 || !\guard#7)
// 69 file pthread_test.c line 17 function dec_a
(377) CONSTRAINT(b#2$wclk$8 >= b#7$wclk$8 || !(b#3$rclk$8 >= b#7$wclk$8) || !choice_rf32 || !\guard#7)
// 69 file pthread_test.c line 17 function dec_a
(378) CONSTRAINT(b#7$wclk$8 >= b#2$wclk$8 || !(b#3$rclk$8 >= b#2$wclk$8) || !choice_rf33)
// 75 file pthread_test.c line 26 function dec_b
(379) CONSTRAINT(b#2$wclk$8 >= b#7$wclk$8 || !(b#6$rclk$8 >= b#7$wclk$8) || !choice_rf40 || !\guard#7)
// 70 file pthread_test.c line 18 function dec_a
(380) CONSTRAINT(b#2$wclk$8 >= b#7$wclk$8 || !(b#4$rclk$8 >= b#7$wclk$8) || !choice_rf35 || !\guard#6 || !\guard#7)
// 70 file pthread_test.c line 18 function dec_a
(381) CONSTRAINT(b#7$wclk$8 >= b#2$wclk$8 || !(b#4$rclk$8 >= b#2$wclk$8) || !choice_rf36 || !\guard#6)
// 84 file pthread_test.c line 37 function start
(382) CONSTRAINT(!(t1!0@1#4$rclk$8 >= t1!0@1#2$wclk$8) || !choice_rf43)
// 84 file pthread_test.c line 37 function start
(383) CONSTRAINT(!(t1!0@1#3$rclk$8 >= t1!0@1#2$wclk$8) || !choice_rf41)
// 85 file pthread_test.c line 38 function start
(384) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(t2!0@1#3$rclk$8 >= t2!0@1#2$wclk$8) || !choice_rf45)
// 85 file pthread_test.c line 38 function start
(385) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !(t2!0@1#4$rclk$8 >= t2!0@1#2$wclk$8) || !choice_rf47)
