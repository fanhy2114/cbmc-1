# Install script for directory: /home/fhy18/gitRepo/cbmc-5.11/src

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
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/analyses/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/ansi-c/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/assembler/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/big-int/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/cpp/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/goto-programs/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/goto-symex/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/jsil/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/json/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/langapi/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/linking/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/memory-models/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/pointer-analysis/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/solvers/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/util/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/xmllang/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/clobber/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/cbmc/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/goto-cc/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/goto-instrument/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/goto-analyzer/cmake_install.cmake")
  include("/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/src/goto-diff/cmake_install.cmake")

endif()

