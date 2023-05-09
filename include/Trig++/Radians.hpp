#pragma once
/**
 * Types-safe wrapper class for radians.
 */
template<typename ValueType> requires std::is_floating_point_v<ValueType>
struct TRadians final
{
	ValueType Value;
	
	consteval explicit(true) TRadians() noexcept(true)
		: 
		Value(static_cast<ValueType>(0))
	{};

	consteval explicit(true) TRadians(const ValueType radians) noexcept(true)
		:
		Value(radians)
	{}

	template<typename T>
	consteval explicit(true) TRadians(const TRadians<T>& other) noexcept(true)
		:
		Value(static_cast<ValueType>(other.Value))
	{}

	constexpr TRadians(const TRadians& other) noexcept(true)			= default;
	constexpr TRadians(TRadians&& other) noexcept(true)					= default;
	constexpr TRadians& operator=(const TRadians& other) noexcept(true)	= default;
	constexpr TRadians& operator=(TRadians&& other) noexcept(true)		= default;
	constexpr ~TRadians() noexcept(true)								= default;

	template<typename T> requires std::is_floating_point_v<ValueType>
	[[nodiscard]] constexpr explicit(true) operator T() const noexcept(true)
	{
		return Value;
	}

	[[nodiscard]] friend constexpr TRadians<float> operator+(const TRadians<float> lhs) noexcept(true);
	[[nodiscard]] friend constexpr TRadians<float> operator-(const TRadians<float> lhs) noexcept(true);

	[[nodiscard]] friend constexpr TRadians<float> operator+(const TRadians<float> lhs, const TRadians<float> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TRadians<float> operator-(const TRadians<float> lhs, const TRadians<float> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TRadians<float> operator*(const TRadians<float> lhs, const TRadians<float> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TRadians<float> operator/(const TRadians<float> lhs, const TRadians<float> rhs) noexcept(true);

	friend constexpr void operator+=(TRadians<float>& lhs, const TRadians<float> rhs) noexcept(true);
	friend constexpr void operator-=(TRadians<float>& lhs, const TRadians<float> rhs) noexcept(true);
	friend constexpr void operator*=(TRadians<float>& lhs, const TRadians<float> rhs) noexcept(true);
	friend constexpr void operator/=(TRadians<float>& lhs, const TRadians<float> rhs) noexcept(true);

	[[nodiscard]] friend constexpr TRadians<double> operator+(const TRadians<double> lhs) noexcept(true);
	[[nodiscard]] friend constexpr TRadians<double> operator-(const TRadians<double> lhs) noexcept(true);

	[[nodiscard]] friend constexpr TRadians<double> operator+(const TRadians<double> lhs, const TRadians<double> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TRadians<double> operator-(const TRadians<double> lhs, const TRadians<double> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TRadians<double> operator*(const TRadians<double> lhs, const TRadians<double> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TRadians<double> operator/(const TRadians<double> lhs, const TRadians<double> rhs) noexcept(true);

	friend constexpr void operator+=(TRadians<double>& lhs, const TRadians<double> rhs) noexcept(true);
	friend constexpr void operator-=(TRadians<double>& lhs, const TRadians<double> rhs) noexcept(true);
	friend constexpr void operator*=(TRadians<double>& lhs, const TRadians<double> rhs) noexcept(true);
	friend constexpr void operator/=(TRadians<double>& lhs, const TRadians<double> rhs) noexcept(true);
};

using Radians	= TRadians<float>;
using DRadians	= TRadians<double>;