# CMake generated Testfile for 
# Source directory: /home/fhy18/gitRepo/cbmc-5.11/regression/contracts
# Build directory: /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/regression/contracts
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(contracts-CORE "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/regression/contracts/chain.sh /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-cc /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-instrument /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/cbmc false" "-C")
set_tests_properties(contracts-CORE PROPERTIES  LABELS "CORE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/contracts")
add_test(contracts-THOROUGH "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/regression/contracts/chain.sh /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-cc /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-instrument /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/cbmc false" "-T")
set_tests_properties(contracts-THOROUGH PROPERTIES  LABELS "THOROUGH;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/contracts")
add_test(contracts-FUTURE "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/regression/contracts/chain.sh /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-cc /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-instrument /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/cbmc false" "-F")
set_tests_properties(contracts-FUTURE PROPERTIES  LABELS "FUTURE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/contracts")
add_test(contracts-KNOWNBUG "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/regression/contracts/chain.sh /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-cc /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-instrument /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/cbmc false" "-K")
set_tests_properties(contracts-KNOWNBUG PROPERTIES  LABELS "KNOWNBUG;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/contracts")
