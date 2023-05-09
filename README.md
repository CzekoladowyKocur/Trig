# Trig++ Library
Trig++ is an inline header-only C++20 library for angle manipulation and trigonometric functions. The library provides type-safe and angle-safe classes for
degrees, radians, and angles. The Angle class can be constructed from degrees or radians, and it supports all arithmetic operations with all angle types. The 
Degrees and Radians classes provide compile-time constants for any angle values, such as pi, 2_rad, 2_rad_pi, 180_deg, 360_deg, and 3.1514_rad_pi, etc. They 
are implemented with c++ inline literals.

## Type Safety
Trig++ emphasizes type safety for angles and their operations, making it harder to misuse and avoid errors. The Degrees and Radians classes provide type-safe 
representations of angles in either unit, and the Angle class provides flexibility for use with both types. Most of the operations can be performed
at compile time, reducing unnecessary overhead. The library provides trigonometric functions that allow consistent results no matter of the underlying
unit used. A sine of 90 degrees will be the same as a sine of 1/2 radians.

## Example
Here is an example code using Trig++ to calculate the side lengths of a triangle using the Law of Sines:

```cpp
#include "Trig++/Trig++.hpp"
#include <iomanip>

int main()
{
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

    return 0;
}
```
## Testing
Some of the code (not all) was tested using Google Test.
## Usage 
To use the library, simply add the include folder to the include paths of your project.
# Building
Library can be built with scripts in the root directory on both windows and linux. msc and gcc tested.
