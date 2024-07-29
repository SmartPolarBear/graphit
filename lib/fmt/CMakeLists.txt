cmake_minimum_required(VERSION 3.29)

add_subdirectory(fmt)

target_link_libraries(
        graphit
        PUBLIC fmt::fmt
)