cmake_minimum_required(VERSION 3.6)
project(Lab_04_string_)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp hex_print.cc bool_print.cc hex_print.h bool_print.h)

set(CMAKE_EXE_LINKER_FLAGS -static)

add_executable(Lab_04_string_ ${SOURCE_FILES})