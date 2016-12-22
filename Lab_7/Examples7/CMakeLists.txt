cmake_minimum_required(VERSION 3.6)
project(Examples7)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES Example1.c)
add_executable(Examples7 ${SOURCE_FILES})