cmake_minimum_required(VERSION 3.12)
project(Code-Development)

# Set C++ standard
set(CMAKE_CXX_STANDARD 14)

# Include Google Test
add_subdirectory(${CMAKE_SOURCE_DIR}/external/googletest)

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/external/gray-scott-sim)

# main executable
add_executable(MainProgram src/main.cpp external/gray-scott-sim/gs.cpp)

# test executable
add_executable(GSTest tests/test_gs.cpp)
target_link_libraries(GSTest gtest gtest_main)


