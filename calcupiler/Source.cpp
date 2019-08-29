#include "Simple.h"
#include <string>
#include <math.h>

using namespace Calcupiler::Simple;

using SimpleCalculator = CSimple<double>;

constexpr double tolerance = 0.00001;

constexpr bool isWithinTolerance(double givenVal, double expectedValue) {
	return givenVal > expectedValue - tolerance && givenVal < expectedValue + tolerance;
}

int main() 
{

	constexpr auto sum = CSimple<double>::Sum(1.3, 4.2);
	static_assert(isWithinTolerance(sum, 5.5), "mul function failed");

	constexpr auto diff = CSimple<double>::Diff(3.45, 5.2);
	static_assert(isWithinTolerance(diff, -1.75), "diff function failed");

	constexpr auto mul = CSimple<double>::Mul(1.3, 4.2);
	static_assert(isWithinTolerance(mul, 5.46), "mul function failed");

	constexpr auto div = CSimple<double>::Div(1.45, 2.2);
	static_assert(isWithinTolerance(div, 0.6591), "div function failed");

	constexpr auto pow1 = CSimple<double>::Pow(1.4, 2);
	static_assert(isWithinTolerance(pow1, 1.96), "pow function failed");
	constexpr auto pow2 = CSimple<double>::Pow(-1, 1);
	static_assert(isWithinTolerance(pow2, -1), "pow function failed");
	//constexpr auto pow3 = CSimple<double>::Pow(2, -2);
	//static_assert(isWithinTolerance(pow3, 0.25), "pow function failed");
	//constexpr auto pow4 = CSimple<double>::Pow(1.4, 0.24);
	//static_assert(isWithinTolerance(pow4, 0.0841), "pow function failed");

	// Factorial Integral
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