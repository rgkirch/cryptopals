cmake_minimum_required(VERSION 3.3)

project(cryptopals)
set(cryptopals_version_major 0)
set(cryptopals_version_minor 1)

set(CMAKE_VERBOSE_MAKEFILE on )
set(GTEST_ROOT lib/googletest/googletest)

enable_testing()

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(src)
include_directories(test)

add_subdirectory(lib/googletest)
add_subdirectory(src)
add_subdirectory(test)

#add_test(baseTest base)
