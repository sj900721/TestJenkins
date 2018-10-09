cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME TEST_JENKINS)

#include(gtest)
#include_directories(${GTEST_INCLUDE_DIRS})
#
#include_directories(${gtest_SOURCE_DIR}/include ${gtest__SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR})

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

enable_testing()

add_executable(main tests/my_test.cpp src/Queue.cpp src/Queue.h)

target_link_libraries(main ${GTEST_LIBRARIES} pthread)

add_test(AllTests test)