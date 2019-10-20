; SMT 2
; Generated for Z3
(set-info :source "Generated by CBMC 5.10 (cbmc-5.10)")
(set-option :produce-models true)

; set_to true (equal)
(define-fun |__CPROVER_dead_object#1| () (_ BitVec 64) (_ bv0 64))

; set_to true (equal)
(define-fun |__CPROVER_deallocated#1| () (_ BitVec 64) (_ bv0 64))

; set_to true (equal)
(define-fun |__CPROVER_malloc_is_new_array#1| () Bool false)

; set_to true (equal)
(define-fun |__CPROVER_malloc_object#1| () (_ BitVec 64) (_ bv0 64))

; set_to true (equal)
(define-fun |__CPROVER_malloc_size#1| () (_ BitVec 64) (_ bv0 64))

; set_to true (equal)
(define-fun |__CPROVER_memory_leak#1| () (_ BitVec 64) (_ bv0 64))

; set_to true (equal)
(define-fun |__CPROVER_next_thread_id#1| () (_ BitVec 64) (_ bv0 64))

; set_to true (equal)
(define-fun |__CPROVER_pipe_count#1| () (_ BitVec 32) (_ bv0 32))

; set_to true (equal)
(define-fun |__CPROVER_rounding_mode!0#1| () (_ BitVec 32) (_ bv0 32))

; set_to true (equal)
(define-fun |__CPROVER_thread_id!0#1| () (_ BitVec 64) (_ bv0 64))

; the following is a substitute for lambda i. x
(declare-fun array_of.0 () (Array (_ BitVec 64) Bool))
; set_to true (equal)
(define-fun |__CPROVER_threads_exited#1| () (Array (_ BitVec 64) Bool) array_of.0)

; set_to true (equal)
(define-fun |a#1| () (_ BitVec 32) (_ bv0 32))

; find_symbols
(declare-fun |a| () (_ BitVec 32))
; set_to true (equal)
(define-fun |foo::1::b!0@1#2| () (_ BitVec 64) (concat (_ bv2 8) (_ bv0 56)))

; set_to true (equal)
(define-fun |a#2| () (_ BitVec 32) (_ bv65535 32))

; set_to true (equal)
(define-fun |foo::1::c!0@1#2| () (_ BitVec 64) (concat (_ bv2 8) (_ bv0 56)))

; set_to true (equal)
(define-fun |a#3| () (_ BitVec 32) (bvor (bvand (_ bv65535 32) (bvnot (_ bv255 32))) (bvshl ((_ sign_extend 24) (_ bv0 8)) ((_ extract 31 0) (bvmul (_ bv0 64) (_ bv8 64))))))

; find_symbols
(declare-fun |foo::1::b!0@1#1| () (_ BitVec 64))
; convert
(define-fun |B0| () Bool (= |foo::1::b!0@1#1| |foo::1::b!0@1#1|))

; find_symbols
(declare-fun |foo::1::c!0@1#1| () (_ BitVec 64))
; convert
(define-fun |B1| () Bool (= |foo::1::c!0@1#1| |foo::1::c!0@1#1|))

; set_to false
(assert (not (= (bvor (bvand (_ bv65535 32) (bvnot (_ bv255 32))) (bvshl ((_ sign_extend 24) (_ bv0 8)) ((_ extract 31 0) (bvmul (_ bv0 64) (_ bv8 64))))) (_ bv65280 32))))

(check-sat)

(get-value (|B0|))
(get-value (|B1|))
(get-value (|__CPROVER_dead_object#1|))
(get-value (|__CPROVER_deallocated#1|))
(get-value (|__CPROVER_malloc_is_new_array#1|))
(get-value (|__CPROVER_malloc_object#1|))
(get-value (|__CPROVER_malloc_size#1|))
(get-value (|__CPROVER_memory_leak#1|))
(get-value (|__CPROVER_next_thread_id#1|))
(get-value (|__CPROVER_pipe_count#1|))
(get-value (|__CPROVER_rounding_mode!0#1|))
(get-value (|__CPROVER_thread_id!0#1|))
(get-value (|__CPROVER_threads_exited#1|))
(get-value (|a|))
(get-value (|a#1|))
(get-value (|a#2|))
(get-value (|a#3|))
(get-value (|foo::1::b!0@1#1|))
(get-value (|foo::1::b!0@1#2|))
(get-value (|foo::1::c!0@1#1|))
(get-value (|foo::1::c!0@1#2|))

(exit)
; end of SMT2 file
