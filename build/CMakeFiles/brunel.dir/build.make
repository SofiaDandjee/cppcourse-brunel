# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.9.4_1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.9.4_1/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/Sofia/Desktop/cppcourse-brunel

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/Sofia/Desktop/cppcourse-brunel/build

# Include any dependencies generated for this target.
include CMakeFiles/brunel.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/brunel.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/brunel.dir/flags.make

CMakeFiles/brunel.dir/src/main.cpp.o: CMakeFiles/brunel.dir/flags.make
CMakeFiles/brunel.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Sofia/Desktop/cppcourse-brunel/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/brunel.dir/src/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/brunel.dir/src/main.cpp.o -c /Users/Sofia/Desktop/cppcourse-brunel/src/main.cpp

CMakeFiles/brunel.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/brunel.dir/src/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Sofia/Desktop/cppcourse-brunel/src/main.cpp > CMakeFiles/brunel.dir/src/main.cpp.i

CMakeFiles/brunel.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/brunel.dir/src/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Sofia/Desktop/cppcourse-brunel/src/main.cpp -o CMakeFiles/brunel.dir/src/main.cpp.s

CMakeFiles/brunel.dir/src/main.cpp.o.requires:

.PHONY : CMakeFiles/brunel.dir/src/main.cpp.o.requires

CMakeFiles/brunel.dir/src/main.cpp.o.provides: CMakeFiles/brunel.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/brunel.dir/build.make CMakeFiles/brunel.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/brunel.dir/src/main.cpp.o.provides

CMakeFiles/brunel.dir/src/main.cpp.o.provides.build: CMakeFiles/brunel.dir/src/main.cpp.o


CMakeFiles/brunel.dir/src/neuron.cpp.o: CMakeFiles/brunel.dir/flags.make
CMakeFiles/brunel.dir/src/neuron.cpp.o: ../src/neuron.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Sofia/Desktop/cppcourse-brunel/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/brunel.dir/src/neuron.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/brunel.dir/src/neuron.cpp.o -c /Users/Sofia/Desktop/cppcourse-brunel/src/neuron.cpp

CMakeFiles/brunel.dir/src/neuron.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/brunel.dir/src/neuron.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Sofia/Desktop/cppcourse-brunel/src/neuron.cpp > CMakeFiles/brunel.dir/src/neuron.cpp.i

CMakeFiles/brunel.dir/src/neuron.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/brunel.dir/src/neuron.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Sofia/Desktop/cppcourse-brunel/src/neuron.cpp -o CMakeFiles/brunel.dir/src/neuron.cpp.s

CMakeFiles/brunel.dir/src/neuron.cpp.o.requires:

.PHONY : CMakeFiles/brunel.dir/src/neuron.cpp.o.requires

CMakeFiles/brunel.dir/src/neuron.cpp.o.provides: CMakeFiles/brunel.dir/src/neuron.cpp.o.requires
	$(MAKE) -f CMakeFiles/brunel.dir/build.make CMakeFiles/brunel.dir/src/neuron.cpp.o.provides.build
.PHONY : CMakeFiles/brunel.dir/src/neuron.cpp.o.provides

CMakeFiles/brunel.dir/src/neuron.cpp.o.provides.build: CMakeFiles/brunel.dir/src/neuron.cpp.o


CMakeFiles/brunel.dir/src/network.cpp.o: CMakeFiles/brunel.dir/flags.make
CMakeFiles/brunel.dir/src/network.cpp.o: ../src/network.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Sofia/Desktop/cppcourse-brunel/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/brunel.dir/src/network.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/brunel.dir/src/network.cpp.o -c /Users/Sofia/Desktop/cppcourse-brunel/src/network.cpp

CMakeFiles/brunel.dir/src/network.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/brunel.dir/src/network.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Sofia/Desktop/cppcourse-brunel/src/network.cpp > CMakeFiles/brunel.dir/src/network.cpp.i

CMakeFiles/brunel.dir/src/network.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/brunel.dir/src/network.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Sofia/Desktop/cppcourse-brunel/src/network.cpp -o CMakeFiles/brunel.dir/src/network.cpp.s

CMakeFiles/brunel.dir/src/network.cpp.o.requires:

.PHONY : CMakeFiles/brunel.dir/src/network.cpp.o.requires

