cmake_minimum_required(VERSION 3.6)
project(Example1)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90 -Wall -pedantic")

set(SOURCE_FILES Example14.c)
add_executable(Example1 ${SOURCE_FILES})