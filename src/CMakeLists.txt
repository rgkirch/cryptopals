cmake_minimum_required(VERSION 3.3)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -Wall")
set(CMAKE_C_STANDARD 99)

include_directories(.)
add_library(base base.c)
add_executable(main main.c)
target_link_libraries(main base)
