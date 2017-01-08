cmake_minimum_required(VERSION 3.6)
project(C)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c90")

set(SOURCE_FILES Matrix_double.c)
add_executable(C ${SOURCE_FILES})
target_link_libraries(C -fopenmp)