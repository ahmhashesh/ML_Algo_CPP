#include <iostream>
#include <vector>
#include <algorithm>
#include "Math.h"
#include "preprocessing.h"
#include "iris.h"
#include <ctime>
int main(){
 std::vector<std::vector<float>> dataset =  Read_Iris_Dataset();
 float sepal_length_mean = alg_math::Math_Mean(dataset[0]);
 float sepal_length_stdv =  alg_math::Math_Var (dataset[0]);
 double prob = alg_math::calc_prob(5.8,sepal_length_mean,sepal_length_stdv);
 //std::cout<<prob<<std::endl;

std::srand (unsigned(std::time(0)));
dataset = alg_math::vect_Transpose(dataset); 
std::random_shuffle (dataset.begin(),dataset.end());
dataset = alg_math::vect_Transpose(dataset); 
 /***********************************************************************************/
 std::vector<std::vector<float>> testing_data =vector_Test_Split(dataset , 30);
 std::cout<< "IRIS testing Data Size is ( " << testing_data.size() << " , "  <<testing_data[0].size()<<" )" <<std::endl;
 /***********************************************************************************/
  /*  std::cout<< "Data Size was ( " << dataset.size() << " , "  <<dataset[0].size()<<" )" <<std::endl;
    std::vector<std::vector<float>> Iris_setosa_vec =  split_by_class(dataset ,Iris_setosa );
    std::cout<< "IRIS Sentosa Data Size is ( " << Iris_setosa_vec.size() << " , "  <<Iris_setosa_vec[0].size()<<" )" <<std::endl;
    std::vector<std::vector<float>> Iris_versi_vec =  split_by_class(dataset ,Iris_versicolor );
    std::cout<< "IRIS versicolor Data Size is ( " << Iris_versi_vec.size() << " , "  <<Iris_versi_vec[0].size()<<" )" <<std::endl;
    std::vector<std::vector<float>> Iris_vir_vec =  split_by_class(dataset ,Iris_virginica );
    std::cout<< "IRIS virginica Data Size is ( " << Iris_vir_vec.size() << " , "  <<Iris_vir_vec[0].size()<<" )" <<std::endl;
    */
    std::vector<std::vector<float>> training_data =  vector_Train_Split(dataset , 70);
    std::cout<< "IRIS training Data Size is ( " << training_data.size() << " , "  <<training_data[0].size()<<" )" <<std::endl;
}