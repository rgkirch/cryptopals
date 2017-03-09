cmake_minimum_required(VERSION 3.6)
project(cryptopals)
project(testProj)
project(benchmarkProj)

add_custom_target(testAll)
add_dependencies(testAll testProj)

add_custom_target(benchmarkAll)
add_dependencies(benchmarkAll benchmarkProj)

set(CMAKE_C_STANDARD 99)

#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")
set(CMAKE_VERBOSE_MAKEFILE on )
add_executable(cryptopals main.c convert.c)
add_executable(testProj testConvert.c convert.c)
add_executable(benchmarkProj benchmarkConvert.c convert.c)
