ifdef FD_HAS_INT128
$(call make-unit-test,test_native_programs,test_native_programs fd_tests,fd_ballet fd_funk fd_util fd_sol_tests fd_flamenco,$(SECP256K1_LIBS))
$(call run-unit-test,test_native_programs)
endif
