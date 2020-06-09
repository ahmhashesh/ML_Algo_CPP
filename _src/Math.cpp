#include <cmath>
#include "Math.h"


double alg_math::calc_prob(double value,double mean,double stdev)
{
    double exponent = exp(-(pow(value-mean ,2) / (2 *pow(stdev,2))));
	return (1 / (sqrt(2 * M_PI) * stdev)) * exponent;
}