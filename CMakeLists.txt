cmake_minimum_required(VERSION 3.9)
project(person)

set(CMAKE_CXX_STANDARD 11)

add_library(person STATIC Person.h Person.cpp)