# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.29

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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Repos\TicTacToe

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Repos\TicTacToe\build

# Include any dependencies generated for this target.
include CMakeFiles/TicTacToe.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TicTacToe.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TicTacToe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TicTacToe.dir/flags.make

CMakeFiles/TicTacToe.dir/main.cpp.obj: CMakeFiles/TicTacToe.dir/flags.make
CMakeFiles/TicTacToe.dir/main.cpp.obj: D:/Repos/TicTacToe/main.cpp
CMakeFiles/TicTacToe.dir/main.cpp.obj: CMakeFiles/TicTacToe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Repos\TicTacToe\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TicTacToe.dir/main.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TicTacToe.dir/main.cpp.obj -MF CMakeFiles\TicTacToe.dir\main.cpp.obj.d -o CMakeFiles\TicTacToe.dir\main.cpp.obj -c D:\Repos\TicTacToe\main.cpp

CMakeFiles/TicTacToe.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TicTacToe.dir/main.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Repos\TicTacToe\main.cpp > CMakeFiles\TicTacToe.dir\main.cpp.i

CMakeFiles/TicTacToe.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TicTacToe.dir/main.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Repos\TicTacToe\main.cpp -o CMakeFiles\TicTacToe.dir\main.cpp.s

CMakeFiles/TicTacToe.dir/board.cpp.obj: CMakeFiles/TicTacToe.dir/flags.make
CMakeFiles/TicTacToe.dir/board.cpp.obj: D:/Repos/TicTacToe/board.cpp
CMakeFiles/TicTacToe.dir/board.cpp.obj: CMakeFiles/TicTacToe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Repos\TicTacToe\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TicTacToe.dir/board.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TicTacToe.dir/board.cpp.obj -MF CMakeFiles\TicTacToe.dir\board.cpp.obj.d -o CMakeFiles\TicTacToe.dir\board.cpp.obj -c D:\Repos\TicTacToe\board.cpp

CMakeFiles/TicTacToe.dir/board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TicTacToe.dir/board.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Repos\TicTacToe\board.cpp > CMakeFiles\TicTacToe.dir\board.cpp.i

CMakeFiles/TicTacToe.dir/board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TicTacToe.dir/board.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Repos\TicTacToe\board.cpp -o CMakeFiles\TicTacToe.dir\board.cpp.s

CMakeFiles/TicTacToe.dir/ai.cpp.obj: CMakeFiles/TicTacToe.dir/flags.make
CMakeFiles/TicTacToe.dir/ai.cpp.obj: D:/Repos/TicTacToe/ai.cpp
CMakeFiles/TicTacToe.dir/ai.cpp.obj: CMakeFiles/TicTacToe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=D:\Repos\TicTacToe\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/TicTacToe.dir/ai.cpp.obj"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TicTacToe.dir/ai.cpp.obj -MF CMakeFiles\TicTacToe.dir\ai.cpp.obj.d -o CMakeFiles\TicTacToe.dir\ai.cpp.obj -c D:\Repos\TicTacToe\ai.cpp

CMakeFiles/TicTacToe.dir/ai.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/TicTacToe.dir/ai.cpp.i"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Repos\TicTacToe\ai.cpp > CMakeFiles\TicTacToe.dir\ai.cpp.i

CMakeFiles/TicTacToe.dir/ai.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/TicTacToe.dir/ai.cpp.s"
	C:\msys64\ucrt64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Repos\TicTacToe\ai.cpp -o CMakeFiles\TicTacToe.dir\ai.cpp.s

# Object files for target TicTacToe
TicTacToe_OBJECTS = \
"CMakeFiles/TicTacToe.dir/main.cpp.obj" \
"CMakeFiles/TicTacToe.dir/board.cpp.obj" \
"CMakeFiles/TicTacToe.dir/ai.cpp.obj"

# External object files for target TicTacToe
TicTacToe_EXTERNAL_OBJECTS =

TicTacToe.exe: CMakeFiles/TicTacToe.dir/main.cpp.obj
TicTacToe.exe: CMakeFiles/TicTacToe.dir/board.cpp.obj
TicTacToe.exe: CMakeFiles/TicTacToe.dir/ai.cpp.obj
TicTacToe.exe: CMakeFiles/TicTacToe.dir/build.make
TicTacToe.exe: CMakeFiles/TicTacToe.dir/linkLibs.rsp
TicTacToe.exe: CMakeFiles/TicTacToe.dir/objects1.rsp
TicTacToe.exe: CMakeFiles/TicTacToe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=D:\Repos\TicTacToe\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable TicTacToe.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TicTacToe.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TicTacToe.dir/build: TicTacToe.exe
.PHONY : CMakeFiles/TicTacToe.dir/build

CMakeFiles/TicTacToe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TicTacToe.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TicTacToe.dir/clean

CMakeFiles/TicTacToe.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Repos\TicTacToe D:\Repos\TicTacToe D:\Repos\TicTacToe\build D:\Repos\TicTacToe\build D:\Repos\TicTacToe\build\CMakeFiles\TicTacToe.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/TicTacToe.dir/depend

