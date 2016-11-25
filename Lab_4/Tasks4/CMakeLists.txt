cmake_minimum_required(VERSION 2.8.4)
project(Tasks4)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES Task3.c)
add_executable(Tasks4 ${SOURCE_FILES})