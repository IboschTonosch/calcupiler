#include "../include/basic.h"

#include <string>
#include <math.h>
#include <type_traits>
#include <typeinfo>

using namespace Calcupiler::Basic;

using SimpleCalculator = CBasic<double>;
 
double poww(double basis, int exp) {
	return exp == 1 ? basis : basis * poww(basis, exp - 1);
}

double powwf(double basis, double exp) {
	double res = 0.0;
	for (int i = 0; i < 10; i++)
	{
		res += CBasic<double>::ln(basis);
	}
	return res;
}

int main() 
{
	auto bla = powwf(3, 1.2);
	auto blu = 2.3;
	//SIMPLE_TEST_SUM_FLOAT();
	//SIMPLE_TEST_SUM_DOUBLE();
	//SIMPLE_TEST_SUM_LONG_DOUBLE();

	//SIMPLE_TEST_DIFF_DOUBLE();
	//
	//SIMPLE_TEST_MUL_DOUBLE();

	//SIMPLE_TEST_DIV_DOUBLE();

	//SIMPLE_TEST_POW_DOUBLE();

	//SIMPLE_TEST_EXP_DOUBLE();

	//SIMPLE_TEST_FACTORIAL_INTEGER();

	//SIMPLE_TEST_LN_DOUBLE();

	//SIMPLE_TEST_BINOMIAL_DOUBLE();

	//double res = 0.0;
	//double z = 0.001;
	/*for (int k = 1; k < 100; k++)
	{
		res += (poww(-1, k) * poww(-1 + 0.001, k)) / k;
	}*/
	// Taylor
	//for (int k = 1; k < 100; k++)
	//{
	//	res += poww(-1.0, k + 1.0) * poww(z - 1.0, k) / k;
	//}
	// inverse hyperbolic
	//for (int k = 1; k < 100; k++)
	//{
	//	res += (1.0 / (2.0 * k + 1.0)) * poww(((z - 1.0) / (z + 1.0)), 2 * k + 1.0);
	//}
	//res *= 2;
	// ln of x > 1
	
	// binomial


	return 0;
}

//constexpr auto bla = ceil(10);