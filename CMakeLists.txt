# Works with 3.11 and tested through 3.15
cmake_minimum_required(VERSION 3.10...3.16)

# Project name and a few useful settings. Other commands can pick up the results
project(ML_Algo_CPP
    VERSION 0.1
    DESCRIPTION "An example project with CMake"
    LANGUAGES CXX)
    
# Accumulator library
# This is header only, so could be replaced with git submodules or FetchContent
find_package(Boost REQUIRED)
# Adds Boost::boost

# The compiled library code is here
add_subdirectory(src)

# The executable code is here
add_subdirectory(apps)

# Testing only available if this is the main app
# Emergency override MODERN_CMAKE_BUILD_TESTING provided as well
if((CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME OR MODERN_CMAKE_BUILD_TESTING) AND BUILD_TESTING)
    add_subdirectory(tests)
endif()

