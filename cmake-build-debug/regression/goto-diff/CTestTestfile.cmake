# CMake generated Testfile for 
# Source directory: /home/fhy18/gitRepo/cbmc-5.11/regression/goto-diff
# Build directory: /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/regression/goto-diff
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(goto-diff-CORE "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-diff" "-C")
set_tests_properties(goto-diff-CORE PROPERTIES  LABELS "CORE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-diff")
add_test(goto-diff-THOROUGH "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-diff" "-T")
set_tests_properties(goto-diff-THOROUGH PROPERTIES  LABELS "THOROUGH;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-diff")
add_test(goto-diff-FUTURE "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-diff" "-F")
set_tests_properties(goto-diff-FUTURE PROPERTIES  LABELS "FUTURE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-diff")
add_test(goto-diff-KNOWNBUG "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-diff" "-K")
set_tests_properties(goto-diff-KNOWNBUG PROPERTIES  LABELS "KNOWNBUG;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-diff")
