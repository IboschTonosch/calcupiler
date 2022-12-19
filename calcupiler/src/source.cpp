#include "../include/basic.h"

#include <string>
#include <math.h>
#include <type_traits>
#include <typeinfo>

using namespace Calcupiler::Basic;

using SimpleCalculator = CBasic<double>;
 
//double poww(double basis, int exp) {
//	return exp == 1.0 ? basis : poww(e, exp * CBasic<double>::ln(basis));
//}
//
//double fact(double k) {
//	return k < 2 ? k : k * fact(--k);
//}
//
//double bin(double n, double k) {
//	return (fact(n) / (fact(k) * fact(n - k)));
//}
//
//double powwf(double basis, double exp) {
//	double res = 0.0;
//	for (int i = 0; i < 10; i++)
//	{
//		res += CBasic<double>::ln(basis);
//	}
//	return res;
//}

int main() 
{
	

	return 0;
}

//constexpr auto bla = ceil(10);