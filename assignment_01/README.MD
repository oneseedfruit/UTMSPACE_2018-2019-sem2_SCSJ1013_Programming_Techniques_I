# Assignment 01

```c
// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian
```


## 01 Distance Between Two Points

![Flowchart for Distance Between Two Points](/assignment_01/01_distance_between_two_points/distance_between_two_points_flowchart.png)

```c
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
```


## 02 Total Cost of Apples

![Flowchart for Total Cost of Apples](/assignment_01/02_total_cost_of_apples/total_cost_of_apples_flowchart.png)

```c
// Algorithm for the program: total_cost_of_apples
// 1. Begin.
// 2. Read in the value for the amount in kg of the apples, store it in amount.
// 3. Read in the value for the cost per kg of the apples in RM, store it in cost_per_kg.
// 4. Calculate the total cost of apples in RM by multiplying amount by cost_per_kg, store it in total.
// 5. Write the value of total to the output.
// 6. End.

#include <stdio.h>

int main () 
{
	float amount, cost_per_kg, total;
	
	printf("How many kg of apples? ");
	scanf("%f", &amount);
	printf ("Cost per kg? RM");
	scanf("%f", &cost_per_kg);
	
	total = amount * cost_per_kg;
	
	printf("Total cost of apples is RM%0.2f.\n", total);
	
	return 0;
}
```


## 03 Volume of Cylinder

![Flowchart for Volume of Cylinder](/assignment_01/03_volume_of_cylinder/volume_of_cylinder_flowchart.png)

```c
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
```


## 04 Cylinder Parameters

![Flowchart for Cylinder Parameters](/assignment_01/04_cylinder_parameters/cylinder_parameters_flowchart.png)

```c
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

#include <stdio.h>
#include <math.h>

int main () 
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
```


## 05 Factorial

![Flowchart for Factorial](/assignment_01/05_ factorial/factorial_flowchart.png)

```c
// Algorithm for the program: factorial
// 1. Begin.
// 2. Read in the value of an integer number, store in number.
// 3. Let i be number - 1.
// 4. If i is greater than 1 go to next step, otherwise go to step 8.
// 5. Multiply number by i and assign it back to number.
// 6. Decrement i by 1.
// 7. Go back to step 4.
// 8. Write the value of number to the output.
// 9. End.

#include <stdio.h>

int factorial(int number);

int main () 
{
	int number;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	int temp = number; // For displaying it in printf() and to pass to factorial().
	
	// for-loop
	int i;
	for (i = number - 1; i > 1; --i)
	{
		number *= i;
	}	
	printf("The factorial of %d is %d with a for-loop.\n", temp, number);
	
	// Recursion
	printf("The factorial of %d is %d with recursion.\n", temp, factorial(temp));
	
	return 0;
}

int factorial(int number) 
{	
	if (number >= 1)
	{
		return number * factorial(number - 1);	
	}
	else 	
	{	
		return 1;
	}	
}
```

