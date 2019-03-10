cmake_minimum_required(VERSION 3.10)
project (simulation)


set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-Wall -g")

include_directories(${PROJECT_SOURCE_DIR}/include)

file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")

add_executable(simulation Main.cpp ${SOURCES})