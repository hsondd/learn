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
CMAKE_SOURCE_DIR = /home/sondh/CodeC/CPP/22.StaticDataMem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sondh/CodeC/CPP/22.StaticDataMem/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/22_StaticDataMem.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/22_StaticDataMem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/22_StaticDataMem.dir/flags.make

CMakeFiles/22_StaticDataMem.dir/main.cpp.o: CMakeFiles/22_StaticDataMem.dir/flags.make
CMakeFiles/22_StaticDataMem.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sondh/CodeC/CPP/22.StaticDataMem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/22_StaticDataMem.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/22_StaticDataMem.dir/main.cpp.o -c /home/sondh/CodeC/CPP/22.StaticDataMem/main.cpp

CMakeFiles/22_StaticDataMem.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/22_StaticDataMem.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sondh/CodeC/CPP/22.StaticDataMem/main.cpp > CMakeFiles/22_StaticDataMem.dir/main.cpp.i

CMakeFiles/22_StaticDataMem.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/22_StaticDataMem.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sondh/CodeC/CPP/22.StaticDataMem/main.cpp -o CMakeFiles/22_StaticDataMem.dir/main.cpp.s

# Object files for target 22_StaticDataMem
22_StaticDataMem_OBJECTS = \
"CMakeFiles/22_StaticDataMem.dir/main.cpp.o"

# External object files for target 22_StaticDataMem
22_StaticDataMem_EXTERNAL_OBJECTS =

22_StaticDataMem: CMakeFiles/22_StaticDataMem.dir/main.cpp.o
22_StaticDataMem: CMakeFiles/22_StaticDataMem.dir/build.make
22_StaticDataMem: CMakeFiles/22_StaticDataMem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sondh/CodeC/CPP/22.StaticDataMem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 22_StaticDataMem"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/22_StaticDataMem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/22_StaticDataMem.dir/build: 22_StaticDataMem

.PHONY : CMakeFiles/22_StaticDataMem.dir/build

CMakeFiles/22_StaticDataMem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/22_StaticDataMem.dir/cmake_clean.cmake
.PHONY : CMakeFiles/22_StaticDataMem.dir/clean

CMakeFiles/22_StaticDataMem.dir/depend:
	cd /home/sondh/CodeC/CPP/22.StaticDataMem/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sondh/CodeC/CPP/22.StaticDataMem /home/sondh/CodeC/CPP/22.StaticDataMem /home/sondh/CodeC/CPP/22.StaticDataMem/cmake-build-debug /home/sondh/CodeC/CPP/22.StaticDataMem/cmake-build-debug /home/sondh/CodeC/CPP/22.StaticDataMem/cmake-build-debug/CMakeFiles/22_StaticDataMem.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/22_StaticDataMem.dir/depend

