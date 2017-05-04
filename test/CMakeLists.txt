cmake_minimum_required(VERSION 3.7)
project(cryptopals)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_VERBOSE_MAKEFILE on)

set(GTEST_ROOT googletest/googletest)
add_subdirectory(googletest)

add_executable(basicsTest set_1_Basics.cpp)
target_link_libraries(basicsTest gtest gtest_main crypto)
