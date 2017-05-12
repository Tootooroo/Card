cmake_minimum_required(VERSION 3.7)
project(Cards)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c src/list.c include/list.h)
add_executable(Cards ${SOURCE_FILES})