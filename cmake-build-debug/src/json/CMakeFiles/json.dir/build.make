# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/fhy18/clion-2018.2.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/fhy18/clion-2018.2.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/fhy18/gitRepo/cbmc-5.11

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug

# Include any dependencies generated for this target.
include src/json/CMakeFiles/json.dir/depend.make

# Include the progress variables for this target.
include src/json/CMakeFiles/json.dir/progress.make

# Include the compile flags for this target's objects.
include src/json/CMakeFiles/json.dir/flags.make

src/json/json_y.tab.cpp: ../src/json/parser.y
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "[BISON][parser] Building parser with bison 3.0.4"
	cd /home/fhy18/gitRepo/cbmc-5.11/src/json && /usr/bin/bison -pyyjson -d -o /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/src/json/json_y.tab.cpp /home/fhy18/gitRepo/cbmc-5.11/src/json/parser.y

src/json/json_y.tab.hpp: src/json/json_y.tab.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate src/json/json_y.tab.hpp

src/json/json_y.tab.h: src/json/json_y.tab.hpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating json_y.tab.h"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/src/json && /home/fhy18/clion-2018.2.4/bin/cmake/linux/bin/cmake -E copy /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/src/json/json_y.tab.hpp /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/src/json/json_y.tab.h

src/json/json_lex.yy.cpp: ../src/json/scanner.l
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "[FLEX][scanner] Building scanner with flex 2.6.0"
	cd /home/fhy18/gitRepo/cbmc-5.11/src/json && /usr/bin/flex -Pyyjson -o/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/src/json/json_lex.yy.cpp /home/fhy18/gitRepo/cbmc-5.11/src/json/scanner.l

src/json/CMakeFiles/json.dir/json_parser.cpp.o: src/json/CMakeFiles/json.dir/flags.make
src/json/CMakeFiles/json.dir/json_parser.cpp.o: ../src/json/json_parser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/json/CMakeFiles/json.dir/json_parser.cpp.o"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/src/json && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/json.dir/json_parser.cpp.o -c /home/fhy18/gitRepo/cbmc-5.11/src/json/json_parser.cpp

src/json/CMakeFiles/json.dir/json_parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/json.dir/json_parser.cpp.i"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/src/json && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fhy18/gitRepo/cbmc-5.11/src/json/json_parser.cpp > CMakeFiles/json.dir/json_parser.cpp.i

src/json/CMakeFiles/json.dir/json_parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/json.dir/json_parser.cpp.s"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/src/json && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fhy18/gitRepo/cbmc-5.11/src/json/json_parser.cpp -o CMakeFiles/json.dir/json_parser.cpp.s

src/json/CMakeFiles/json.dir/json_y.tab.cpp.o: src/json/CMakeFiles/json.dir/flags.make
src/json/CMakeFiles/json.dir/json_y.tab.cpp.o: src/json/json_y.tab.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/json/CMakeFiles/json.dir/json_y.tab.cpp.o"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/src/json && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/json.dir/json_y.tab.cpp.o -c /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/src/json/json_y.tab.cpp

src/json/CMakeFiles/json.dir/json_y.tab.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/json.dir/json_y.tab.cpp.i"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/src/json && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/src/json/json_y.tab.cpp > CMakeFiles/json.dir/json_y.tab.cpp.i

src/json/CMakeFiles/json.dir/json_y.tab.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/json.dir/json_y.tab.cpp.s"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/src/json && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/src/json/json_y.tab.cpp -o CMakeFiles/json.dir/json_y.tab.cpp.s

src/json/CMakeFiles/json.dir/json_lex.yy.cpp.o: src/json/CMakeFiles/json.dir/flags.make
src/json/CMakeFiles/json.dir/json_lex.yy.cpp.o: src/json/json_lex.yy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/json/CMakeFiles/json.dir/json_lex.yy.cpp.o"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/src/json && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/json.dir/json_lex.yy.cpp.o -c /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/src/json/json_lex.yy.cpp

src/json/CMakeFiles/json.dir/json_lex.yy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/json.dir/json_lex.yy.cpp.i"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/src/json && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/src/json/json_lex.yy.cpp > CMakeFiles/json.dir/json_lex.yy.cpp.i

src/json/CMakeFiles/json.dir/json_lex.yy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/json.dir/json_lex.yy.cpp.s"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/src/json && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/src/json/json_lex.yy.cpp -o CMakeFiles/json.dir/json_lex.yy.cpp.s

# Object files for target json
json_OBJECTS = \
"CMakeFiles/json.dir/json_parser.cpp.o" \
"CMakeFiles/json.dir/json_y.tab.cpp.o" \
"CMakeFiles/json.dir/json_lex.yy.cpp.o"

# External object files for target json
json_EXTERNAL_OBJECTS =

lib/libjson.a: src/json/CMakeFiles/json.dir/json_parser.cpp.o
lib/libjson.a: src/json/CMakeFiles/json.dir/json_y.tab.cpp.o
lib/libjson.a: src/json/CMakeFiles/json.dir/json_lex.yy.cpp.o
lib/libjson.a: src/json/CMakeFiles/json.dir/build.make
lib/libjson.a: src/json/CMakeFiles/json.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX static library ../../lib/libjson.a"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/src/json && $(CMAKE_COMMAND) -P CMakeFiles/json.dir/cmake_clean_target.cmake
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/src/json && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/json.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/json/CMakeFiles/json.dir/build: lib/libjson.a

.PHONY : src/json/CMakeFiles/json.dir/build

src/json/CMakeFiles/json.dir/clean:
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/src/json && $(CMAKE_COMMAND) -P CMakeFiles/json.dir/cmake_clean.cmake
.PHONY : src/json/CMakeFiles/json.dir/clean

src/json/CMakeFiles/json.dir/depend: src/json/json_y.tab.cpp
src/json/CMakeFiles/json.dir/depend: src/json/json_y.tab.hpp
src/json/CMakeFiles/json.dir/depend: src/json/json_y.tab.h
src/json/CMakeFiles/json.dir/depend: src/json/json_lex.yy.cpp
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fhy18/gitRepo/cbmc-5.11 /home/fhy18/gitRepo/cbmc-5.11/src/json /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/src/json /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/src/json/CMakeFiles/json.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/json/CMakeFiles/json.dir/depend

