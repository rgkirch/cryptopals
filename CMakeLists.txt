cmake_minimum_required(VERSION 3.6)

project(cryptopals)

set(CMAKE_VERBOSE_MAKEFILE on )
set(GTEST_ROOT lib/googletest/googletest)

enable_testing()

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(test)
include_directories(src)
include_directories(${GTEST_ROOT})
include_directories(${GTEST_ROOT}/include)

add_subdirectory(test)
add_subdirectory(src)
add_subdirectory(lib/googletest)

add_executable(cryptopals test/cryptoTest.cpp)
target_link_libraries(cryptopals convert gtest gtest_main)
add_test(cryptopals test/cryptoTest.cpp)
#target_link_libraries(cryptoTest gtest gtest_main)
#add_executable(benchmarkProj test/benchmarkConvert.c src/convert.c)
