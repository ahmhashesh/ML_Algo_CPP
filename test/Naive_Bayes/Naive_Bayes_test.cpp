//#include <Python.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <iris.h>
#include "Math.h"
//#include "matplotlibcpp.h"

//namespace plt = matplotlibcpp;

std::vector<std::vector<float>> Read_Iris_Dataset(void);
int main(int argc, char *argv[]){
   
   std::vector<std::vector<float>> dataset =  Read_Iris_Dataset();
   std::cout<< "length of sepal_length vector: " << dataset[0].size()<< std::endl;
   std::cout<< "Mean value of sepal_length: " << alg_math::Math_Mean(dataset[0])<< std::endl;
   std::cout<< "Mean value of sepal_width: " << alg_math::Math_Mean(dataset[1])<< std::endl;
   std::cout<< "Mean value of petal_length: " << alg_math::Math_Mean(dataset[2])<< std::endl;
   std::cout<< "Mean value of petal_width: " << alg_math::Math_Mean(dataset[3])<< std::endl;
   //plt::plot({1,3,2,4});
   //plt::show();
   return 0;
}


std::vector<std::vector<float>> Read_Iris_Dataset(void)
{
   std::ifstream myfile("iris.data");
  std::string line;
  std::vector<std::vector<float>> Iris_Dataset;
  std::vector<float> temp_sepal_len;
  std::vector<float> temp_sepal_wid;
  std::vector<float> temp_petal_len;
  std::vector<float> temp_petal_wid;
  std::vector<float> temp_iris_class;

  float sepal_len_int,sepal_wid_int,petal_len_int,petal_wid_int;
  float iris_class_int;

  std::string temp_string;
   int count =0;
   if (myfile.is_open())
  {
     std::cout<< "file opened successfully"<<std::endl;
      while (std::getline(myfile, line)) {
         std::replace(line.begin(), line.end(), '-', '_');
         std::replace(line.begin(), line.end(), ',', ' ');
         
         std::istringstream iss(line);
         count++;
         
         iss >> sepal_len_int>>sepal_wid_int >> petal_len_int >>petal_wid_int >> temp_string;
         temp_sepal_len.push_back(sepal_len_int);
         temp_sepal_wid.push_back(sepal_wid_int);
         temp_petal_len.push_back(petal_len_int);
         temp_petal_wid.push_back(petal_wid_int);
         if(temp_string.compare("Iris_setosa") != 0)
         {
            iris_class_int = Iris_setosa;
         }
         else if (temp_string.compare("Iris_versicolor") != 0)
         {
            iris_class_int = Iris_versicolor;
         }
         else if (temp_string.compare("Iris_virginica") != 0)
         {
            iris_class_int = Iris_virginica;
         }else 
         {
            iris_class_int = Iris_unkown;
         }
         temp_iris_class.push_back(iris_class_int);
      }
      Iris_Dataset.push_back(temp_sepal_len);
      Iris_Dataset.push_back(temp_sepal_wid);
      Iris_Dataset.push_back(temp_petal_len);
      Iris_Dataset.push_back(temp_petal_wid);
      Iris_Dataset.push_back(temp_iris_class);
      
      
      std::cout<<"the Iris dataset size is : ( " << Iris_Dataset.size()<< " , "  << Iris_Dataset[0].size()<< " )" << std::endl;   
  }
  else 
  {
     std::cout << "Unable to open file";
  }
  return Iris_Dataset;
}