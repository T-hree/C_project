# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.23

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Three\Desktop\C_project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Three\Desktop\C_project\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\C_Project.dir\depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles\C_Project.dir\compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles\C_Project.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\C_Project.dir\flags.make

CMakeFiles\C_Project.dir\初识C(3).c.obj: CMakeFiles\C_Project.dir\flags.make
CMakeFiles\C_Project.dir\初识C(3).c.obj: ..\初识C(3).c
CMakeFiles\C_Project.dir\初识C(3).c.obj: CMakeFiles\C_Project.dir\compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Three\Desktop\C_project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/C_Project.dir/初识C(3).c.obj"
	$(CMAKE_COMMAND) -E cmake_cl_compile_depends --dep-file=CMakeFiles\C_Project.dir\初识C(3).c.obj.d --working-dir=C:\Users\Three\Desktop\C_project\cmake-build-debug --filter-prefix="注意: 包含文件:  " -- C:\PROGRA~1\MICROS~3\2022\COMMUN~1\VC\Tools\MSVC\1433~1.316\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /showIncludes /FoCMakeFiles\C_Project.dir\初识C(3).c.obj /FdCMakeFiles\C_Project.dir\ /FS -c C:\Users\Three\Desktop\C_project\初识C(3).c
<<

CMakeFiles\C_Project.dir\初识C(3).c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/C_Project.dir/初识C(3).c.i"
	C:\PROGRA~1\MICROS~3\2022\COMMUN~1\VC\Tools\MSVC\1433~1.316\bin\Hostx86\x86\cl.exe > CMakeFiles\C_Project.dir\初识C(3).c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Three\Desktop\C_project\初识C(3).c
<<

CMakeFiles\C_Project.dir\初识C(3).c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/C_Project.dir/初识C(3).c.s"
	C:\PROGRA~1\MICROS~3\2022\COMMUN~1\VC\Tools\MSVC\1433~1.316\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\C_Project.dir\初识C(3).c.s /c C:\Users\Three\Desktop\C_project\初识C(3).c
<<

# Object files for target C_Project
C_Project_OBJECTS = \
"CMakeFiles\C_Project.dir\初识C(3).c.obj"

# External object files for target C_Project
C_Project_EXTERNAL_OBJECTS =

C_Project.exe: CMakeFiles\C_Project.dir\初识C(3).c.obj
C_Project.exe: CMakeFiles\C_Project.dir\build.make
C_Project.exe: CMakeFiles\C_Project.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Three\Desktop\C_project\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable C_Project.exe"
	"C:\Program Files\JetBrains\CLion 2022.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\C_Project.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- C:\PROGRA~1\MICROS~3\2022\COMMUN~1\VC\Tools\MSVC\1433~1.316\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\C_Project.dir\objects1.rsp @<<
 /out:C_Project.exe /implib:C_Project.lib /pdb:C:\Users\Three\Desktop\C_project\cmake-build-debug\C_Project.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\C_Project.dir\build: C_Project.exe
.PHONY : CMakeFiles\C_Project.dir\build

CMakeFiles\C_Project.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\C_Project.dir\cmake_clean.cmake
.PHONY : CMakeFiles\C_Project.dir\clean

CMakeFiles\C_Project.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\Three\Desktop\C_project C:\Users\Three\Desktop\C_project C:\Users\Three\Desktop\C_project\cmake-build-debug C:\Users\Three\Desktop\C_project\cmake-build-debug C:\Users\Three\Desktop\C_project\cmake-build-debug\CMakeFiles\C_Project.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\C_Project.dir\depend

