# Install script for directory: /home/fhy18/gitRepo/cbmc-5.11/jbmc/regression

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/jbmc/regression/jbmc/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/jbmc/regression/strings-smoke-tests/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/jbmc/regression/jbmc-strings/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/jbmc/regression/jdiff/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/jbmc/regression/janalyzer-taint/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/jbmc/regression/jbmc-concurrency/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/jbmc/regression/jbmc-inheritance/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/jbmc/regression/jbmc-cover/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/jbmc/regression/jbmc-generics/cmake_install.cmake")

endif()

