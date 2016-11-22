cmake_minimum_required(VERSION 3.6)
project(Examples5)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES Example6.c)
add_executable(Examples5 ${SOURCE_FILES})