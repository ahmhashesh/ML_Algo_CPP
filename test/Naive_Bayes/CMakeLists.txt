cmake_minimum_required(VERSION 2.8.9)
project (Naive_Bayes)
#Bring the headers
include_directories(../../_inc/Naive_Bayes)
include_directories(../../datasets/_inc)
include_directories(../../_inc/Math)
include_directories(/home/ahmed/python/include/python2.7/)
include_directories(/home/ahmed/python/lib/python2.7/)
#adding source files
file(GLOB SOURCES "../../_src/Naive_bayes/*.cpp" "*.cpp")
find_package(PythonLibs REQUIRED)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -DWITHOUT_NUMPY -I/usr/include/python3.6m \
#-I/usr/include/python3.6m  -Wno-unused-result -Wsign-compare -g \
#-fdebug-prefix-map=/build/python3.6-PHwBoS/python3.6-3.6.9=. -specs=/usr/share/dpkg/no-pie-compile.specs \
#-fstack-protector -Wformat -Werror=format-security  -DNDEBUG -g -fwrapv -O3 -Wall \
#-L/usr/lib/python3.6/config-3.6m-x86_64-linux-gnu -L/usr/lib -lpython3.6m -lpthread -ldl \
#  -lutil -lm  -Xlinker -export-dynamic -Wl,-O1 -Wl,-Bsymbolic-functions -fPIC -shared")
#find_package(PythonInterp 2.7 REQUIRED)
#link_libraries(/home/ahmed/python/lib/python2.7/)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -DWITHOUT_NUMPY -I/usr/include/python2.7 \
#-I/usr/include/x86_64-linux-gnu/python2.7  -fno-strict-aliasing -Wdate-time -D_FORTIFY_SOURCE=2\
# -g -fdebug-prefix-map=/build/python2.7-UKCoZ3/python2.7-2.7.17=. -fstack-protector-strong -Wformat\
##  -Werror=format-security  -DNDEBUG -g -fwrapv -O2 -Wall -Wstrict-prototypes \
#-L/usr/lib/python2.7 -L /usr/lib/python2.7/config-x86_64-linux-gnu -L/usr/lib -lpython2.7 -lpthread -ldl  \
#-lutil -lm  -Xlinker -export-dynamic -Wl,-O1 -Wl,-Bsymbolic-functions")
add_executable(Naive_Bayes_test ${SOURCES})
target_link_libraries(Naive_Bayes_test ${PYTHON_LIBRARIES})

