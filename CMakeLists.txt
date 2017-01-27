cmake_minimum_required(VERSION 3.7)
project(html_generator)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Tag.cpp Tag.hpp)
add_executable(html_generator ${SOURCE_FILES})