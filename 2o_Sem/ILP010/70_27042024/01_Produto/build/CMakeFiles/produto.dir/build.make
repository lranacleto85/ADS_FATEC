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
CMAKE_SOURCE_DIR = "D:\Vscode\10_FATEC\20_2oSEM\Linguagem_de_programacao _MAROMO\70_27042024\01_Produto"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Vscode\10_FATEC\20_2oSEM\Linguagem_de_programacao _MAROMO\70_27042024\01_Produto\build"

# Include any dependencies generated for this target.
include CMakeFiles/produto.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/produto.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/produto.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/produto.dir/flags.make

CMakeFiles/produto.dir/produto.c.obj: CMakeFiles/produto.dir/flags.make
CMakeFiles/produto.dir/produto.c.obj: CMakeFiles/produto.dir/includes_C.rsp
CMakeFiles/produto.dir/produto.c.obj: D:/Vscode/10_FATEC/20_2oSEM/Linguagem_de_programacao\ _MAROMO/70_27042024/01_Produto/produto.c
CMakeFiles/produto.dir/produto.c.obj: CMakeFiles/produto.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:\Vscode\10_FATEC\20_2oSEM\Linguagem_de_programacao _MAROMO\70_27042024\01_Produto\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/produto.dir/produto.c.obj"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/produto.dir/produto.c.obj -MF CMakeFiles\produto.dir\produto.c.obj.d -o CMakeFiles\produto.dir\produto.c.obj -c "D:\Vscode\10_FATEC\20_2oSEM\Linguagem_de_programacao _MAROMO\70_27042024\01_Produto\produto.c"

CMakeFiles/produto.dir/produto.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/produto.dir/produto.c.i"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\Vscode\10_FATEC\20_2oSEM\Linguagem_de_programacao _MAROMO\70_27042024\01_Produto\produto.c" > CMakeFiles\produto.dir\produto.c.i

CMakeFiles/produto.dir/produto.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/produto.dir/produto.c.s"
	C:\msys64\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\Vscode\10_FATEC\20_2oSEM\Linguagem_de_programacao _MAROMO\70_27042024\01_Produto\produto.c" -o CMakeFiles\produto.dir\produto.c.s

# Object files for target produto
produto_OBJECTS = \
"CMakeFiles/produto.dir/produto.c.obj"

# External object files for target produto
produto_EXTERNAL_OBJECTS =

libproduto.a: CMakeFiles/produto.dir/produto.c.obj
libproduto.a: CMakeFiles/produto.dir/build.make
libproduto.a: CMakeFiles/produto.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="D:\Vscode\10_FATEC\20_2oSEM\Linguagem_de_programacao _MAROMO\70_27042024\01_Produto\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libproduto.a"
	$(CMAKE_COMMAND) -P CMakeFiles\produto.dir\cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\produto.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/produto.dir/build: libproduto.a
.PHONY : CMakeFiles/produto.dir/build

CMakeFiles/produto.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\produto.dir\cmake_clean.cmake
.PHONY : CMakeFiles/produto.dir/clean

CMakeFiles/produto.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Vscode\10_FATEC\20_2oSEM\Linguagem_de_programacao _MAROMO\70_27042024\01_Produto" "D:\Vscode\10_FATEC\20_2oSEM\Linguagem_de_programacao _MAROMO\70_27042024\01_Produto" "D:\Vscode\10_FATEC\20_2oSEM\Linguagem_de_programacao _MAROMO\70_27042024\01_Produto\build" "D:\Vscode\10_FATEC\20_2oSEM\Linguagem_de_programacao _MAROMO\70_27042024\01_Produto\build" "D:\Vscode\10_FATEC\20_2oSEM\Linguagem_de_programacao _MAROMO\70_27042024\01_Produto\build\CMakeFiles\produto.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/produto.dir/depend
