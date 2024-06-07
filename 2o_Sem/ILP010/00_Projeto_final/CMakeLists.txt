cmake_minimum_required(VERSION 3.10)
project(GerenciadorDeTarefas C)

set(CMAKE_C_STANDARD 11)

find_package(PkgConfig REQUIRED)
pkg_check_modules(JSON_C REQUIRED json-c)
pkg_check_modules(GTK REQUIRED gtk+-3.0)

include_directories(${GTK_INCLUDE_DIRS} include)
link_directories(${GTK_LIBRARY_DIRS})
add_definitions(${GTK_CFLAGS_OTHER})

add_executable(GerenciadorDeTarefas
    src/main.c
    src/gui.c
    src/produtividade.c
)

target_link_libraries(GerenciadorDeTarefas ${GTK_LIBRARIES} ${JSON_C_LIBRARIES})
