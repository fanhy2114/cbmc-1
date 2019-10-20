# CMake generated Testfile for 
# Source directory: /home/fhy18/gitRepo/cbmc-5.11/regression/goto-cc-cbmc
# Build directory: /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/regression/goto-cc-cbmc
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(goto-cc-cbmc-CORE "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-cc-cbmc/chain.sh /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-cc /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/cbmc false" "-C")
set_tests_properties(goto-cc-cbmc-CORE PROPERTIES  LABELS "CORE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-cc-cbmc")
add_test(goto-cc-cbmc-THOROUGH "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-cc-cbmc/chain.sh /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-cc /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/cbmc false" "-T")
set_tests_properties(goto-cc-cbmc-THOROUGH PROPERTIES  LABELS "THOROUGH;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-cc-cbmc")
add_test(goto-cc-cbmc-FUTURE "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-cc-cbmc/chain.sh /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-cc /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/cbmc false" "-F")
set_tests_properties(goto-cc-cbmc-FUTURE PROPERTIES  LABELS "FUTURE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-cc-cbmc")
add_test(goto-cc-cbmc-KNOWNBUG "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-cc-cbmc/chain.sh /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-cc /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/cbmc false" "-K")
set_tests_properties(goto-cc-cbmc-KNOWNBUG PROPERTIES  LABELS "KNOWNBUG;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-cc-cbmc")
