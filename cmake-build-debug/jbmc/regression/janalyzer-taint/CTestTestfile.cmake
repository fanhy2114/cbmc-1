# CMake generated Testfile for 
# Source directory: /home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/janalyzer-taint
# Build directory: /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/jbmc/regression/janalyzer-taint
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(janalyzer-taint-CORE "/home/fhy18/gitRepo/cbmc-5.11/src/../regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/janalyzer" "-C")
set_tests_properties(janalyzer-taint-CORE PROPERTIES  LABELS "CORE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/janalyzer-taint")
add_test(janalyzer-taint-THOROUGH "/home/fhy18/gitRepo/cbmc-5.11/src/../regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/janalyzer" "-T")
set_tests_properties(janalyzer-taint-THOROUGH PROPERTIES  LABELS "THOROUGH;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/janalyzer-taint")
add_test(janalyzer-taint-FUTURE "/home/fhy18/gitRepo/cbmc-5.11/src/../regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/janalyzer" "-F")
set_tests_properties(janalyzer-taint-FUTURE PROPERTIES  LABELS "FUTURE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/janalyzer-taint")
add_test(janalyzer-taint-KNOWNBUG "/home/fhy18/gitRepo/cbmc-5.11/src/../regression/test.pl" "-p" "-c" "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/janalyzer" "-K")
set_tests_properties(janalyzer-taint-KNOWNBUG PROPERTIES  LABELS "KNOWNBUG;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/jbmc/regression/janalyzer-taint")
