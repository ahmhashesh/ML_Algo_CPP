cmake_minimum_required(VERSION 2.8.9)
project (Naive_Bayes)
#Bring the headers, such as Student.h into the project
include_directories(../../_inc/Naive_Bayes)
#adding source files
file(GLOB SOURCES "../../_src/Naive_Bayes/*.cpp")
file(GLOB SOURCES "*.cpp")
add_executable(Naive_Bayes_test ${SOURCES})