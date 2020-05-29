#include <iostream>
#include <vector>
#include "Math.h"
#include <numeric>
int main()
{
    std::vector<int> vect{ 10, 20, 30, 40, 50, 60, 70, 80, 100 }; 
	int Mean = alg_math::Math_Mean(vect);
    int Var = alg_math::Math_Var(vect);
    std::cout<< "Vector Mean = " << std::accumulate(vect.begin(), vect.end(), 0)/ vect.size() << std::endl;
    std::cout<< "Vector Mean = " << Mean << std::endl;
    std::cout<< "Vector Variance = " << Var << std::endl;
	return 0;
}