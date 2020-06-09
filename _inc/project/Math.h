#ifndef MATH_H
#define MATH_H

#include <vector>
#include <cmath>
#include <numeric>

namespace alg_math 
{ 
    template <typename T> 
    T Math_Mean(std::vector<T>);
    template <typename M>
    double Math_Var (std::vector<M> &);
    double calc_prob(double value,double mean,double stdev);
    template <typename T> 
    std::vector< std::vector<T>> vect_Transpose (std::vector<std::vector<T>> input_Vector);
} 

template <typename T> 
T alg_math::Math_Mean (std::vector<T> Data)
{
    T mean = std::accumulate(std::begin(Data), std::end(Data), 0.0) / Data.size();
    return mean;
}

template <typename M> 
double alg_math::Math_Var (std::vector<M> &Data)
{
    M mean = std::accumulate(std::begin(Data), std::end(Data), 0.0) / Data.size();
    double sq_sum = std::inner_product(Data.begin(), Data.end(), Data.begin(), 0.0);
    double stdev = std::sqrt(sq_sum / Data.size() - (double)(mean * mean));
    return stdev;
}
template <typename T> 
std::vector< std::vector<T>> alg_math::vect_Transpose (std::vector<std::vector<T>> input_Vector)
{
   std::vector< std::vector<T> > out_Vector(input_Vector[0].size(), std::vector<T>(input_Vector.size()));
   for(int i=0;i<input_Vector.size(); i++) {   
	for (int j=0;j<input_Vector[i].size(); j++){
	        out_Vector[j][i] = input_Vector [i][j];
	   }
   }
   return out_Vector;
}
#endif