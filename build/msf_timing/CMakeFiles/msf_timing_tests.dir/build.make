# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hemanth/neural_fly/src/ethzasl_msf/msf_timing

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hemanth/neural_fly/build/msf_timing

# Include any dependencies generated for this target.
include CMakeFiles/msf_timing_tests.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/msf_timing_tests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/msf_timing_tests.dir/flags.make

CMakeFiles/msf_timing_tests.dir/src/test/testMSFTiming.cc.o: CMakeFiles/msf_timing_tests.dir/flags.make
CMakeFiles/msf_timing_tests.dir/src/test/testMSFTiming.cc.o: /home/hemanth/neural_fly/src/ethzasl_msf/msf_timing/src/test/testMSFTiming.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hemanth/neural_fly/build/msf_timing/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/msf_timing_tests.dir/src/test/testMSFTiming.cc.o"
	/usr/lib/ccache/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/msf_timing_tests.dir/src/test/testMSFTiming.cc.o -c /home/hemanth/neural_fly/src/ethzasl_msf/msf_timing/src/test/testMSFTiming.cc

CMakeFiles/msf_timing_tests.dir/src/test/testMSFTiming.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/msf_timing_tests.dir/src/test/testMSFTiming.cc.i"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hemanth/neural_fly/src/ethzasl_msf/msf_timing/src/test/testMSFTiming.cc > CMakeFiles/msf_timing_tests.dir/src/test/testMSFTiming.cc.i

CMakeFiles/msf_timing_tests.dir/src/test/testMSFTiming.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/msf_timing_tests.dir/src/test/testMSFTiming.cc.s"
	/usr/lib/ccache/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hemanth/neural_fly/src/ethzasl_msf/msf_timing/src/test/testMSFTiming.cc -o CMakeFiles/msf_timing_tests.dir/src/test/testMSFTiming.cc.s

CMakeFiles/msf_timing_tests.dir/src/test/testMSFTiming.cc.o.requires:

.PHONY : CMakeFiles/msf_timing_tests.dir/src/test/testMSFTiming.cc.o.requires

CMakeFiles/msf_timing_tests.dir/src/test/testMSFTiming.cc.o.provides: CMakeFiles/msf_timing_tests.dir/src/test/testMSFTiming.cc.o.requires
	$(MAKE) -f CMakeFiles/msf_timing_tests.dir/build.make CMakeFiles/msf_timing_tests.dir/src/test/testMSFTiming.cc.o.provides.build
.PHONY : CMakeFiles/msf_timing_tests.dir/src/test/testMSFTiming.cc.o.provides

CMakeFiles/msf_timing_tests.dir/src/test/testMSFTiming.cc.o.provides.build: CMakeFiles/msf_timing_tests.dir/src/test/testMSFTiming.cc.o


# Object files for target msf_timing_tests
msf_timing_tests_OBJECTS = \
"CMakeFiles/msf_timing_tests.dir/src/test/testMSFTiming.cc.o"

# External object files for target msf_timing_tests
msf_timing_tests_EXTERNAL_OBJECTS =

/home/hemanth/neural_fly/devel/.private/msf_timing/lib/msf_timing/msf_timing_tests: CMakeFiles/msf_timing_tests.dir/src/test/testMSFTiming.cc.o
/home/hemanth/neural_fly/devel/.private/msf_timing/lib/msf_timing/msf_timing_tests: CMakeFiles/msf_timing_tests.dir/build.make
/home/hemanth/neural_fly/devel/.private/msf_timing/lib/msf_timing/msf_timing_tests: gtest/googlemock/gtest/libgtest.so
/home/hemanth/neural_fly/devel/.private/msf_timing/lib/msf_timing/msf_timing_tests: /home/hemanth/neural_fly/devel/.private/msf_timing/lib/libmsf_timing.so
/home/hemanth/neural_fly/devel/.private/msf_timing/lib/msf_timing/msf_timing_tests: CMakeFiles/msf_timing_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hemanth/neural_fly/build/msf_timing/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/hemanth/neural_fly/devel/.private/msf_timing/lib/msf_timing/msf_timing_tests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/msf_timing_tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/msf_timing_tests.dir/build: /home/hemanth/neural_fly/devel/.private/msf_timing/lib/msf_timing/msf_timing_tests

.PHONY : CMakeFiles/msf_timing_tests.dir/build

CMakeFiles/msf_timing_tests.dir/requires: CMakeFiles/msf_timing_tests.dir/src/test/testMSFTiming.cc.o.requires

.PHONY : CMakeFiles/msf_timing_tests.dir/requires

CMakeFiles/msf_timing_tests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/msf_timing_tests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/msf_timing_tests.dir/clean

CMakeFiles/msf_timing_tests.dir/depend:
	cd /home/hemanth/neural_fly/build/msf_timing && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hemanth/neural_fly/src/ethzasl_msf/msf_timing /home/hemanth/neural_fly/src/ethzasl_msf/msf_timing /home/hemanth/neural_fly/build/msf_timing /home/hemanth/neural_fly/build/msf_timing /home/hemanth/neural_fly/build/msf_timing/CMakeFiles/msf_timing_tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/msf_timing_tests.dir/depend

