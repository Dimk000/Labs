cmake_minimum_required(VERSION 2.8.4)
project(Tasks2)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES Task1.c)
add_executable(Tasks2 ${SOURCE_FILES})