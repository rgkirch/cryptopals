cmake_minimum_required(VERSION 3.3)

project(cryptopals)
set(cryptopals_version_major 0)
set(cryptopals_version_minor 1)

set(CMAKE_VERBOSE_MAKEFILE on )

add_subdirectory(lib)
include_directories(src)
add_subdirectory(src)
add_subdirectory(test)

