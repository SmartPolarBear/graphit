cmake_minimum_required(VERSION 3.29)

target_include_directories(
        graphit
        PUBLIC include
)

target_sources(
        graphit
        PUBLIC value.cpp
)