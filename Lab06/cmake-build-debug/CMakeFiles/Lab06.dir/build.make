# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Desktop\Lab06

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Desktop\Lab06\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Lab06.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Lab06.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Lab06.dir\flags.make

CMakeFiles\Lab06.dir\main.cpp.obj: CMakeFiles\Lab06.dir\flags.make
CMakeFiles\Lab06.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Desktop\Lab06\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab06.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Lab06.dir\main.cpp.obj /FdCMakeFiles\Lab06.dir\ /FS -c C:\Desktop\Lab06\main.cpp
<<

CMakeFiles\Lab06.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab06.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe > CMakeFiles\Lab06.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Desktop\Lab06\main.cpp
<<

CMakeFiles\Lab06.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab06.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Lab06.dir\main.cpp.s /c C:\Desktop\Lab06\main.cpp
<<

CMakeFiles\Lab06.dir\matrice.cpp.obj: CMakeFiles\Lab06.dir\flags.make
CMakeFiles\Lab06.dir\matrice.cpp.obj: ..\matrice.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Desktop\Lab06\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Lab06.dir/matrice.cpp.obj"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Lab06.dir\matrice.cpp.obj /FdCMakeFiles\Lab06.dir\ /FS -c C:\Desktop\Lab06\matrice.cpp
<<

CMakeFiles\Lab06.dir\matrice.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab06.dir/matrice.cpp.i"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe > CMakeFiles\Lab06.dir\matrice.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Desktop\Lab06\matrice.cpp
<<

CMakeFiles\Lab06.dir\matrice.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab06.dir/matrice.cpp.s"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Lab06.dir\matrice.cpp.s /c C:\Desktop\Lab06\matrice.cpp
<<

# Object files for target Lab06
Lab06_OBJECTS = \
"CMakeFiles\Lab06.dir\main.cpp.obj" \
"CMakeFiles\Lab06.dir\matrice.cpp.obj"

# External object files for target Lab06
Lab06_EXTERNAL_OBJECTS =

Lab06.exe: CMakeFiles\Lab06.dir\main.cpp.obj
Lab06.exe: CMakeFiles\Lab06.dir\matrice.cpp.obj
Lab06.exe: CMakeFiles\Lab06.dir\build.make
Lab06.exe: CMakeFiles\Lab06.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Desktop\Lab06\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Lab06.exe"
	"C:\Program Files\JetBrains\CLion 2018.3.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Lab06.dir --manifests  -- C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1415~1.267\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Lab06.dir\objects1.rsp @<<
 /out:Lab06.exe /implib:Lab06.lib /pdb:C:\Desktop\Lab06\cmake-build-debug\Lab06.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Lab06.dir\build: Lab06.exe

.PHONY : CMakeFiles\Lab06.dir\build

CMakeFiles\Lab06.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Lab06.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Lab06.dir\clean

CMakeFiles\Lab06.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Desktop\Lab06 C:\Desktop\Lab06 C:\Desktop\Lab06\cmake-build-debug C:\Desktop\Lab06\cmake-build-debug C:\Desktop\Lab06\cmake-build-debug\CMakeFiles\Lab06.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Lab06.dir\depend

