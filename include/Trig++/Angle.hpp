#pragma once

template<typename ValueType> requires std::is_floating_point_v<ValueType>
class TAngle final
{
protected:
	constexpr explicit(true) TAngle(const ValueType value) noexcept(true)
		:
		m_AngleInRadians(value)
	{}
public:
	consteval explicit(true) TAngle() noexcept(true)
		:
		m_AngleInRadians(static_cast<ValueType>(0))
	{}

	template<typename T>
	constexpr explicit(true) TAngle(const TRadians<T> radians) noexcept(true)
		:
		m_AngleInRadians(static_cast<ValueType>(radians.Value))
	{}

	template<typename T>
	constexpr explicit(true) TAngle(const TDegrees<T> degrees) noexcept(true)
		:
		m_AngleInRadians(static_cast<ValueType>(angles::degreesToRadians(degrees.Value)))
	{}

	[[nodiscard]] constexpr ValueType deg() const noexcept(true)
	{
		return angles::radiansToDegrees(m_AngleInRadians);
	}

	[[nodiscard]] constexpr ValueType rad() const noexcept(true)
	{
		return m_AngleInRadians;
	}

	[[nodiscard]] constexpr TDegrees<ValueType> toDeg() const noexcept(true)
	{
		TDegrees<ValueType> result;
		result.Value = m_AngleInRadians;
		return result;
	}

	[[nodiscard]] constexpr TRadians<ValueType> toRad() const noexcept(true)
	{
		TRadians<ValueType> result;
		result.Value = m_AngleInRadians;
		return result;
	}

	[[nodiscard]] friend constexpr TAngle<float> operator+(const TAngle<float> lhs) noexcept(true);
	[[nodiscard]] friend constexpr TAngle<float> operator-(const TAngle<float> lhs) noexcept(true);

	[[nodiscard]] friend constexpr TAngle<float> operator+(const TAngle<float> lhs, const TAngle<float> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TAngle<float> operator-(const TAngle<float> lhs, const TAngle<float> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TAngle<float> operator*(const TAngle<float> lhs, const TAngle<float> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TAngle<float> operator/(const TAngle<float> lhs, const TAngle<float> rhs) noexcept(true);

	[[nodiscard]] friend constexpr TAngle<float> operator+(const TAngle<float> lhs, const TRadians<float> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TAngle<float> operator-(const TAngle<float> lhs, const TRadians<float> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TAngle<float> operator*(const TAngle<float> lhs, const TRadians<float> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TAngle<float> operator/(const TAngle<float> lhs, const TRadians<float> rhs) noexcept(true);

	[[nodiscard]] friend constexpr TAngle<float> operator+(const TAngle<float> lhs, const TDegrees<float> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TAngle<float> operator-(const TAngle<float> lhs, const TDegrees<float> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TAngle<float> operator*(const TAngle<float> lhs, const TDegrees<float> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TAngle<float> operator/(const TAngle<float> lhs, const TDegrees<float> rhs) noexcept(true);

	friend constexpr void operator+=(TAngle<float>& lhs, const TAngle<float> rhs) noexcept(true);
	friend constexpr void operator-=(TAngle<float>& lhs, const TAngle<float> rhs) noexcept(true);
	friend constexpr void operator*=(TAngle<float>& lhs, const TAngle<float> rhs) noexcept(true);
	friend constexpr void operator/=(TAngle<float>& lhs, const TAngle<float> rhs) noexcept(true);

	friend constexpr void operator+=(TAngle<float>& lhs, const TRadians<float> rhs) noexcept(true);
	friend constexpr void operator-=(TAngle<float>& lhs, const TRadians<float> rhs) noexcept(true);
	friend constexpr void operator*=(TAngle<float>& lhs, const TRadians<float> rhs) noexcept(true);
	friend constexpr void operator/=(TAngle<float>& lhs, const TRadians<float> rhs) noexcept(true);

	friend constexpr void operator+=(TAngle<float>& lhs, const TDegrees<float> rhs) noexcept(true);
	friend constexpr void operator-=(TAngle<float>& lhs, const TDegrees<float> rhs) noexcept(true);
	friend constexpr void operator*=(TAngle<float>& lhs, const TDegrees<float> rhs) noexcept(true);
	friend constexpr void operator/=(TAngle<float>& lhs, const TDegrees<float> rhs) noexcept(true);

	[[nodiscard]] friend constexpr TAngle<double> operator+(const TAngle<double> lhs) noexcept(true);
	[[nodiscard]] friend constexpr TAngle<double> operator-(const TAngle<double> lhs) noexcept(true);

	[[nodiscard]] friend constexpr TAngle<double> operator+(const TAngle<double> lhs, const TAngle<double> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TAngle<double> operator-(const TAngle<double> lhs, const TAngle<double> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TAngle<double> operator*(const TAngle<double> lhs, const TAngle<double> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TAngle<double> operator/(const TAngle<double> lhs, const TAngle<double> rhs) noexcept(true);

	[[nodiscard]] friend constexpr TAngle<double> operator+(const TAngle<double> lhs, const TRadians<double> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TAngle<double> operator-(const TAngle<double> lhs, const TRadians<double> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TAngle<double> operator*(const TAngle<double> lhs, const TRadians<double> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TAngle<double> operator/(const TAngle<double> lhs, const TRadians<double> rhs) noexcept(true);

	[[nodiscard]] friend constexpr TAngle<double> operator+(const TAngle<double> lhs, const TDegrees<double> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TAngle<double> operator-(const TAngle<double> lhs, const TDegrees<double> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TAngle<double> operator*(const TAngle<double> lhs, const TDegrees<double> rhs) noexcept(true);
	[[nodiscard]] friend constexpr TAngle<double> operator/(const TAngle<double> lhs, const TDegrees<double> rhs) noexcept(true);

	friend constexpr void operator+=(TAngle<double>& lhs, const TAngle<double> rhs) noexcept(true);
	friend constexpr void operator-=(TAngle<double>& lhs, const TAngle<double> rhs) noexcept(true);
	friend constexpr void operator*=(TAngle<double>& lhs, const TAngle<double> rhs) noexcept(true);
	friend constexpr void operator/=(TAngle<double>& lhs, const TAngle<double> rhs) noexcept(true);

	friend constexpr void operator+=(TAngle<double>& lhs, const TRadians<double> rhs) noexcept(true);
	friend constexpr void operator-=(TAngle<double>& lhs, const TRadians<double> rhs) noexcept(true);
	friend constexpr void operator*=(TAngle<double>& lhs, const TRadians<double> rhs) noexcept(true);
	friend constexpr void operator/=(TAngle<double>& lhs, const TRadians<double> rhs) noexcept(true);
	
	friend constexpr void operator+=(TAngle<double>& lhs, const TDegrees<double> rhs) noexcept(true);
	friend constexpr void operator-=(TAngle<double>& lhs, const TDegrees<double> rhs) noexcept(true);
	friend constexpr void operator*=(TAngle<double>& lhs, const TDegrees<double> rhs) noexcept(true);
	friend constexpr void operator/=(TAngle<double>& lhs, const TDegrees<double> rhs) noexcept(true);
private:
	ValueType m_AngleInRadians;
};

using Angle		= TAngle<float>;
using DAngle	= TAngle<double>;