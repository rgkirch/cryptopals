cmake_minimum_required(VERSION 3.6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -std=c++11 -Dgoogle_disable_pthreads=ON")
set(GTEST_ROOT lib/googletest/googletest)

project(cryptoTest)

include_directories(${GTEST_ROOT})
include_directories(${GTEST_ROOT}/include)

add_executable(cryptoTest cryptoTest.cpp)
