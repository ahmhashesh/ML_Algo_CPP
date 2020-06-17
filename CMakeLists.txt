cmake_minimum_required(VERSION 3.10)

# Project name and a few useful settings. Other commands can pick up the results
project(ML_Algo_CPP LANGUAGES CXX)

# Direct the installations to our output folder
set(CMAKE_INSTALL_PREFIX out/)

## Find libraries
find_package(PythonLibs 2.7 REQUIRED)

# The compiled library code is here
add_subdirectory(_src)

# The executable code is here
#add_subdirectory(apps)

# The test code is here
add_subdirectory(test)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g3 -fPIC")
