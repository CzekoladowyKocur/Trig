#pragma once

namespace angles {
	namespace constant {
		template<typename ValueType>
		constexpr ValueType pi{ static_cast<ValueType>(3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862) };
	}

	template<typename ValueType>
	[[nodiscard]] constexpr ValueType radiansToDegrees(const ValueType radians) noexcept(true)
	{
		return static_cast<ValueType>(radians) * (static_cast<ValueType>(180) / constant::pi<ValueType>);
	}

	template<typename ValueType>
	[[nodiscard]] constexpr ValueType degreesToRadians(const ValueType degrees) noexcept(true)
	{
		return static_cast<ValueType>(degrees) * (constant::pi<ValueType> / static_cast<ValueType>(180));
	}
}
	
/* For std::is_floating_point_v */
#include <type_traits>
/* For sin, cos, etc. */
#include <math.h>
/* Explicit order */
#include "Trig++/Radians.hpp"
#include "Trig++/Degrees.hpp"
#include "Trig++/Angle.hpp"

/* For printing. */
#include <iostream>
/* Inline includes. */
#include "Trig++/Radians.inl"
#include "Trig++/Degrees.inl"
#include "Trig++/Angle.inl"