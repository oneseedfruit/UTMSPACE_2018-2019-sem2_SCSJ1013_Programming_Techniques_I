// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian

// Algorithm for the program: cylinder_parameters
// 1. Begin.
// 2. Read in the height of the cylinder, store it in height.
// 3. Read in the radius of the cylinder, store it in radius.
// 4. Calculate the diameter of the cylinder by multiplying 2 by radius, store it in diameter.
// 5. Calculate the perimeter of the cylinder by multiplying 2 by the pi constant 
//	  then by radius, store it in perimeter.
// 6. Calculate the base area of the cylinder by multiplying the pi constant 
//	  by radius squared, store it in base_area.
// 7. Calculate the lateral surface area of the cylinder by multiplying 2 by the pi constant 
//	  then by radius and by height, store it in lateral_surface.
// 8. Calculate the surface area of the cylinder by multiplying 2 by the pi constant
//	  then by radius and by the sum of radius and height, store it in surface.
// 9. Calculate the volume of the cylinder by multiplying the pi constant by radius squared 
// 	  then by height, store it in volume.
// 10. Write the values of diameter, perimeter, base_area, lateral_surface, surface, volume to the output.
// 11. End.

// Input & Output 1
// 
// Input
// Height of the cylinder?: 5
// Radius of the cylinder?: 3

// Output
// ===Cylinder Parameters===
// Diameter: 6.00
// Perimeter: 18.85
// Base area: 28.27
// Lateral surface: 94.25
// Surface: 150.80
// Volume: 141.37
// =========================

// Input & Output 2
// 
// Input
// Height of the cylinder?: 999
// Radius of the cylinder?: 5.6
//
// Output
// ===Cylinder Parameters===
// Diameter: 11.20
// Perimeter: 35.19
// Base area: 98.52
// Lateral surface: 35150.65
// Surface: 35347.69
// Volume: 98421.82
// =========================

// Input & Output 3
//
// Input
// Height of the cylinder?: 0.669
// Radius of the cylinder?: 32.44
//
// Output
// ===Cylinder Parameters===
// Diameter: 64.88
// Perimeter: 203.83
// Base area: 3306.07
// Lateral surface: 136.36
// Surface: 6748.49
// Volume: 2211.76
// =========================


#include <stdio.h>
#include <math.h>

int main (void) 
{
	float height, radius;
	float diameter, perimeter, base_area, lateral_surface, surface, volume;
		
	printf("Height of the cylinder?: ");
	scanf("%f", &height);
	printf("Radius of the cylinder?: ");
	scanf("%f", &radius);
	
	diameter = 2 * radius;
	perimeter = 2 * M_PI * radius;
	base_area = M_PI * pow(radius, 2);
	lateral_surface = 2 * M_PI * radius * height;
	surface = 2 * M_PI * radius * (radius + height);
	volume = M_PI * pow(radius, 2) * height;
	
	printf("\n===Cylinder Parameters===\n");
	printf("Diameter: %0.2f\n", diameter);
	printf("Perimeter: %0.2f\n", perimeter);
	printf("Base area: %0.2f\n", base_area);
	printf("Lateral surface: %0.2f\n", lateral_surface);
	printf("Surface: %0.2f\n", surface);
	printf("Volume: %0.2f", volume);
	printf("\n=========================\n");
	
	return 0;
}

