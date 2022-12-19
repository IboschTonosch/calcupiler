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

static void TEST_BASIC_FACTORIAL_INT128()
{
	static_assert(CBasic<__int128>::factorial(0) == 0, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(1) == 1, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(2) == 2, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(3) == 6, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(4) == 24, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(5) == 120, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(6) == 720, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(7) == 5040, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(8) == 40320, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(9) == 362880, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(10) == 3628800, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(11) == 39916800, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(12) == 479001600, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(13) == 6227020800, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(14) == 87178291200, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(15) == 1307674368000, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(16) == 20922789888000, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(17) == 355687428096000, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(18) == 6402373705728000, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(19) == 121645100408832000, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(20) == 2432902008176640000, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(21) == 51090942171709440000, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(22) == 1124000727777607680000, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(23) == 25852016738884976640000, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(24) == 620448401733239439360000, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(25) == 15511210043330985984000000, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(26) == 403291461126605635584000000, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(27) == 10888869450418352160768000000, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(28) == 304888344611713860501504000000, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(29) == 8841761993739701954543616000000, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(30) == 265252859812191058636308480000000, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(31) == 8222838654177922817725562880000000, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(32) == 263130836933693530167218012160000000, "factorial function failed");

	static_assert(CBasic<__int128>::factorial(33) == 8683317618811886495518194401280000000, "factorial function failed");
}