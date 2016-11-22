cmake_minimum_required(VERSION 3.6)
project(Examples6)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES Example2.c)
add_executable(Examples6 ${SOURCE_FILES})