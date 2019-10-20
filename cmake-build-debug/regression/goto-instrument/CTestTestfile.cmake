# CMake generated Testfile for 
# Source directory: /home/fhy18/gitRepo/cbmc-5.11/regression/goto-instrument
# Build directory: /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/regression/goto-instrument
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(goto-instrument-CORE "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-instrument/chain.sh /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-cc /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-instrument /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/cbmc false" "-C")
set_tests_properties(goto-instrument-CORE PROPERTIES  LABELS "CORE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-instrument")
add_test(goto-instrument-THOROUGH "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-instrument/chain.sh /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-cc /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-instrument /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/cbmc false" "-T")
set_tests_properties(goto-instrument-THOROUGH PROPERTIES  LABELS "THOROUGH;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-instrument")
add_test(goto-instrument-FUTURE "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-instrument/chain.sh /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-cc /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-instrument /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/cbmc false" "-F")
set_tests_properties(goto-instrument-FUTURE PROPERTIES  LABELS "FUTURE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-instrument")
add_test(goto-instrument-KNOWNBUG "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-instrument/chain.sh /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-cc /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-instrument /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/cbmc false" "-K")
set_tests_properties(goto-instrument-KNOWNBUG PROPERTIES  LABELS "KNOWNBUG;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/goto-instrument")
