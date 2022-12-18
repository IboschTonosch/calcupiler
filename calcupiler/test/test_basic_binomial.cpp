#include "../include/basic.h"
#include "test_helper.hpp"

using namespace Calcupiler::Basic;

static void TEST_BASIC_BINOMIAL_LONG()
{
	static_assert(CBasic<long>::binomial(2, 0) == 1, "binomial test failed");
}