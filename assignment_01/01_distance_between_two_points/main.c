// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian

// Algorithm for the program: distance_between_two_points
// 1. Begin.
// 2. Read in x value of point A, store it in x1.
// 3. Read in y value of point A, store it in y1.
// 4. Read in x value of point B, store it in x2.
// 5. Read in y value of point B, store it in y2.
// 6. Calculate the difference between x2 and x1 by subtracting x1 from x2, store it in leng_x.
// 7. Calculate the difference between y2 and y1 by subtracting y1 from y2, store it in leng_y.
// 8. Calculate the value of leng_x squared, store it in leng_x_squared.
// 9. Calculate the value of leng_y squared, store it in leng_y_squared.
// 10. Calculate the square root for the sum of leng_x_squared and leng_y_squared, store it in distance.
// 11. Write the value of distance to the output.
// 12. End.

#include <stdio.h>
#include <math.h>

int main () 
{
	float x1, x2, y1, y2, leng_x, leng_y, distance;
	
	printf("x of point A: ");
	scanf("%f", &x1);
	printf("y of point A: ");
	scanf("%f", &y1);
	printf("x of point B: ");
	scanf("%f", &x2);
	printf("y of point B: ");
	scanf("%f", &y2);
	
	leng_x = x2 - x1;
	leng_y = y2 - y1;

	float leng_x_squared = pow(leng_x, 2);
	float leng_y_squared = pow(leng_y, 2);

	distance = sqrt(leng_x_squared + leng_y_squared);

	printf ("The distance from point A (%0.2f, %0.2f) to point B (%0.2f, %0.2f) is %0.2f \n", x1, y1, x2, y2, distance);

	return 0;
}

