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
CMAKE_COMMAND = C:\msys64\mingw64\bin\cmake.exe

# The command to remove a file.
RM = C:\msys64\mingw64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Vscode\Projeto_Final\Logica_programacao_FATEC_MAROMO\Projeto_final_v1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Vscode\Projeto_Final\Logica_programacao_FATEC_MAROMO\Projeto_final_v1\out\build\GCC 14.1.0 x86_64-w64-mingw32 (mingw64)"

# Include any dependencies generated for this target.
include CMakeFiles/GerenciadorDeTarefas.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/GerenciadorDeTarefas.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/GerenciadorDeTarefas.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GerenciadorDeTarefas.dir/flags.make

CMakeFiles/GerenciadorDeTarefas.dir/main.c.obj: CMakeFiles/GerenciadorDeTarefas.dir/flags.make
CMakeFiles/GerenciadorDeTarefas.dir/main.c.obj: CMakeFiles/GerenciadorDeTarefas.dir/includes_C.rsp
CMakeFiles/GerenciadorDeTarefas.dir/main.c.obj: D:/Vscode/Projeto_Final/Logica_programacao_FATEC_MAROMO/Projeto_final_v1/main.c
CMakeFiles/GerenciadorDeTarefas.dir/main.c.obj: CMakeFiles/GerenciadorDeTarefas.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:\Vscode\Projeto_Final\Logica_programacao_FATEC_MAROMO\Projeto_final_v1\out\build\GCC 14.1.0 x86_64-w64-mingw32 (mingw64)\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/GerenciadorDeTarefas.dir/main.c.obj"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/GerenciadorDeTarefas.dir/main.c.obj -MF CMakeFiles\GerenciadorDeTarefas.dir\main.c.obj.d -o CMakeFiles\GerenciadorDeTarefas.dir\main.c.obj -c D:\Vscode\Projeto_Final\Logica_programacao_FATEC_MAROMO\Projeto_final_v1\main.c

CMakeFiles/GerenciadorDeTarefas.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/GerenciadorDeTarefas.dir/main.c.i"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Vscode\Projeto_Final\Logica_programacao_FATEC_MAROMO\Projeto_final_v1\main.c > CMakeFiles\GerenciadorDeTarefas.dir\main.c.i

CMakeFiles/GerenciadorDeTarefas.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/GerenciadorDeTarefas.dir/main.c.s"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Vscode\Projeto_Final\Logica_programacao_FATEC_MAROMO\Projeto_final_v1\main.c -o CMakeFiles\GerenciadorDeTarefas.dir\main.c.s

CMakeFiles/GerenciadorDeTarefas.dir/produtividade.c.obj: CMakeFiles/GerenciadorDeTarefas.dir/flags.make
CMakeFiles/GerenciadorDeTarefas.dir/produtividade.c.obj: CMakeFiles/GerenciadorDeTarefas.dir/includes_C.rsp
CMakeFiles/GerenciadorDeTarefas.dir/produtividade.c.obj: D:/Vscode/Projeto_Final/Logica_programacao_FATEC_MAROMO/Projeto_final_v1/produtividade.c
CMakeFiles/GerenciadorDeTarefas.dir/produtividade.c.obj: CMakeFiles/GerenciadorDeTarefas.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:\Vscode\Projeto_Final\Logica_programacao_FATEC_MAROMO\Projeto_final_v1\out\build\GCC 14.1.0 x86_64-w64-mingw32 (mingw64)\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/GerenciadorDeTarefas.dir/produtividade.c.obj"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/GerenciadorDeTarefas.dir/produtividade.c.obj -MF CMakeFiles\GerenciadorDeTarefas.dir\produtividade.c.obj.d -o CMakeFiles\GerenciadorDeTarefas.dir\produtividade.c.obj -c D:\Vscode\Projeto_Final\Logica_programacao_FATEC_MAROMO\Projeto_final_v1\produtividade.c

CMakeFiles/GerenciadorDeTarefas.dir/produtividade.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/GerenciadorDeTarefas.dir/produtividade.c.i"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\Vscode\Projeto_Final\Logica_programacao_FATEC_MAROMO\Projeto_final_v1\produtividade.c > CMakeFiles\GerenciadorDeTarefas.dir\produtividade.c.i

CMakeFiles/GerenciadorDeTarefas.dir/produtividade.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/GerenciadorDeTarefas.dir/produtividade.c.s"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\Vscode\Projeto_Final\Logica_programacao_FATEC_MAROMO\Projeto_final_v1\produtividade.c -o CMakeFiles\GerenciadorDeTarefas.dir\produtividade.c.s

# Object files for target GerenciadorDeTarefas
GerenciadorDeTarefas_OBJECTS = \
"CMakeFiles/GerenciadorDeTarefas.dir/main.c.obj" \
"CMakeFiles/GerenciadorDeTarefas.dir/produtividade.c.obj"

# External object files for target GerenciadorDeTarefas
GerenciadorDeTarefas_EXTERNAL_OBJECTS =

GerenciadorDeTarefas.exe: CMakeFiles/GerenciadorDeTarefas.dir/main.c.obj
GerenciadorDeTarefas.exe: CMakeFiles/GerenciadorDeTarefas.dir/produtividade.c.obj
GerenciadorDeTarefas.exe: CMakeFiles/GerenciadorDeTarefas.dir/build.make
GerenciadorDeTarefas.exe: CMakeFiles/GerenciadorDeTarefas.dir/linkLibs.rsp
GerenciadorDeTarefas.exe: CMakeFiles/GerenciadorDeTarefas.dir/objects1.rsp
GerenciadorDeTarefas.exe: CMakeFiles/GerenciadorDeTarefas.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="D:\Vscode\Projeto_Final\Logica_programacao_FATEC_MAROMO\Projeto_final_v1\out\build\GCC 14.1.0 x86_64-w64-mingw32 (mingw64)\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable GerenciadorDeTarefas.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\GerenciadorDeTarefas.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GerenciadorDeTarefas.dir/build: GerenciadorDeTarefas.exe
.PHONY : CMakeFiles/GerenciadorDeTarefas.dir/build

CMakeFiles/GerenciadorDeTarefas.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\GerenciadorDeTarefas.dir\cmake_clean.cmake
.PHONY : CMakeFiles/GerenciadorDeTarefas.dir/clean

CMakeFiles/GerenciadorDeTarefas.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Vscode\Projeto_Final\Logica_programacao_FATEC_MAROMO\Projeto_final_v1 D:\Vscode\Projeto_Final\Logica_programacao_FATEC_MAROMO\Projeto_final_v1 "D:\Vscode\Projeto_Final\Logica_programacao_FATEC_MAROMO\Projeto_final_v1\out\build\GCC 14.1.0 x86_64-w64-mingw32 (mingw64)" "D:\Vscode\Projeto_Final\Logica_programacao_FATEC_MAROMO\Projeto_final_v1\out\build\GCC 14.1.0 x86_64-w64-mingw32 (mingw64)" "D:\Vscode\Projeto_Final\Logica_programacao_FATEC_MAROMO\Projeto_final_v1\out\build\GCC 14.1.0 x86_64-w64-mingw32 (mingw64)\CMakeFiles\GerenciadorDeTarefas.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/GerenciadorDeTarefas.dir/depend
