# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Dropbox\Dropbox\Universidade\2-1\AED\projeto aed"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Dropbox\Dropbox\Universidade\2-1\AED\projeto aed\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/projeto_aed.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/projeto_aed.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/projeto_aed.dir/flags.make

CMakeFiles/projeto_aed.dir/main.cpp.obj: CMakeFiles/projeto_aed.dir/flags.make
CMakeFiles/projeto_aed.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Dropbox\Dropbox\Universidade\2-1\AED\projeto aed\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/projeto_aed.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\projeto_aed.dir\main.cpp.obj -c "D:\Dropbox\Dropbox\Universidade\2-1\AED\projeto aed\main.cpp"

CMakeFiles/projeto_aed.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/projeto_aed.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Dropbox\Dropbox\Universidade\2-1\AED\projeto aed\main.cpp" > CMakeFiles\projeto_aed.dir\main.cpp.i

CMakeFiles/projeto_aed.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/projeto_aed.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Dropbox\Dropbox\Universidade\2-1\AED\projeto aed\main.cpp" -o CMakeFiles\projeto_aed.dir\main.cpp.s

# Object files for target projeto_aed
projeto_aed_OBJECTS = \
"CMakeFiles/projeto_aed.dir/main.cpp.obj"

# External object files for target projeto_aed
projeto_aed_EXTERNAL_OBJECTS =

projeto_aed.exe: CMakeFiles/projeto_aed.dir/main.cpp.obj
projeto_aed.exe: CMakeFiles/projeto_aed.dir/build.make
projeto_aed.exe: CMakeFiles/projeto_aed.dir/linklibs.rsp
projeto_aed.exe: CMakeFiles/projeto_aed.dir/objects1.rsp
projeto_aed.exe: CMakeFiles/projeto_aed.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Dropbox\Dropbox\Universidade\2-1\AED\projeto aed\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable projeto_aed.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\projeto_aed.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/projeto_aed.dir/build: projeto_aed.exe

.PHONY : CMakeFiles/projeto_aed.dir/build

CMakeFiles/projeto_aed.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\projeto_aed.dir\cmake_clean.cmake
.PHONY : CMakeFiles/projeto_aed.dir/clean

CMakeFiles/projeto_aed.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Dropbox\Dropbox\Universidade\2-1\AED\projeto aed" "D:\Dropbox\Dropbox\Universidade\2-1\AED\projeto aed" "D:\Dropbox\Dropbox\Universidade\2-1\AED\projeto aed\cmake-build-debug" "D:\Dropbox\Dropbox\Universidade\2-1\AED\projeto aed\cmake-build-debug" "D:\Dropbox\Dropbox\Universidade\2-1\AED\projeto aed\cmake-build-debug\CMakeFiles\projeto_aed.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/projeto_aed.dir/depend

