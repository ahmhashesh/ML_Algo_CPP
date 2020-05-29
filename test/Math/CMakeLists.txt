cmake_minimum_required(VERSION 2.8.9)
project (Math_test)
#Bring the headers, such as Student.h into the project
include_directories(../../_inc/Math)
include_directories(../../_inc)
#adding source files
file(GLOB SOURCES "../../_src/Math/*.cpp" "../../test/Math/*.cpp")
message("first globe")
message(${SOURCES})

add_executable(Math_test ${SOURCES} )