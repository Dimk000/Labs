cmake_minimum_required(VERSION 2.8.4)
project(Examples2)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90 -Wall -pedantic")

set(SOURCE_FILES Example3.c)
add_executable(Examples2 ${SOURCE_FILES})
target_link_libraries(Examples2 m)