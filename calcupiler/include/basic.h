#pragma once

#include <limits>
#include <type_traits>
#include <typeinfo>
#include <numbers>

using namespace std::numbers;

namespace Calcupiler
{
	namespace Basic
	{
		template<typename T, typename = std::remove_reference_t<std::decay_t<T>>>
		class CBasic
		{

			/// <summary>
			/// Delete standard constructor
			/// </summary>
			//constexpr CBasic() = delete;

			/// <summary>
			/// Do not allow object instantiation
			/// </summary>
			CBasic() = delete;

			/// <summary>
			/// Delete destructor
			/// </summary>
			~CBasic() = delete;

			//static constexpr SimpleCalc<T>& operator+(const SimpleCalc<T>& rhs) {
			//	return this;
			//}

		private:

			// #####################################################################################
			// STRONG TYPE CHECKING
			// #####################################################################################

			/// <summary>
			/// Assertion check if T is of type integral or floating point
			/// Compiler throws error if T is not integral or floating point
			/// </summary>
			static_assert(
				(std::is_same_v<T, int> 
					|| std::is_same_v<T, long>
					|| std::is_same_v<T, __int128>
					|| std::is_same_v<T, float>
					|| std::is_same_v<T, double>
					|| std::is_same_v<T, long double>
					),
				"Type must be either integral or floating point"
				);

			/// <summary>
			/// Assertion check if T is of type char
			/// Compiler throws error if T is char
			/// </summary>
			static_assert(
				!std::is_same_v<T, char>, 
				"Character type is not allowed"
				);

			/// <summary>
			/// Checking for singed 4 Byte integral type
			/// Allowed values are from -(2^31) to +(2^31)
			/// </summary>
			/// <param name="value">The value to be checked</param>
			/// <returns>Returns True if value is checked type. Otherwise returns false</returns>
			static constexpr bool is_int(T value)
			{
				return std::is_same_v<T, decltype(value)>;
			}

			/// <summary>
			/// Checking for Singed 8 Byte integral type
			/// Allowed values are from -(2^63) to +(2^63)
			/// </summary>
			/// <param name="value">The value to be checked</param>
			/// <returns>Returns True if value is checked type. Otherwise returns false</returns>
			static constexpr bool is_long(T value)
			{
				return std::is_same_v<T, long>;
			}

			/// <summary>
			/// Checking for Singed 16 Byte integral type
			/// Allowed values are from -(2^127) to +(2^127)
			/// </summary>
			/// <param name="value">The value to be checked</param>
			/// <returns>Returns True if value is checked type. Otherwise returns false</returns>
			static constexpr bool is_int128(T value)
			{
				return std::is_same_v<T, __int128>;
			}

			/// <summary>
			/// Checking for Singed 4 Byte floating point type
			/// </summary>
			/// <param name="value">The value to be checked</param>
			/// <returns>Returns True if value is checked type. Otherwise returns false</returns>
			static constexpr bool is_float(T value)
			{
				return std::is_same_v<T, float>;
			}

			/// <summary>
			/// Checking for Singed 8 Byte floating point type
			/// </summary>
			/// <param name="value">The value to be checked</param>
			/// <returns>Returns True if value is checked type. Otherwise returns false</returns>
			static constexpr bool is_double(T value)
			{
				return std::is_same_v<T, double>;
			}

			/// <summary>
			/// Checking for Singed 16 Byte floating point type
			/// </summary>
			/// <param name="value">The value to be checked</param>
			/// <returns>Returns True if value is checked type. Otherwise returns false</returns>
			static constexpr bool is_long_double(T value)
			{
				return std::is_same_v<T, long double>;
			}

			static constexpr bool is_integral(T value)
			{
				return is_int(value) || is_long(value) || is_int128(value);
			}

			static constexpr bool is_floating_point(T value)
			{
				return is_float(value) || is_double || is_long_double(value);
			}
			
			// #####################################################################################
			// Value Checking
			// #####################################################################################

			/// <summary>
			/// Checks if given value is a negative number
			/// </summary>
			/// <typeparam name="N">Generic type of the given value</typeparam>
			/// <param name="value">The value to be checked</param>
			/// <returns>True if value is a negative number. Otherwise false</returns>
			template<typename N>
			static constexpr bool is_negative(N value)
			{
				return value < 0;
			}

		public:

			// #####################################################################################
			// MAIN BASIC MATHEMATICS IMPLEMENTATION
			// #####################################################################################

			// Simple operations
			//######################################################
			static constexpr T Sum(const T lhs, const T rhs) noexcept {
				return lhs + rhs;
			}

			static constexpr T Diff(const T lhs, const T rhs) noexcept {
				return lhs - rhs;
			}

			static constexpr T Mul(const T lhs, const T rhs) noexcept {
				return lhs * rhs;
			}

			static constexpr T Div(const T lhs, const T rhs) noexcept {
				return lhs / rhs;
			}

			//static constexpr T Frac(const T lhs, const T rhs) noexcept {
			//	int left = 0;
			//	int right = 0;
			//	int n = 0;
			//	T b = rhs;
			//	for (int i = 0; i < 10; i++)
			//	{
			//		if (lhs > b)
			//		{
			//			left++;
			//			b += rhs;
			//		}
			//	}
			//	return b;
			//}

			//#########################################################

			/// <summary>
			/// Factorial of k
			/// </summary>
			static constexpr T factorial(T k) {
				return is_integral(k) ?
					factorial_i(k) : factorial_f(k);
			}

		private:

			/// <summary>
			/// Factorial of k for integral types
			/// </summary>
			static constexpr T factorial_i(T k) {
				return is_integral(k) ?
					(k < 2 ? 1 : k * factorial_i(k-1)) : factorial_i(k);
			}

