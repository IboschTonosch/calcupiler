#include "../include/simple.h"

using namespace Calcupiler::Simple;

constexpr double tolerance = 0.0000000001;

constexpr bool isWithinTolerance(long double givenVal, long double expectedValue) {
	return givenVal > expectedValue - tolerance && givenVal < expectedValue + tolerance;
}

//static constexpr bool SIMPLE_TEST_POWER_OF_INT(const double x, const double y, const double expected) {
//	constexpr auto pow = CSimple<double>::Pow(x, y);
//	return isWithinTolerance(pow, expected);
//}

static void SIMPLE_TEST_POW_OF_INT()
{
	// POWER OF 1
	static_assert(isWithinTolerance(CSimple<double>::Pow(-1000.0, 1), -1000.0), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(-99.0, 1), -99.0), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(-5.0, 1), -5.0), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(-1.0, 1), -1.0), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(-0.5, 1), -0.5), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(0.5, 1), 0.5), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(555.0, 1), 555.0), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(0.0, 1), 0.0), "pow function failed");

	// POWER OF 2
	static_assert(isWithinTolerance(CSimple<double>::Pow(-1000.0, 2), 1000000.0), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(-99.0, 2), 9801.0), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(-5.0, 2), 25.0), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(-1.0, 2), 1.0), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(-0.5, 2), 0.25), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(0.5, 2), 0.25), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(555.0, 2), 308025.0), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(0.0, 2), 0.0), "pow function failed");

	// POWER OF 3
	static_assert(isWithinTolerance(CSimple<double>::Pow(-1000.0, 3), -1000000000.0), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(-99.0, 3), -970299.0), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(-5.0, 3), -125.0), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(-1.0, 3), -1.0), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(-0.5, 3), -0.125), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(0.5, 3), 0.125), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(555.0, 3), 170953875.0), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(0.0, 3), 0.0), "pow function failed");

	// POWER OF 3 WITH FLOATING POINT
	static_assert(isWithinTolerance(CSimple<double>::Pow(0.02132, 3), 0.000009690843968), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(-23.19212, 3), -12474.448327680936128), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(-1.01012, 3), -1.030668279633728), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(1.95147, 3), 7.431656669441523), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(-0.523739381, 3), -0.1436632515), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(4.55555, 3), 94.541492250078875), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(111.111111111, 3), 1371742.11247873799), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(0.001, 3), 0.000000001), "pow function failed");

	// POWER OF n WITH FLOATING POINT
	static_assert(isWithinTolerance(CSimple<double>::Pow(0.02132114, 5), 0.0000000044), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(-1.19212987, 15), -13.9589755610), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(1.01012435654, 99), 2.71087485505), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(-0.99999919, 43), -0.99996517059), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(-0.523739381, 21), -0.0000012630), "pow function failed");

	static_assert(isWithinTolerance(CSimple<double>::Pow(1.01100009, 400), 79.5202434343), "pow function failed");
}

static void SIMPLE_TEST_FACTORIAL_INTEGER()
{
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
}

static void SIMPLE_TEST_EXP_DOUBLE()
{
	constexpr auto e_y1 = CSimple<double>::e_exp(3);
	static_assert(isWithinTolerance(e_y1, 20.08553), "euler function failed");
	constexpr auto e_y2 = CSimple<double>::e_exp(0.5);
	static_assert(isWithinTolerance(e_y2, 1.64872), "euler function failed");
	constexpr auto e_y3 = CSimple<double>::e_exp(-0.4);
	static_assert(isWithinTolerance(e_y3, 0.67032), "euler function failed");
}

static void SIMPLE_TEST_LN_DOUBLE()
{
	// ln of x > 0 && x <= 1
	constexpr auto ln0 = CSimple<double>::ln(0.001);
	//static_assert(isWithinTolerance(ln0, -6.90775));
	constexpr auto ln1 = CSimple<double>::ln(0.5);
	static_assert(isWithinTolerance(ln1, -0.69314));
	constexpr auto ln2 = CSimple<double>::ln(0.9);
	static_assert(isWithinTolerance(ln2, -0.10536));
	constexpr auto ln3 = CSimple<double>::ln(1);
	static_assert(isWithinTolerance(ln3, 0.0));
	//constexpr auto ln4 = CSimple<double>::ln(3);
	//static_assert(isWithinTolerance(ln4, 1.09861));
}

static void SIMPLE_TEST_BINOMIAL_DOUBLE()
{
	constexpr auto binomial1 = CSimple<int>::binomial(3, 2);
	static_assert(isWithinTolerance(binomial1, 3));
}