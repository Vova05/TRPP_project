# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.5\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\c++\For_Qt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\c++\For_Qt\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/For_Qt.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/For_Qt.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/For_Qt.dir/flags.make

CMakeFiles/For_Qt.dir/main.cpp.obj: CMakeFiles/For_Qt.dir/flags.make
CMakeFiles/For_Qt.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\c++\For_Qt\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/For_Qt.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\For_Qt.dir\main.cpp.obj -c E:\c++\For_Qt\main.cpp

CMakeFiles/For_Qt.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/For_Qt.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\c++\For_Qt\main.cpp > CMakeFiles\For_Qt.dir\main.cpp.i

CMakeFiles/For_Qt.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/For_Qt.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\c++\For_Qt\main.cpp -o CMakeFiles\For_Qt.dir\main.cpp.s

# Object files for target For_Qt
For_Qt_OBJECTS = \
"CMakeFiles/For_Qt.dir/main.cpp.obj"

# External object files for target For_Qt
For_Qt_EXTERNAL_OBJECTS =

For_Qt.exe: CMakeFiles/For_Qt.dir/main.cpp.obj
For_Qt.exe: CMakeFiles/For_Qt.dir/build.make
For_Qt.exe: CMakeFiles/For_Qt.dir/linklibs.rsp
For_Qt.exe: CMakeFiles/For_Qt.dir/objects1.rsp
For_Qt.exe: CMakeFiles/For_Qt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\c++\For_Qt\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable For_Qt.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\For_Qt.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/For_Qt.dir/build: For_Qt.exe

.PHONY : CMakeFiles/For_Qt.dir/build

CMakeFiles/For_Qt.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\For_Qt.dir\cmake_clean.cmake
.PHONY : CMakeFiles/For_Qt.dir/clean

CMakeFiles/For_Qt.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\c++\For_Qt E:\c++\For_Qt E:\c++\For_Qt\cmake-build-debug E:\c++\For_Qt\cmake-build-debug E:\c++\For_Qt\cmake-build-debug\CMakeFiles\For_Qt.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/For_Qt.dir/depend

