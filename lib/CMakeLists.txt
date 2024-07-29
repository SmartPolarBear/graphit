cmake_minimum_required(VERSION 3.29)

target_include_directories(
        graphit
        PUBLIC tensor/include
)

add_subdirectory(fmt)
add_subdirectory(gsl)
add_subdirectory(gtest)
add_subdirectory(range-v3)
