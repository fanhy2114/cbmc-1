# CMake generated Testfile for 
# Source directory: /home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/jbmc-inheritance
# Build directory: /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/jbmc/regression/jbmc-inheritance
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(jbmc-inheritance-CORE "/home/fhy18/gitRepo/cbmc-5.11/src/../regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/jbmc" "-C")
set_tests_properties(jbmc-inheritance-CORE PROPERTIES  LABELS "CORE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/jbmc-inheritance")
add_test(jbmc-inheritance-THOROUGH "/home/fhy18/gitRepo/cbmc-5.11/src/../regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/jbmc" "-T")
set_tests_properties(jbmc-inheritance-THOROUGH PROPERTIES  LABELS "THOROUGH;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/jbmc-inheritance")
add_test(jbmc-inheritance-FUTURE "/home/fhy18/gitRepo/cbmc-5.11/src/../regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/jbmc" "-F")
set_tests_properties(jbmc-inheritance-FUTURE PROPERTIES  LABELS "FUTURE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/jbmc-inheritance")
add_test(jbmc-inheritance-KNOWNBUG "/home/fhy18/gitRepo/cbmc-5.11/src/../regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/jbmc" "-K")
set_tests_properties(jbmc-inheritance-KNOWNBUG PROPERTIES  LABELS "KNOWNBUG;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/jbmc-inheritance")
