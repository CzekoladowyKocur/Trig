template<typename ValueType>
constexpr std::ostream& operator<<(std::ostream& stream, const TAngle<ValueType> angle) noexcept(true)
{
	stream << angle.deg() << " [deg]";
	return stream;
}

constexpr TAngle<float> operator+(const TAngle<float> lhs) noexcept(true)
{
	return lhs;
}

constexpr TAngle<float> operator-(const TAngle<float> lhs) noexcept(true)
{
	return TAngle<float>{ -lhs.m_AngleInRadians };
}

constexpr TAngle<float> operator+(const TAngle<float> lhs, const TAngle<float> rhs) noexcept(true)
{
	return TAngle<float>{ lhs.m_AngleInRadians + rhs.m_AngleInRadians };
}

constexpr TAngle<float> operator-(const TAngle<float> lhs, const TAngle<float> rhs) noexcept(true)
{
	return TAngle<float>{ lhs.m_AngleInRadians - rhs.m_AngleInRadians };
}

constexpr TAngle<float> operator*(const TAngle<float> lhs, const TAngle<float> rhs) noexcept(true)
{
	return TAngle<float>{ lhs.m_AngleInRadians* rhs.m_AngleInRadians };
}

constexpr TAngle<float> operator/(const TAngle<float> lhs, const TAngle<float> rhs) noexcept(true)
{
	return TAngle<float>{ lhs.m_AngleInRadians / rhs.m_AngleInRadians };
}

constexpr TAngle<float> operator+(const TAngle<float> lhs, const TRadians<float> rhs) noexcept(true)
{
	return TAngle<float>{ lhs.m_AngleInRadians + rhs.Value };
}

constexpr TAngle<float> operator-(const TAngle<float> lhs, const TRadians<float> rhs) noexcept(true)
{
	return TAngle<float>{ lhs.m_AngleInRadians - rhs.Value };
}

constexpr TAngle<float> operator*(const TAngle<float> lhs, const TRadians<float> rhs) noexcept(true)
{
	return TAngle<float>{ lhs.m_AngleInRadians* rhs.Value };
}

constexpr TAngle<float> operator/(const TAngle<float> lhs, const TRadians<float> rhs) noexcept(true)
{
	return TAngle<float>{ lhs.m_AngleInRadians / rhs.Value };
}

constexpr TAngle<float> operator+(const TAngle<float> lhs, const TDegrees<float> rhs) noexcept(true)
{
	return TAngle<float>{ lhs.m_AngleInRadians + angles::degreesToRadians(rhs.Value) };
}

constexpr TAngle<float> operator-(const TAngle<float> lhs, const TDegrees<float> rhs) noexcept(true)
{
	return TAngle<float>{ lhs.m_AngleInRadians - angles::degreesToRadians(rhs.Value) };
}

constexpr TAngle<float> operator*(const TAngle<float> lhs, const TDegrees<float> rhs) noexcept(true)
{
	return TAngle<float>{ lhs.m_AngleInRadians * angles::degreesToRadians(rhs.Value) };
}

constexpr TAngle<float> operator/(const TAngle<float> lhs, const TDegrees<float> rhs) noexcept(true)
{
	return TAngle<float>{ lhs.m_AngleInRadians / angles::degreesToRadians(rhs.Value) };
}

constexpr void operator+=(TAngle<float>& lhs, const TAngle<float> rhs) noexcept(true)
{
	lhs.m_AngleInRadians += rhs.m_AngleInRadians;
}

constexpr void operator-=(TAngle<float>& lhs, const TAngle<float> rhs) noexcept(true)
{
	lhs.m_AngleInRadians -= rhs.m_AngleInRadians;
}

constexpr void operator*=(TAngle<float>& lhs, const TAngle<float> rhs) noexcept(true)
{
	lhs.m_AngleInRadians *= rhs.m_AngleInRadians;
}

constexpr void operator/=(TAngle<float>& lhs, const TAngle<float> rhs) noexcept(true)
{
	lhs.m_AngleInRadians /= rhs.m_AngleInRadians;
}

constexpr void operator+=(TAngle<float>& lhs, const TRadians<float> rhs) noexcept(true)
{
	lhs.m_AngleInRadians += rhs.Value;
}

constexpr void operator-=(TAngle<float>& lhs, const TRadians<float> rhs) noexcept(true)
{
	lhs.m_AngleInRadians -= rhs.Value;
}

