# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = C:\Espressif\tools\cmake\3.20.3\bin\cmake.exe

# The command to remove a file.
RM = C:\Espressif\tools\cmake\3.20.3\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\code\C\VScodeProgram\project\test_01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\code\C\VScodeProgram\project\test_01\build

# Include any dependencies generated for this target.
include CMakeFiles/test_01.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/test_01.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test_01.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_01.dir/flags.make

CMakeFiles/test_01.dir/src/child_class.obj: CMakeFiles/test_01.dir/flags.make
CMakeFiles/test_01.dir/src/child_class.obj: CMakeFiles/test_01.dir/includes_C.rsp
CMakeFiles/test_01.dir/src/child_class.obj: ../src/child_class.c
CMakeFiles/test_01.dir/src/child_class.obj: CMakeFiles/test_01.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\code\C\VScodeProgram\project\test_01\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/test_01.dir/src/child_class.obj"
	C:\Users\YEWAN\mingw64\bin\x86_64-w64-mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/test_01.dir/src/child_class.obj -MF CMakeFiles\test_01.dir\src\child_class.obj.d -o CMakeFiles\test_01.dir\src\child_class.obj -c D:\code\C\VScodeProgram\project\test_01\src\child_class.c

CMakeFiles/test_01.dir/src/child_class.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_01.dir/src/child_class.i"
	C:\Users\YEWAN\mingw64\bin\x86_64-w64-mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\code\C\VScodeProgram\project\test_01\src\child_class.c > CMakeFiles\test_01.dir\src\child_class.i

CMakeFiles/test_01.dir/src/child_class.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_01.dir/src/child_class.s"
	C:\Users\YEWAN\mingw64\bin\x86_64-w64-mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\code\C\VScodeProgram\project\test_01\src\child_class.c -o CMakeFiles\test_01.dir\src\child_class.s

CMakeFiles/test_01.dir/src/class.obj: CMakeFiles/test_01.dir/flags.make
CMakeFiles/test_01.dir/src/class.obj: CMakeFiles/test_01.dir/includes_C.rsp
CMakeFiles/test_01.dir/src/class.obj: ../src/class.c
CMakeFiles/test_01.dir/src/class.obj: CMakeFiles/test_01.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\code\C\VScodeProgram\project\test_01\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/test_01.dir/src/class.obj"
	C:\Users\YEWAN\mingw64\bin\x86_64-w64-mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/test_01.dir/src/class.obj -MF CMakeFiles\test_01.dir\src\class.obj.d -o CMakeFiles\test_01.dir\src\class.obj -c D:\code\C\VScodeProgram\project\test_01\src\class.c

CMakeFiles/test_01.dir/src/class.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_01.dir/src/class.i"
	C:\Users\YEWAN\mingw64\bin\x86_64-w64-mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\code\C\VScodeProgram\project\test_01\src\class.c > CMakeFiles\test_01.dir\src\class.i

CMakeFiles/test_01.dir/src/class.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_01.dir/src/class.s"
	C:\Users\YEWAN\mingw64\bin\x86_64-w64-mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\code\C\VScodeProgram\project\test_01\src\class.c -o CMakeFiles\test_01.dir\src\class.s

CMakeFiles/test_01.dir/main.obj: CMakeFiles/test_01.dir/flags.make
CMakeFiles/test_01.dir/main.obj: CMakeFiles/test_01.dir/includes_C.rsp
CMakeFiles/test_01.dir/main.obj: ../main.c
CMakeFiles/test_01.dir/main.obj: CMakeFiles/test_01.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\code\C\VScodeProgram\project\test_01\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/test_01.dir/main.obj"
	C:\Users\YEWAN\mingw64\bin\x86_64-w64-mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/test_01.dir/main.obj -MF CMakeFiles\test_01.dir\main.obj.d -o CMakeFiles\test_01.dir\main.obj -c D:\code\C\VScodeProgram\project\test_01\main.c

CMakeFiles/test_01.dir/main.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_01.dir/main.i"
	C:\Users\YEWAN\mingw64\bin\x86_64-w64-mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\code\C\VScodeProgram\project\test_01\main.c > CMakeFiles\test_01.dir\main.i

CMakeFiles/test_01.dir/main.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_01.dir/main.s"
	C:\Users\YEWAN\mingw64\bin\x86_64-w64-mingw32-gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\code\C\VScodeProgram\project\test_01\main.c -o CMakeFiles\test_01.dir\main.s

# Object files for target test_01
test_01_OBJECTS = \
"CMakeFiles/test_01.dir/src/child_class.obj" \
"CMakeFiles/test_01.dir/src/class.obj" \
"CMakeFiles/test_01.dir/main.obj"

# External object files for target test_01
test_01_EXTERNAL_OBJECTS =

test_01.exe: CMakeFiles/test_01.dir/src/child_class.obj
test_01.exe: CMakeFiles/test_01.dir/src/class.obj
test_01.exe: CMakeFiles/test_01.dir/main.obj
test_01.exe: CMakeFiles/test_01.dir/build.make
test_01.exe: CMakeFiles/test_01.dir/linklibs.rsp
test_01.exe: CMakeFiles/test_01.dir/objects1.rsp
test_01.exe: CMakeFiles/test_01.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\code\C\VScodeProgram\project\test_01\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable test_01.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\test_01.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_01.dir/build: test_01.exe
.PHONY : CMakeFiles/test_01.dir/build

CMakeFiles/test_01.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\test_01.dir\cmake_clean.cmake
.PHONY : CMakeFiles/test_01.dir/clean

CMakeFiles/test_01.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\code\C\VScodeProgram\project\test_01 D:\code\C\VScodeProgram\project\test_01 D:\code\C\VScodeProgram\project\test_01\build D:\code\C\VScodeProgram\project\test_01\build D:\code\C\VScodeProgram\project\test_01\build\CMakeFiles\test_01.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_01.dir/depend

