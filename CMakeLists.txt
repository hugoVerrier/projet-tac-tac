cmake_minimum_required(VERSION 3.23)
project(projet_tac_tac C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(projet_tac_tac
        "tac tac.c"
        "tac tac.h" main.c)
