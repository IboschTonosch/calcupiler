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
	//constexpr auto pow2 = CSimple<double>::Pow(1.4, 0.24);
	//static_assert(isWithinTolerance(pow2, 0.0841), "pow function failed");

	constexpr auto factorial1 = CSimple<int>::factorial(1);
	static_assert(isWithinTolerance(factorial1, 1), "factorial function failed");
	constexpr auto factorial2 = CSimple<int>::factorial(5);
	static_assert(isWithinTolerance(factorial2, 120), "factorial function failed");
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

	constexpr auto ln = CSimple<double>::ln(0.5);
	static_assert(isWithinTolerance(ln, -0.69314));

	//constexpr auto ln2 = CSimple<int>::ln('a');

	//static_assert(ln > 20, "bla");
	return 0;
}

//constexpr auto bla = ceil(10);