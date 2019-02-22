// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian

// Algorithm for the program: volume_of_cylinder
// 1. Begin.
// 2. Read in the value for the radius of the cylinder, store it in radius.
// 3. Read in the value for the height of the cylinder, store it in height.
// 4. Calculate the value for the volume of the cylinder by multiplying the 
// 	  value of the pi constant by radius squared by height, store it in volume.
// 5. Write the value of volume to the output.
// 6. End.

#include <stdio.h>
#include <math.h>

int main () 
{
	float radius, height, volume;
	
	printf("Radius of cylinder?: ");
	scanf("%f", &radius);
	printf("Height of cylinder?: ");
	scanf("%f", &height);
	
	volume = M_PI * pow(radius, 2) * height;
	
	printf("The volume is: %0.2f. \n", volume);
	
	return 0;
}
