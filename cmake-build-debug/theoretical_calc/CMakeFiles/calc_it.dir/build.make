# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Arek\Desktop\GameSimulation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Arek\Desktop\GameSimulation\cmake-build-debug

# Include any dependencies generated for this target.
include theoretical_calc/CMakeFiles/calc_it.dir/depend.make

# Include the progress variables for this target.
include theoretical_calc/CMakeFiles/calc_it.dir/progress.make

# Include the compile flags for this target's objects.
include theoretical_calc/CMakeFiles/calc_it.dir/flags.make

theoretical_calc/CMakeFiles/calc_it.dir/main1.cpp.obj: theoretical_calc/CMakeFiles/calc_it.dir/flags.make
theoretical_calc/CMakeFiles/calc_it.dir/main1.cpp.obj: ../theoretical_calc/main1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Arek\Desktop\GameSimulation\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object theoretical_calc/CMakeFiles/calc_it.dir/main1.cpp.obj"
	cd /d C:\Users\Arek\Desktop\GameSimulation\cmake-build-debug\theoretical_calc && C:\mingw-w64\x86_64-7.3.0-posix-seh-rt_v5-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\calc_it.dir\main1.cpp.obj -c C:\Users\Arek\Desktop\GameSimulation\theoretical_calc\main1.cpp

theoretical_calc/CMakeFiles/calc_it.dir/main1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calc_it.dir/main1.cpp.i"
	cd /d C:\Users\Arek\Desktop\GameSimulation\cmake-build-debug\theoretical_calc && C:\mingw-w64\x86_64-7.3.0-posix-seh-rt_v5-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Arek\Desktop\GameSimulation\theoretical_calc\main1.cpp > CMakeFiles\calc_it.dir\main1.cpp.i

theoretical_calc/CMakeFiles/calc_it.dir/main1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calc_it.dir/main1.cpp.s"
	cd /d C:\Users\Arek\Desktop\GameSimulation\cmake-build-debug\theoretical_calc && C:\mingw-w64\x86_64-7.3.0-posix-seh-rt_v5-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Arek\Desktop\GameSimulation\theoretical_calc\main1.cpp -o CMakeFiles\calc_it.dir\main1.cpp.s

# Object files for target calc_it
calc_it_OBJECTS = \
"CMakeFiles/calc_it.dir/main1.cpp.obj"

# External object files for target calc_it
calc_it_EXTERNAL_OBJECTS =

theoretical_calc/calc_it.exe: theoretical_calc/CMakeFiles/calc_it.dir/main1.cpp.obj
theoretical_calc/calc_it.exe: theoretical_calc/CMakeFiles/calc_it.dir/build.make
theoretical_calc/calc_it.exe: theoretical_calc/CMakeFiles/calc_it.dir/linklibs.rsp
theoretical_calc/calc_it.exe: theoretical_calc/CMakeFiles/calc_it.dir/objects1.rsp
theoretical_calc/calc_it.exe: theoretical_calc/CMakeFiles/calc_it.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Arek\Desktop\GameSimulation\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable calc_it.exe"
	cd /d C:\Users\Arek\Desktop\GameSimulation\cmake-build-debug\theoretical_calc && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\calc_it.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
theoretical_calc/CMakeFiles/calc_it.dir/build: theoretical_calc/calc_it.exe

.PHONY : theoretical_calc/CMakeFiles/calc_it.dir/build

theoretical_calc/CMakeFiles/calc_it.dir/clean:
	cd /d C:\Users\Arek\Desktop\GameSimulation\cmake-build-debug\theoretical_calc && $(CMAKE_COMMAND) -P CMakeFiles\calc_it.dir\cmake_clean.cmake
.PHONY : theoretical_calc/CMakeFiles/calc_it.dir/clean

theoretical_calc/CMakeFiles/calc_it.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Arek\Desktop\GameSimulation C:\Users\Arek\Desktop\GameSimulation\theoretical_calc C:\Users\Arek\Desktop\GameSimulation\cmake-build-debug C:\Users\Arek\Desktop\GameSimulation\cmake-build-debug\theoretical_calc C:\Users\Arek\Desktop\GameSimulation\cmake-build-debug\theoretical_calc\CMakeFiles\calc_it.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : theoretical_calc/CMakeFiles/calc_it.dir/depend

