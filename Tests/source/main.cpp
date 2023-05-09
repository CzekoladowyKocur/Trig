#include "gtest/gtest.h"
#include "Trig++/Trig++.hpp"

template<typename T>
class RadiansTest : public ::testing::Test {};
using RadiansTestTypes = ::testing::Types<float, double>;

TYPED_TEST_SUITE(RadiansTest, RadiansTestTypes);

TYPED_TEST(RadiansTest, DefaultConstructor)
{
	TRadians<TypeParam> rads;
	ASSERT_EQ(rads.Value, TypeParam(0));
}

TYPED_TEST(RadiansTest, ValueConstructor)
{
	TRadians<TypeParam> rads(TypeParam(123456789));
	ASSERT_EQ(rads.Value, TypeParam(123456789));
}

TYPED_TEST(RadiansTest, OperatorLiteralLongDouble)
{
	constexpr TRadians<TypeParam> rads{ 15.0_rad };
	ASSERT_EQ(rads.Value, TypeParam(15));
}

TYPED_TEST(RadiansTest, OperatorLiteralSize_t)
{
	constexpr TRadians<TypeParam> rads{ 15_rad };
	ASSERT_EQ(rads.Value, TypeParam(15));
}

TYPED_TEST(RadiansTest, OperatorLiteralLongDouble_Pi)
{
	if constexpr (std::is_same_v<TypeParam, float>)
	{
		constexpr TRadians<TypeParam> rads{ 15.0_rad_pi };
		ASSERT_FLOAT_EQ(rads.Value, TypeParam(15) * angles::constant::pi<TypeParam>);
	}
	else
	{
		constexpr TRadians<TypeParam> rads{ 15.0d_rad_pi };
		ASSERT_DOUBLE_EQ(rads.Value, TypeParam(15) * angles::constant::pi<TypeParam>);
	}
}

TYPED_TEST(RadiansTest, OperatorLiteralSize_t_Pi)
{
	if constexpr (std::is_same_v<TypeParam, float>)
	{
		constexpr TRadians<TypeParam> rads{ 15_rad_pi };
		ASSERT_FLOAT_EQ(rads.Value, TypeParam(15) * angles::constant::pi<TypeParam>);
	}
	else
	{
		constexpr TRadians<TypeParam> rads{ 15d_rad_pi };
		ASSERT_DOUBLE_EQ(rads.Value, TypeParam(15) * angles::constant::pi<TypeParam>);
	}
}

template<typename T>
class DegreesTest : public ::testing::Test {};
using DegreesTestTypes = ::testing::Types<float, double>;

TYPED_TEST_SUITE(DegreesTest, DegreesTestTypes);

TYPED_TEST(DegreesTest, DefaultConstructor)
{
	TDegrees<TypeParam> deg;
	ASSERT_EQ(deg.Value, TypeParam(0));
}

TYPED_TEST(DegreesTest, ValueConstructor)
{
	TDegrees<TypeParam> deg(TypeParam(123456789));
	ASSERT_EQ(deg.Value, TypeParam(123456789));
}

TYPED_TEST(DegreesTest, OperatorLiteralLongDouble)
{
	constexpr TDegrees<TypeParam> deg{ 15.0_deg };
	ASSERT_EQ(deg.Value, TypeParam(15));
}

TYPED_TEST(DegreesTest, OperatorLiteralSize_t)
{
	constexpr TDegrees<TypeParam> deg{ 15_deg };
	ASSERT_EQ(deg.Value, TypeParam(15));
}

template<typename T>
class AngleTest : public ::testing::Test {};
using AngleTestTypes = ::testing::Types<float, double>;

TYPED_TEST_SUITE(AngleTest, AngleTestTypes);

TYPED_TEST(AngleTest, DefaultConstructor)
{
	constexpr TAngle<TypeParam> angle;
	ASSERT_EQ(angle.rad(), TypeParam(0));
	ASSERT_EQ(angle.deg(), TypeParam(0));
}

TYPED_TEST(AngleTest, RadiansConstructor)
{
	if constexpr (std::is_same_v<TypeParam, float>)
	{
		constexpr TAngle<TypeParam> angle(2_rad_pi);
		ASSERT_EQ(angle.rad(), TypeParam(2) * angles::constant::pi<TypeParam>);
		ASSERT_EQ(angle.deg(), TypeParam(360));
	}
	else
	{
		constexpr TAngle<TypeParam> angle(2d_rad_pi);
		ASSERT_EQ(angle.rad(), TypeParam(2) * angles::constant::pi<TypeParam>);
		ASSERT_EQ(angle.deg(), TypeParam(360));
	}
}

TYPED_TEST(AngleTest, DegreesConstructor)
{
	if constexpr (std::is_same_v<TypeParam, float>)
	{
		constexpr TAngle<TypeParam> angle(360_deg);
		ASSERT_EQ(angle.rad(), TypeParam(2) * angles::constant::pi<TypeParam>);
		ASSERT_EQ(angle.deg(), TypeParam(360));
	}
	else
	{
		constexpr TAngle<TypeParam> angle(360d_deg);
		ASSERT_EQ(angle.rad(), TypeParam(2) * angles::constant::pi<TypeParam>);
		ASSERT_EQ(angle.deg(), TypeParam(360));
	}
}

TYPED_TEST(AngleTest, deg)
{
	if constexpr (std::is_same_v<TypeParam, float>)
	{
		constexpr TAngle<TypeParam> angle(360_deg);
		ASSERT_EQ(angle.deg(), TypeParam(360));
	}
	else
	{
		constexpr TAngle<TypeParam> angle(360d_deg);
		ASSERT_EQ(angle.deg(), TypeParam(360));
	}
}

TYPED_TEST(AngleTest, rad)
{
	constexpr TAngle<TypeParam> angle(15_rad);
	ASSERT_EQ(angle.rad(), TypeParam(15_rad));
}

template<typename T>
class FreeFunctionsTest : public ::testing::Test {};
using FreeFunctionsTestTypes = ::testing::Types<float, double>;

TYPED_TEST_SUITE(FreeFunctionsTest, FreeFunctionsTestTypes);

TYPED_TEST(FreeFunctionsTest, sin)
{
	constexpr TAngle<TypeParam> angle0deg(0_deg);
	constexpr TAngle<TypeParam> angle45deg(45_deg);
	constexpr TAngle<TypeParam> angle60deg(60_deg);
	constexpr TAngle<TypeParam> angle90deg(90_deg);

	ASSERT_EQ(angles::sin(angle0deg),	::sin(angle0deg.rad()));
	ASSERT_EQ(angles::sin(angle45deg),	::sin(angle45deg.rad()));
	ASSERT_EQ(angles::sin(angle60deg),	::sin(angle60deg.rad()));
	ASSERT_EQ(angles::sin(angle90deg),	::sin(angle90deg.rad()));
}

TYPED_TEST(FreeFunctionsTest, cos)
{
	constexpr TAngle<TypeParam> angle0deg(0_deg);
	constexpr TAngle<TypeParam> angle45deg(45_deg);
	constexpr TAngle<TypeParam> angle60deg(60_deg);
	constexpr TAngle<TypeParam> angle90deg(90_deg);

	ASSERT_EQ(angles::cos(angle0deg),	::cos(angle0deg.rad()));
	ASSERT_EQ(angles::cos(angle45deg),	::cos(angle45deg.rad()));
	ASSERT_EQ(angles::cos(angle60deg),	::cos(angle60deg.rad()));
	ASSERT_EQ(angles::cos(angle90deg),	::cos(angle90deg.rad()));
}

int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}