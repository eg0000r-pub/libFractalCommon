cmake_minimum_required(VERSION 3.22)
project(FractalCommon)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-Wall -Werror ${CMAKE_CXX_FLAGS}")

include_directories("/home/egor/Libraries/include")

add_library(FractalCommon SHARED FractalCommon.cpp)

