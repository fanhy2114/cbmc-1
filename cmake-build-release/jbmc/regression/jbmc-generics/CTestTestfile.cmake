# CMake generated Testfile for 
# Source directory: /home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/jbmc-generics
# Build directory: /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/jbmc/regression/jbmc-generics
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(jbmc-generics-CORE "/home/fhy18/gitRepo/cbmc-5.11/src/../regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/bin/jbmc" "-C")
set_tests_properties(jbmc-generics-CORE PROPERTIES  LABELS "CORE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/jbmc-generics")
add_test(jbmc-generics-THOROUGH "/home/fhy18/gitRepo/cbmc-5.11/src/../regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/bin/jbmc" "-T")
set_tests_properties(jbmc-generics-THOROUGH PROPERTIES  LABELS "THOROUGH;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/jbmc-generics")
add_test(jbmc-generics-FUTURE "/home/fhy18/gitRepo/cbmc-5.11/src/../regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/bin/jbmc" "-F")
set_tests_properties(jbmc-generics-FUTURE PROPERTIES  LABELS "FUTURE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/jbmc-generics")
add_test(jbmc-generics-KNOWNBUG "/home/fhy18/gitRepo/cbmc-5.11/src/../regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/bin/jbmc" "-K")
set_tests_properties(jbmc-generics-KNOWNBUG PROPERTIES  LABELS "KNOWNBUG;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/jbmc-generics")
add_test(jbmc-generics-symex-driven-lazy-loading-CORE "/home/fhy18/gitRepo/cbmc-5.11/src/../regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/bin/jbmc --symex-driven-lazy-loading" "-C" "-X" "symex-driven-lazy-loading-expected-failure" "-s" "symex-driven-loading")
set_tests_properties(jbmc-generics-symex-driven-lazy-loading-CORE PROPERTIES  LABELS "CORE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/jbmc-generics")
