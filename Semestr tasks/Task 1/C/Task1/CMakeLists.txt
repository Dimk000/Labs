cmake_minimum_required(VERSION 3.6)
project(Task1)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES main.c)
add_executable(Task1 ${SOURCE_FILES})