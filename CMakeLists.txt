# Required by FetchContent_MakeAvailable
cmake_minimum_required(VERSION 3.14)
project(PlatformIO_gTestgMock)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
)
FetchContent_MakeAvailable(googletest)

include_directories(lib)
set(TEST_DIR ${CMAKE_CURRENT_SOURCE_DIR}/test/desktop)

set(CMAKE_CXX_STANDARD 11)
set(TEST_NAME ${PROJECT_NAME}_unittest)
add_executable(${TEST_NAME} ${TEST_DIR}/unittest_loopInToOut.cpp lib/hal_if.h)
target_link_libraries(${TEST_NAME} gtest_main)
target_link_libraries(${TEST_NAME} gmock_main)

enable_testing()
include(GoogleTest)
gtest_discover_tests(${TEST_NAME})