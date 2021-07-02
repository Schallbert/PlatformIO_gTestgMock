# Required by FetchContent_MakeAvailable
cmake_minimum_required(VERSION 3.14)
project(pio_gtestgmock)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
)
FetchContent_MakeAvailable(googletest)

set(CMAKE_CXX_STANDARD 11)
set(TEST_NAME ${PROJECT_NAME}_unittest)
add_executable(${TEST_NAME} pio_gtestgmock_unittest.cpp)
target_link_libraries(${TEST_NAME} gtest_main)

enable_testing()
include(GoogleTest)
gtest_discover_tests(${TEST_NAME})