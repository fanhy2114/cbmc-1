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
include jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/depend.make

# Include the progress variables for this target.
include jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/progress.make

# Include the compile flags for this target's objects.
include jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/flags.make

jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/load_java_class.cpp.o: jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/flags.make
jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/load_java_class.cpp.o: ../jbmc/unit/java-testing-utils/load_java_class.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/load_java_class.cpp.o"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/jbmc/unit/java-testing-utils && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/java-testing-utils.dir/load_java_class.cpp.o -c /home/fhy18/gitRepo/cbmc-5.11/jbmc/unit/java-testing-utils/load_java_class.cpp

jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/load_java_class.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/java-testing-utils.dir/load_java_class.cpp.i"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/jbmc/unit/java-testing-utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fhy18/gitRepo/cbmc-5.11/jbmc/unit/java-testing-utils/load_java_class.cpp > CMakeFiles/java-testing-utils.dir/load_java_class.cpp.i

jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/load_java_class.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/java-testing-utils.dir/load_java_class.cpp.s"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/jbmc/unit/java-testing-utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fhy18/gitRepo/cbmc-5.11/jbmc/unit/java-testing-utils/load_java_class.cpp -o CMakeFiles/java-testing-utils.dir/load_java_class.cpp.s

jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/require_goto_statements.cpp.o: jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/flags.make
jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/require_goto_statements.cpp.o: ../jbmc/unit/java-testing-utils/require_goto_statements.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/require_goto_statements.cpp.o"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/jbmc/unit/java-testing-utils && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/java-testing-utils.dir/require_goto_statements.cpp.o -c /home/fhy18/gitRepo/cbmc-5.11/jbmc/unit/java-testing-utils/require_goto_statements.cpp

jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/require_goto_statements.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/java-testing-utils.dir/require_goto_statements.cpp.i"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/jbmc/unit/java-testing-utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fhy18/gitRepo/cbmc-5.11/jbmc/unit/java-testing-utils/require_goto_statements.cpp > CMakeFiles/java-testing-utils.dir/require_goto_statements.cpp.i

jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/require_goto_statements.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/java-testing-utils.dir/require_goto_statements.cpp.s"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/jbmc/unit/java-testing-utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fhy18/gitRepo/cbmc-5.11/jbmc/unit/java-testing-utils/require_goto_statements.cpp -o CMakeFiles/java-testing-utils.dir/require_goto_statements.cpp.s

jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/require_parse_tree.cpp.o: jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/flags.make
jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/require_parse_tree.cpp.o: ../jbmc/unit/java-testing-utils/require_parse_tree.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/require_parse_tree.cpp.o"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/jbmc/unit/java-testing-utils && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/java-testing-utils.dir/require_parse_tree.cpp.o -c /home/fhy18/gitRepo/cbmc-5.11/jbmc/unit/java-testing-utils/require_parse_tree.cpp

jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/require_parse_tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/java-testing-utils.dir/require_parse_tree.cpp.i"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/jbmc/unit/java-testing-utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fhy18/gitRepo/cbmc-5.11/jbmc/unit/java-testing-utils/require_parse_tree.cpp > CMakeFiles/java-testing-utils.dir/require_parse_tree.cpp.i

jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/require_parse_tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/java-testing-utils.dir/require_parse_tree.cpp.s"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/jbmc/unit/java-testing-utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fhy18/gitRepo/cbmc-5.11/jbmc/unit/java-testing-utils/require_parse_tree.cpp -o CMakeFiles/java-testing-utils.dir/require_parse_tree.cpp.s

jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/require_type.cpp.o: jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/flags.make
jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/require_type.cpp.o: ../jbmc/unit/java-testing-utils/require_type.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/require_type.cpp.o"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/jbmc/unit/java-testing-utils && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/java-testing-utils.dir/require_type.cpp.o -c /home/fhy18/gitRepo/cbmc-5.11/jbmc/unit/java-testing-utils/require_type.cpp

jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/require_type.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/java-testing-utils.dir/require_type.cpp.i"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/jbmc/unit/java-testing-utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/fhy18/gitRepo/cbmc-5.11/jbmc/unit/java-testing-utils/require_type.cpp > CMakeFiles/java-testing-utils.dir/require_type.cpp.i

jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/require_type.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/java-testing-utils.dir/require_type.cpp.s"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/jbmc/unit/java-testing-utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/fhy18/gitRepo/cbmc-5.11/jbmc/unit/java-testing-utils/require_type.cpp -o CMakeFiles/java-testing-utils.dir/require_type.cpp.s

# Object files for target java-testing-utils
java__testing__utils_OBJECTS = \
"CMakeFiles/java-testing-utils.dir/load_java_class.cpp.o" \
"CMakeFiles/java-testing-utils.dir/require_goto_statements.cpp.o" \
"CMakeFiles/java-testing-utils.dir/require_parse_tree.cpp.o" \
"CMakeFiles/java-testing-utils.dir/require_type.cpp.o"

# External object files for target java-testing-utils
java__testing__utils_EXTERNAL_OBJECTS =

lib/libjava-testing-utils.a: jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/load_java_class.cpp.o
lib/libjava-testing-utils.a: jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/require_goto_statements.cpp.o
lib/libjava-testing-utils.a: jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/require_parse_tree.cpp.o
lib/libjava-testing-utils.a: jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/require_type.cpp.o
lib/libjava-testing-utils.a: jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/build.make
lib/libjava-testing-utils.a: jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library ../../../lib/libjava-testing-utils.a"
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/jbmc/unit/java-testing-utils && $(CMAKE_COMMAND) -P CMakeFiles/java-testing-utils.dir/cmake_clean_target.cmake
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/jbmc/unit/java-testing-utils && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/java-testing-utils.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/build: lib/libjava-testing-utils.a

.PHONY : jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/build

jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/clean:
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/jbmc/unit/java-testing-utils && $(CMAKE_COMMAND) -P CMakeFiles/java-testing-utils.dir/cmake_clean.cmake
.PHONY : jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/clean

jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/depend:
	cd /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fhy18/gitRepo/cbmc-5.11 /home/fhy18/gitRepo/cbmc-5.11/jbmc/unit/java-testing-utils /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/jbmc/unit/java-testing-utils /home/fhy18/gitRepo/cbmc-5.11/cmake-build-debug/jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : jbmc/unit/java-testing-utils/CMakeFiles/java-testing-utils.dir/depend

