cmake_minimum_required(VERSION 3.21)
project(vectors)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(vectors
        TreeNode.hpp
        main.cpp
        Solution.cpp
        Solution.hpp)
