cmake_minimum_required(VERSION 3.7)

set(CMAKE_CXX_STANDARD 14)

add_executable(baseTest baseTest.cpp)
target_link_libraries(baseTest gtest gtest_main gmp)

add_executable(set_1_Basics set_1_Basics.cpp)
target_link_libraries(set_1_Basics gtest gtest_main gmp)

add_executable(integerTest integerTest.cpp)
target_link_libraries(integerTest gtest gtest_main)

