cmake_minimum_required(VERSION 2.8.4)
project(Tasks3)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES Task2.c)
add_executable(Tasks3 ${SOURCE_FILES})