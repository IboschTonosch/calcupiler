#pragma once

#include <limits>
#include <type_traits>
#include <typeinfo>
#include <numbers>

using namespace std::numbers;

namespace Calcupiler
{
	namespace Simple
	{
		template<typename T, typename = std::remove_reference_t<std::decay_t<T>>>
		class CSimple
		{
		public:
			//constexpr bool is_type_char(){
			//	return std::is_same_v<T, char>;
			//};
			static_assert(
				(std::is_integral_v<T> || std::is_floating_point_v<T>), 
				"Type must be either integral or floating point"
				);
			static_assert(!std::is_same_v<T, char>, "Character type is not allowed");
			
			constexpr CSimple() = delete;
			~CSimple() = delete;

			//static constexpr SimpleCalc<T>& operator+(const SimpleCalc<T>& rhs) {
			//	return this;
			//}

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

			//#########################################################

			/// <summary>
			/// Power of exp over basis
			/// </summary>
			template<typename E>
			static constexpr T Pow(T basis, E exp) {
				return basis == static_cast<T>(0) ? static_cast<T>(0) // if basis is zero -> return zero
					: (std::is_integral_v<E> ? Pow_i(basis, exp) : Pow_f(basis, exp));
			}

			/// <summary>
			/// Power for integral type of exp over basis
			/// </summary>
			template<typename E, typename = std::is_integral<E>>
			static constexpr T Pow_i(T basis, E exp) {
				return (exp == 1 ? basis : basis * Pow_i(basis, exp - 1));
			}

			/// <summary>
			/// Power for floaing point of exp over basis
			/// </summary>
			template<typename E, typename = std::is_floating_point<E>>
			static constexpr T Pow_f(T basis, E exp) {
				//return exp == 1.0 ? basis : Pow_f(2.2,2);
				return exp == 1.0 ? basis : Pow_f(e, exp * CSimple<T>::ln(basis));
			}

			/// <summary>
			/// The factorial of k
			/// </summary>
			static constexpr T factorial(T k) {
				return std::is_integral_v<T> ? 
					 factorial_i(k) : factorial_f(k);
			}

			template<typename E, typename = std::is_integral<E>>
			static constexpr E factorial_i(E k) {
				static_assert(std::is_integral_v<E>, "Only integral types are allowed.");
				return k < 2 ? k : k * factorial_i(--k);
				//TODO:: implement floating point factorial
			}

			static constexpr T factorial_f(T k) {
				return 1.0;
				//TODO:: implement floating point factorial
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


			///// <summary>
			///// Power of exp over e (euler's number)
			///// </summary>
			template<typename E, typename = std::is_integral<E>>
			static constexpr T e_exp(E exp) {
				return std::is_integral_v<E> ? 
					(exp == 1 ? e : Pow_i(e, exp)) : e_exp_f(exp, 1.0, 10);
			}

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
			//static constexpr T series()
			
			/// <summary>
			/// Logarithmus naturales of x; For x > 0 && x < 1
			/// </summary>
			static constexpr T ln(T x)  {
				if (x == static_cast<T>(1)) return static_cast<T>(0);

				if (x < static_cast<T>(1)) {
					T res = 0.0;
					for (int k = 1; k < 100; k++)
					{
						res += (Pow(-1, k) * Pow(-1 + x, k)) / k;
					}
					return -res;
				}
				else
				{
					return ln2(x);
				}
			}

			/// <summary>
			/// Logarithmus naturales of x for x > 1
			/// </summary>
			static constexpr T ln2(T x) {
				T res = 0.0;

				for (int k = 1; k < 350; k++)
				{
					//res += (Pow(-1, k) * Pow(-1 + (-1 + x), k)) / k;
					res += (1.0 / (2.0 * static_cast<double>(k) + 1.0)) * CSimple<double>::Pow(((x - 1.0) / (x + 1.0)), 2 * k + 1);
					//res += CSimple<double>::Pow(-1.0, k + 1) * CSimple<double>::Pow(x - 1.0, k) / k;
				}
				res *= 2;
				/*for (int k = 1; k < 100; k++)
				{
					res -= (Pow(-1, k) * Pow(-1 + x, k)) / k;
				}*/

				return res;
			}
			
			/// <summary>
			/// Binomial coefficient with n over k.
			/// </summary>
			static constexpr T binomial(T n, T k) {
				return (factorial(n) / (factorial(k) * factorial(n - k)));
			}

		private:

			//constexpr T m_value = 2.0;

		};
	}
}