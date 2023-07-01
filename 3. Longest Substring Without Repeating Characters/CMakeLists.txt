cmake_minimum_required(VERSION 3.2)


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_COMPILER "C:/msys64/mingw64/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "C:/msys64/mingw64/bin/g++.exe")
set(CMAKE_BUILD_TYPE Debug)

project(my_proj)

include_directories("${PROJECT_SOURCE_DIR}/src")

add_executable(${PROJECT_NAME} "src/main.cpp")

INSTALL(TARGETS ${PROJECT_NAME} DESTINATION ${PROJECT_SOURCE_DIR}/bin)