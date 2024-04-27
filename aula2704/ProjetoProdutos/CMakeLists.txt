cmake_minimum_required(VERSION 3.26)
project(ProjetoProdutos C)

set(CMAKE_C_STANDARD 11)

add_executable(ProjetoProdutos main.c
        produto.c
        produto.h)
