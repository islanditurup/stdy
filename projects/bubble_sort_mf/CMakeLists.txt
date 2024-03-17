cmake_minimum_required(VERSION 3.26)

project(bubble_sort_mf)

set(CMAKE_CXX_STANDARD 23)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(sortings)
