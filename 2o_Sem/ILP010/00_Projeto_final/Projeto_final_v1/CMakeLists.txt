cmake_minimum_required(VERSION 3.10)

# Nome do projeto
project(GerenciadorDeTarefas C)

# Definição do padrão do C
set(CMAKE_C_STANDARD 11)

# Busca por pacotes necessários
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)

# Inclui os diretórios de cabeçalhos do GTK
include_directories(${GTK3_INCLUDE_DIRS})

# Define os arquivos fonte
set(SOURCE_FILES main.c produtividade.c)

# Cria o executável
add_executable(GerenciadorDeTarefas ${SOURCE_FILES})

# Links para bibliotecas do GTK
target_link_libraries(GerenciadorDeTarefas ${GTK3_LIBRARIES})
