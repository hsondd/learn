# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /snap/clion/107/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/107/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sondh/CodeC/LearnCPP/27.FriendClass

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sondh/CodeC/LearnCPP/27.FriendClass/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/27_FriendClass.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/27_FriendClass.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/27_FriendClass.dir/flags.make

CMakeFiles/27_FriendClass.dir/main.cpp.o: CMakeFiles/27_FriendClass.dir/flags.make
CMakeFiles/27_FriendClass.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sondh/CodeC/LearnCPP/27.FriendClass/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/27_FriendClass.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/27_FriendClass.dir/main.cpp.o -c /home/sondh/CodeC/LearnCPP/27.FriendClass/main.cpp

CMakeFiles/27_FriendClass.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/27_FriendClass.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sondh/CodeC/LearnCPP/27.FriendClass/main.cpp > CMakeFiles/27_FriendClass.dir/main.cpp.i

CMakeFiles/27_FriendClass.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/27_FriendClass.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sondh/CodeC/LearnCPP/27.FriendClass/main.cpp -o CMakeFiles/27_FriendClass.dir/main.cpp.s

# Object files for target 27_FriendClass
27_FriendClass_OBJECTS = \
"CMakeFiles/27_FriendClass.dir/main.cpp.o"

# External object files for target 27_FriendClass
27_FriendClass_EXTERNAL_OBJECTS =

27_FriendClass: CMakeFiles/27_FriendClass.dir/main.cpp.o
27_FriendClass: CMakeFiles/27_FriendClass.dir/build.make
27_FriendClass: CMakeFiles/27_FriendClass.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sondh/CodeC/LearnCPP/27.FriendClass/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 27_FriendClass"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/27_FriendClass.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/27_FriendClass.dir/build: 27_FriendClass

.PHONY : CMakeFiles/27_FriendClass.dir/build

CMakeFiles/27_FriendClass.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/27_FriendClass.dir/cmake_clean.cmake
.PHONY : CMakeFiles/27_FriendClass.dir/clean

CMakeFiles/27_FriendClass.dir/depend:
	cd /home/sondh/CodeC/LearnCPP/27.FriendClass/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sondh/CodeC/LearnCPP/27.FriendClass /home/sondh/CodeC/LearnCPP/27.FriendClass /home/sondh/CodeC/LearnCPP/27.FriendClass/cmake-build-debug /home/sondh/CodeC/LearnCPP/27.FriendClass/cmake-build-debug /home/sondh/CodeC/LearnCPP/27.FriendClass/cmake-build-debug/CMakeFiles/27_FriendClass.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/27_FriendClass.dir/depend

