cmake_minimum_required(VERSION 3.13)
project(cpptest)

set(CMAKE_CXX_STANDARD 14)
add_executable(cpptest_exe src/main.cpp)

include_directories(include/)
