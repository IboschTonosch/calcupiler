#include "Simple.h"
#include <string>
#include <math.h>
#include <type_traits>
#include <typeinfo>

using namespace Calcupiler::Simple;

using SimpleCalculator = CSimple<double>;

constexpr double tolerance = 0.00001;

constexpr bool isWithinTolerance(double givenVal, double expectedValue) {
	return givenVal > expectedValue - tolerance && givenVal < expectedValue + tolerance;
}

int main() 
{
	/// SUM (double)
	constexpr auto sum1 = CSimple<double>::Sum(1.3, 4.2);
	static_assert(isWithinTolerance(sum1, 5.5), "sum function failed");
	constexpr auto sum2 = CSimple<double>::Sum(-1.3, 4.2);
	static_assert(isWithinTolerance(sum2, 2.9), "sum function failed");
	constexpr auto sum3 = CSimple<double>::Sum(1.3, -4.2);
	static_assert(isWithinTolerance(sum3, -2.9), "sum function failed");
	constexpr auto sum4 = CSimple<double>::Sum(-1.3, -4.2);
	static_assert(isWithinTolerance(sum4, -5.5), "sum function failed");
	static_assert(std::is_same_v<std::remove_const_t<decltype(sum1)>, double>);
	static_assert(std::is_same_v<std::remove_const_t<decltype(sum2)>, double>);
	static_assert(std::is_same_v<std::remove_const_t<decltype(sum3)>, double>);
	static_assert(std::is_same_v<std::remove_const_t<decltype(sum4)>, double>);

	/// SUM (float)
	constexpr auto sum5 = CSimple<float>::Sum(1.3, 4.2);
	static_assert(isWithinTolerance(sum5, 5.5), "sum function failed");
	constexpr auto sum6 = CSimple<float>::Sum(-1.3, 4.2);
	static_assert(isWithinTolerance(sum6, 2.9), "sum function failed");
	constexpr auto sum7 = CSimple<float>::Sum(1.3, -4.2);
	static_assert(isWithinTolerance(sum7, -2.9), "sum function failed");
	constexpr auto sum8 = CSimple<float>::Sum(-1.3, -4.2);
	static_assert(isWithinTolerance(sum8, -5.5), "sum function failed");
	static_assert(std::is_same_v<std::remove_const_t<decltype(sum5)>, float>);
	static_assert(std::is_same_v<std::remove_const_t<decltype(sum6)>, float>);
	static_assert(std::is_same_v<std::remove_const_t<decltype(sum7)>, float>);
	static_assert(std::is_same_v<std::remove_const_t<decltype(sum8)>, float>);

	/// SUM (long double)
	constexpr auto sum9 = CSimple<long double>::Sum(1.3, 4.2);
	static_assert(isWithinTolerance(sum9, 5.5), "sum function failed");
	constexpr auto sum10 = CSimple<long double>::Sum(-1.3, 4.2);
	static_assert(isWithinTolerance(sum10, 2.9), "sum function failed");
	constexpr auto sum11 = CSimple<long double>::Sum(1.3, -4.2);
	static_assert(isWithinTolerance(sum11, -2.9), "sum function failed");
	constexpr auto sum12 = CSimple<long double>::Sum(-1.3, -4.2);
	static_assert(isWithinTolerance(sum12, -5.5), "sum function failed");
	static_assert(std::is_same_v<std::remove_const_t<decltype(sum9)>, long double>);
	static_assert(std::is_same_v<std::remove_const_t<decltype(sum10)>, long double>);
	static_assert(std::is_same_v<std::remove_const_t<decltype(sum11)>, long double>);
	static_assert(std::is_same_v<std::remove_const_t<decltype(sum12)>, long double>);

	/// DIFFERENCE
	constexpr auto diff = CSimple<double>::Diff(3.45, 5.2);
	static_assert(isWithinTolerance(diff, -1.75), "diff function failed");

	/// Multiplication
	constexpr auto mul = CSimple<double>::Mul(1.3, 4.2);
	static_assert(isWithinTolerance(mul, 5.46), "mul function failed");

	/// Division
	constexpr auto div = CSimple<double>::Div(1.45, 2.2);
	static_assert(isWithinTolerance(div, 0.6591), "div function failed");

	/// Power of y over x
	constexpr auto pow1 = CSimple<double>::Pow(1.4, 2);
	static_assert(isWithinTolerance(pow1, 1.96), "pow function failed");
	constexpr auto pow2 = CSimple<double>::Pow(-1, 1);
	static_assert(isWithinTolerance(pow2, -1), "pow function failed");
	//constexpr auto pow3 = CSimple<double>::Pow(2, -2);
	//static_assert(isWithinTolerance(pow3, 0.25), "pow function failed");
	//constexpr auto pow4 = CSimple<double>::Pow(1.4, 0.24);
	//static_assert(isWithinTolerance(pow4, 0.0841), "pow function failed");

	/// Factorial (Integral)
	constexpr auto factorial0 = CSimple<int>::factorial(0);
	static_assert(factorial0 == 0, "factorial function failed");
	constexpr auto factorial1 = CSimple<int>::factorial(1);
	static_assert(factorial1 == 1, "factorial function failed");
	constexpr auto factorial2 = CSimple<int>::factorial(2);
	static_assert(factorial2 == 2, "factorial function failed");
	constexpr auto factorial3 = CSimple<int>::factorial(3);
	static_assert(factorial3 == 6, "factorial function failed");
	constexpr auto factorial4 = CSimple<int>::factorial(4);
	static_assert(factorial4 == 24, "factorial function failed");
	constexpr auto factorial5 = CSimple<int>::factorial(5);
	static_assert(factorial5 == 120, "factorial function failed");
	//constexpr auto factorial_f1 = CSimple<int>::factorial(0.45);
	//static_assert(isWithinTolerance(factorial_f1, 120), "factorial function failed");

	constexpr auto euler = CSimple<double>::e;
	static_assert(isWithinTolerance(euler, 2.71828), "euler function failed");

	constexpr auto e_y1 = CSimple<double>::e_exp(3);
	static_assert(isWithinTolerance(e_y1, 20.08553), "euler function failed");
	constexpr auto e_y2 = CSimple<double>::e_exp(0.5);
	static_assert(isWithinTolerance(e_y2, 1.64872), "euler function failed");
	constexpr auto e_y3 = CSimple<double>::e_exp(-0.4);
	static_assert(isWithinTolerance(e_y3, 0.67032), "euler function failed");


	constexpr auto ln = CSimple<double>::ln(1);
	static_assert(isWithinTolerance(ln, 0.0));
	constexpr auto ln2 = CSimple<double>::ln(2);
	static_assert(isWithinTolerance(ln2, 0.69314));
	constexpr auto ln3 = CSimple<double>::ln(0.5);
	static_assert(isWithinTolerance(ln3, -0.69314));

	
	constexpr auto binomial1 = CSimple<int>::binomial(3, 2);
	static_assert(isWithinTolerance(binomial1, 3));

	return 0;
}

//constexpr auto bla = ceil(10);