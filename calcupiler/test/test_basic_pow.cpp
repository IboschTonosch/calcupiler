#include "../include/basic.h"

using namespace Calcupiler::Basic;

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
	static_assert(isWithinTolerance(CBasic<double>::Pow(-1000.0, 1), -1000.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-99.0, 1), -99.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-5.0, 1), -5.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-1.0, 1), -1.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-0.5, 1), -0.5), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(0.5, 1), 0.5), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(555.0, 1), 555.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(0.0, 1), 0.0), "pow function failed");

	// POWER OF 2
	static_assert(isWithinTolerance(CBasic<double>::Pow(-1000.0, 2), 1000000.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-99.0, 2), 9801.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-5.0, 2), 25.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-1.0, 2), 1.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-0.5, 2), 0.25), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(0.5, 2), 0.25), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(555.0, 2), 308025.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(0.0, 2), 0.0), "pow function failed");

	// POWER OF 3
	static_assert(isWithinTolerance(CBasic<double>::Pow(-1000.0, 3), -1000000000.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-99.0, 3), -970299.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-5.0, 3), -125.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-1.0, 3), -1.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-0.5, 3), -0.125), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(0.5, 3), 0.125), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(555.0, 3), 170953875.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(0.0, 3), 0.0), "pow function failed");

	// POWER OF 3 WITH FLOATING POINT
	static_assert(isWithinTolerance(CBasic<double>::Pow(0.02132, 3), 0.000009690843968), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-23.19212, 3), -12474.448327680936128), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-1.01012, 3), -1.030668279633728), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(1.95147, 3), 7.431656669441523), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-0.523739381, 3), -0.1436632515), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(4.55555, 3), 94.541492250078875), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(111.111111111, 3), 1371742.11247873799), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(0.001, 3), 0.000000001), "pow function failed");

	// POWER OF n WITH FLOATING POINT
	static_assert(isWithinTolerance(CBasic<double>::Pow(0.02132114, 5), 0.0000000044), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-1.19212987, 15), -13.9589755610), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(1.01012435654, 99), 2.71087485505), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-0.99999919, 43), -0.99996517059), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-0.523739381, 21), -0.0000012630), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(1.01100009, 400), 79.5202434343), "pow function failed");
}