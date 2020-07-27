#include <cmath>
#include "Math.h"

/*
double alg_math::calc_prob(double value,double mean,double stdev)
{
    double exponent = exp(-(pow(value-mean ,2) / (2 * pow(stdev,2))));
	return (1 / (sqrt(2 * M_PI) * stdev)) * exponent;
}
*/
double alg_math::calc_prob(double x, double m, double s)
{
    static const double inv_sqrt_2pi = 0.3989422804014327;
    double a = (x - m) / s;

    return inv_sqrt_2pi / s * std::exp(-0.5f * a * a);
}