CMakeFiles/brunel.dir/src/network.cpp.o.provides: CMakeFiles/brunel.dir/src/network.cpp.o.requires
	$(MAKE) -f CMakeFiles/brunel.dir/build.make CMakeFiles/brunel.dir/src/network.cpp.o.provides.build
.PHONY : CMakeFiles/brunel.dir/src/network.cpp.o.provides

CMakeFiles/brunel.dir/src/network.cpp.o.provides.build: CMakeFiles/brunel.dir/src/network.cpp.o


CMakeFiles/brunel.dir/src/simulation.cpp.o: CMakeFiles/brunel.dir/flags.make
CMakeFiles/brunel.dir/src/simulation.cpp.o: ../src/simulation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/Sofia/Desktop/cppcourse-brunel/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/brunel.dir/src/simulation.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/brunel.dir/src/simulation.cpp.o -c /Users/Sofia/Desktop/cppcourse-brunel/src/simulation.cpp

CMakeFiles/brunel.dir/src/simulation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/brunel.dir/src/simulation.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/Sofia/Desktop/cppcourse-brunel/src/simulation.cpp > CMakeFiles/brunel.dir/src/simulation.cpp.i

CMakeFiles/brunel.dir/src/simulation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/brunel.dir/src/simulation.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/Sofia/Desktop/cppcourse-brunel/src/simulation.cpp -o CMakeFiles/brunel.dir/src/simulation.cpp.s

CMakeFiles/brunel.dir/src/simulation.cpp.o.requires:

.PHONY : CMakeFiles/brunel.dir/src/simulation.cpp.o.requires

CMakeFiles/brunel.dir/src/simulation.cpp.o.provides: CMakeFiles/brunel.dir/src/simulation.cpp.o.requires
	$(MAKE) -f CMakeFiles/brunel.dir/build.make CMakeFiles/brunel.dir/src/simulation.cpp.o.provides.build
.PHONY : CMakeFiles/brunel.dir/src/simulation.cpp.o.provides

CMakeFiles/brunel.dir/src/simulation.cpp.o.provides.build: CMakeFiles/brunel.dir/src/simulation.cpp.o


# Object files for target brunel
brunel_OBJECTS = \
"CMakeFiles/brunel.dir/src/main.cpp.o" \
"CMakeFiles/brunel.dir/src/neuron.cpp.o" \
"CMakeFiles/brunel.dir/src/network.cpp.o" \
"CMakeFiles/brunel.dir/src/simulation.cpp.o"

# External object files for target brunel
brunel_EXTERNAL_OBJECTS =

brunel: CMakeFiles/brunel.dir/src/main.cpp.o
brunel: CMakeFiles/brunel.dir/src/neuron.cpp.o
brunel: CMakeFiles/brunel.dir/src/network.cpp.o
brunel: CMakeFiles/brunel.dir/src/simulation.cpp.o
brunel: CMakeFiles/brunel.dir/build.make
brunel: CMakeFiles/brunel.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/Sofia/Desktop/cppcourse-brunel/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable brunel"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/brunel.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/brunel.dir/build: brunel

.PHONY : CMakeFiles/brunel.dir/build

CMakeFiles/brunel.dir/requires: CMakeFiles/brunel.dir/src/main.cpp.o.requires
CMakeFiles/brunel.dir/requires: CMakeFiles/brunel.dir/src/neuron.cpp.o.requires
CMakeFiles/brunel.dir/requires: CMakeFiles/brunel.dir/src/network.cpp.o.requires
CMakeFiles/brunel.dir/requires: CMakeFiles/brunel.dir/src/simulation.cpp.o.requires

.PHONY : CMakeFiles/brunel.dir/requires

CMakeFiles/brunel.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/brunel.dir/cmake_clean.cmake
.PHONY : CMakeFiles/brunel.dir/clean

CMakeFiles/brunel.dir/depend:
	cd /Users/Sofia/Desktop/cppcourse-brunel/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/Sofia/Desktop/cppcourse-brunel /Users/Sofia/Desktop/cppcourse-brunel /Users/Sofia/Desktop/cppcourse-brunel/build /Users/Sofia/Desktop/cppcourse-brunel/build /Users/Sofia/Desktop/cppcourse-brunel/build/CMakeFiles/brunel.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/brunel.dir/depend
