# CMake generated Testfile for 
# Source directory: /home/fhy18/gitRepo/cbmc-5.11/regression/goto-instrument-typedef
# Build directory: /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/regression/goto-instrument-typedef
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(goto-instrument-typedef-CORE "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-instrument-typedef/chain.sh /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/bin/goto-cc /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/bin/goto-instrument false" "-C")
set_tests_properties(goto-instrument-typedef-CORE PROPERTIES  LABELS "CORE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-instrument-typedef")
add_test(goto-instrument-typedef-THOROUGH "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-instrument-typedef/chain.sh /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/bin/goto-cc /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/bin/goto-instrument false" "-T")
set_tests_properties(goto-instrument-typedef-THOROUGH PROPERTIES  LABELS "THOROUGH;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-instrument-typedef")
add_test(goto-instrument-typedef-FUTURE "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-instrument-typedef/chain.sh /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/bin/goto-cc /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/bin/goto-instrument false" "-F")
set_tests_properties(goto-instrument-typedef-FUTURE PROPERTIES  LABELS "FUTURE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-instrument-typedef")
add_test(goto-instrument-typedef-KNOWNBUG "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-instrument-typedef/chain.sh /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/bin/goto-cc /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/bin/goto-instrument false" "-K")
set_tests_properties(goto-instrument-typedef-KNOWNBUG PROPERTIES  LABELS "KNOWNBUG;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-instrument-typedef")
