# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/eddiexu/CLionProjects/C:C++ JanTerm/Challenge1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/eddiexu/CLionProjects/C:C++ JanTerm/Challenge1/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Challenge1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Challenge1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Challenge1.dir/flags.make

CMakeFiles/Challenge1.dir/main.cpp.o: CMakeFiles/Challenge1.dir/flags.make
CMakeFiles/Challenge1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/eddiexu/CLionProjects/C:C++ JanTerm/Challenge1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Challenge1.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Challenge1.dir/main.cpp.o -c "/Users/eddiexu/CLionProjects/C:C++ JanTerm/Challenge1/main.cpp"

CMakeFiles/Challenge1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Challenge1.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/eddiexu/CLionProjects/C:C++ JanTerm/Challenge1/main.cpp" > CMakeFiles/Challenge1.dir/main.cpp.i

CMakeFiles/Challenge1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Challenge1.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/eddiexu/CLionProjects/C:C++ JanTerm/Challenge1/main.cpp" -o CMakeFiles/Challenge1.dir/main.cpp.s

# Object files for target Challenge1
Challenge1_OBJECTS = \
"CMakeFiles/Challenge1.dir/main.cpp.o"

# External object files for target Challenge1
Challenge1_EXTERNAL_OBJECTS =

Challenge1: CMakeFiles/Challenge1.dir/main.cpp.o
Challenge1: CMakeFiles/Challenge1.dir/build.make
Challenge1: CMakeFiles/Challenge1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/eddiexu/CLionProjects/C:C++ JanTerm/Challenge1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Challenge1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Challenge1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Challenge1.dir/build: Challenge1

.PHONY : CMakeFiles/Challenge1.dir/build

CMakeFiles/Challenge1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Challenge1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Challenge1.dir/clean

CMakeFiles/Challenge1.dir/depend:
	cd "/Users/eddiexu/CLionProjects/C:C++ JanTerm/Challenge1/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/eddiexu/CLionProjects/C:C++ JanTerm/Challenge1" "/Users/eddiexu/CLionProjects/C:C++ JanTerm/Challenge1" "/Users/eddiexu/CLionProjects/C:C++ JanTerm/Challenge1/cmake-build-debug" "/Users/eddiexu/CLionProjects/C:C++ JanTerm/Challenge1/cmake-build-debug" "/Users/eddiexu/CLionProjects/C:C++ JanTerm/Challenge1/cmake-build-debug/CMakeFiles/Challenge1.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Challenge1.dir/depend

