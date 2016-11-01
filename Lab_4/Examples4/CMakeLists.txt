cmake_minimum_required(VERSION 3.6)
project(Examples4)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90 -pedantic -Wall")

set(SOURCE_FILES Example3.c)
add_executable(Examples4 ${SOURCE_FILES})