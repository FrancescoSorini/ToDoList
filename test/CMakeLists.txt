cmake_minimum_required(VERSION 3.20)

add_subdirectory(./lib/googletest-main)
set(gtest_SOURCE_DIR, ./lib/googletest-main)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(TEST_SOURCE_FILES runAllTest.cpp UserTest.cpp ListTest.cpp TaskTest.cpp)
add_executable(runToDoListTest ${TEST_SOURCE_FILES})
target_link_libraries(runToDoListTest gtest gtest_main core)
