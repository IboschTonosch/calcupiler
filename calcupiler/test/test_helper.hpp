#pragma once

constexpr long double tolerance = 0.000001;

constexpr bool isWithinTolerance(long double givenVal, long double expectedValue) {
	return givenVal > expectedValue - tolerance && givenVal < expectedValue + tolerance;
}