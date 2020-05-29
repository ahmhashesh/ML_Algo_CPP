
#include <iostream>
#include "gaussian.h"
#include "test_gaussian.h"

void test_gaussian(void)
{
	Gaussian mygaussian(30.0, 100.0);
	Gaussian othergaussian(10.0, 25.0);

	std::cout << "average " << mygaussian.getMu() << std::endl;
	std::cout << "evaluation " << mygaussian.evaluate(15.0) << std::endl;

	std::cout << "mul results variance " << mygaussian.multiply(othergaussian).getSigma2() << std::endl;
	std::cout << "mul results average " << mygaussian.multiply(othergaussian).getMu() << std::endl;

	std::cout << "add results variance " << mygaussian.add(othergaussian).getSigma2() << std::endl;
	std::cout << "add results average " << mygaussian.add(othergaussian).getMu() << std::endl;


}