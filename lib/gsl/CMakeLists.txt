cmake_minimum_required(VERSION 3.29)

add_subdirectory(gsl)

target_link_libraries(
        graphit
        PUBLIC Microsoft.GSL::GSL
)