constexpr void operator*=(TAngle<float>& lhs, const TRadians<float> rhs) noexcept(true)
{
	lhs.m_AngleInRadians *= rhs.Value;
}

constexpr void operator/=(TAngle<float>& lhs, const TRadians<float> rhs) noexcept(true)
{
	lhs.m_AngleInRadians /= rhs.Value;
}

constexpr void operator+=(TAngle<float>& lhs, const TDegrees<float> rhs) noexcept(true)
{
	lhs.m_AngleInRadians += angles::degreesToRadians(rhs.Value);
}

constexpr void operator-=(TAngle<float>& lhs, const TDegrees<float> rhs) noexcept(true)
{
	lhs.m_AngleInRadians -= angles::degreesToRadians(rhs.Value);
}

constexpr void operator*=(TAngle<float>& lhs, const TDegrees<float> rhs) noexcept(true)
{
	lhs.m_AngleInRadians *= angles::degreesToRadians(rhs.Value);
}

constexpr void operator/=(TAngle<float>& lhs, const TDegrees<float> rhs) noexcept(true)
{
	lhs.m_AngleInRadians /= angles::degreesToRadians(rhs.Value);
}

constexpr TAngle<double> operator+(const TAngle<double> lhs) noexcept(true)
{
	return lhs;
}

constexpr TAngle<double> operator-(const TAngle<double> lhs) noexcept(true)
{
	return TAngle<double>{ -lhs.m_AngleInRadians };
}

constexpr TAngle<double> operator+(const TAngle<double> lhs, const TAngle<double> rhs) noexcept(true)
{
	return TAngle<double>{ lhs.m_AngleInRadians + rhs.m_AngleInRadians };
}

constexpr TAngle<double> operator-(const TAngle<double> lhs, const TAngle<double> rhs) noexcept(true)
{
	return TAngle<double>{ lhs.m_AngleInRadians - rhs.m_AngleInRadians };
}

constexpr TAngle<double> operator*(const TAngle<double> lhs, const TAngle<double> rhs) noexcept(true)
{
	return TAngle<double>{ lhs.m_AngleInRadians* rhs.m_AngleInRadians };
}

constexpr TAngle<double> operator/(const TAngle<double> lhs, const TAngle<double> rhs) noexcept(true)
{
	return TAngle<double>{ lhs.m_AngleInRadians / rhs.m_AngleInRadians };
}

constexpr TAngle<double> operator+(const TAngle<double> lhs, const TRadians<double> rhs) noexcept(true)
{
	return TAngle<double>{ lhs.m_AngleInRadians + rhs.Value };
}

constexpr TAngle<double> operator-(const TAngle<double> lhs, const TRadians<double> rhs) noexcept(true)
{
	return TAngle<double>{ lhs.m_AngleInRadians - rhs.Value };
}

constexpr TAngle<double> operator*(const TAngle<double> lhs, const TRadians<double> rhs) noexcept(true)
{
	return TAngle<double>{ lhs.m_AngleInRadians * rhs.Value };
}

constexpr TAngle<double> operator/(const TAngle<double> lhs, const TRadians<double> rhs) noexcept(true)
{
	return TAngle<double>{ lhs.m_AngleInRadians / rhs.Value };
}

constexpr TAngle<double> operator+(const TAngle<double> lhs, const TDegrees<double> rhs) noexcept(true)
{
	return TAngle<double>{ lhs.m_AngleInRadians + angles::degreesToRadians(rhs.Value) };
}

constexpr TAngle<double> operator-(const TAngle<double> lhs, const TDegrees<double> rhs) noexcept(true)
{
	return TAngle<double>{ lhs.m_AngleInRadians - angles::degreesToRadians(rhs.Value) };
}

constexpr TAngle<double> operator*(const TAngle<double> lhs, const TDegrees<double> rhs) noexcept(true)
{
	return TAngle<double>{ lhs.m_AngleInRadians * angles::degreesToRadians(rhs.Value) };
}

constexpr TAngle<double> operator/(const TAngle<double> lhs, const TDegrees<double> rhs) noexcept(true)
{
	return TAngle<double>{ lhs.m_AngleInRadians / angles::degreesToRadians(rhs.Value) };
}

constexpr void operator+=(TAngle<double>& lhs, const TAngle<double> rhs) noexcept(true)
{
	lhs.m_AngleInRadians += rhs.m_AngleInRadians;
}

