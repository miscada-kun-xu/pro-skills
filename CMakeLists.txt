cmake_minimum_required(VERSION 3.13)
project(YourProjectName)

# Include the GoogleTest directory (adjust the path as necessary)
add_subdirectory(GoogleTest)

# Add the GoogleTest header files
include_directories(GoogleTest/include/gtest)

set(CMAKE_CXX_FLAGS_DEBUG "/MTd")
set(CMAKE_CXX_FLAGS_RELEASE "/MT")

# Define your test executable
add_executable(simulation_test test.cpp gs.cpp)
add_definitions(-DUNIT_TESTING)

target_compile_definitions(simulation_test PRIVATE UNIT_TEST)

# Link the Google Test libraries
target_link_libraries(simulation_test gtest gtest_main)

# Enable testing using Google Test
enable_testing()
add_test(NAME simulation_test_executable COMMAND simulation_test_executable)
