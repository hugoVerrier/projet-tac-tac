cmake_minimum_required(VERSION 3.20)
project(projet_tac_tac)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(projet_tac_tac  tactac.c tactac.h main.c plateau.c plateau.h menu.c menu.h verification.c verification.h )

