cmake_minimum_required(VERSION 3.3)

project(cryptopals)
set(cryptopals_version_major 0)
set(cryptopals_version_minor 1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_VERBOSE_MAKEFILE on )

set(GTEST_ROOT googletest/googletest)

include_directories(src)

add_subdirectory(src)
add_subdirectory(test)

#add_test(baseTest base)
#enable_testing()
#include_directories(${CMAKE_CURRENT_SOURCE_DIR})
