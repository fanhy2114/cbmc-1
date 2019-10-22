CBMC version 5.10 (cbmc-5.10-1886-g656277c-dirty) 64-bit x86_64 linux
Parsing ./pthread_test.c
Converting
Type-checking pthread_test
Generating GOTO Program
Adding CPROVER library (x86_64)
Removal of function pointers and virtual functions
file <builtin-library-pthread_create> line 34 function __spawned_thread: replacing function pointer by 2 possible targets
Generic Property Instrumentation
Running with 8 object bits, 56 offset bits (default)
Starting Bounded Model Checking
aborting path on assume(false) at file ./pthread_test.c line 7 function __VERIFIER_assert thread 0
Adding SC constraints
Shared __CPROVER_threads_exited: 4R/3W
Shared __CPROVER_next_thread_id: 3R/3W
Shared a: 5R/3W
Shared b: 4R/3W
Shared start::1::t1!0@1: 2R/2W
Shared start::1::t2!0@1: 2R/2W
function: pthread_join ssa: !choice_rf0 || __CPROVER_threads_exited#2 == __CPROVER_threads_exited#1
function: pthread_join ssa: !choice_rf1 || __CPROVER_threads_exited#2 == __CPROVER_threads_exited#5
function: pthread_join ssa: !choice_rf1 || !(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#2$rclk$8)
!choice_rf1 || !(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#2$rclk$8)
function: pthread_join ssa: !choice_rf2 || __CPROVER_threads_exited#2 == __CPROVER_threads_exited#7
function: pthread_join ssa: !choice_rf2 || !(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#2$rclk$8)
!choice_rf2 || !(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#2$rclk$8)
function: pthread_join ssa: \guard#1 || \guard#2 || choice_rf0 || choice_rf1 || choice_rf2
function: pthread_join ssa: !choice_rf3 || __CPROVER_threads_exited#3 == __CPROVER_threads_exited#1
function: pthread_join ssa: !choice_rf4 || __CPROVER_threads_exited#3 == __CPROVER_threads_exited#5
function: pthread_join ssa: !choice_rf4 || !(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#3$rclk$8)
!choice_rf4 || !(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#3$rclk$8)
function: pthread_join ssa: !choice_rf5 || __CPROVER_threads_exited#3 == __CPROVER_threads_exited#7
function: pthread_join ssa: !choice_rf5 || !(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#3$rclk$8)
!choice_rf5 || !(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#3$rclk$8)
function: pthread_join ssa: (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || \guard#3 || \guard#4 || choice_rf3 || choice_rf4 || choice_rf5
function: pthread_join ssa: !choice_rf12 || __CPROVER_next_thread_id#6 == __CPROVER_next_thread_id#1
function: pthread_join ssa: !choice_rf13 || __CPROVER_next_thread_id#6 == __CPROVER_next_thread_id#2
function: pthread_join ssa: !choice_rf14 || __CPROVER_next_thread_id#6 == __CPROVER_next_thread_id#5
function: pthread_join ssa: choice_rf12 || choice_rf13 || choice_rf14
function: pthread_join ssa: !choice_rf15 || __CPROVER_next_thread_id#7 == __CPROVER_next_thread_id#1
function: pthread_join ssa: !choice_rf16 || __CPROVER_next_thread_id#7 == __CPROVER_next_thread_id#2
function: pthread_join ssa: !choice_rf17 || __CPROVER_next_thread_id#7 == __CPROVER_next_thread_id#5
function: pthread_join ssa: (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf15 || choice_rf16 || choice_rf17
function: pthread_join ssa: !(t1!0@1#4$rclk$8 >= __CPROVER_next_thread_id#6$rclk$8)
function: pthread_join ssa: !(__CPROVER_next_thread_id#6$rclk$8 >= __CPROVER_threads_exited#2$rclk$8)
function: pthread_join ssa: !(t2!0@1#4$rclk$8 >= __CPROVER_next_thread_id#7$rclk$8)
function: pthread_join ssa: !(__CPROVER_next_thread_id#7$rclk$8 >= __CPROVER_threads_exited#3$rclk$8)
function: pthread_join ssa: (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || \guard#3 || \guard#4 || __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !choice_rf3 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#5$wclk$8)
function: pthread_join ssa: (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || \guard#3 || \guard#4 || __CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !choice_rf4 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#1$wclk$8)
function: pthread_join ssa: \guard#1 || \guard#2 || __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !choice_rf0 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#5$wclk$8)
function: pthread_join ssa: \guard#1 || \guard#2 || __CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !choice_rf1 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#1$wclk$8)
function: pthread_join ssa: (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || \guard#3 || \guard#4 || __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !choice_rf3 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#7$wclk$8)
function: pthread_join ssa: (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || \guard#3 || \guard#4 || __CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !choice_rf5 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#1$wclk$8)
function: pthread_join ssa: \guard#1 || \guard#2 || __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !choice_rf0 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#7$wclk$8)
function: pthread_join ssa: \guard#1 || \guard#2 || __CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !choice_rf2 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#1$wclk$8)
function: pthread_join ssa: (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || \guard#3 || \guard#4 || __CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !choice_rf4 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#7$wclk$8)
function: pthread_join ssa: (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || \guard#3 || \guard#4 || __CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !choice_rf5 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#5$wclk$8)
function: pthread_join ssa: \guard#1 || \guard#2 || __CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !choice_rf1 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#7$wclk$8)
function: pthread_join ssa: \guard#1 || \guard#2 || __CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !choice_rf2 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#5$wclk$8)
function: pthread_join ssa: !choice_rf12 || !(__CPROVER_next_thread_id#6$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8)
function: pthread_join ssa: (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !choice_rf15 || !(__CPROVER_next_thread_id#7$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8)
function: pthread_join ssa: !choice_rf12 || !(__CPROVER_next_thread_id#6$rclk$8 >= __CPROVER_next_thread_id#5$wclk$8)
function: pthread_join ssa: (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !choice_rf15 || !(__CPROVER_next_thread_id#7$rclk$8 >= __CPROVER_next_thread_id#5$wclk$8)
function: pthread_join ssa: !choice_rf13 || !(__CPROVER_next_thread_id#6$rclk$8 >= __CPROVER_next_thread_id#5$wclk$8)
function: pthread_join ssa: (\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !choice_rf16 || !(__CPROVER_next_thread_id#7$rclk$8 >= __CPROVER_next_thread_id#5$wclk$8)

Fix SSA expressions: 4




size of program expression: 493 steps
no slicing due to threads
Generated 1 VCC(s), 1 remaining after simplification

Program constraints:
// 91 
// 91 
// 45 file <built-in-additions> line 20
(1) SHARED_WRITE(__CPROVER_alloca_object#1)
// 45 file <built-in-additions> line 20
(2) __CPROVER_alloca_object#1 == NULL
// 46 file <built-in-additions> line 14
(3) SHARED_WRITE(__CPROVER_dead_object#1)
// 46 file <built-in-additions> line 14
(4) __CPROVER_dead_object#1 == NULL
// 47 file <built-in-additions> line 13
(5) SHARED_WRITE(__CPROVER_deallocated#1)
// 47 file <built-in-additions> line 13
(6) __CPROVER_deallocated#1 == NULL
// 48 file <built-in-additions> line 17
(7) SHARED_WRITE(__CPROVER_malloc_is_new_array#1)
// 48 file <built-in-additions> line 17
(8) __CPROVER_malloc_is_new_array#1 == FALSE
// 49 file <built-in-additions> line 15
(9) SHARED_WRITE(__CPROVER_malloc_object#1)
// 49 file <built-in-additions> line 15
(10) __CPROVER_malloc_object#1 == NULL
// 50 file <built-in-additions> line 16
(11) SHARED_WRITE(__CPROVER_malloc_size#1)
// 50 file <built-in-additions> line 16
(12) __CPROVER_malloc_size#1 == 0ul
// 51 file <built-in-additions> line 18
(13) SHARED_WRITE(__CPROVER_memory_leak#1)
// 51 file <built-in-additions> line 18
(14) __CPROVER_memory_leak#1 == NULL
// 52 file <built-in-additions> line 8
(15) SHARED_WRITE(__CPROVER_next_thread_id#1)
// 52 file <built-in-additions> line 8
(16) __CPROVER_next_thread_id#1 == 0ul
// 53 file <built-in-additions> line 11
(17) __CPROVER_next_thread_key!0#1 == 0ul
// 54 file <built-in-additions> line 33
(18) SHARED_WRITE(__CPROVER_pipe_count#1)
// 54 file <built-in-additions> line 33
(19) __CPROVER_pipe_count#1 == 0u
// 55 file <built-in-additions> line 24
(20) __CPROVER_rounding_mode!0#1 == 0
// 56 file <built-in-additions> line 6
(21) __CPROVER_thread_id!0#1 == 0ul
// 57 file <built-in-additions> line 10
(22) __CPROVER_thread_key_dtors!0#1 == ARRAY_OF(((const void (*)(const void *))NULL))
// 58 file <built-in-additions> line 9
(23) __CPROVER_thread_keys!0#1 == ARRAY_OF(NULL)
// 59 file <built-in-additions> line 7
(24) SHARED_WRITE(__CPROVER_threads_exited#1)
// 59 file <built-in-additions> line 7
(25) __CPROVER_threads_exited#1 == ARRAY_OF(FALSE)
// 60 file ./pthread_test.c line 13
(26) SHARED_WRITE(a#1)
// 60 file ./pthread_test.c line 13
(27) a#1 == 0u
// 61 file ./pthread_test.c line 13
(28) SHARED_WRITE(b#1)
// 61 file ./pthread_test.c line 13
(29) b#1 == 0u
// 62 
// 92 file ./pthread_test.c line 46
// 92 file ./pthread_test.c line 46
// 0 file ./pthread_test.c line 51 function main
// 1 file ./pthread_test.c line 51 function main
(30) a_in!0@1#2 == 8u
// 2 file ./pthread_test.c line 52 function main
// 3 file ./pthread_test.c line 52 function main
(31) b_in!0@1#2 == 6u
// 6 file ./pthread_test.c line 56 function main
// 7 file ./pthread_test.c line 56 function main
// 7 file ./pthread_test.c line 56 function main
// 7 file ./pthread_test.c line 56 function main
(32) a_in!0@1#1 == 8u
// 7 file ./pthread_test.c line 56 function main
(33) b_in!0@1#1 == 6u
// 77 file ./pthread_test.c line 32 function start
(34) SHARED_WRITE(a#2)
// 77 file ./pthread_test.c line 32 function start
(35) a#2 == 8u
// 78 file ./pthread_test.c line 33 function start
(36) SHARED_WRITE(b#2)
// 78 file ./pthread_test.c line 33 function start
(37) b#2 == 6u
// 79 file ./pthread_test.c line 34 function start
// 79 file ./pthread_test.c line 34 function start
(38) SHARED_WRITE(t1!0@1#1)
// 80 file ./pthread_test.c line 34 function start
// 80 file ./pthread_test.c line 34 function start
(39) SHARED_WRITE(t2!0@1#1)
// 81 file ./pthread_test.c line 35 function start
// 81 file ./pthread_test.c line 35 function start
// 81 file ./pthread_test.c line 35 function start
(40) thread!0@1#1 == &t1!0@1
// 81 file ./pthread_test.c line 35 function start
(41) attr!0@1#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
// 81 file ./pthread_test.c line 35 function start
(42) start_routine!0@1#1 == dec_a
// 81 file ./pthread_test.c line 35 function start
(43) arg!0@1#1 == NULL
// 16 file <builtin-library-pthread_create> line 56 function pthread_create
// 17 file <builtin-library-pthread_create> line 57 function pthread_create
// 18 file <builtin-library-pthread_create> line 58 function pthread_create
(44) __CPROVER_next_thread_id#2 == 1ul
// 19 file <builtin-library-pthread_create> line 58 function pthread_create
(45) this_thread_id!0@1#2 == 1ul
// 20 file <builtin-library-pthread_create> line 59 function pthread_create
(46) SHARED_WRITE(__CPROVER_next_thread_id#2)
// 20 file <builtin-library-pthread_create> line 59 function pthread_create
// 21 file <builtin-library-pthread_create> line 62 function pthread_create
(47) SHARED_WRITE(t1!0@1#2)
// 21 file <builtin-library-pthread_create> line 62 function pthread_create
(48) t1!0@1#2 == 1ul
// 22 file <builtin-library-pthread_create> line 68 function pthread_create
// 24 file <builtin-library-pthread_create> line 70 function pthread_create
// 25 file <builtin-library-pthread_create> line 70 function pthread_create
(49) next_thread_key!0@1#2 == 0ul
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(50) thread!1@0#1 == &t1!0@1
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(51) attr!1@0#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(52) start_routine!1@0#1 == dec_a
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(53) arg!1@0#1 == NULL
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(54) this_thread_id!1@0#1 == 1ul
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(55) next_thread_key!1@0#1 == 0ul
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(56) __CPROVER_next_thread_key!1#1 == 0ul
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(57) __CPROVER_thread_keys!1#1 == ARRAY_OF(NULL)
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(58) __CPROVER_thread_key_dtors!1#1 == ARRAY_OF(((const void (*)(const void *))NULL))
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(59) __CPROVER_thread_id!1#1 == 0ul
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(60) dec_b#return_value!1#1 == NULL
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(61) __CPROVER_rounding_mode!1#1 == 0
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(62) pthread_create#return_value!1#1 == 0
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(63) main#return_value!1#1 == 0
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(64) start#return_value!1#1 == 0u
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(65) pthread_join#return_value!1#1 == 0
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(66) dec_a#return_value!1#1 == NULL
// 27 file <builtin-library-pthread_create> line 73 function pthread_create
// 30 file <builtin-library-pthread_create> line 81 function pthread_create
(67) pthread_create#return_value!0#1 == 0
// 33 file <builtin-library-pthread_create> line 82 function pthread_create
// 82 file ./pthread_test.c line 36 function start
// 82 file ./pthread_test.c line 36 function start
// 82 file ./pthread_test.c line 36 function start
(68) thread!0@2#1 == &t2!0@1
// 82 file ./pthread_test.c line 36 function start
(69) attr!0@2#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
// 82 file ./pthread_test.c line 36 function start
(70) start_routine!0@2#1 == dec_b
// 82 file ./pthread_test.c line 36 function start
(71) arg!0@2#1 == NULL
// 16 file <builtin-library-pthread_create> line 56 function pthread_create
// 17 file <builtin-library-pthread_create> line 57 function pthread_create
// 18 file <builtin-library-pthread_create> line 58 function pthread_create
(72) __CPROVER_next_thread_id#4 == __CPROVER_next_thread_id#3
// 18 file <builtin-library-pthread_create> line 58 function pthread_create
(73) __CPROVER_next_thread_id#5 == __CPROVER_next_thread_id#4 + 1ul
// 19 file <builtin-library-pthread_create> line 58 function pthread_create
(74) this_thread_id!0@2#2 == __CPROVER_next_thread_id#5
// 20 file <builtin-library-pthread_create> line 59 function pthread_create
(75) SHARED_READ(__CPROVER_next_thread_id#3)
// 20 file <builtin-library-pthread_create> line 59 function pthread_create
(76) SHARED_WRITE(__CPROVER_next_thread_id#5)
// 20 file <builtin-library-pthread_create> line 59 function pthread_create
// 21 file <builtin-library-pthread_create> line 62 function pthread_create
(77) SHARED_WRITE(t2!0@1#2)
// 21 file <builtin-library-pthread_create> line 62 function pthread_create
(78) t2!0@1#2 == this_thread_id!0@2#2
// 22 file <builtin-library-pthread_create> line 68 function pthread_create
// 24 file <builtin-library-pthread_create> line 70 function pthread_create
// 25 file <builtin-library-pthread_create> line 70 function pthread_create
(79) next_thread_key!0@2#2 == 0ul
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(80) thread!2@0#1 == &t2!0@1
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(81) attr!2@0#1 == ((union pthread_attr_t { char __size[56l]; signed long int __align; } *)NULL)
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(82) start_routine!2@0#1 == dec_b
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(83) arg!2@0#1 == NULL
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(84) this_thread_id!2@0#1 == this_thread_id!0@2#2
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(85) next_thread_key!2@0#1 == 0ul
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(86) __CPROVER_next_thread_key!2#1 == 0ul
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(87) __CPROVER_thread_keys!2#1 == ARRAY_OF(NULL)
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(88) __CPROVER_thread_key_dtors!2#1 == ARRAY_OF(((const void (*)(const void *))NULL))
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(89) __CPROVER_thread_id!2#1 == 0ul
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(90) dec_b#return_value!2#1 == NULL
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(91) __CPROVER_rounding_mode!2#1 == 0
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(92) pthread_create#return_value!2#1 == 0
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(93) main#return_value!2#1 == 0
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(94) start#return_value!2#1 == 0u
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(95) pthread_join#return_value!2#1 == 0
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(96) dec_a#return_value!2#1 == NULL
// 27 file <builtin-library-pthread_create> line 73 function pthread_create
// 30 file <builtin-library-pthread_create> line 81 function pthread_create
(97) pthread_create#return_value!0#2 == 0
// 33 file <builtin-library-pthread_create> line 82 function pthread_create
// 83 file ./pthread_test.c line 37 function start
// 83 file ./pthread_test.c line 37 function start
(98) SHARED_READ(t1!0@1#3)
// 83 file ./pthread_test.c line 37 function start
// 83 file ./pthread_test.c line 37 function start
(99) SHARED_READ(t1!0@1#4)
// 83 file ./pthread_test.c line 37 function start
(100) thread!0@1#1 == t1!0@1#4
// 83 file ./pthread_test.c line 37 function start
(101) value_ptr!0@1#1 == ((const void **)NULL)
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(102) SHARED_READ(__CPROVER_next_thread_id#6)
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(103) \guard#1 == !(__CPROVER_next_thread_id#6 >= thread!0@1#1)
// 35 file <builtin-library-pthread_join> line 25 function pthread_join
(104) pthread_join#return_value!0#1 == 3
      guard: \guard#1
// 36 file <builtin-library-pthread_join> line 25 function pthread_join
// 37 file <builtin-library-pthread_join> line 26 function pthread_join
// 37 file <builtin-library-pthread_join> line 26 function pthread_join
(105) \guard#2 == (thread!0@1#1 == 0ul)
// 38 file <builtin-library-pthread_join> line 26 function pthread_join
(106) pthread_join#return_value!0#2 == 35
      guard: !\guard#1 && \guard#2
// 39 file <builtin-library-pthread_join> line 26 function pthread_join
// 40 file <builtin-library-pthread_join> line 27 function pthread_join
(107) pthread_join#return_value!0#3 == 3
// 40 file <builtin-library-pthread_join> line 27 function pthread_join
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(108) SHARED_READ(__CPROVER_threads_exited#2)
      guard: !\guard#1 && !\guard#2
// 43 file <builtin-library-pthread_join> line 30 function pthread_join
(109) pthread_join#return_value!0#4 == 0
      guard: !\guard#1 && !\guard#2 && __CPROVER_threads_exited#2[(signed long int)thread!0@1#1]
// 44 file <builtin-library-pthread_join> line 31 function pthread_join
(110) pthread_join#return_value!0#5 == (\guard#2 ? 35 : 0)
// 44 file <builtin-library-pthread_join> line 31 function pthread_join
(111) pthread_join#return_value!0#6 == (\guard#1 ? 3 : pthread_join#return_value!0#5)
// 44 file <builtin-library-pthread_join> line 31 function pthread_join
// 84 file ./pthread_test.c line 38 function start
// 84 file ./pthread_test.c line 38 function start
(112) SHARED_READ(t2!0@1#3)
      guard: !\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1
// 84 file ./pthread_test.c line 38 function start
// 84 file ./pthread_test.c line 38 function start
(113) SHARED_READ(t2!0@1#4)
      guard: !\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1
// 84 file ./pthread_test.c line 38 function start
(114) thread!0@2#1 == t2!0@1#4
      guard: !\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1
// 84 file ./pthread_test.c line 38 function start
(115) value_ptr!0@2#1 == ((const void **)NULL)
      guard: !\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(116) SHARED_READ(__CPROVER_next_thread_id#7)
      guard: !\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(117) \guard#3 == !(__CPROVER_next_thread_id#7 >= thread!0@2#1)
// 35 file <builtin-library-pthread_join> line 25 function pthread_join
(118) pthread_join#return_value!0#7 == 3
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && \guard#3
// 36 file <builtin-library-pthread_join> line 25 function pthread_join
// 37 file <builtin-library-pthread_join> line 26 function pthread_join
(119) pthread_join#return_value!0#8 == pthread_join#return_value!0#6
// 37 file <builtin-library-pthread_join> line 26 function pthread_join
// 37 file <builtin-library-pthread_join> line 26 function pthread_join
(120) \guard#4 == (thread!0@2#1 == 0ul)
// 38 file <builtin-library-pthread_join> line 26 function pthread_join
(121) pthread_join#return_value!0#9 == 35
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && !\guard#3 && \guard#4
// 39 file <builtin-library-pthread_join> line 26 function pthread_join
// 40 file <builtin-library-pthread_join> line 27 function pthread_join
(122) pthread_join#return_value!0#10 == pthread_join#return_value!0#8
// 40 file <builtin-library-pthread_join> line 27 function pthread_join
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(123) SHARED_READ(__CPROVER_threads_exited#3)
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && !\guard#3 && !\guard#4
// 43 file <builtin-library-pthread_join> line 30 function pthread_join
(124) pthread_join#return_value!0#11 == 0
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && !\guard#3 && !\guard#4 && __CPROVER_threads_exited#3[(signed long int)thread!0@2#1]
// 44 file <builtin-library-pthread_join> line 31 function pthread_join
(125) pthread_join#return_value!0#12 == (\guard#4 ? 35 : 0)
// 44 file <builtin-library-pthread_join> line 31 function pthread_join
(126) pthread_join#return_value!0#13 == (\guard#3 ? 3 : pthread_join#return_value!0#12)
// 44 file <builtin-library-pthread_join> line 31 function pthread_join
// 85 file ./pthread_test.c line 39 function start
(127) SHARED_READ(a#3)
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3)
// 85 file ./pthread_test.c line 39 function start
(128) start#return_value!0#1 == a#3
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3)
// 88 file ./pthread_test.c line 40 function start
// 8 file ./pthread_test.c line 56 function main
(129) return_value_start!0@1#2 == start#return_value!0#1
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3)
// 10 file ./pthread_test.c line 56 function main
// 10 file ./pthread_test.c line 56 function main
// 10 file ./pthread_test.c line 56 function main
(130) a_in!0@1#1 == 8u
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3)
// 10 file ./pthread_test.c line 56 function main
(131) b_in!0@1#1 == 6u
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3)
// 10 file ./pthread_test.c line 56 function main
(132) gcd!0@1#1 == return_value_start!0@1#2
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3)
// 89 file ./pthread_test.c line 43 function check_gcd
// 89 file ./pthread_test.c line 43 function check_gcd
// 89 file ./pthread_test.c line 43 function check_gcd
(133) cond!0@1#1 == (signed int)(!(gcd!0@1#1 == 8u) && !(gcd!0@1#1 == 6u))
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3)
// 63 file ./pthread_test.c line 6 function __VERIFIER_assert
// 63 file ./pthread_test.c line 6 function __VERIFIER_assert
(134) \guard#5 == (cond!0@1#1 == 0)
// 64 file ./pthread_test.c line 7 function __VERIFIER_assert
(135) ASSERT(!((!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3) && \guard#5)) 
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3) && \guard#5
// 66 file ./pthread_test.c line 10 function __VERIFIER_assert
// 90 file ./pthread_test.c line 44 function check_gcd
// 11 file ./pthread_test.c line 57 function main
(136) main#return_value!0#1 == 0
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3) && !\guard#5
// 15 file ./pthread_test.c line 58 function main
// 93 file ./pthread_test.c line 46
(137) return'!0#1 == 0
      guard: (!\guard#1 && (__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] && !\guard#2 || \guard#2) || \guard#1) && (!\guard#3 && (__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] && !\guard#4 || \guard#4) || \guard#3) && !\guard#5
// 95 file ./pthread_test.c line 46
// 96 
// 28 file <builtin-library-pthread_create> line 74 function pthread_create
// 28 file <builtin-library-pthread_create> line 74 function pthread_create
// 28 file <builtin-library-pthread_create> line 74 function pthread_create
(138) this_thread_id!1@1#1 == 1ul
// 28 file <builtin-library-pthread_create> line 74 function pthread_create
(139) next_thread_key!1@1#1 == 0ul
// 28 file <builtin-library-pthread_create> line 74 function pthread_create
(140) start_routine!1@1#1 == dec_a
// 28 file <builtin-library-pthread_create> line 74 function pthread_create
(141) arg!1@1#1 == NULL
// 97 file <builtin-library-pthread_create> line 23 function __spawned_thread
(142) __CPROVER_thread_id!1#2 == 1ul
// 98 file <builtin-library-pthread_create> line 24 function __spawned_thread
(143) __CPROVER_next_thread_key!1#2 == 0ul
// 100 file <builtin-library-pthread_create> line 34 function __spawned_thread
// 101 file <builtin-library-pthread_create> line 34 function __spawned_thread
// 104 file <builtin-library-pthread_create> line 34 function __spawned_thread
// 104 file <builtin-library-pthread_create> line 34 function __spawned_thread
// 104 file <builtin-library-pthread_create> line 34 function __spawned_thread
(144) arg!1@1#1 == NULL
// 68 file ./pthread_test.c line 17 function dec_a
(145) SHARED_READ(a#4)
// 68 file ./pthread_test.c line 17 function dec_a
(146) SHARED_READ(b#3)
// 68 file ./pthread_test.c line 17 function dec_a
// 68 file ./pthread_test.c line 17 function dec_a
(147) \guard#6 == !(b#3 >= a#4)
// 69 file ./pthread_test.c line 18 function dec_a
(148) SHARED_READ(a#5)
      guard: \guard#6
// 69 file ./pthread_test.c line 18 function dec_a
(149) SHARED_READ(b#4)
      guard: \guard#6
// 69 file ./pthread_test.c line 18 function dec_a
(150) SHARED_WRITE(a#6)
      guard: \guard#6
// 69 file ./pthread_test.c line 18 function dec_a
(151) a#6 == a#5 + -b#4
      guard: \guard#6
// 70 file ./pthread_test.c line 19 function dec_a
(152) dec_a#return_value!1#2 == NULL
// 71 file ./pthread_test.c line 20 function dec_a
// 105 file <builtin-library-pthread_create> line 35 function __spawned_thread
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(153) SHARED_READ(__CPROVER_threads_exited#4)
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(154) SHARED_WRITE(__CPROVER_threads_exited#5)
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(155) __CPROVER_threads_exited#5 == __CPROVER_threads_exited#4 WITH [1l:=TRUE]
// 107 file <builtin-library-pthread_create> line 47 function __spawned_thread
// 33 file <builtin-library-pthread_create> line 82 function pthread_create
// 28 file <builtin-library-pthread_create> line 74 function pthread_create
// 28 file <builtin-library-pthread_create> line 74 function pthread_create
// 28 file <builtin-library-pthread_create> line 74 function pthread_create
(156) this_thread_id!2@1#1 == this_thread_id!2@0#1
// 28 file <builtin-library-pthread_create> line 74 function pthread_create
(157) next_thread_key!2@1#1 == 0ul
// 28 file <builtin-library-pthread_create> line 74 function pthread_create
(158) start_routine!2@1#1 == dec_b
// 28 file <builtin-library-pthread_create> line 74 function pthread_create
(159) arg!2@1#1 == NULL
// 97 file <builtin-library-pthread_create> line 23 function __spawned_thread
(160) __CPROVER_thread_id!2#2 == this_thread_id!2@1#1
// 98 file <builtin-library-pthread_create> line 24 function __spawned_thread
(161) __CPROVER_next_thread_key!2#2 == 0ul
// 100 file <builtin-library-pthread_create> line 34 function __spawned_thread
// 102 file <builtin-library-pthread_create> line 34 function __spawned_thread
// 102 file <builtin-library-pthread_create> line 34 function __spawned_thread
// 102 file <builtin-library-pthread_create> line 34 function __spawned_thread
(162) arg!2@1#1 == NULL
// 73 file ./pthread_test.c line 25 function dec_b
(163) SHARED_READ(b#5)
// 73 file ./pthread_test.c line 25 function dec_b
(164) SHARED_READ(a#7)
// 73 file ./pthread_test.c line 25 function dec_b
// 73 file ./pthread_test.c line 25 function dec_b
(165) \guard#7 == !(a#7 >= b#5)
// 74 file ./pthread_test.c line 26 function dec_b
(166) SHARED_READ(b#6)
      guard: \guard#7
// 74 file ./pthread_test.c line 26 function dec_b
(167) SHARED_READ(a#8)
      guard: \guard#7
// 74 file ./pthread_test.c line 26 function dec_b
(168) SHARED_WRITE(b#7)
      guard: \guard#7
// 74 file ./pthread_test.c line 26 function dec_b
(169) b#7 == b#6 + -a#8
      guard: \guard#7
// 75 file ./pthread_test.c line 27 function dec_b
(170) dec_b#return_value!2#2 == NULL
// 76 file ./pthread_test.c line 28 function dec_b
// 103 file <builtin-library-pthread_create> line 34 function __spawned_thread
// 105 file <builtin-library-pthread_create> line 35 function __spawned_thread
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(171) SHARED_READ(__CPROVER_threads_exited#6)
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(172) SHARED_WRITE(__CPROVER_threads_exited#7)
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(173) __CPROVER_threads_exited#7 == __CPROVER_threads_exited#6 WITH [(signed long int)this_thread_id!2@1#1:=TRUE]
// 107 file <builtin-library-pthread_create> line 47 function __spawned_thread
// 33 file <builtin-library-pthread_create> line 82 function pthread_create
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(174) CONSTRAINT(!choice_rf0 || __CPROVER_threads_exited#2 == __CPROVER_threads_exited#1) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(175) CONSTRAINT(!choice_rf1 || __CPROVER_threads_exited#2 == __CPROVER_threads_exited#5) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(176) CONSTRAINT(!choice_rf1 || !(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#2$rclk$8)) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(177) CONSTRAINT(!choice_rf2 || __CPROVER_threads_exited#2 == __CPROVER_threads_exited#7) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(178) CONSTRAINT(!choice_rf2 || !(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#2$rclk$8)) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(179) CONSTRAINT(\guard#1 || \guard#2 || choice_rf0 || choice_rf1 || choice_rf2) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(180) CONSTRAINT(!choice_rf3 || __CPROVER_threads_exited#3 == __CPROVER_threads_exited#1) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(181) CONSTRAINT(!choice_rf4 || __CPROVER_threads_exited#3 == __CPROVER_threads_exited#5) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(182) CONSTRAINT(!choice_rf4 || !(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#3$rclk$8)) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(183) CONSTRAINT(!choice_rf5 || __CPROVER_threads_exited#3 == __CPROVER_threads_exited#7) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(184) CONSTRAINT(!choice_rf5 || !(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#3$rclk$8)) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(185) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || \guard#3 || \guard#4 || choice_rf3 || choice_rf4 || choice_rf5) 
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(186) CONSTRAINT(!choice_rf6 || __CPROVER_threads_exited#4 == __CPROVER_threads_exited#1) 
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(187) CONSTRAINT(!choice_rf6 || !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#4$rclk$8)) 
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(188) CONSTRAINT(!choice_rf7 || __CPROVER_threads_exited#4 == __CPROVER_threads_exited#7) 
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(189) CONSTRAINT(!choice_rf7 || !(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#4$rclk$8)) 
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(190) CONSTRAINT(choice_rf6 || choice_rf7) 
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(191) CONSTRAINT(!choice_rf8 || __CPROVER_threads_exited#6 == __CPROVER_threads_exited#1) 
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(192) CONSTRAINT(!choice_rf8 || !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#6$rclk$8)) 
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(193) CONSTRAINT(!choice_rf9 || __CPROVER_threads_exited#6 == __CPROVER_threads_exited#5) 
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(194) CONSTRAINT(!choice_rf9 || !(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#6$rclk$8)) 
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(195) CONSTRAINT(choice_rf8 || choice_rf9) 
// 20 file <builtin-library-pthread_create> line 59 function pthread_create
(196) CONSTRAINT(!choice_rf10 || __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#1) 
// 20 file <builtin-library-pthread_create> line 59 function pthread_create
(197) CONSTRAINT(!choice_rf11 || __CPROVER_next_thread_id#3 == __CPROVER_next_thread_id#2) 
// 20 file <builtin-library-pthread_create> line 59 function pthread_create
(198) CONSTRAINT(choice_rf10 || choice_rf11) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(199) CONSTRAINT(!choice_rf12 || __CPROVER_next_thread_id#6 == __CPROVER_next_thread_id#1) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(200) CONSTRAINT(!choice_rf13 || __CPROVER_next_thread_id#6 == __CPROVER_next_thread_id#2) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(201) CONSTRAINT(!choice_rf14 || __CPROVER_next_thread_id#6 == __CPROVER_next_thread_id#5) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(202) CONSTRAINT(choice_rf12 || choice_rf13 || choice_rf14) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(203) CONSTRAINT(!choice_rf15 || __CPROVER_next_thread_id#7 == __CPROVER_next_thread_id#1) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(204) CONSTRAINT(!choice_rf16 || __CPROVER_next_thread_id#7 == __CPROVER_next_thread_id#2) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(205) CONSTRAINT(!choice_rf17 || __CPROVER_next_thread_id#7 == __CPROVER_next_thread_id#5) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(206) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf15 || choice_rf16 || choice_rf17) 
// 85 file ./pthread_test.c line 39 function start
(207) CONSTRAINT(!choice_rf18 || a#3 == a#1) 
// 85 file ./pthread_test.c line 39 function start
(208) CONSTRAINT(!choice_rf19 || a#3 == a#2) 
// 85 file ./pthread_test.c line 39 function start
(209) CONSTRAINT(!choice_rf20 || \guard#6 && a#3 == a#6) 
// 85 file ./pthread_test.c line 39 function start
(210) CONSTRAINT(!choice_rf20 || !(a#6$wclk$8 >= a#3$rclk$8)) 
// 85 file ./pthread_test.c line 39 function start
(211) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] || \guard#4) && !\guard#4) && !\guard#3 || choice_rf18 || choice_rf19 || choice_rf20) 
// 68 file ./pthread_test.c line 17 function dec_a
(212) CONSTRAINT(!choice_rf21 || a#4 == a#1) 
// 68 file ./pthread_test.c line 17 function dec_a
(213) CONSTRAINT(!choice_rf21 || !(a#1$wclk$8 >= a#4$rclk$8)) 
// 68 file ./pthread_test.c line 17 function dec_a
(214) CONSTRAINT(!choice_rf22 || a#4 == a#2) 
// 68 file ./pthread_test.c line 17 function dec_a
(215) CONSTRAINT(!choice_rf22 || !(a#2$wclk$8 >= a#4$rclk$8)) 
// 68 file ./pthread_test.c line 17 function dec_a
(216) CONSTRAINT(choice_rf21 || choice_rf22) 
// 69 file ./pthread_test.c line 18 function dec_a
(217) CONSTRAINT(!choice_rf23 || a#5 == a#1) 
// 69 file ./pthread_test.c line 18 function dec_a
(218) CONSTRAINT(!choice_rf23 || !(a#1$wclk$8 >= a#5$rclk$8)) 
// 69 file ./pthread_test.c line 18 function dec_a
(219) CONSTRAINT(!choice_rf24 || a#5 == a#2) 
// 69 file ./pthread_test.c line 18 function dec_a
(220) CONSTRAINT(!choice_rf24 || !(a#2$wclk$8 >= a#5$rclk$8)) 
// 69 file ./pthread_test.c line 18 function dec_a
(221) CONSTRAINT(!\guard#6 || choice_rf23 || choice_rf24) 
// 73 file ./pthread_test.c line 25 function dec_b
(222) CONSTRAINT(!choice_rf25 || a#7 == a#1) 
// 73 file ./pthread_test.c line 25 function dec_b
(223) CONSTRAINT(!choice_rf25 || !(a#1$wclk$8 >= a#7$rclk$8)) 
// 73 file ./pthread_test.c line 25 function dec_b
(224) CONSTRAINT(!choice_rf26 || a#7 == a#2) 
// 73 file ./pthread_test.c line 25 function dec_b
(225) CONSTRAINT(!choice_rf26 || !(a#2$wclk$8 >= a#7$rclk$8)) 
// 73 file ./pthread_test.c line 25 function dec_b
(226) CONSTRAINT(!choice_rf27 || \guard#6 && a#7 == a#6) 
// 73 file ./pthread_test.c line 25 function dec_b
(227) CONSTRAINT(!choice_rf27 || !(a#6$wclk$8 >= a#7$rclk$8)) 
// 73 file ./pthread_test.c line 25 function dec_b
(228) CONSTRAINT(choice_rf25 || choice_rf26 || choice_rf27) 
// 74 file ./pthread_test.c line 26 function dec_b
(229) CONSTRAINT(!choice_rf28 || a#8 == a#1) 
// 74 file ./pthread_test.c line 26 function dec_b
(230) CONSTRAINT(!choice_rf28 || !(a#1$wclk$8 >= a#8$rclk$8)) 
// 74 file ./pthread_test.c line 26 function dec_b
(231) CONSTRAINT(!choice_rf29 || a#8 == a#2) 
// 74 file ./pthread_test.c line 26 function dec_b
(232) CONSTRAINT(!choice_rf29 || !(a#2$wclk$8 >= a#8$rclk$8)) 
// 74 file ./pthread_test.c line 26 function dec_b
(233) CONSTRAINT(!choice_rf30 || \guard#6 && a#8 == a#6) 
// 74 file ./pthread_test.c line 26 function dec_b
(234) CONSTRAINT(!choice_rf30 || !(a#6$wclk$8 >= a#8$rclk$8)) 
// 74 file ./pthread_test.c line 26 function dec_b
(235) CONSTRAINT(!\guard#7 || choice_rf28 || choice_rf29 || choice_rf30) 
// 68 file ./pthread_test.c line 17 function dec_a
(236) CONSTRAINT(!choice_rf31 || b#3 == b#1) 
// 68 file ./pthread_test.c line 17 function dec_a
(237) CONSTRAINT(!choice_rf31 || !(b#1$wclk$8 >= b#3$rclk$8)) 
// 68 file ./pthread_test.c line 17 function dec_a
(238) CONSTRAINT(!choice_rf32 || b#3 == b#2) 
// 68 file ./pthread_test.c line 17 function dec_a
(239) CONSTRAINT(!choice_rf32 || !(b#2$wclk$8 >= b#3$rclk$8)) 
// 68 file ./pthread_test.c line 17 function dec_a
(240) CONSTRAINT(!choice_rf33 || \guard#7 && b#3 == b#7) 
// 68 file ./pthread_test.c line 17 function dec_a
(241) CONSTRAINT(!choice_rf33 || !(b#7$wclk$8 >= b#3$rclk$8)) 
// 68 file ./pthread_test.c line 17 function dec_a
(242) CONSTRAINT(choice_rf31 || choice_rf32 || choice_rf33) 
// 69 file ./pthread_test.c line 18 function dec_a
(243) CONSTRAINT(!choice_rf34 || b#4 == b#1) 
// 69 file ./pthread_test.c line 18 function dec_a
(244) CONSTRAINT(!choice_rf34 || !(b#1$wclk$8 >= b#4$rclk$8)) 
// 69 file ./pthread_test.c line 18 function dec_a
(245) CONSTRAINT(!choice_rf35 || b#4 == b#2) 
// 69 file ./pthread_test.c line 18 function dec_a
(246) CONSTRAINT(!choice_rf35 || !(b#2$wclk$8 >= b#4$rclk$8)) 
// 69 file ./pthread_test.c line 18 function dec_a
(247) CONSTRAINT(!choice_rf36 || \guard#7 && b#4 == b#7) 
// 69 file ./pthread_test.c line 18 function dec_a
(248) CONSTRAINT(!choice_rf36 || !(b#7$wclk$8 >= b#4$rclk$8)) 
// 69 file ./pthread_test.c line 18 function dec_a
(249) CONSTRAINT(!\guard#6 || choice_rf34 || choice_rf35 || choice_rf36) 
// 73 file ./pthread_test.c line 25 function dec_b
(250) CONSTRAINT(!choice_rf37 || b#5 == b#1) 
// 73 file ./pthread_test.c line 25 function dec_b
(251) CONSTRAINT(!choice_rf37 || !(b#1$wclk$8 >= b#5$rclk$8)) 
// 73 file ./pthread_test.c line 25 function dec_b
(252) CONSTRAINT(!choice_rf38 || b#5 == b#2) 
// 73 file ./pthread_test.c line 25 function dec_b
(253) CONSTRAINT(!choice_rf38 || !(b#2$wclk$8 >= b#5$rclk$8)) 
// 73 file ./pthread_test.c line 25 function dec_b
(254) CONSTRAINT(choice_rf37 || choice_rf38) 
// 74 file ./pthread_test.c line 26 function dec_b
(255) CONSTRAINT(!choice_rf39 || b#6 == b#1) 
// 74 file ./pthread_test.c line 26 function dec_b
(256) CONSTRAINT(!choice_rf39 || !(b#1$wclk$8 >= b#6$rclk$8)) 
// 74 file ./pthread_test.c line 26 function dec_b
(257) CONSTRAINT(!choice_rf40 || b#6 == b#2) 
// 74 file ./pthread_test.c line 26 function dec_b
(258) CONSTRAINT(!choice_rf40 || !(b#2$wclk$8 >= b#6$rclk$8)) 
// 74 file ./pthread_test.c line 26 function dec_b
(259) CONSTRAINT(!\guard#7 || choice_rf39 || choice_rf40) 
// 83 file ./pthread_test.c line 37 function start
(260) CONSTRAINT(!choice_rf41 || t1!0@1#3 == t1!0@1#1) 
// 83 file ./pthread_test.c line 37 function start
(261) CONSTRAINT(!choice_rf42 || t1!0@1#3 == t1!0@1#2) 
// 83 file ./pthread_test.c line 37 function start
(262) CONSTRAINT(choice_rf41 || choice_rf42) 
// 83 file ./pthread_test.c line 37 function start
(263) CONSTRAINT(!choice_rf43 || t1!0@1#4 == t1!0@1#1) 
// 83 file ./pthread_test.c line 37 function start
(264) CONSTRAINT(!choice_rf44 || t1!0@1#4 == t1!0@1#2) 
// 83 file ./pthread_test.c line 37 function start
(265) CONSTRAINT(choice_rf43 || choice_rf44) 
// 84 file ./pthread_test.c line 38 function start
(266) CONSTRAINT(!choice_rf45 || t2!0@1#3 == t2!0@1#1) 
// 84 file ./pthread_test.c line 38 function start
(267) CONSTRAINT(!choice_rf46 || t2!0@1#3 == t2!0@1#2) 
// 84 file ./pthread_test.c line 38 function start
(268) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf45 || choice_rf46) 
// 84 file ./pthread_test.c line 38 function start
(269) CONSTRAINT(!choice_rf47 || t2!0@1#4 == t2!0@1#1) 
// 84 file ./pthread_test.c line 38 function start
(270) CONSTRAINT(!choice_rf48 || t2!0@1#4 == t2!0@1#2) 
// 84 file ./pthread_test.c line 38 function start
(271) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || choice_rf47 || choice_rf48) 
// 59 file <built-in-additions> line 7
(272) CONSTRAINT(!choice_ws-ext49 || !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#5$wclk$8)) 
// 59 file <built-in-additions> line 7
(273) CONSTRAINT(choice_ws-ext49 || !(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#1$wclk$8)) 
// 59 file <built-in-additions> line 7
(274) CONSTRAINT(!choice_ws-ext50 || !(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#7$wclk$8)) 
// 59 file <built-in-additions> line 7
(275) CONSTRAINT(choice_ws-ext50 || !(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#1$wclk$8)) 
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(276) CONSTRAINT(!choice_ws-ext51 || !(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#7$wclk$8)) 
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(277) CONSTRAINT(choice_ws-ext51 || !(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#5$wclk$8)) 
// 60 file ./pthread_test.c line 13
(278) CONSTRAINT(!choice_ws-ext52 || !(a#1$wclk$8 >= a#6$wclk$8)) 
// 60 file ./pthread_test.c line 13
(279) CONSTRAINT(choice_ws-ext52 || !(a#6$wclk$8 >= a#1$wclk$8)) 
// 77 file ./pthread_test.c line 32 function start
(280) CONSTRAINT(!choice_ws-ext53 || !(a#2$wclk$8 >= a#6$wclk$8)) 
// 77 file ./pthread_test.c line 32 function start
(281) CONSTRAINT(choice_ws-ext53 || !(a#6$wclk$8 >= a#2$wclk$8)) 
// 61 file ./pthread_test.c line 13
(282) CONSTRAINT(!choice_ws-ext54 || !(b#1$wclk$8 >= b#7$wclk$8)) 
// 61 file ./pthread_test.c line 13
(283) CONSTRAINT(choice_ws-ext54 || !(b#7$wclk$8 >= b#1$wclk$8)) 
// 78 file ./pthread_test.c line 33 function start
(284) CONSTRAINT(!choice_ws-ext55 || !(b#2$wclk$8 >= b#7$wclk$8)) 
// 78 file ./pthread_test.c line 33 function start
(285) CONSTRAINT(choice_ws-ext55 || !(b#7$wclk$8 >= b#2$wclk$8)) 
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(286) CONSTRAINT(!(t1$18$spwnclk$8 >= a#4$rclk$8)) 
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(287) CONSTRAINT(!(t1$18$spwnclk$8 >= b#3$rclk$8)) 
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(288) CONSTRAINT(!(t1$18$spwnclk$8 >= a#5$rclk$8)) 
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(289) CONSTRAINT(!(t1$18$spwnclk$8 >= b#4$rclk$8)) 
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(290) CONSTRAINT(!(t1$18$spwnclk$8 >= a#6$wclk$8)) 
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(291) CONSTRAINT(!(t1$18$spwnclk$8 >= __CPROVER_threads_exited#4$rclk$8)) 
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(292) CONSTRAINT(!(t1$18$spwnclk$8 >= __CPROVER_threads_exited#5$wclk$8)) 
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(293) CONSTRAINT(!(t1$22$spwnclk$8 >= b#5$rclk$8)) 
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(294) CONSTRAINT(!(t1$22$spwnclk$8 >= a#7$rclk$8)) 
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(295) CONSTRAINT(!(t1$22$spwnclk$8 >= b#6$rclk$8)) 
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(296) CONSTRAINT(!(t1$22$spwnclk$8 >= a#8$rclk$8)) 
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(297) CONSTRAINT(!(t1$22$spwnclk$8 >= b#7$wclk$8)) 
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(298) CONSTRAINT(!(t1$22$spwnclk$8 >= __CPROVER_threads_exited#6$rclk$8)) 
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(299) CONSTRAINT(!(t1$22$spwnclk$8 >= __CPROVER_threads_exited#7$wclk$8)) 
// 46 file <built-in-additions> line 14
(300) CONSTRAINT(!(__CPROVER_alloca_object#1$wclk$8 >= __CPROVER_dead_object#1$wclk$8)) 
// 47 file <built-in-additions> line 13
(301) CONSTRAINT(!(__CPROVER_dead_object#1$wclk$8 >= __CPROVER_deallocated#1$wclk$8)) 
// 48 file <built-in-additions> line 17
(302) CONSTRAINT(!(__CPROVER_deallocated#1$wclk$8 >= __CPROVER_malloc_is_new_array#1$wclk$8)) 
// 49 file <built-in-additions> line 15
(303) CONSTRAINT(!(__CPROVER_malloc_is_new_array#1$wclk$8 >= __CPROVER_malloc_object#1$wclk$8)) 
// 50 file <built-in-additions> line 16
(304) CONSTRAINT(!(__CPROVER_malloc_object#1$wclk$8 >= __CPROVER_malloc_size#1$wclk$8)) 
// 51 file <built-in-additions> line 18
(305) CONSTRAINT(!(__CPROVER_malloc_size#1$wclk$8 >= __CPROVER_memory_leak#1$wclk$8)) 
// 52 file <built-in-additions> line 8
(306) CONSTRAINT(!(__CPROVER_memory_leak#1$wclk$8 >= __CPROVER_next_thread_id#1$wclk$8)) 
// 54 file <built-in-additions> line 33
(307) CONSTRAINT(!(__CPROVER_next_thread_id#1$wclk$8 >= __CPROVER_pipe_count#1$wclk$8)) 
// 59 file <built-in-additions> line 7
(308) CONSTRAINT(!(__CPROVER_pipe_count#1$wclk$8 >= __CPROVER_threads_exited#1$wclk$8)) 
// 60 file ./pthread_test.c line 13
(309) CONSTRAINT(!(__CPROVER_threads_exited#1$wclk$8 >= a#1$wclk$8)) 
// 61 file ./pthread_test.c line 13
(310) CONSTRAINT(!(a#1$wclk$8 >= b#1$wclk$8)) 
// 77 file ./pthread_test.c line 32 function start
(311) CONSTRAINT(!(b#1$wclk$8 >= a#2$wclk$8)) 
// 78 file ./pthread_test.c line 33 function start
(312) CONSTRAINT(!(a#2$wclk$8 >= b#2$wclk$8)) 
// 79 file ./pthread_test.c line 34 function start
(313) CONSTRAINT(!(b#2$wclk$8 >= t1!0@1#1$wclk$8)) 
// 80 file ./pthread_test.c line 34 function start
(314) CONSTRAINT(!(t1!0@1#1$wclk$8 >= t2!0@1#1$wclk$8)) 
// 20 file <builtin-library-pthread_create> line 59 function pthread_create
(315) CONSTRAINT(!(t2!0@1#1$wclk$8 >= __CPROVER_next_thread_id#2$wclk$8)) 
// 21 file <builtin-library-pthread_create> line 62 function pthread_create
(316) CONSTRAINT(!(__CPROVER_next_thread_id#2$wclk$8 >= t1!0@1#2$wclk$8)) 
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(317) CONSTRAINT(!(t1!0@1#2$wclk$8 >= t1$18$spwnclk$8)) 
// 20 file <builtin-library-pthread_create> line 59 function pthread_create
(318) CONSTRAINT(!(t1$18$spwnclk$8 >= __CPROVER_next_thread_id#3$rclk$8)) 
// 20 file <builtin-library-pthread_create> line 59 function pthread_create
(319) CONSTRAINT(__CPROVER_next_thread_id#3$rclk$8 == __CPROVER_next_thread_id#5$wclk$8) 
// 21 file <builtin-library-pthread_create> line 62 function pthread_create
(320) CONSTRAINT(!(__CPROVER_next_thread_id#5$wclk$8 >= t2!0@1#2$wclk$8)) 
// 26 file <builtin-library-pthread_create> line 73 function pthread_create
(321) CONSTRAINT(!(t2!0@1#2$wclk$8 >= t1$22$spwnclk$8)) 
// 83 file ./pthread_test.c line 37 function start
(322) CONSTRAINT(!(t1$22$spwnclk$8 >= t1!0@1#3$rclk$8)) 
// 83 file ./pthread_test.c line 37 function start
(323) CONSTRAINT(!(t1!0@1#3$rclk$8 >= t1!0@1#4$rclk$8)) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(324) CONSTRAINT(!(t1!0@1#4$rclk$8 >= __CPROVER_next_thread_id#6$rclk$8)) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(325) CONSTRAINT(!(__CPROVER_next_thread_id#6$rclk$8 >= __CPROVER_threads_exited#2$rclk$8)) 
// 84 file ./pthread_test.c line 38 function start
(326) CONSTRAINT(!(__CPROVER_threads_exited#2$rclk$8 >= t2!0@1#3$rclk$8)) 
// 84 file ./pthread_test.c line 38 function start
(327) CONSTRAINT(!(t2!0@1#3$rclk$8 >= t2!0@1#4$rclk$8)) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(328) CONSTRAINT(!(t2!0@1#4$rclk$8 >= __CPROVER_next_thread_id#7$rclk$8)) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(329) CONSTRAINT(!(__CPROVER_next_thread_id#7$rclk$8 >= __CPROVER_threads_exited#3$rclk$8)) 
// 85 file ./pthread_test.c line 39 function start
(330) CONSTRAINT(!(__CPROVER_threads_exited#3$rclk$8 >= a#3$rclk$8)) 
// 68 file ./pthread_test.c line 17 function dec_a
(331) CONSTRAINT(!(a#4$rclk$8 >= b#3$rclk$8)) 
// 69 file ./pthread_test.c line 18 function dec_a
(332) CONSTRAINT(!(b#3$rclk$8 >= a#5$rclk$8)) 
// 69 file ./pthread_test.c line 18 function dec_a
(333) CONSTRAINT(!(a#5$rclk$8 >= b#4$rclk$8)) 
// 69 file ./pthread_test.c line 18 function dec_a
(334) CONSTRAINT(!(b#4$rclk$8 >= a#6$wclk$8)) 
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(335) CONSTRAINT(!(a#6$wclk$8 >= __CPROVER_threads_exited#4$rclk$8)) 
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(336) CONSTRAINT(!(__CPROVER_threads_exited#4$rclk$8 >= __CPROVER_threads_exited#5$wclk$8)) 
// 73 file ./pthread_test.c line 25 function dec_b
(337) CONSTRAINT(!(b#5$rclk$8 >= a#7$rclk$8)) 
// 74 file ./pthread_test.c line 26 function dec_b
(338) CONSTRAINT(!(a#7$rclk$8 >= b#6$rclk$8)) 
// 74 file ./pthread_test.c line 26 function dec_b
(339) CONSTRAINT(!(b#6$rclk$8 >= a#8$rclk$8)) 
// 74 file ./pthread_test.c line 26 function dec_b
(340) CONSTRAINT(!(a#8$rclk$8 >= b#7$wclk$8)) 
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(341) CONSTRAINT(!(b#7$wclk$8 >= __CPROVER_threads_exited#6$rclk$8)) 
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(342) CONSTRAINT(!(__CPROVER_threads_exited#6$rclk$8 >= __CPROVER_threads_exited#7$wclk$8)) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(343) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || \guard#3 || \guard#4 || __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !choice_rf3 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#5$wclk$8)) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(344) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || \guard#3 || \guard#4 || __CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !choice_rf4 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#1$wclk$8)) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(345) CONSTRAINT(\guard#1 || \guard#2 || __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !choice_rf0 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#5$wclk$8)) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(346) CONSTRAINT(\guard#1 || \guard#2 || __CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !choice_rf1 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#1$wclk$8)) 
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(347) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !choice_rf8 || !(__CPROVER_threads_exited#6$rclk$8 >= __CPROVER_threads_exited#5$wclk$8)) 
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(348) CONSTRAINT(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !choice_rf9 || !(__CPROVER_threads_exited#6$rclk$8 >= __CPROVER_threads_exited#1$wclk$8)) 
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(349) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !choice_rf6 || !(__CPROVER_threads_exited#4$rclk$8 >= __CPROVER_threads_exited#5$wclk$8)) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(350) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || \guard#3 || \guard#4 || __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !choice_rf3 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#7$wclk$8)) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(351) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || \guard#3 || \guard#4 || __CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !choice_rf5 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#1$wclk$8)) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(352) CONSTRAINT(\guard#1 || \guard#2 || __CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !choice_rf0 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#7$wclk$8)) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(353) CONSTRAINT(\guard#1 || \guard#2 || __CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !choice_rf2 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#1$wclk$8)) 
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(354) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !choice_rf8 || !(__CPROVER_threads_exited#6$rclk$8 >= __CPROVER_threads_exited#7$wclk$8)) 
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(355) CONSTRAINT(__CPROVER_threads_exited#1$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !choice_rf6 || !(__CPROVER_threads_exited#4$rclk$8 >= __CPROVER_threads_exited#7$wclk$8)) 
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(356) CONSTRAINT(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#1$wclk$8 || !choice_rf7 || !(__CPROVER_threads_exited#4$rclk$8 >= __CPROVER_threads_exited#1$wclk$8)) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(357) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || \guard#3 || \guard#4 || __CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !choice_rf4 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#7$wclk$8)) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(358) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || \guard#3 || \guard#4 || __CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !choice_rf5 || !(__CPROVER_threads_exited#3$rclk$8 >= __CPROVER_threads_exited#5$wclk$8)) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(359) CONSTRAINT(\guard#1 || \guard#2 || __CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !choice_rf1 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#7$wclk$8)) 
// 42 file <builtin-library-pthread_join> line 28 function pthread_join
(360) CONSTRAINT(\guard#1 || \guard#2 || __CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !choice_rf2 || !(__CPROVER_threads_exited#2$rclk$8 >= __CPROVER_threads_exited#5$wclk$8)) 
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(361) CONSTRAINT(__CPROVER_threads_exited#5$wclk$8 >= __CPROVER_threads_exited#7$wclk$8 || !choice_rf9 || !(__CPROVER_threads_exited#6$rclk$8 >= __CPROVER_threads_exited#7$wclk$8)) 
// 106 file <builtin-library-pthread_create> line 46 function __spawned_thread
(362) CONSTRAINT(__CPROVER_threads_exited#7$wclk$8 >= __CPROVER_threads_exited#5$wclk$8 || !choice_rf7 || !(__CPROVER_threads_exited#4$rclk$8 >= __CPROVER_threads_exited#5$wclk$8)) 
// 20 file <builtin-library-pthread_create> line 59 function pthread_create
(363) CONSTRAINT(!choice_rf10 || !(__CPROVER_next_thread_id#3$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8)) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(364) CONSTRAINT(!choice_rf12 || !(__CPROVER_next_thread_id#6$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8)) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(365) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !choice_rf15 || !(__CPROVER_next_thread_id#7$rclk$8 >= __CPROVER_next_thread_id#2$wclk$8)) 
// 20 file <builtin-library-pthread_create> line 59 function pthread_create
(366) CONSTRAINT(!choice_rf10 || __CPROVER_next_thread_id#3$rclk$8 == __CPROVER_next_thread_id#5$wclk$8) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(367) CONSTRAINT(!choice_rf12 || !(__CPROVER_next_thread_id#6$rclk$8 >= __CPROVER_next_thread_id#5$wclk$8)) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(368) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !choice_rf15 || !(__CPROVER_next_thread_id#7$rclk$8 >= __CPROVER_next_thread_id#5$wclk$8)) 
// 20 file <builtin-library-pthread_create> line 59 function pthread_create
(369) CONSTRAINT(!choice_rf11 || __CPROVER_next_thread_id#3$rclk$8 == __CPROVER_next_thread_id#5$wclk$8) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(370) CONSTRAINT(!choice_rf13 || !(__CPROVER_next_thread_id#6$rclk$8 >= __CPROVER_next_thread_id#5$wclk$8)) 
// 34 file <builtin-library-pthread_join> line 25 function pthread_join
(371) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !choice_rf16 || !(__CPROVER_next_thread_id#7$rclk$8 >= __CPROVER_next_thread_id#5$wclk$8)) 
// 74 file ./pthread_test.c line 26 function dec_b
(372) CONSTRAINT(!\guard#7 || !choice_rf28 || !(a#8$rclk$8 >= a#2$wclk$8)) 
// 68 file ./pthread_test.c line 17 function dec_a
(373) CONSTRAINT(!choice_rf21 || !(a#4$rclk$8 >= a#2$wclk$8)) 
// 73 file ./pthread_test.c line 25 function dec_b
(374) CONSTRAINT(!choice_rf25 || !(a#7$rclk$8 >= a#2$wclk$8)) 
// 85 file ./pthread_test.c line 39 function start
(375) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] || \guard#4) && !\guard#4) && !\guard#3 || !choice_rf18 || !(a#3$rclk$8 >= a#2$wclk$8)) 
// 69 file ./pthread_test.c line 18 function dec_a
(376) CONSTRAINT(!\guard#6 || !choice_rf23 || !(a#5$rclk$8 >= a#2$wclk$8)) 
// 74 file ./pthread_test.c line 26 function dec_b
(377) CONSTRAINT(!\guard#7 || !\guard#6 || a#1$wclk$8 >= a#6$wclk$8 || !choice_rf28 || !(a#8$rclk$8 >= a#6$wclk$8)) 
// 74 file ./pthread_test.c line 26 function dec_b
(378) CONSTRAINT(!\guard#7 || a#6$wclk$8 >= a#1$wclk$8 || !choice_rf30 || !(a#8$rclk$8 >= a#1$wclk$8)) 
// 68 file ./pthread_test.c line 17 function dec_a
(379) CONSTRAINT(!\guard#6 || a#1$wclk$8 >= a#6$wclk$8 || !choice_rf21 || !(a#4$rclk$8 >= a#6$wclk$8)) 
// 73 file ./pthread_test.c line 25 function dec_b
(380) CONSTRAINT(!\guard#6 || a#1$wclk$8 >= a#6$wclk$8 || !choice_rf25 || !(a#7$rclk$8 >= a#6$wclk$8)) 
// 73 file ./pthread_test.c line 25 function dec_b
(381) CONSTRAINT(a#6$wclk$8 >= a#1$wclk$8 || !choice_rf27 || !(a#7$rclk$8 >= a#1$wclk$8)) 
// 85 file ./pthread_test.c line 39 function start
(382) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] || \guard#4) && !\guard#4) && !\guard#3 || !\guard#6 || a#1$wclk$8 >= a#6$wclk$8 || !choice_rf18 || !(a#3$rclk$8 >= a#6$wclk$8)) 
// 85 file ./pthread_test.c line 39 function start
(383) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] || \guard#4) && !\guard#4) && !\guard#3 || a#6$wclk$8 >= a#1$wclk$8 || !choice_rf20 || !(a#3$rclk$8 >= a#1$wclk$8)) 
// 69 file ./pthread_test.c line 18 function dec_a
(384) CONSTRAINT(!\guard#6 || a#1$wclk$8 >= a#6$wclk$8 || !choice_rf23 || !(a#5$rclk$8 >= a#6$wclk$8)) 
// 74 file ./pthread_test.c line 26 function dec_b
(385) CONSTRAINT(!\guard#7 || !\guard#6 || a#2$wclk$8 >= a#6$wclk$8 || !choice_rf29 || !(a#8$rclk$8 >= a#6$wclk$8)) 
// 74 file ./pthread_test.c line 26 function dec_b
(386) CONSTRAINT(!\guard#7 || a#6$wclk$8 >= a#2$wclk$8 || !choice_rf30 || !(a#8$rclk$8 >= a#2$wclk$8)) 
// 68 file ./pthread_test.c line 17 function dec_a
(387) CONSTRAINT(!\guard#6 || a#2$wclk$8 >= a#6$wclk$8 || !choice_rf22 || !(a#4$rclk$8 >= a#6$wclk$8)) 
// 73 file ./pthread_test.c line 25 function dec_b
(388) CONSTRAINT(!\guard#6 || a#2$wclk$8 >= a#6$wclk$8 || !choice_rf26 || !(a#7$rclk$8 >= a#6$wclk$8)) 
// 73 file ./pthread_test.c line 25 function dec_b
(389) CONSTRAINT(a#6$wclk$8 >= a#2$wclk$8 || !choice_rf27 || !(a#7$rclk$8 >= a#2$wclk$8)) 
// 85 file ./pthread_test.c line 39 function start
(390) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] || \guard#4) && !\guard#4) && !\guard#3 || !\guard#6 || a#2$wclk$8 >= a#6$wclk$8 || !choice_rf19 || !(a#3$rclk$8 >= a#6$wclk$8)) 
// 85 file ./pthread_test.c line 39 function start
(391) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || (\guard#3 || (!__CPROVER_threads_exited#3[(signed long int)thread!0@2#1] || \guard#4) && !\guard#4) && !\guard#3 || a#6$wclk$8 >= a#2$wclk$8 || !choice_rf20 || !(a#3$rclk$8 >= a#2$wclk$8)) 
// 69 file ./pthread_test.c line 18 function dec_a
(392) CONSTRAINT(!\guard#6 || a#2$wclk$8 >= a#6$wclk$8 || !choice_rf24 || !(a#5$rclk$8 >= a#6$wclk$8)) 
// 68 file ./pthread_test.c line 17 function dec_a
(393) CONSTRAINT(!choice_rf31 || !(b#3$rclk$8 >= b#2$wclk$8)) 
// 73 file ./pthread_test.c line 25 function dec_b
(394) CONSTRAINT(!choice_rf37 || !(b#5$rclk$8 >= b#2$wclk$8)) 
// 69 file ./pthread_test.c line 18 function dec_a
(395) CONSTRAINT(!\guard#6 || !choice_rf34 || !(b#4$rclk$8 >= b#2$wclk$8)) 
// 74 file ./pthread_test.c line 26 function dec_b
(396) CONSTRAINT(!\guard#7 || !choice_rf39 || !(b#6$rclk$8 >= b#2$wclk$8)) 
// 68 file ./pthread_test.c line 17 function dec_a
(397) CONSTRAINT(!\guard#7 || b#1$wclk$8 >= b#7$wclk$8 || !choice_rf31 || !(b#3$rclk$8 >= b#7$wclk$8)) 
// 68 file ./pthread_test.c line 17 function dec_a
(398) CONSTRAINT(b#7$wclk$8 >= b#1$wclk$8 || !choice_rf33 || !(b#3$rclk$8 >= b#1$wclk$8)) 
// 73 file ./pthread_test.c line 25 function dec_b
(399) CONSTRAINT(!\guard#7 || b#1$wclk$8 >= b#7$wclk$8 || !choice_rf37 || !(b#5$rclk$8 >= b#7$wclk$8)) 
// 69 file ./pthread_test.c line 18 function dec_a
(400) CONSTRAINT(!\guard#6 || !\guard#7 || b#1$wclk$8 >= b#7$wclk$8 || !choice_rf34 || !(b#4$rclk$8 >= b#7$wclk$8)) 
// 69 file ./pthread_test.c line 18 function dec_a
(401) CONSTRAINT(!\guard#6 || b#7$wclk$8 >= b#1$wclk$8 || !choice_rf36 || !(b#4$rclk$8 >= b#1$wclk$8)) 
// 74 file ./pthread_test.c line 26 function dec_b
(402) CONSTRAINT(!\guard#7 || b#1$wclk$8 >= b#7$wclk$8 || !choice_rf39 || !(b#6$rclk$8 >= b#7$wclk$8)) 
// 68 file ./pthread_test.c line 17 function dec_a
(403) CONSTRAINT(b#7$wclk$8 >= b#2$wclk$8 || !choice_rf33 || !(b#3$rclk$8 >= b#2$wclk$8)) 
// 68 file ./pthread_test.c line 17 function dec_a
(404) CONSTRAINT(!\guard#7 || b#2$wclk$8 >= b#7$wclk$8 || !choice_rf32 || !(b#3$rclk$8 >= b#7$wclk$8)) 
// 73 file ./pthread_test.c line 25 function dec_b
(405) CONSTRAINT(!\guard#7 || b#2$wclk$8 >= b#7$wclk$8 || !choice_rf38 || !(b#5$rclk$8 >= b#7$wclk$8)) 
// 69 file ./pthread_test.c line 18 function dec_a
(406) CONSTRAINT(!\guard#6 || b#7$wclk$8 >= b#2$wclk$8 || !choice_rf36 || !(b#4$rclk$8 >= b#2$wclk$8)) 
// 69 file ./pthread_test.c line 18 function dec_a
(407) CONSTRAINT(!\guard#6 || !\guard#7 || b#2$wclk$8 >= b#7$wclk$8 || !choice_rf35 || !(b#4$rclk$8 >= b#7$wclk$8)) 
// 74 file ./pthread_test.c line 26 function dec_b
(408) CONSTRAINT(!\guard#7 || b#2$wclk$8 >= b#7$wclk$8 || !choice_rf40 || !(b#6$rclk$8 >= b#7$wclk$8)) 
// 83 file ./pthread_test.c line 37 function start
(409) CONSTRAINT(!choice_rf41 || !(t1!0@1#3$rclk$8 >= t1!0@1#2$wclk$8)) 
// 83 file ./pthread_test.c line 37 function start
(410) CONSTRAINT(!choice_rf43 || !(t1!0@1#4$rclk$8 >= t1!0@1#2$wclk$8)) 
// 84 file ./pthread_test.c line 38 function start
(411) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !choice_rf47 || !(t2!0@1#4$rclk$8 >= t2!0@1#2$wclk$8)) 
// 84 file ./pthread_test.c line 38 function start
(412) CONSTRAINT((\guard#1 || (!__CPROVER_threads_exited#2[(signed long int)thread!0@1#1] || \guard#2) && !\guard#2) && !\guard#1 || !choice_rf45 || !(t2!0@1#3$rclk$8 >= t2!0@1#2$wclk$8)) 
