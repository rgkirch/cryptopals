cmake_minimum_required(VERSION 3.7)

add_subdirectory(googletest)
add_executable(basicsTest set_1_Basics.cpp)
target_link_libraries(basicsTest gtest gtest_main crypto)
