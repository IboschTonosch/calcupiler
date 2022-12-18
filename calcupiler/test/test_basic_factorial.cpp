#include "../include/basic.h"

using namespace Calcupiler::Basic;

static void TEST_BASIC_FACTORIAL_INT()
{
	static_assert(CBasic<int>::factorial(0) == 0, "factorial function failed");

	static_assert(CBasic<int>::factorial(1) == 1, "factorial function failed");

	static_assert(CBasic<int>::factorial(2) == 2, "factorial function failed");

	static_assert(CBasic<int>::factorial(3) == 6, "factorial function failed");

	static_assert(CBasic<int>::factorial(4) == 24, "factorial function failed");

	static_assert(CBasic<int>::factorial(5) == 120, "factorial function failed");

	static_assert(CBasic<int>::factorial(6) == 720, "factorial function failed");

	static_assert(CBasic<int>::factorial(7) == 5040, "factorial function failed");

	static_assert(CBasic<int>::factorial(8) == 40320, "factorial function failed");

	static_assert(CBasic<int>::factorial(9) == 362880, "factorial function failed");

	static_assert(CBasic<int>::factorial(10) == 3628800, "factorial function failed");

	static_assert(CBasic<int>::factorial(11) == 39916800, "factorial function failed");

	static_assert(CBasic<int>::factorial(12) == 479001600, "factorial function failed");
}

static void TEST_BASIC_FACTORIAL_LONG()
{
	static_assert(CBasic<long>::factorial(0) == 0, "factorial function failed");

	static_assert(CBasic<long>::factorial(1) == 1, "factorial function failed");

	static_assert(CBasic<long>::factorial(2) == 2, "factorial function failed");

	static_assert(CBasic<long>::factorial(3) == 6, "factorial function failed");

	static_assert(CBasic<long>::factorial(4) == 24, "factorial function failed");

	static_assert(CBasic<long>::factorial(5) == 120, "factorial function failed");

	static_assert(CBasic<long>::factorial(6) == 720, "factorial function failed");

	static_assert(CBasic<long>::factorial(7) == 5040, "factorial function failed");

	static_assert(CBasic<long>::factorial(8) == 40320, "factorial function failed");

	static_assert(CBasic<long>::factorial(9) == 362880, "factorial function failed");

	static_assert(CBasic<long>::factorial(10) == 3628800, "factorial function failed");

	static_assert(CBasic<long>::factorial(11) == 39916800, "factorial function failed");

	static_assert(CBasic<long>::factorial(12) == 479001600, "factorial function failed");

	static_assert(CBasic<long>::factorial(13) == 6227020800, "factorial function failed");

	static_assert(CBasic<long>::factorial(14) == 87178291200, "factorial function failed");

	static_assert(CBasic<long>::factorial(15) == 1307674368000, "factorial function failed");

	static_assert(CBasic<long>::factorial(16) == 20922789888000, "factorial function failed");

	static_assert(CBasic<long>::factorial(17) == 355687428096000, "factorial function failed");

	static_assert(CBasic<long>::factorial(18) == 6402373705728000, "factorial function failed");

	static_assert(CBasic<long>::factorial(19) == 121645100408832000, "factorial function failed");

	static_assert(CBasic<long>::factorial(20) == 2432902008176640000, "factorial function failed");
}

//static void TEST_BASIC_FACTORIAL_LONG_LONG()
//{
//	static_assert(CBasic<long long>::factorial(0) == 0, "factorial function failed");
//
//	static_assert(CBasic<long long>::factorial(1) == 1, "factorial function failed");
//
//	static_assert(CBasic<long long>::factorial(2) == 2, "factorial function failed");
//
//	static_assert(CBasic<long long>::factorial(3) == 6, "factorial function failed");
//
//	static_assert(CBasic<long long>::factorial(4) == 24, "factorial function failed");
//
//	static_assert(CBasic<long long>::factorial(5) == 120, "factorial function failed");
//
//	static_assert(CBasic<long long>::factorial(6) == 720, "factorial function failed");
//
//	static_assert(CBasic<long long>::factorial(7) == 5040, "factorial function failed");
//
//	static_assert(CBasic<long long>::factorial(8) == 40320, "factorial function failed");
//
//	static_assert(CBasic<long long>::factorial(9) == 362880, "factorial function failed");
//
//	static_assert(CBasic<long long>::factorial(10) == 3628800, "factorial function failed");
//
//	static_assert(CBasic<long long>::factorial(11) == 39916800, "factorial function failed");
//
//	static_assert(CBasic<long long>::factorial(12) == 479001600, "factorial function failed");
//
//	static_assert(CBasic<long long>::factorial(13) == 6227020800, "factorial function failed");
//
//	static_assert(CBasic<long long>::factorial(14) == 87178291200, "factorial function failed");
//
//	static_assert(CBasic<long long>::factorial(15) == 1307674368000, "factorial function failed");
//
//	static_assert(CBasic<long long>::factorial(16) == 20922789888000, "factorial function failed");
//
//	static_assert(CBasic<long long>::factorial(17) == 355687428096000, "factorial function failed");
//
//	static_assert(CBasic<long long>::factorial(18) == 6402373705728000, "factorial function failed");
//
//	static_assert(CBasic<long long>::factorial(19) == 121645100408832000, "factorial function failed");
//
//	static_assert(CBasic<long long>::factorial(20) == 2432902008176640000, "factorial function failed");
//
//	static_assert(CBasic<unsigned long>::factorial(21) == 51090942171709440000, "factorial function failed");
//
//	//static_assert(CBasic<long long>::factorial(22) == 2432902008176640000, "factorial function failed");
//
//	//static_assert(CBasic<long long>::factorial(23) == 2432902008176640000, "factorial function failed");
//
//	//static_assert(CBasic<long long>::factorial(24) == 2432902008176640000, "factorial function failed");
//
//	//static_assert(CBasic<long long>::factorial(25) == 2432902008176640000, "factorial function failed");
//
//	//static_assert(CBasic<long long>::factorial(26) == 2432902008176640000, "factorial function failed");
//
//	//static_assert(CBasic<long long>::factorial(27) == 2432902008176640000, "factorial function failed");
//
//	//static_assert(CBasic<long long>::factorial(28) == 2432902008176640000, "factorial function failed");
//
//	//static_assert(CBasic<long long>::factorial(29) == 2432902008176640000, "factorial function failed");
//
//	//static_assert(CBasic<long long>::factorial(30) == 2432902008176640000, "factorial function failed");
//}