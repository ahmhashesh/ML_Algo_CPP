#include <iostream>
#include <vector>
#include "Math.h"
#include "preprocessing.h"
#include "iris.h"
#include <ctime>
#include "Naive_bayes.h"

int main(){
    std::vector<std::vector<float>> dataset =  Read_Iris_Dataset();
    
    Naive_Bayes naive = Naive_Bayes();
    
    std::srand (unsigned(std::time(0)));
    dataset = alg_math::vect_Transpose(dataset); 
    std::random_shuffle (dataset.begin(),dataset.end());
    dataset = alg_math::vect_Transpose(dataset); 
    float percentage =70;
    std::vector<std::vector<float>> training_data  = vector_Train_Split(dataset , percentage);
    std::vector<std::vector<float>> testing_data  = vector_Test_Split(dataset , 100 - percentage);
    
    std::cout<< "IRIS testing Data Size is ( " << testing_data.size() << " , "  <<testing_data[0].size()<<" )" <<std::endl;
    
    std::cout<< "IRIS training Data Size is ( " << training_data.size() << " , "  <<training_data[0].size()<<" )" <<std::endl;
    naive.fit(training_data);
    
    std::vector<float> predicitions;
    testing_data = alg_math::vect_Transpose(testing_data); 
    for(int i=0; i<testing_data.size(); i++ )
    {
        auto index = naive.predict(testing_data[i]);
        predicitions.push_back(index);
    }
    testing_data = alg_math::vect_Transpose(testing_data); 
    std::cout<<"score is :" << Vect_match_Score (testing_data[4],predicitions)<<std::endl;
    return 0;
}