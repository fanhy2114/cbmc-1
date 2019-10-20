# CMake generated Testfile for 
# Source directory: /home/fhy18/gitRepo/cbmc-5.11/unit
# Build directory: /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/unit
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(unit "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/unit")
set_tests_properties(unit PROPERTIES  LABELS "CORE;CBMC" WORKING_DIRECTORY "/home/fhy18/gitRepo/cbmc-5.11/unit")
add_test(miniBDD "/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/bin/miniBDD")
set_tests_properties(miniBDD PROPERTIES  LABELS "CORE;CBMC")
subdirs("testing-utils")
