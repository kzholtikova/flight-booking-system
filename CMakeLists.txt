cmake_minimum_required(VERSION 3.28)
project(flight_booking_system)

set(CMAKE_CXX_STANDARD 14)

# Add source files
file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "include/*.h")

# Add main executable
add_executable(flight_booking_system ${SOURCES} ${HEADERS})

## Add Google Test to the project
#add_subdirectory(lib/googletest)
#include_directories(lib/googletest/googletest/include)
#
## Add test sources
#file(GLOB_RECURSE TESTS "test/*.cpp")
#list(REMOVE_ITEM SOURCES "src/main.cpp")
#add_executable(flight_booking_system_test ${TESTS} ${SOURCES})
#
## Link Google Test to the test executable
#target_link_libraries(flight_booking_system_test gtest_main)

