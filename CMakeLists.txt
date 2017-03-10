cmake_minimum_required(VERSION 3.6)
project(cryptopals)
project(testProj)
project(benchmarkProj)

add_custom_target(testAll)
add_dependencies(testAll testProj)

add_custom_target(benchmarkAll)
add_dependencies(benchmarkAll benchmarkProj)

set(CMAKE_C_STANDARD 99)
include_directories(src)
include_directories(test)

#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g")
set(CMAKE_VERBOSE_MAKEFILE on )
add_executable(cryptopals src/main.c src/convert.c)
add_executable(testProj test/main.c test/testUtils.c test/testConvert.c src/convert.c)
add_executable(benchmarkProj test/benchmarkConvert.c src/convert.c)
