#include "../include/basic.h"
#include "test_helper.hpp"

using namespace Calcupiler::Basic;

//static constexpr bool SIMPLE_TEST_POWER_OF_INT(const double x, const double y, const double expected) {
//	constexpr auto pow = CSimple<double>::Pow(x, y);
//	return isWithinTolerance(pow, expected);
//}

static void TEST_BASIC_POWER_TO_THE_INT()
{
	// POWER TO THE 1
	static_assert(isWithinTolerance(CBasic<double>::Pow(-1000.0, 1), -1000.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-99.0, 1), -99.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-5.0, 1), -5.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-1.0, 1), -1.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-0.5, 1), -0.5), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(0.5, 1), 0.5), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(555.0, 1), 555.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(0.0, 1), 0.0), "pow function failed");

	// POWER TO THE 2
	static_assert(isWithinTolerance(CBasic<double>::Pow(-1000.0, 2), 1000000.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-99.0, 2), 9801.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-5.0, 2), 25.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-1.0, 2), 1.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-0.5, 2), 0.25), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(0.5, 2), 0.25), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(555.0, 2), 308025.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(0.0, 2), 0.0), "pow function failed");

	// POWER TO THE 3
	static_assert(isWithinTolerance(CBasic<double>::Pow(-1000.0, 3), -1000000000.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-99.0, 3), -970299.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-5.0, 3), -125.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-1.0, 3), -1.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-0.5, 3), -0.125), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(0.5, 3), 0.125), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(555.0, 3), 170953875.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(0.0, 3), 0.0), "pow function failed");

	// POWER TO THE 3 WITH FLOATING POINT
	static_assert(isWithinTolerance(CBasic<double>::Pow(0.02132, 3), 0.000009690843968), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-23.19212, 3), -12474.448327680936128), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-1.01012, 3), -1.030668279633728), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(1.95147, 3), 7.431656669441523), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-0.523739381, 3), -0.1436632515), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(4.55555, 3), 94.541492250078875), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(111.111111111, 3), 1371742.11247873799), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(0.001, 3), 0.000000001), "pow function failed");

	// POWER TO THE n WITH FLOATING POINT
	static_assert(isWithinTolerance(CBasic<double>::Pow(0.02132114, 5), 0.0000000044), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-1.19212987, 15), -13.9589755610), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(1.01012435654, 99), 2.71087485505), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-0.99999919, 43), -0.99996517059), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-0.523739381, 21), -0.0000012630), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(1.01100009, 400), 79.5202434343), "pow function failed");
}

static void TEST_BASIC_POWER_TO_THE_NEGATIVE_INT()
{
	// POWER TO THE -1
	static_assert(isWithinTolerance(CBasic<double>::Pow(-1000.0, -1), -0.001), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-99.0, -1), -0.0101010101), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-5.0, -1), -0.2), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-1.0, -1), -1.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-0.5, -1), -2.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(0.5, -1), 2.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(555.0, -1), 0.0018018018), "pow function failed");
	
	static_assert(isWithinTolerance(CBasic<double>::Pow(0.0, -1), 0.0), "pow function failed");

	// POWER TO THE -2
	static_assert(isWithinTolerance(CBasic<double>::Pow(-1000.0, -2), 0.000001), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-99.0, -2), 0.0001020304), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-5.0, -2), 0.04), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-1.0, 2), 1.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-0.5, -2), 4.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(0.5, -2), 4.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(555.0, -2), 0.000003246489732976219462), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(0.0, -2), 0.0), "pow function failed");
	
	// POWER TO THE -3
	static_assert(isWithinTolerance(CBasic<double>::Pow(-1000.0, -3), -0.000000001), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-99.0, -3), -0.000001030610152128364555667892062137547292123355790328548210397), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-5.0, -3), -0.008), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-1.0, -3), -1.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-0.5, -3), -8.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(0.5, -3), 8.0), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(555.0, -3), 0.0000000058495310504076026355062147611), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(0.0, -3), 0.0), "pow function failed");

	// POWER TO THE -3 WITH FLOATING POINT BASE
	static_assert(isWithinTolerance(CBasic<double>::Pow(0.02132, -3), 103190.18687145164857534109045723106208617061493895265242598940583), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-23.19212, -3), -0.000080163865666186548283719929131099178108049645158077402888125), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-1.01012, -3), -0.970244277193990399992126711987213029446273917269818025472027515), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(1.95147, -3), 0.1345594992448902224999837831301648981116326384064093559638696654), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-0.523739381, -3), -6.960722306805283873872824172759051322174159492169510685622218829), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(4.55555, -3), 0.0105773663626423847802989018496315719420708668765810512196046881), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(111.111111111, -3), 0.00000072900000000218700000000437400000000729000000001093500000001), "pow function failed");
	
	static_assert(isWithinTolerance(CBasic<double>::Pow(0.001, -3), 1'000'000'000.0), "pow function failed");

	//// POWER TO THE -n WITH FLOATING POINT BASE
	static_assert(isWithinTolerance(CBasic<double>::Pow(0.02132114, -5), 226959251.602578203932104531331021224154286467537246486835264), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-1.19212987, -15), -0.071638494933165108212192701724311691072545265759013938418078906), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(1.01012435654, -99), 0.3688846049586794290016203800159793733954916096467232348097532843), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-0.99999919, -43), -1.000034830620678141218036326518773585651378833705814010370542338), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(-0.523739381, -21), -791735.5715360275874842868780268715608612682422542093230931139704), "pow function failed");

	static_assert(isWithinTolerance(CBasic<double>::Pow(1.01100009, -400), 0.0125754142192182898235311022254261191493856412594030602697555874), "pow function failed");
}

static void TEST_BASIC_POWER_TO_THE_DOUBLE()
{
	//static_assert(isWithinTolerance(CBasic<double>::Pow_f(3.0, 2.3), 12.5135), "pow function failed");

	//static_assert(isWithinTolerance(CBasic<double>::Pow(-99.0, -1), -0.0101010101), "pow function failed");

	//static_assert(isWithinTolerance(CBasic<double>::Pow(-5.0, -1), -0.2), "pow function failed");

	//static_assert(isWithinTolerance(CBasic<double>::Pow(-1.0, -1), -1.0), "pow function failed");

	//static_assert(isWithinTolerance(CBasic<double>::Pow(-0.5, -1), -2.0), "pow function failed");

	//static_assert(isWithinTolerance(CBasic<double>::Pow(0.5, -1), 2.0), "pow function failed");

	//static_assert(isWithinTolerance(CBasic<double>::Pow(555.0, -1), 0.0018018018), "pow function failed");

	//static_assert(isWithinTolerance(CBasic<double>::Pow(0.0, -1), 0.0), "pow function failed");
}