constexpr void operator-=(TAngle<double>& lhs, const TAngle<double> rhs) noexcept(true)
{
	lhs.m_AngleInRadians -= rhs.m_AngleInRadians;
}

constexpr void operator*=(TAngle<double>& lhs, const TAngle<double> rhs) noexcept(true)
{
	lhs.m_AngleInRadians *= rhs.m_AngleInRadians;
}

constexpr void operator/=(TAngle<double>& lhs, const TAngle<double> rhs) noexcept(true)
{
	lhs.m_AngleInRadians /= rhs.m_AngleInRadians;
}

constexpr void operator+=(TAngle<double>& lhs, const TRadians<double> rhs) noexcept(true)
{
	lhs.m_AngleInRadians += rhs.Value;
}

constexpr void operator-=(TAngle<double>& lhs, const TRadians<double> rhs) noexcept(true)
{
	lhs.m_AngleInRadians -= rhs.Value;
}

constexpr void operator*=(TAngle<double>& lhs, const TRadians<double> rhs) noexcept(true)
{
	lhs.m_AngleInRadians *= rhs.Value;
}

constexpr void operator/=(TAngle<double>& lhs, const TRadians<double> rhs) noexcept(true)
{
	lhs.m_AngleInRadians /= rhs.Value;
}

constexpr void operator+=(TAngle<double>& lhs, const TDegrees<double> rhs) noexcept(true)
{
	lhs.m_AngleInRadians += angles::degreesToRadians(rhs.Value);
}

constexpr void operator-=(TAngle<double>& lhs, const TDegrees<double> rhs) noexcept(true)
{
	lhs.m_AngleInRadians -= angles::degreesToRadians(rhs.Value);
}

constexpr void operator*=(TAngle<double>& lhs, const TDegrees<double> rhs) noexcept(true)
{
	lhs.m_AngleInRadians *= angles::degreesToRadians(rhs.Value);
}

constexpr void operator/=(TAngle<double>& lhs, const TDegrees<double> rhs) noexcept(true)
{
	lhs.m_AngleInRadians /= angles::degreesToRadians(rhs.Value);
}

namespace angles {
	template<typename ValueType>
	[[nodiscard]] constexpr ValueType sin(const TRadians<ValueType> radians) noexcept(true)
	{
		return ::sin(radians.Value);
	}
	
	template<typename ValueType>
	[[nodiscard]] constexpr ValueType cos(const TRadians<ValueType> radians) noexcept(true)
	{
		return ::cos(radians.Value);
	}
	
	template<typename ValueType>
	[[nodiscard]] constexpr ValueType asin(const TRadians<ValueType> radians) noexcept(true)
	{
		return ::asin(radians.Value);
	}
	
	template<typename ValueType>
	[[nodiscard]] constexpr ValueType acos(const TRadians<ValueType> radians) noexcept(true)
	{
		return ::acos(radians.Value);
	}

	template<typename ValueType>
	[[nodiscard]] constexpr ValueType sin(const TDegrees<ValueType> radians) noexcept(true)
	{
		return ::sin(radians.Value);
	}

	template<typename ValueType>
	[[nodiscard]] constexpr ValueType cos(const TDegrees<ValueType> radians) noexcept(true)
	{
		return ::cos(radians.Value);
	}

	template<typename ValueType>
	[[nodiscard]] constexpr ValueType asin(const TDegrees<ValueType> radians) noexcept(true)
	{
		return ::asin(radians.Value);
	}

	template<typename ValueType>
	[[nodiscard]] constexpr ValueType acos(const TDegrees<ValueType> radians) noexcept(true)
	{
		return ::acos(radians.Value);
	}

	template<typename ValueType>
	[[nodiscard]] constexpr ValueType sin(const TAngle<ValueType> angle) noexcept(true)
	{
		return ::sin(angle.rad());
	}

	template<typename ValueType>
	[[nodiscard]] constexpr ValueType cos(const TAngle<ValueType> angle) noexcept(true)
	{
		return ::cos(angle.rad());
	}

	template<typename ValueType>
	[[nodiscard]] constexpr ValueType asin(const TAngle<ValueType> angle) noexcept(true)
	{
		return ::asin(angle.rad());
	}

	template<typename ValueType>
	[[nodiscard]] constexpr ValueType acos(const TAngle<ValueType> angle) noexcept(true)
	{
		return ::acos(angle.rad());
	}
}