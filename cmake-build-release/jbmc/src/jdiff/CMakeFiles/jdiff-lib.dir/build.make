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
CMAKE_BINARY_DIR = /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release

# Include any dependencies generated for this target.
include jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/depend.make

# Include the progress variables for this target.
include jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/progress.make

# Include the compile flags for this target's objects.
include jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/flags.make

jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/java_syntactic_diff.cpp.o: jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/flags.make
jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/java_syntactic_diff.cpp.o: ../jbmc/src/jdiff/java_syntactic_diff.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/java_syntactic_diff.cpp.o"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/jbmc/src/jdiff && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jdiff-lib.dir/java_syntactic_diff.cpp.o -c /home/fhy18/gitRepo/cbmc-5.11/jbmc/src/jdiff/java_syntactic_diff.cpp

jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/java_syntactic_diff.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jdiff-lib.dir/java_syntactic_diff.cpp.i"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/jbmc/src/jdiff && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fhy18/gitRepo/cbmc-5.11/jbmc/src/jdiff/java_syntactic_diff.cpp > CMakeFiles/jdiff-lib.dir/java_syntactic_diff.cpp.i

jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/java_syntactic_diff.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jdiff-lib.dir/java_syntactic_diff.cpp.s"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/jbmc/src/jdiff && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fhy18/gitRepo/cbmc-5.11/jbmc/src/jdiff/java_syntactic_diff.cpp -o CMakeFiles/jdiff-lib.dir/java_syntactic_diff.cpp.s

jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/jdiff_languages.cpp.o: jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/flags.make
jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/jdiff_languages.cpp.o: ../jbmc/src/jdiff/jdiff_languages.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/jdiff_languages.cpp.o"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/jbmc/src/jdiff && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jdiff-lib.dir/jdiff_languages.cpp.o -c /home/fhy18/gitRepo/cbmc-5.11/jbmc/src/jdiff/jdiff_languages.cpp

jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/jdiff_languages.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jdiff-lib.dir/jdiff_languages.cpp.i"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/jbmc/src/jdiff && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fhy18/gitRepo/cbmc-5.11/jbmc/src/jdiff/jdiff_languages.cpp > CMakeFiles/jdiff-lib.dir/jdiff_languages.cpp.i

jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/jdiff_languages.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jdiff-lib.dir/jdiff_languages.cpp.s"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/jbmc/src/jdiff && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fhy18/gitRepo/cbmc-5.11/jbmc/src/jdiff/jdiff_languages.cpp -o CMakeFiles/jdiff-lib.dir/jdiff_languages.cpp.s

jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/jdiff_parse_options.cpp.o: jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/flags.make
jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/jdiff_parse_options.cpp.o: ../jbmc/src/jdiff/jdiff_parse_options.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/jdiff_parse_options.cpp.o"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/jbmc/src/jdiff && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/jdiff-lib.dir/jdiff_parse_options.cpp.o -c /home/fhy18/gitRepo/cbmc-5.11/jbmc/src/jdiff/jdiff_parse_options.cpp

jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/jdiff_parse_options.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/jdiff-lib.dir/jdiff_parse_options.cpp.i"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/jbmc/src/jdiff && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fhy18/gitRepo/cbmc-5.11/jbmc/src/jdiff/jdiff_parse_options.cpp > CMakeFiles/jdiff-lib.dir/jdiff_parse_options.cpp.i

jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/jdiff_parse_options.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/jdiff-lib.dir/jdiff_parse_options.cpp.s"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/jbmc/src/jdiff && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fhy18/gitRepo/cbmc-5.11/jbmc/src/jdiff/jdiff_parse_options.cpp -o CMakeFiles/jdiff-lib.dir/jdiff_parse_options.cpp.s

# Object files for target jdiff-lib
jdiff__lib_OBJECTS = \
"CMakeFiles/jdiff-lib.dir/java_syntactic_diff.cpp.o" \
"CMakeFiles/jdiff-lib.dir/jdiff_languages.cpp.o" \
"CMakeFiles/jdiff-lib.dir/jdiff_parse_options.cpp.o"

# External object files for target jdiff-lib
jdiff__lib_EXTERNAL_OBJECTS =

lib/libjdiff-lib.a: jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/java_syntactic_diff.cpp.o
lib/libjdiff-lib.a: jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/jdiff_languages.cpp.o
lib/libjdiff-lib.a: jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/jdiff_parse_options.cpp.o
lib/libjdiff-lib.a: jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/build.make
lib/libjdiff-lib.a: jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library ../../../lib/libjdiff-lib.a"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/jbmc/src/jdiff && $(CMAKE_COMMAND) -P CMakeFiles/jdiff-lib.dir/cmake_clean_target.cmake
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/jbmc/src/jdiff && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/jdiff-lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/build: lib/libjdiff-lib.a

.PHONY : jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/build

jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/clean:
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/jbmc/src/jdiff && $(CMAKE_COMMAND) -P CMakeFiles/jdiff-lib.dir/cmake_clean.cmake
.PHONY : jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/clean

jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/depend:
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fhy18/gitRepo/cbmc-5.11 /home/fhy18/gitRepo/cbmc-5.11/jbmc/src/jdiff /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/jbmc/src/jdiff /home/fhy18/gitRepo/cbmc-5.11/cmake-build-release/jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : jbmc/src/jdiff/CMakeFiles/jdiff-lib.dir/depend

