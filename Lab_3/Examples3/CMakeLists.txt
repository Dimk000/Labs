cmake_minimum_required(VERSION 3.6)
project(Examples3)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90 -Wall -pedantic")

set(SOURCE_FILES Example7.c)
add_executable(Examples3 ${SOURCE_FILES})