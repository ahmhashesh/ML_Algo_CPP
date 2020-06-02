#ifndef IRIS_H
#define IRIS_H
#include <string>

struct Iris {
    float sepal_length; 
    float sepal_width;
    float petal_length;
    float petal_width;
    std::string ir_class;
}; 

enum Iris_Class 
{
   Iris_setosa,
   Iris_versicolor,
   Iris_virginica,
   Iris_unkown
};
#endif
