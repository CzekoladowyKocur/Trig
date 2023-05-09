template<typename ValueType>
constexpr std::ostream& operator<<(std::ostream& stream, const TDegrees<ValueType> degrees) noexcept(true)
{
	stream << degrees.Value << " [deg]";
	return stream;
}

constexpr TDegrees<float> operator+(const TDegrees<float> lhs) noexcept(true)
{
	return lhs;
}

constexpr TDegrees<float> operator-(const TDegrees<float> lhs) noexcept(true)
{
	TDegrees<float> result;
	result.Value = { -lhs.Value };
	return result;
}

constexpr TDegrees<float> operator+(const TDegrees<float> lhs, const TDegrees<float> rhs) noexcept(true)
{
	TDegrees<float> result;
	result.Value = { lhs.Value + rhs.Value };
	return result;
}

constexpr TDegrees<float> operator-(const TDegrees<float> lhs, const TDegrees<float> rhs) noexcept(true)
{
	TDegrees<float> result;
	result.Value = { lhs.Value - rhs.Value };
	return result;
}

constexpr TDegrees<float> operator*(const TDegrees<float> lhs, const TDegrees<float> rhs) noexcept(true)
{
	TDegrees<float> result;
	result.Value = { lhs.Value * rhs.Value };
	return result;
}

constexpr TDegrees<float> operator/(const TDegrees<float> lhs, const TDegrees<float> rhs) noexcept(true)
{
	TDegrees<float> result;
	result.Value = { lhs.Value / rhs.Value };
	return result;
}

constexpr void operator+=(TDegrees<float> lhs, const TDegrees<float> rhs) noexcept(true)
{
	lhs.Value += rhs.Value;
}

constexpr void operator-=(TDegrees<float> lhs, const TDegrees<float> rhs) noexcept(true)
{
	lhs.Value -= rhs.Value;
}

constexpr void operator*=(TDegrees<float>& lhs, const TDegrees<float> rhs) noexcept(true)
{
	lhs.Value *= rhs.Value;
}

constexpr void operator/=(TDegrees<float>& lhs, const TDegrees<float> rhs) noexcept(true)
{
	lhs.Value /= rhs.Value;
}

constexpr TDegrees<double> operator+(const TDegrees<double> lhs) noexcept(true)
{
	return lhs;
}

constexpr TDegrees<double> operator-(const TDegrees<double> lhs) noexcept(true)
{
	TDegrees<double> result;
	result.Value = { -lhs.Value };
	return result;
}

constexpr TDegrees<double> operator+(const TDegrees<double> lhs, const TDegrees<double> rhs) noexcept(true)
{
	TDegrees<double> result;
	result.Value = { lhs.Value + rhs.Value };
	return result;
}

constexpr TDegrees<double> operator-(const TDegrees<double> lhs, const TDegrees<double> rhs) noexcept(true)
{
	TDegrees<double> result;
	result.Value = { lhs.Value - rhs.Value };
	return result;
}

constexpr TDegrees<double> operator*(const TDegrees<double> lhs, const TDegrees<double> rhs) noexcept(true)
{
	TDegrees<double> result;
	result.Value = { lhs.Value * rhs.Value };
	return result;
}

constexpr TDegrees<double> operator/(const TDegrees<double> lhs, const TDegrees<double> rhs) noexcept(true)
{
	TDegrees<double> result;
	result.Value = { lhs.Value / rhs.Value };
	return result;
}

constexpr void operator+=(TDegrees<double>& lhs, const TDegrees<double> rhs) noexcept(true)
{
	lhs.Value += rhs.Value;
}

constexpr void operator-=(TDegrees<double>& lhs, const TDegrees<double> rhs) noexcept(true)
{
	lhs.Value -= rhs.Value;
}

constexpr void operator*=(TDegrees<double>& lhs, const TDegrees<double> rhs) noexcept(true)
{
	lhs.Value *= rhs.Value;
}

constexpr void operator/=(TDegrees<double>& lhs, const TDegrees<double> rhs) noexcept(true)
{
	lhs.Value /= rhs.Value;
}

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4455) // Reserved suffix warning
#endif
inline namespace angle_literals
{
	[[nodiscard]] consteval TDegrees<float> operator ""_deg(const long double degrees) noexcept(true)
	{
		return TDegrees<float>{ static_cast<float>(degrees) };
	}

	[[nodiscard]] consteval TDegrees<float> operator ""_deg(const size_t degrees) noexcept(true)
	{
		return TDegrees<float>{ static_cast<float>(degrees) };
	}

	[[nodiscard]] consteval TDegrees<double> operator ""d_deg(const long double degrees) noexcept(true)
	{
		return TDegrees<double>{ static_cast<double>(degrees) };
	}

	[[nodiscard]] consteval TDegrees<double> operator ""d_deg(const size_t degrees) noexcept(true)
	{
		return TDegrees<double>{ static_cast<double>(degrees) };
	}
}
#ifdef _MSC_VER
#pragma warning(pop)
#endif