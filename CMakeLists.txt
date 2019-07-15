cmake_minimum_required(VERSION 3.14)
project(SYN_abstractVM_2018)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(SYN_abstractVM_2018
        include/Exception.hpp
        include/vm.hpp
        src/Exception.cpp
        src/main.cpp)
