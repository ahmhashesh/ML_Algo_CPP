#include <iostream>
#include <vector>
#include "Math.h"
#include "preprocessing.h"


int main(){
 std::vector<std::vector<float>> dataset =  Read_Iris_Dataset();
 float sepal_length_mean = alg_math::Math_Mean(dataset[0]);
 float sepal_length_stdv =  alg_math::Math_Var (dataset[0]);
 double prob = alg_math::calc_prob(5.8,sepal_length_mean,sepal_length_stdv);
 std::cout<< "before transpose " << dataset.size() << " , "  <<dataset[0].size() <<std::endl;
dataset = alg_math::vect_Transpose(dataset);
 std::cout<< "after transpose " << dataset.size() << " , "  <<dataset[0].size() <<std::endl;
std::cout<<prob<<std::endl;

}