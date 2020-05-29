#ifndef MATH_H
#define MATH_H

#include <vector>
#include <cmath>
#include <numeric>

namespace alg_math 
{ 
    template <typename T> 
    T Math_Mean(std::vector<T>);
    //int Math_Mean(std::vector<int>);
    template <typename T>
    double Math_Var (std::vector<T> &);
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
    double stdev = std::sqrt(sq_sum / Data.size() - mean * mean);
    return stdev;
}

#endif