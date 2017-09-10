cmake_minimum_required(VERSION 3.8)
project(levitate)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp config/CConfig.cpp config/CConfig.h utils/format_output.h world/CVector3.cpp world/CVector3.h)
add_executable(levitate ${SOURCE_FILES})