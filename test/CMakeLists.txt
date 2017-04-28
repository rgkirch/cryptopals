cmake_minimum_required(VERSION 3.3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -std=c++11")
set(GTEST_ROOT lib/googletest/googletest)

project(cryptoTest)

include_directories(${GTEST_ROOT})
include_directories(${GTEST_ROOT}/include)
include_directories(../src)

add_executable(baseTest baseTest.cpp)
target_link_libraries(baseTest gtest gtest_main base)

#add_executable(baseTest baseTest.cpp)
#add_library(baseTest baseTest.cpp)
