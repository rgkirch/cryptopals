cmake_minimum_required(VERSION 3.6)

project(cryptopals)
set(cryptopals_version_major 0)
set(cryptopals_version_minor 1)

set(CMAKE_VERBOSE_MAKEFILE on )
set(GTEST_ROOT lib/googletest/googletest)

enable_testing()

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(test)
include_directories(src)
include_directories(${GTEST_ROOT})
include_directories(${GTEST_ROOT}/include)

add_subdirectory(test)
add_subdirectory(src)
add_subdirectory(lib/googletest)

#add_test(baseTest base)
