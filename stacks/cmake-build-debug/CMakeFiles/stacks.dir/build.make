# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\dhruv\CLionProjects\stacks

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\dhruv\CLionProjects\stacks\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/stacks.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stacks.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stacks.dir/flags.make

CMakeFiles/stacks.dir/main.cpp.obj: CMakeFiles/stacks.dir/flags.make
CMakeFiles/stacks.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\dhruv\CLionProjects\stacks\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stacks.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\stacks.dir\main.cpp.obj -c C:\Users\dhruv\CLionProjects\stacks\main.cpp

CMakeFiles/stacks.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stacks.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\dhruv\CLionProjects\stacks\main.cpp > CMakeFiles\stacks.dir\main.cpp.i

CMakeFiles/stacks.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stacks.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\dhruv\CLionProjects\stacks\main.cpp -o CMakeFiles\stacks.dir\main.cpp.s

# Object files for target stacks
stacks_OBJECTS = \
"CMakeFiles/stacks.dir/main.cpp.obj"

# External object files for target stacks
stacks_EXTERNAL_OBJECTS =

stacks.exe: CMakeFiles/stacks.dir/main.cpp.obj
stacks.exe: CMakeFiles/stacks.dir/build.make
stacks.exe: CMakeFiles/stacks.dir/linklibs.rsp
stacks.exe: CMakeFiles/stacks.dir/objects1.rsp
stacks.exe: CMakeFiles/stacks.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\dhruv\CLionProjects\stacks\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable stacks.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\stacks.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stacks.dir/build: stacks.exe

.PHONY : CMakeFiles/stacks.dir/build

CMakeFiles/stacks.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\stacks.dir\cmake_clean.cmake
.PHONY : CMakeFiles/stacks.dir/clean

CMakeFiles/stacks.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\dhruv\CLionProjects\stacks C:\Users\dhruv\CLionProjects\stacks C:\Users\dhruv\CLionProjects\stacks\cmake-build-debug C:\Users\dhruv\CLionProjects\stacks\cmake-build-debug C:\Users\dhruv\CLionProjects\stacks\cmake-build-debug\CMakeFiles\stacks.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/stacks.dir/depend

