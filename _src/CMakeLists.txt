add_library(preprocessing STATIC
    "preprocessing.cpp"
    "Naive_Bayes.cpp"
    "Math.cpp"
)
target_compile_features(preprocessing PUBLIC cxx_std_11)

target_include_directories(preprocessing
    PUBLIC "../_inc/project"
)

install(TARGETS preprocessing
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
)