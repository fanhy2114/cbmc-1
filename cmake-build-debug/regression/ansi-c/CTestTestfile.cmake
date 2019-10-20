# CMake generated Testfile for 
# Source directory: /home/fhy18/gitRepo/cbmc-5.11/regression/ansi-c
# Build directory: /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/regression/ansi-c
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(ansi-c-CORE "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-cc" "-C")
set_tests_properties(ansi-c-CORE PROPERTIES  LABELS "CORE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/ansi-c")
add_test(ansi-c-THOROUGH "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-cc" "-T")
set_tests_properties(ansi-c-THOROUGH PROPERTIES  LABELS "THOROUGH;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/ansi-c")
add_test(ansi-c-FUTURE "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-cc" "-F")
set_tests_properties(ansi-c-FUTURE PROPERTIES  LABELS "FUTURE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/ansi-c")
add_test(ansi-c-KNOWNBUG "/home/fhy18/gitRepo/cbmc-5.11/regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/goto-cc" "-K")
set_tests_properties(ansi-c-KNOWNBUG PROPERTIES  LABELS "KNOWNBUG;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/regression/ansi-c")
