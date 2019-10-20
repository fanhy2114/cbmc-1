# CMake generated Testfile for 
# Source directory: /home/fhy18/gitRepo/cbmc-5.11/jbmc/unit
# Build directory: /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/jbmc/unit
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(java-unit "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/bin/java-unit")
set_tests_properties(java-unit PROPERTIES  LABELS "CORE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/jbmc/unit")
subdirs("java-testing-utils")
