# CMake generated Testfile for 
# Source directory: /home/fhy18/gitRepo/cbmc-5.11/regression/cbmc-cover
# Build directory: /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/regression/cbmc-cover
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cbmc-cover-CORE "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/bin/cbmc" "-C")
set_tests_properties(cbmc-cover-CORE PROPERTIES  LABELS "CORE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/cbmc-cover")
add_test(cbmc-cover-THOROUGH "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/bin/cbmc" "-T")
set_tests_properties(cbmc-cover-THOROUGH PROPERTIES  LABELS "THOROUGH;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/cbmc-cover")
add_test(cbmc-cover-FUTURE "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/bin/cbmc" "-F")
set_tests_properties(cbmc-cover-FUTURE PROPERTIES  LABELS "FUTURE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/cbmc-cover")
add_test(cbmc-cover-KNOWNBUG "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/bin/cbmc" "-K")
set_tests_properties(cbmc-cover-KNOWNBUG PROPERTIES  LABELS "KNOWNBUG;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/cbmc-cover")
