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
CMAKE_SOURCE_DIR = C:\Users\dhruv\CLionProjects\general_trees

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\dhruv\CLionProjects\general_trees\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/general_trees.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/general_trees.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/general_trees.dir/flags.make

CMakeFiles/general_trees.dir/main.cpp.obj: CMakeFiles/general_trees.dir/flags.make
CMakeFiles/general_trees.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\dhruv\CLionProjects\general_trees\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/general_trees.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\general_trees.dir\main.cpp.obj -c C:\Users\dhruv\CLionProjects\general_trees\main.cpp

CMakeFiles/general_trees.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/general_trees.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\dhruv\CLionProjects\general_trees\main.cpp > CMakeFiles\general_trees.dir\main.cpp.i

CMakeFiles/general_trees.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/general_trees.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\dhruv\CLionProjects\general_trees\main.cpp -o CMakeFiles\general_trees.dir\main.cpp.s

# Object files for target general_trees
general_trees_OBJECTS = \
"CMakeFiles/general_trees.dir/main.cpp.obj"

# External object files for target general_trees
general_trees_EXTERNAL_OBJECTS =

general_trees.exe: CMakeFiles/general_trees.dir/main.cpp.obj
general_trees.exe: CMakeFiles/general_trees.dir/build.make
general_trees.exe: CMakeFiles/general_trees.dir/linklibs.rsp
general_trees.exe: CMakeFiles/general_trees.dir/objects1.rsp
general_trees.exe: CMakeFiles/general_trees.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\dhruv\CLionProjects\general_trees\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable general_trees.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\general_trees.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/general_trees.dir/build: general_trees.exe

.PHONY : CMakeFiles/general_trees.dir/build

CMakeFiles/general_trees.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\general_trees.dir\cmake_clean.cmake
.PHONY : CMakeFiles/general_trees.dir/clean

CMakeFiles/general_trees.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\dhruv\CLionProjects\general_trees C:\Users\dhruv\CLionProjects\general_trees C:\Users\dhruv\CLionProjects\general_trees\cmake-build-debug C:\Users\dhruv\CLionProjects\general_trees\cmake-build-debug C:\Users\dhruv\CLionProjects\general_trees\cmake-build-debug\CMakeFiles\general_trees.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/general_trees.dir/depend

