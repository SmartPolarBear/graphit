cmake_minimum_required(VERSION 3.29)
project(graphit)

set(CMAKE_CXX_STANDARD 26)

add_library(graphit STATIC main.cpp)

# Core engine of graphit
add_subdirectory(engine)

# Computational graph implementation
add_subdirectory(graph)

# Values
add_subdirectory(value)

# 3rd party libraries
add_subdirectory(lib)