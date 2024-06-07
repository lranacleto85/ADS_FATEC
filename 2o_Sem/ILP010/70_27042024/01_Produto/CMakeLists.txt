cmake_minimum_required(VERSION 3.28)
project(aluno VERSION 0.1.0 LANGUAGES C)

include(CTest)
enable_testing()

# Adicione os arquivos fonte do aluno.c ao seu projeto
add_library(produto produto.c)

# Adicione o arquivo de cabeçalho ao projeto para que ele seja reconhecido
target_include_directories(produto PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Adicione o arquivo main.c ao seu projeto
add_executable(main main.c produto.c)

# Link do executável com a biblioteca aluno
target_link_libraries(main PRIVATE produto)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
