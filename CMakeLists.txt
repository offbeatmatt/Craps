cmake_minimum_required(VERSION 3.15)
project(Craps)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-fprofile-arcs -ftest-coverage")

add_executable("Craps" "main.cpp" "Die.cpp" "Die.h" "Gameplay Functions.cpp")