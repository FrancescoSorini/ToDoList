cmake_minimum_required(VERSION 3.20)
project(ToDoList)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(test)

set(SOURCE_FILES User.h User.cpp List.cpp List.h Task.cpp Task.h Date.cpp Date.h)
add_executable(ToDoList main.cpp)
add_library(core ${SOURCE_FILES})
target_link_libraries(ToDoList core)

