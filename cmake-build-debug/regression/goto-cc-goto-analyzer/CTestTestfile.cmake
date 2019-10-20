# CMake generated Testfile for 
# Source directory: /home/fhy18/gitRepo/cbmc-5.11/regression/goto-cc-goto-analyzer
# Build directory: /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/regression/goto-cc-goto-analyzer
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(goto-cc-goto-analyzer-CORE "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-cc-goto-analyzer/chain.sh /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-cc /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-analyzer false" "-C")
set_tests_properties(goto-cc-goto-analyzer-CORE PROPERTIES  LABELS "CORE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-cc-goto-analyzer")
add_test(goto-cc-goto-analyzer-THOROUGH "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-cc-goto-analyzer/chain.sh /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-cc /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-analyzer false" "-T")
set_tests_properties(goto-cc-goto-analyzer-THOROUGH PROPERTIES  LABELS "THOROUGH;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-cc-goto-analyzer")
add_test(goto-cc-goto-analyzer-FUTURE "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-cc-goto-analyzer/chain.sh /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-cc /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-analyzer false" "-F")
set_tests_properties(goto-cc-goto-analyzer-FUTURE PROPERTIES  LABELS "FUTURE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-cc-goto-analyzer")
add_test(goto-cc-goto-analyzer-KNOWNBUG "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-cc-goto-analyzer/chain.sh /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-cc /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-analyzer false" "-K")
set_tests_properties(goto-cc-goto-analyzer-KNOWNBUG PROPERTIES  LABELS "KNOWNBUG;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-cc-goto-analyzer")
