//#include <Python.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include "iris.h"
#include "Math.h"
#include "matplotlibcpp.h"

namespace plt = matplotlibcpp; 
std::vector<std::vector<float>> Read_Iris_Dataset(void);
int main(){
   std::vector<std::vector<float>> dataset =  Read_Iris_Dataset();
   std::cout<< "data set loaded successfully"<<std::endl;
   float sepal_length_mean = alg_math::Math_Mean(dataset[0]);
   float sepal_length_stdev = alg_math::Math_Var(dataset[0]);

   float sepal_width_mean = alg_math::Math_Mean(dataset[1]);
   float petal_length_mean = alg_math::Math_Mean(dataset[2]);
   float petal_width_mean = alg_math::Math_Mean(dataset[2]);

   
   std::cout<< "length of sepal_length vector: " << dataset[0].size()<< std::endl;
   std::cout<< "Mean value of sepal_length: " << sepal_length_mean << std::endl;
   std::cout<< "Standard Deviation value of sepal_length: " << sepal_length_stdev << std::endl;
   std::cout<< "Mean value of sepal_width: " << sepal_width_mean << std::endl;
   std::cout<< "Mean value of petal_length: " << petal_length_mean<< std::endl;
   std::cout<< "Mean value of petal_width: " << petal_width_mean<< std::endl;
   // uncomment the example you need for the data visualization
   /*
   std::replace_if(dataset[0].begin(), dataset[0].end(), [](float &value) { return value >= 5.8;}, 5);
   plt::hist(dataset[0]);
   plt::named_plot("log(x)",dataset[0]);
   plt::hist(dataset[1]);
   plt::bar(dataset[2]);
   plt::bar(dataset[3]);

   std::for_each( dataset[0].begin(), dataset[0].end(), [&](float & x){ x = ((x - sepal_length_mean)/sepal_length_stdev);});
    sepal_length_mean = alg_math::Math_Mean(dataset[0]);
    sepal_length_stdev = alg_math::Math_Var(dataset[0]);
   std::cout<< "Mean value of sepal_length after standardization: " << sepal_length_mean << std::endl;
   std::cout<< "Standard Deviation value of sepal_length after standardization: " << sepal_length_stdev << std::endl;
   plt::hist(dataset[0]);
   //plt::plot(dataset[0],{{"label", "original sepal_length"}});
   //std::replace_if(dataset[0].begin(), dataset[0].end(), [](float &value) { return value >= 5.8;}, 5.8);
   //plt::plot(dataset[0],{{"label", "modified sepal_length"}});
   // plt::plot(dataset[1],{ {"label", "sepal_width"}});
   //  plt::plot(dataset[2],{ {"label", "petal_length"}});
   //   plt::plot(dataset[3],{  {"label", "petal_width"}});
   plt::title("standardized Data histogram ");
   //plt::legend();
   plt::show();
   */
   return 0;
}


