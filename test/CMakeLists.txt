cmake_minimum_required(VERSION 3.6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -std=c11")
set(GTEST_ROOT lib/googletest/googletest)

project(cryptoTest)

include_directories(${GTEST_ROOT})
include_directories(${GTEST_ROOT}/include)

add_executable(cryptoTest cryptoTest.c)
