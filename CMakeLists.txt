cmake_minimum_required(VERSION 3.22)
project(FractalCommon)

set(CMAKE_CXX_STANDARD 17)
set(CXX_COMPILER_FLAGS "-Wall -Werror ${CXX_COMPILER_FLAGS}")

include_directories("/home/egor/Libraries/include")

add_library(FractalCommon SHARED FractalCommon.cpp)

