cmake_minimum_required(VERSION 3.2...3.27.5)

project(stdy)

enable_testing()
add_subdirectory(lib/googletest)

add_subdirectory(old_hw)
add_subdirectory(merge_sort)
add_subdirectory(bubble_sort)
add_subdirectory(bubble_sort_mf)
add_subdirectory(unit_test_example)
add_subdirectory(unit_test_merge)
set(CMAKE_SUPPRESS_REGENERATION true)
