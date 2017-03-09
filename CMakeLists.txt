cmake_minimum_required(VERSION 3.6)
project(cryptopals)
project(testProj)

set(CMAKE_C_STANDARD 99)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")
set(CMAKE_VERBOSE_MAKEFILE on )
add_executable(cryptopals main.c convert.c)
add_executable(testProj testConvert.c convert.c)
