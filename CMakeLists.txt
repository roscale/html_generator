cmake_minimum_required(VERSION 2.8)
project(html_generator)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Tag.cpp Tag.hpp utility.hpp tags.cpp)
add_executable(html_generator ${SOURCE_FILES})