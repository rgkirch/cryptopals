cmake_minimum_required(VERSION 3.7)

set(CMAKE_CXX_STANDARD 14)

include_directories(../src)
add_executable(baseTest baseTest.cpp)
target_link_libraries(baseTest gtest gtest_main)

add_executable(sanity sanity.cpp)
target_link_libraries(sanity)
