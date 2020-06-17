

###############################################################################
#### Math test ####
add_executable(math_test
    "Math_test.cpp"
)
target_compile_features(math_test PUBLIC cxx_std_11)

target_include_directories(math_test PRIVATE
    "../../_inc/project/"
)

target_link_libraries(math_test preprocessing)

install(TARGETS math_test DESTINATION bin)

###############################################################################
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

###############################################################################
#### Preprocessing test ####
add_executable(preprocessing_test
    "preprocessing_test.cpp"
)
target_compile_features(preprocessing_test PUBLIC cxx_std_11)

target_include_directories(preprocessing_test PRIVATE
    PRIVATE "../../_inc/project/"
    PRIVATE ${PYTHON_INCLUDE_DIRS}
)
target_link_libraries(preprocessing_test 
    preprocessing
    ${PYTHON_LIBRARIES}
)

install(TARGETS preprocessing_test DESTINATION bin)