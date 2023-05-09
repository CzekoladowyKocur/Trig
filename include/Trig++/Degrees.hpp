#pragma once
/**
 * Types-safe wrapper class for degrees.
 */
template<typename ValueType> requires std::is_floating_point_v<ValueType>
struct TDegrees final
{
	ValueType Value;
	
	consteval explicit(true) TDegrees() noexcept(true)
		: 
		Value(static_cast<ValueType>(0))
	{};

	consteval explicit(true) TDegrees(const ValueType degrees) noexcept(true)
		:
		Value(degrees)
	{}

	template<typename T>
	consteval explicit(true) TDegrees(const TDegrees<T>& other) noexcept(true)
		:
		Value(static_cast<ValueType>(other.Value))
	{}

	constexpr TDegrees(const TDegrees& other) noexcept(true)			= default;
	constexpr TDegrees(TDegrees&& other) noexcept(true)					= default;
	constexpr TDegrees& operator=(const TDegrees& other) noexcept(true)	= default;
	constexpr TDegrees& operator=(TDegrees&& other) noexcept(true)		= default;
	constexpr ~TDegrees() noexcept(true)								= default;
	
	template<typename T> requires std::is_floating_point_v<ValueType>
	[[nodiscard]] constexpr explicit(true) operator T() const noexcept(true)
	{
		return Value;
	}

	[[nodiscard]] friend constexpr TDegrees<float> operator+(const TDegrees<float> lhs) noexcept(true);
	[[nodiscard]] friend constexpr TDegrees<float> operator-(const TDegrees<float> lhs) noexcept(true);

	[[nodiscard]] friend constexpr TDegrees<float> operator+(const TDegrees<float> lhs, const TDegrees<float> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TDegrees<float> operator-(const TDegrees<float> lhs, const TDegrees<float> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TDegrees<float> operator*(const TDegrees<float> lhs, const TDegrees<float> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TDegrees<float> operator/(const TDegrees<float> lhs, const TDegrees<float> rhs) noexcept(true);

	friend constexpr void operator+=(TDegrees<float>& lhs, const TDegrees<float> rhs) noexcept(true);
	friend constexpr void operator-=(TDegrees<float>& lhs, const TDegrees<float> rhs) noexcept(true);
	friend constexpr void operator*=(TDegrees<float>& lhs, const TDegrees<float> rhs) noexcept(true);
	friend constexpr void operator/=(TDegrees<float>& lhs, const TDegrees<float> rhs) noexcept(true);

	[[nodiscard]] friend constexpr TDegrees<double> operator+(const TDegrees<double> lhs) noexcept(true);
	[[nodiscard]] friend constexpr TDegrees<double> operator-(const TDegrees<double> lhs) noexcept(true);

	[[nodiscard]] friend constexpr TDegrees<double> operator+(const TDegrees<double> lhs, const TDegrees<double> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TDegrees<double> operator-(const TDegrees<double> lhs, const TDegrees<double> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TDegrees<double> operator*(const TDegrees<double> lhs, const TDegrees<double> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TDegrees<double> operator/(const TDegrees<double> lhs, const TDegrees<double> rhs) noexcept(true);

	friend constexpr void operator+=(TDegrees<double>& lhs, const TDegrees<double> rhs) noexcept(true);
	friend constexpr void operator-=(TDegrees<double>& lhs, const TDegrees<double> rhs) noexcept(true);
	friend constexpr void operator*=(TDegrees<double>& lhs, const TDegrees<double> rhs) noexcept(true);
	friend constexpr void operator/=(TDegrees<double>& lhs, const TDegrees<double> rhs) noexcept(true);
};

using Degrees	= TDegrees<float>;
using DDegrees	= TDegrees<double>;