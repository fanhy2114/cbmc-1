; SMT 2
; Generated for Z3
; find_symbols
(declare-fun a () (_ BitVec 3))
(declare-fun b () (_ BitVec 3))
(declare-fun c () (_ BitVec 3))
(declare-fun d () (_ BitVec 3))
(declare-fun e () (_ BitVec 3))
(declare-fun f () (_ BitVec 3))

(declare-fun tmp0 () Bool)
(declare-fun tmp1 () Bool)
(declare-fun tmp2 () Bool)
(declare-fun tmp3 () Bool)
(declare-fun |memory_model_choice_rf_1_0_0_1_T_0| () Bool)
(declare-fun |memory_model_choice_rf_0_0_1_1_T_0| () Bool)
(declare-fun |memory_model_choice_rf_1_2_0_1_T_0| () Bool)
; set_to true
(assert (= tmp0 (not (bvuge a b))))
(assert (= tmp1 (not (bvuge b c))))
(assert (= tmp2 (not (bvuge d e))))
(assert (= tmp3 (not (bvuge e f))))

(assert (or (not (bvuge b d)) (not |memory_model_choice_rf_1_0_0_1_T_0|)))
(assert (or (not (bvuge e a)) (not |memory_model_choice_rf_0_0_1_1_T_0|)))
(assert (or (not (bvuge b f)) (not |memory_model_choice_rf_1_2_0_1_T_0|)))
(assert (or |choice_rf_1_0_0_1_T_0| |memory_model_choice_rf_1_2_0_1_T_0|))
(assert (or (not |memory_model_choice_rf_1_2_0_1_T_0|) 
            (not |memory_model_choice_rf_1_0_0_1_T_0|)))

(check-sat-assuming(tmp0 tmp1 tmp2 tmp3))
(get-model)
(exit)
; end of SMT2 file
