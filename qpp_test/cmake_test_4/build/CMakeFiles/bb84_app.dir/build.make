# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.21.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.21.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/tomitsukatakeshi/Desktop/C++Study/qpp_test/cmake_test_4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/tomitsukatakeshi/Desktop/C++Study/qpp_test/cmake_test_4/build

# Include any dependencies generated for this target.
include CMakeFiles/bb84_app.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/bb84_app.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/bb84_app.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bb84_app.dir/flags.make

CMakeFiles/bb84_app.dir/bb84.cpp.o: CMakeFiles/bb84_app.dir/flags.make
CMakeFiles/bb84_app.dir/bb84.cpp.o: ../bb84.cpp
CMakeFiles/bb84_app.dir/bb84.cpp.o: CMakeFiles/bb84_app.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tomitsukatakeshi/Desktop/C++Study/qpp_test/cmake_test_4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bb84_app.dir/bb84.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/bb84_app.dir/bb84.cpp.o -MF CMakeFiles/bb84_app.dir/bb84.cpp.o.d -o CMakeFiles/bb84_app.dir/bb84.cpp.o -c /Users/tomitsukatakeshi/Desktop/C++Study/qpp_test/cmake_test_4/bb84.cpp

CMakeFiles/bb84_app.dir/bb84.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bb84_app.dir/bb84.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tomitsukatakeshi/Desktop/C++Study/qpp_test/cmake_test_4/bb84.cpp > CMakeFiles/bb84_app.dir/bb84.cpp.i

CMakeFiles/bb84_app.dir/bb84.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bb84_app.dir/bb84.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tomitsukatakeshi/Desktop/C++Study/qpp_test/cmake_test_4/bb84.cpp -o CMakeFiles/bb84_app.dir/bb84.cpp.s

# Object files for target bb84_app
bb84_app_OBJECTS = \
"CMakeFiles/bb84_app.dir/bb84.cpp.o"

# External object files for target bb84_app
bb84_app_EXTERNAL_OBJECTS =

bb84_app: CMakeFiles/bb84_app.dir/bb84.cpp.o
bb84_app: CMakeFiles/bb84_app.dir/build.make
bb84_app: CMakeFiles/bb84_app.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/tomitsukatakeshi/Desktop/C++Study/qpp_test/cmake_test_4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bb84_app"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bb84_app.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bb84_app.dir/build: bb84_app
.PHONY : CMakeFiles/bb84_app.dir/build

CMakeFiles/bb84_app.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bb84_app.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bb84_app.dir/clean

CMakeFiles/bb84_app.dir/depend:
	cd /Users/tomitsukatakeshi/Desktop/C++Study/qpp_test/cmake_test_4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tomitsukatakeshi/Desktop/C++Study/qpp_test/cmake_test_4 /Users/tomitsukatakeshi/Desktop/C++Study/qpp_test/cmake_test_4 /Users/tomitsukatakeshi/Desktop/C++Study/qpp_test/cmake_test_4/build /Users/tomitsukatakeshi/Desktop/C++Study/qpp_test/cmake_test_4/build /Users/tomitsukatakeshi/Desktop/C++Study/qpp_test/cmake_test_4/build/CMakeFiles/bb84_app.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bb84_app.dir/depend