			static constexpr T factorial_f(T k) {
				//static_assert(std::is_integral_v<T>, "Factorial of floating point numbers is not implemented yet.");
				return k;
				//TODO:: implement floating point factorial
			}

		public:

			/// <summary>
			/// Power of exp over basis
			/// </summary>
			template<typename E>
			static constexpr T Pow(T basis, E exp) {
				return basis == static_cast<T>(0) ? static_cast<T>(0) // if basis is zero -> return zero
					: is_negative(exp) ? (1 / Pow(basis, -1.0 * exp))
					: is_integral(exp) ? Pow_i(basis, exp) : Pow_f(basis, exp);
			}

		public:

			/// <summary>
			/// Power for integral type of exp over basis
			/// </summary>
			template<typename E, typename = std::is_integral<E>>
			static constexpr T Pow_i(T basis, E exp) {
				return exp == 0 ? 1 : exp == 1 ? basis : basis * Pow_i(basis, exp - 1);
			}

			/// <summary>
			/// Power for floaing point of exp over basis
			/// </summary>
			template<typename E, typename = std::is_floating_point<E>>
			static constexpr T Pow_f(T basis, E exp) {
				//return exp == 1.0 ? basis : Pow_f(2.2,2);
				//return exp == 1.0 ? basis : Pow(e, exp * CBasic<T>::ln(basis));
				T res = static_cast<T>(0);
				for (int n = 0; n < 10; n++)
				{
					res += ((Pow(exp, n) * Pow(ln(basis), n)) / factorial(n));
				}
				return res;
			}
			
#ifdef e
			static constexpr T bla = factorial(3);
			 //<summary>
			 //The euler's number.
			 //</summary>
			 //<param name="k">defines the calculated precision of the euler's number. Minimum value is 10 and maximum value is 100</param>
			template<
				typename E, typename = std::is_integral<E>
			> 
			static constexpr T e(E k) {
				//static_assert(std::is_floating_point_v<E>, "Only floating point types are allowed.")
				T res = 2.0;
				while (k > 1) 
				{
					res += 1.0 / factorial_i(k--);
				}
				return static_cast<T>(res);
			}
			static constexpr T e(K k) {
				return k;
			}

			#define e e(10)

#endif // !e

		public:

			///// <summary>
			///// Power of exp over e (euler's number)
			///// </summary>
			template<typename E>
			static constexpr T exp(E x) {
				if (x == static_cast<T>(0))
				{ 
					return 1;
				}
				else 
				{
					T res = static_cast<T>(0);
					for (int i = 0; i < 100; i++)
					{
						res += (Pow(x, i) / factorial(i));
					}
					return res;
				}
			}

		private:

			//template<typename E, typename = std::is_integral<E>>
			//static constexpr T e_exp_i(T exp, T res, E n) {
			//	return exp == 1.0 ? e :
			//		n == 0 ? res : e_exp_i(exp, res + (Pow(exp, n) / factorial(n), --n));
			//}

			template<typename E, typename = std::is_integral<E>>
			static constexpr T e_exp_f(T exp, T res, E n) {
				return exp == 1.0 ? e : 
					n == 0 ? res : e_exp_f(exp, res + (Pow_i(exp, n) / factorial_i(n)), n-1);
			}
			
		public:

			/// <summary>
			/// Logarithmus naturales of x; For x > 0 && x < 1
			/// </summary>
			static constexpr T ln(T x)  {
				if (x == static_cast<T>(1)) return static_cast<T>(0);

				if (x < static_cast<T>(1)) {
					T res = 0.0;
					for (int k = 1; k < 100; k++)
					{
						res += (Pow(x - 1, k) / (k * Pow(x, k)));
						//res += (Pow(-1, k) * Pow(-1 + x, k)) / k;
					}
					return -res;
				}
				else
				{
					return ln2(x);
				}
			}

		private:

			/// <summary>
			/// Logarithmus naturales of x for x > 1
			/// </summary>
			static constexpr T ln2(T x) {
				T res = 0.0;

				for (int k = 1; k < 350; k++)
				{
					//res += (Pow(-1, k) * Pow(-1 + (-1 + x), k)) / k;
					res += (1.0 / (2.0 * static_cast<double>(k) + 1.0)) * CBasic<double>::Pow(((x - 1.0) / (x + 1.0)), 2 * k + 1);
					//res += CSimple<double>::Pow(-1.0, k + 1) * CSimple<double>::Pow(x - 1.0, k) / k;
				}
				res *= 2;
				/*for (int k = 1; k < 100; k++)
				{
					res -= (Pow(-1, k) * Pow(-1 + x, k)) / k;
				}*/

				return res;
			}
			
		public:
			/// <summary>
			/// Logarithmus of x; For x > 0 && x < 1
			/// </summary>
			//static constexpr T log(T x) {
			//	if (x == static_cast<T>(1)) return static_cast<T>(0);

			//	if (x < static_cast<T>(1)) {
			//		T res = 0.0;
			//		for (int k = 1; k < 100; k++)
			//		{
			//			res += (Pow(-1, k) * Pow(-1 + x, k)) / k;
			//		}
			//		return -res;
			//	}
			//	else
			//	{
			//		return ln2(x);
			//	}
			//}
		private:

		public:

			/// <summary>
			/// Binomial coefficient with n over k.
			/// </summary>
			static constexpr T binomial(T n, T k) {
				return 
					n == k ? 1
					: n < k ? 0
					: k == 0 ? 1
					: (factorial(n) / (factorial(k) * factorial(n - k)));
			}
		};
	}
}