cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)

project(underwater LANGUAGES CXX)

include_directories("include/")

add_subdirectory(src)