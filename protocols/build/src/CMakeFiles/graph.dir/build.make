# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.29.1/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.29.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/build

# Include any dependencies generated for this target.
include src/CMakeFiles/graph.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/graph.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/graph.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/graph.dir/flags.make

src/CMakeFiles/graph.dir/edge.cpp.o: src/CMakeFiles/graph.dir/flags.make
src/CMakeFiles/graph.dir/edge.cpp.o: /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/src/edge.cpp
src/CMakeFiles/graph.dir/edge.cpp.o: src/CMakeFiles/graph.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/graph.dir/edge.cpp.o"
	cd /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/graph.dir/edge.cpp.o -MF CMakeFiles/graph.dir/edge.cpp.o.d -o CMakeFiles/graph.dir/edge.cpp.o -c /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/src/edge.cpp

src/CMakeFiles/graph.dir/edge.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/graph.dir/edge.cpp.i"
	cd /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/src/edge.cpp > CMakeFiles/graph.dir/edge.cpp.i

src/CMakeFiles/graph.dir/edge.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/graph.dir/edge.cpp.s"
	cd /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/src/edge.cpp -o CMakeFiles/graph.dir/edge.cpp.s

src/CMakeFiles/graph.dir/graph.cpp.o: src/CMakeFiles/graph.dir/flags.make
src/CMakeFiles/graph.dir/graph.cpp.o: /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/src/graph.cpp
src/CMakeFiles/graph.dir/graph.cpp.o: src/CMakeFiles/graph.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/graph.dir/graph.cpp.o"
	cd /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/graph.dir/graph.cpp.o -MF CMakeFiles/graph.dir/graph.cpp.o.d -o CMakeFiles/graph.dir/graph.cpp.o -c /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/src/graph.cpp

src/CMakeFiles/graph.dir/graph.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/graph.dir/graph.cpp.i"
	cd /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/src/graph.cpp > CMakeFiles/graph.dir/graph.cpp.i

src/CMakeFiles/graph.dir/graph.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/graph.dir/graph.cpp.s"
	cd /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/src/graph.cpp -o CMakeFiles/graph.dir/graph.cpp.s

src/CMakeFiles/graph.dir/node.cpp.o: src/CMakeFiles/graph.dir/flags.make
src/CMakeFiles/graph.dir/node.cpp.o: /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/src/node.cpp
src/CMakeFiles/graph.dir/node.cpp.o: src/CMakeFiles/graph.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/graph.dir/node.cpp.o"
	cd /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/graph.dir/node.cpp.o -MF CMakeFiles/graph.dir/node.cpp.o.d -o CMakeFiles/graph.dir/node.cpp.o -c /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/src/node.cpp

src/CMakeFiles/graph.dir/node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/graph.dir/node.cpp.i"
	cd /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/src/node.cpp > CMakeFiles/graph.dir/node.cpp.i

src/CMakeFiles/graph.dir/node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/graph.dir/node.cpp.s"
	cd /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/build/src && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/src/node.cpp -o CMakeFiles/graph.dir/node.cpp.s

# Object files for target graph
graph_OBJECTS = \
"CMakeFiles/graph.dir/edge.cpp.o" \
"CMakeFiles/graph.dir/graph.cpp.o" \
"CMakeFiles/graph.dir/node.cpp.o"

# External object files for target graph
graph_EXTERNAL_OBJECTS =

src/libgraph.a: src/CMakeFiles/graph.dir/edge.cpp.o
src/libgraph.a: src/CMakeFiles/graph.dir/graph.cpp.o
src/libgraph.a: src/CMakeFiles/graph.dir/node.cpp.o
src/libgraph.a: src/CMakeFiles/graph.dir/build.make
src/libgraph.a: src/CMakeFiles/graph.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libgraph.a"
	cd /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/build/src && $(CMAKE_COMMAND) -P CMakeFiles/graph.dir/cmake_clean_target.cmake
	cd /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/graph.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/graph.dir/build: src/libgraph.a
.PHONY : src/CMakeFiles/graph.dir/build

src/CMakeFiles/graph.dir/clean:
	cd /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/build/src && $(CMAKE_COMMAND) -P CMakeFiles/graph.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/graph.dir/clean

src/CMakeFiles/graph.dir/depend:
	cd /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/src /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/build /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/build/src /Users/fozua/Desktop/Distributed-Protocols-Simulator/protocols/build/src/CMakeFiles/graph.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : src/CMakeFiles/graph.dir/depend

