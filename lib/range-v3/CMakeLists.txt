cmake_minimum_required(VERSION 3.29)

add_subdirectory(range-v3)

target_link_libraries(
        graphit
        PUBLIC range-v3
)