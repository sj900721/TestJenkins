cmake_minimum_required(VERSION 3.12)

include_directories(${gtest__SOURCE_DIR}/include ${gtest__SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR})

add_executable(main src/main.cpp tests/my_test.cpp src/Queue.cpp src/Queue.h)

target_link_libraries(main gtest gtest_main)