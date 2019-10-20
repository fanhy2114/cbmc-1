# CMake generated Testfile for 
# Source directory: /home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/jbmc
# Build directory: /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/jbmc/regression/jbmc
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(jbmc-CORE "/home/fhy18/gitRepo/cbmc-5.11/src/../regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/jbmc" "-C")
set_tests_properties(jbmc-CORE PROPERTIES  LABELS "CORE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/jbmc")
add_test(jbmc-THOROUGH "/home/fhy18/gitRepo/cbmc-5.11/src/../regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/jbmc" "-T")
set_tests_properties(jbmc-THOROUGH PROPERTIES  LABELS "THOROUGH;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/jbmc")
add_test(jbmc-FUTURE "/home/fhy18/gitRepo/cbmc-5.11/src/../regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/jbmc" "-F")
set_tests_properties(jbmc-FUTURE PROPERTIES  LABELS "FUTURE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/jbmc")
add_test(jbmc-KNOWNBUG "/home/fhy18/gitRepo/cbmc-5.11/src/../regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/jbmc" "-K")
set_tests_properties(jbmc-KNOWNBUG PROPERTIES  LABELS "KNOWNBUG;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/jbmc")
add_test(jbmc-symex-driven-lazy-loading-CORE "/home/fhy18/gitRepo/cbmc-5.11/src/../regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/jbmc --symex-driven-lazy-loading" "-C" "-X" "symex-driven-lazy-loading-expected-failure" "-s" "symex-driven-loading")
set_tests_properties(jbmc-symex-driven-lazy-loading-CORE PROPERTIES  LABELS "CORE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/jbmc")
