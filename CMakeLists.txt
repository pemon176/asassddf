cmake_minimum_required(VERSION 3.10)
project(gtest_project)

set(CMAKE_CXX_STANDARD 17)

# Enable testing support
enable_testing()

# Source library
add_library(main src/main.cpp)

# Test executable
add_executable(testsuite tests/main_test.cpp)

# Link against main lib and GoogleTest libraries
target_link_libraries(testsuite PRIVATE main gtest gtest_main pthread)

# Register the test with CTest
add_test(NAME MyTests COMMAND testsuite)
