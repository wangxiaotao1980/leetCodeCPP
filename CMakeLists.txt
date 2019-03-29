cmake_minimum_required(VERSION 3.2)
project(LeetCodeSol)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(CMAKE_CXX_FLAGS_DEBUG  "${CMAKE_CXX_FLAGS_DEBUG} -O0 -fprofile-arcs -ftest-coverage")

file(GLOB_RECURSE SRC_FILES "Src/*.cpp")
file(GLOB_RECURSE UNITTEST_CASE_FILES "UnitTest/*.cpp")

add_executable( leetcodesol ${SRC_FILES} ${UNITTEST_CASE_FILES})

target_link_libraries(leetcodesol ${GTEST_BOTH_LIBRARIES} pthread)
