## Build requirements
To build this project you need
- CMake 3.10
- A C++ compiler that supports C++ 11
- [matplotlib-cpp](https://github.com/lava/matplotlib-cpp)

## Build steps
You will need to create a folder for your build and invoke CMake. The following command can be used for the first time build

`
mkdir build && cd build && cmake ../ && VERBOSE=1 make && VERBOSE=1 make install
`

You can rebuild later with

`
VERBOSE=1 make && VERBOSE=1 make install
`