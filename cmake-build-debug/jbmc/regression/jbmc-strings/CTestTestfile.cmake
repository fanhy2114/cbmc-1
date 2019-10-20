# CMake generated Testfile for 
# Source directory: /home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/jbmc-strings
# Build directory: /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/jbmc/regression/jbmc-strings
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(jbmc-strings-CORE "/home/fhy18/gitRepo/cbmc-5.11/src/../regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/jbmc" "-C")
set_tests_properties(jbmc-strings-CORE PROPERTIES  LABELS "CORE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/jbmc-strings")
add_test(jbmc-strings-THOROUGH "/home/fhy18/gitRepo/cbmc-5.11/src/../regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/jbmc" "-T")
set_tests_properties(jbmc-strings-THOROUGH PROPERTIES  LABELS "THOROUGH;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/jbmc-strings")
add_test(jbmc-strings-FUTURE "/home/fhy18/gitRepo/cbmc-5.11/src/../regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/jbmc" "-F")
set_tests_properties(jbmc-strings-FUTURE PROPERTIES  LABELS "FUTURE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/jbmc-strings")
add_test(jbmc-strings-KNOWNBUG "/home/fhy18/gitRepo/cbmc-5.11/src/../regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/jbmc" "-K")
set_tests_properties(jbmc-strings-KNOWNBUG PROPERTIES  LABELS "KNOWNBUG;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/jbmc-strings")
add_test(jbmc-strings-symex-driven-lazy-loading-CORE "/home/fhy18/gitRepo/cbmc-5.11/src/../regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/jbmc --symex-driven-lazy-loading" "-C" "-X" "symex-driven-lazy-loading-expected-failure" "-s" "symex-driven-loading")
set_tests_properties(jbmc-strings-symex-driven-lazy-loading-CORE PROPERTIES  LABELS "CORE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/jbmc-strings")
