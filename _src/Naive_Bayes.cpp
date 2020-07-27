#include <vector>
#include "iris.h"
#include "Math.h"
#include "preprocessing.h"
#include "Naive_bayes.h"
#include "preprocessing.h"
#include "iris.h"
#include <algorithm>
#include <ctime>

void Naive_Bayes::fit(std::vector<std::vector<float>> training_data )
{
    unique_label = training_data[training_data.size()-1];
    std::sort(unique_label.begin(),unique_label.end());
    unique_label.erase(std::unique(unique_label.begin(),unique_label.end()),unique_label.end());
    for (auto row = unique_label.begin(); row != unique_label.end(); row++)
    {
       Summary.push_back( calculate_Class_Summary (training_data, *row));
    }
}


int Naive_Bayes::predict(const  std::vector<float>& test_data)
{
    std::vector<float> out;
    for (auto row = unique_label.begin(); row != unique_label.end(); row++)
    {
       out.push_back( prob_By_Summary(test_data ,Summary[*row] ));
    }
    int maxElementIndex = std::max_element(out.begin(),out.end()) - out.begin();
    return maxElementIndex;
}


class_summary calculate_Class_Summary (std::vector<std::vector<float>> dataset, float class_label )
{
    auto class_data = split_by_class(dataset,class_label);
    class_summary summary;
    std::vector<float> temp;
    for (auto row = class_data.begin(); row != class_data.end()-1; row++)
    {
        temp.clear();
        temp.push_back(alg_math::Math_Mean(*row));
        temp.push_back(alg_math::Math_Var(*row));
        summary.Mean_Stdev.push_back(temp);
    }
    summary.class_prob = float(class_data[0].size())/ dataset[0].size();
    return summary;
}

float prob_By_Summary(const std::vector<float> &test_data ,const class_summary &summary )
{
    int index =0;
    float prob = 1;
    for (auto row = summary.Mean_Stdev.begin(); row != summary.Mean_Stdev.end()-1; row++)
    {
        prob *= alg_math::calc_prob(test_data[index],(*row)[0],(*row)[1]);
        index++;
    }
    /* multiplying by the class probability*/
    prob *= summary.class_prob;
    return prob;
}


