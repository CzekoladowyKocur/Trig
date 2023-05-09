#include "Trig++/Trig++.hpp"
#include <iomanip>

int main()
{
	/*
	* The Angle class represents an angle that can be constructed from either degrees or radians, 
	* and supports addition and subtraction with other angles of the same unit. 
	* The Degrees and Radians classes provide compile-time constants for any angle values, 
	* such as pi, 2_rad, 2_rad_pi, 180_deg, 360_deg, 3.1514_rad_pi
	*/
	{
		const std::string exampleNote
		{
R"(The Angle class represents an angle that can be constructed from either degrees or radians, 
and supports addition and subtraction with other angles of the same unit. 
The Degrees and Radians classes provide compile-time constants for any angle values, 
such as pi, 2_rad, 2_rad_pi, 180_deg, 360_deg, 3.1514_rad_pi. Most of the operations
can be performed at compile time reducing the unnecessary overhead.)"
		};

		std::cout << exampleNote << "\n\n";

		// Set output precision to 3 decimal places
		std::cout << std::setprecision(3);

		// Define the angles of a triangle in degrees
		constexpr Angle angleA{ 30_deg };
		constexpr Angle angleB{ 60_deg };
		constexpr Angle angleC{ 90_deg };

		// Calculate the corresponding angles in radians
		constexpr Radians radiansA{ angleA.toRad() };
		constexpr Radians radiansB{ angleB.toRad() };
		constexpr Radians radiansC{ angleC.toRad() };

		// Print the angles in degrees and radians
		std::cout << "Angle A = " << angleA << " = " << radiansA << " radians\n";
		std::cout << "Angle B = " << angleB << " = " << radiansB << " radians\n";
		std::cout << "Angle C = " << angleC << " = " << radiansC << " radians\n";

		// Calculate the remaining side of the triangle using the Law of Sines
		constexpr float sideLength = 2.0f;
		float sinA = angles::sin(radiansA);
		float sinB = angles::sin(radiansB);
		float sinC = angles::sin(radiansC);
		float sideLengthC = sideLength * sinC / sinB;
		float sideLengthA = sideLength * sinA / sinB;
		float sideLengthB = sideLengthC - sideLengthA;

		// Print the side lengths
		std::cout << "Side length A = " << sideLengthA << '\n';
		std::cout << "Side length B = " << sideLengthB << '\n';
		std::cout << "Side length C = " << sideLengthC << '\n';

		// Reset float precision printing
		std::cout.unsetf(std::ios_base::floatfield);
	}
	/**
	 * In this example, we perform various arithmetic operations on angles of different units. We add radians to radians 
	 * using the + operator of the Radians class, and multiply radians by radians using the * operator. We add degrees 
	 * to degrees using the + operator of the Degrees class, and add angles to angles using the + operator of the Angle class, 
	 * which handles the unit conversion automatically. Finally, we add radians of degrees to an angle using the += operator
	 *  of the Angle class, which again handles the unit conversion automatically.
	 */
	{
		const std::string exampleNote
		{
R"(
In this example, we perform various arithmetic operations on angles of different units. We add radians to radians 
using the + operator of the Radians class, and multiply radians by radians using the * operator. We add degrees 
to degrees using the + operator of the Degrees class, and add angles to angles using the + operator of the Angle class, 
which handles the unit conversion automatically. Finally, we add radians of degrees to an angle using the += operator
of the Angle class, which again handles the unit conversion automatically.)"
		};

		std::cout << exampleNote << "\n\n";

		// Set output precision to 3 decimal places
		std::cout << std::setprecision(3);
		// Define some angles in degrees and radians
		constexpr Degrees degA{ 45.0_deg };
		constexpr Degrees degB{ 30.0_deg };
		constexpr Radians radA{ 1.0_rad };
		constexpr Radians radB{ 0.5_rad };

		// Add radians to radians
		constexpr Radians radSum{ radA + radB };
		std::cout << radA << " + " << radB << " = " << radSum << " radians\n";

		// Multiply radians by radians
		constexpr Radians radProd{ radA * radB };
		std::cout << radA << " * " << radB << " = " << radProd << " radians\n";

		// Add degrees to degrees
		constexpr Degrees degSum{ degA + degB };
		std::cout << degA << " + " << degB << " = " << degSum << " degrees\n";

		// Add angles to angles
		constexpr Angle angleA(degA);
		constexpr Angle angleB(radB);
		constexpr Angle angleSum{ angleA + angleB };
		std::cout << angleA << " + " << angleB << " = " << angleSum << '\n';

		// Add radians of degrees to angles
		Angle angleC{ degA };
		angleC += 0.5_rad_pi; // 0.5pi rad is 90 degrees
		std::cout << degA << " + " << 90_deg << " = " << angleC << '\n';

		// Reset float precision printing
		std::cout.unsetf(std::ios_base::floatfield);
	}
	
	return 0;
}