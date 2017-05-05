cmake_minimum_required(VERSION 3.7)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -Wall")
set(CMAKE_C_STANDARD 99)

add_library(crypto crypto.cpp)
