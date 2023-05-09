template<typename ValueType>
constexpr std::ostream& operator<<(std::ostream& stream, const TRadians<ValueType> radians) noexcept(true)
{
	stream << radians.Value << " [rad]";
	return stream;
}

constexpr TRadians<float> operator+(const TRadians<float> lhs) noexcept(true)
{
	return lhs;
}

constexpr TRadians<float> operator-(const TRadians<float> lhs) noexcept(true)
{
	TRadians<float> result;
	result.Value = { -lhs.Value };
	return result;
}

constexpr TRadians<float> operator+(const TRadians<float> lhs, const TRadians<float> rhs) noexcept(true)
{
	TRadians<float> result;
	result.Value = { lhs.Value + rhs.Value };
	return result;
}

constexpr TRadians<float> operator-(const TRadians<float> lhs, const TRadians<float> rhs) noexcept(true)
{
	TRadians<float> result;
	result.Value = { lhs.Value - rhs.Value };
	return result;
}

constexpr TRadians<float> operator*(const TRadians<float> lhs, const TRadians<float> rhs) noexcept(true)
{
	TRadians<float> result;
	result.Value = { lhs.Value * rhs.Value };
	return result;
}

constexpr TRadians<float> operator/(const TRadians<float> lhs, const TRadians<float> rhs) noexcept(true)
{
	TRadians<float> result;
	result.Value = { lhs.Value / rhs.Value };
	return result;
}

constexpr void operator+=(TRadians<float> lhs, const TRadians<float> rhs) noexcept(true)
{
	lhs.Value += rhs.Value;
}

constexpr void operator-=(TRadians<float> lhs, const TRadians<float> rhs) noexcept(true)
{
	lhs.Value -= rhs.Value;
}

constexpr void operator*=(TRadians<float>& lhs, const TRadians<float> rhs) noexcept(true)
{
	lhs.Value *= rhs.Value;
}

constexpr void operator/=(TRadians<float>& lhs, const TRadians<float> rhs) noexcept(true)
{
	lhs.Value /= rhs.Value;
}

constexpr TRadians<double> operator+(const TRadians<double> lhs) noexcept(true)
{
	return lhs;
}

constexpr TRadians<double> operator-(const TRadians<double> lhs) noexcept(true)
{
	TRadians<double> result;
	result.Value = { -lhs.Value };
	return result;
}

constexpr TRadians<double> operator+(const TRadians<double> lhs, const TRadians<double> rhs) noexcept(true)
{
	TRadians<double> result;
	result.Value = { lhs.Value + rhs.Value };
	return result;
}

constexpr TRadians<double> operator-(const TRadians<double> lhs, const TRadians<double> rhs) noexcept(true)
{
	TRadians<double> result;
	result.Value = { lhs.Value - rhs.Value };
	return result;
}

constexpr TRadians<double> operator*(const TRadians<double> lhs, const TRadians<double> rhs) noexcept(true)
{
	TRadians<double> result;
	result.Value = { lhs.Value * rhs.Value };
	return result;
}

constexpr TRadians<double> operator/(const TRadians<double> lhs, const TRadians<double> rhs) noexcept(true)
{
	TRadians<double> result;
	result.Value = { lhs.Value / rhs.Value };
	return result;
}

constexpr void operator+=(TRadians<double>& lhs, const TRadians<double> rhs) noexcept(true)
{
	lhs.Value += rhs.Value;
}

constexpr void operator-=(TRadians<double>& lhs, const TRadians<double> rhs) noexcept(true)
{
	lhs.Value -= rhs.Value;
}

constexpr void operator*=(TRadians<double>& lhs, const TRadians<double> rhs) noexcept(true)
{
	lhs.Value *= rhs.Value;
}

constexpr void operator/=(TRadians<double>& lhs, const TRadians<double> rhs) noexcept(true)
{
	lhs.Value /= rhs.Value;
}

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4455) // Reserved suffix warning
#endif
inline namespace angle_literals
{
	[[nodiscard]] consteval TRadians<float> operator ""_rad(const long double  radians) noexcept(true)
	{
		return TRadians<float>{ static_cast<float>(radians) };
	}

	[[nodiscard]] consteval TRadians<float> operator ""_rad(const size_t radians) noexcept(true)
	{
		return TRadians<float>{ static_cast<float>(radians) };
	}

	[[nodiscard]] consteval TRadians<float> operator ""_rad_pi(const long double  radians) noexcept(true)
	{
		return TRadians<float>{ static_cast<float>(radians) * angles::constant::pi<float> };
	}

	[[nodiscard]] consteval TRadians<float> operator ""_rad_pi(const size_t radians) noexcept(true)
	{
		return TRadians<float>{ static_cast<float>(radians) * angles::constant::pi<float> };
	}

	[[nodiscard]] consteval TRadians<double> operator ""d_rad(const long double radians) noexcept(true)
	{
		return TRadians<double>{ static_cast<double>(radians) };
	}

	[[nodiscard]] consteval TRadians<double> operator ""d_rad(const size_t radians) noexcept(true)
	{
		return TRadians<double>{ static_cast<double>(radians) };
	}

	[[nodiscard]] consteval TRadians<double> operator ""d_rad_pi(const long double radians) noexcept(true)
	{
		return TRadians<double>{ static_cast<double>(radians) * angles::constant::pi<double> };
	}

	[[nodiscard]] consteval TRadians<double> operator ""d_rad_pi(const size_t radians) noexcept(true)
	{
		return TRadians<double>{ static_cast<double>(radians) * angles::constant::pi<double> };
	}
}
#ifdef _MSC_VER
#pragma warning(pop)
#endif