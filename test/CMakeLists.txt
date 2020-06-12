
#### Math test ####
add_executable(math_bayes_test
    "Math_test.cpp"
)
target_compile_features(math_bayes_test PUBLIC cxx_std_11)

target_include_directories(math_bayes_test PRIVATE
    "../../_inc/project/"
)

target_link_libraries(math_bayes_test preprocessing)

install(TARGETS math_bayes_test DESTINATION bin)

#### Native Bayes test ####
add_executable(naive_bayes_test
    "Naive_Bayes_test.cpp"
)
target_compile_features(naive_bayes_test PUBLIC cxx_std_11)

target_include_directories(naive_bayes_test PRIVATE
"../../_inc/project/"
)

target_link_libraries(naive_bayes_test preprocessing)

install(TARGETS naive_bayes_test DESTINATION bin)
install(FILES "../data_sets/iris.data" DESTINATION bin)

#### Preprocessing test ####
#add_executable(processingbayes_test
#    "preprocessing_test.cpp"
#)
#target_compile_features(processingbayes_test PUBLIC cxx_std_11)

#target_include_directories(processingbayes_test PRIVATE
#    "../../_inc/project/"
#)

#target_link_libraries(processingbayes_test preprocessing)

#install(TARGETS processingbayes_test DESTINATION bin)


#include_directories(/home/ahmed/python/include/python2.7/)
#include_directories(/home/ahmed/python/lib/python2.7/)

#find_package(PythonLibs REQUIRED)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -DWITHOUT_NUMPY -I/usr/include/python3.6m \
#-I/usr/include/python3.6m  -Wno-unused-result -Wsign-compare \
#-fdebug-prefix-map=/build/python3.6-PHwBoS/python3.6-3.6.9=. -specs=/usr/share/dpkg/no-pie-compile.specs \
#-fstack-protector -Wformat -Werror=format-security  -DNDEBUG -g -fwrapv -O3 -Wall \
#-L/usr/lib/python3.6/config-3.6m-x86_64-linux-gnu -L/usr/lib -lpython3.6m -lpthread -ldl \
#  -lutil -lm  -Xlinker -export-dynamic -Wl,-O1 -Wl,-Bsymbolic-functions -fPIC -g3 -shared")
#find_package(PythonInterp 2.7 REQUIRED)
#link_libraries(/home/ahmed/python/lib/python2.7/)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -DWITHOUT_NUMPY -I/usr/include/python2.7 \
#-I/usr/include/x86_64-linux-gnu/python2.7  -fno-strict-aliasing -Wdate-time -D_FORTIFY_SOURCE=2\
# -fdebug-prefix-map=/build/python2.7-UKCoZ3/python2.7-2.7.17=. -fstack-protector-strong -Wformat\
#  -Werror=format-security -DNDEBUG -g3 -fwrapv -O2 -Wall \
#-L/usr/lib/python2.7 -L /usr/lib/python2.7/config-x86_64-linux-gnu -L/usr/lib -lpython2.7 -lpthread -ldl  \
#-lutil -lm  -Xlinker -export-dynamic -Wl,-O1 -Wl,-Bsymbolic-functions -fPIC")

#find_package(Python2 COMPONENTS Development NumPy)
#target_include_directories(Naive_Bayes_test PRIVATE ${Python2_INCLUDE_DIRS} ${Python2_NumPy_INCLUDE_DIRS})
#target_link_libraries(Naive_Bayes_test Python2::Python Python2::NumPy)
#add_executable(Naive_Bayes_test ${SOURCES})
#target_link_libraries(Naive_Bayes_test ${PYTHON_LIBRARIES})

