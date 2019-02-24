# Assignment 02

*Compiled with TDM-GCC 5.1.0. Project files are located in their respective folders, to be opened with [Orwell Dev-C++](https://sourceforge.net/projects/orwelldevcpp/), the IDE used in this SCSJ1013 Programming Techniques I class.*

```c
// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian
```


## 01 Farenheit to Celcius

![Flowchart for Farenheit to Celcius](/assignment_02/01_farenheit_to_celcius/farenheit_to_celcius_flowchart.png)

```c
// Algorithm for the program: farenheit_to_celcius
// 1. Begin.
// 2. Read in the value of the temperature in degrees Farenheit, store it in farenheit.
// 3. Assign (farenheit - 32.0) * 5.0 / 9.0 to the variable celcius.
// 4. Write the value of celcius to the output.
// 5. End.


#include <stdio.h>

int main (void) 
{
	float farenheit, celcius;
	
	printf("Enter a temperature in degrees Farenheit: ");
	scanf("%f", &farenheit);
	
	celcius = (farenheit - 32.0) * 5.0 / 9.0;
	
	printf("%.2f degrees Farenheit is %.2f degrees Celcius.\n", farenheit, celcius);
	
	return 0;
}

```

```c
// Input & Output 1
// 
// Input
// Enter a temperature in degrees Farenheit: 32
//
// Output
// 32.00 degrees Farenheit is 0.00 degrees Celcius.

// Input & Output 2
//
// Input
// Enter a temperature in degrees Farenheit: 5
//
// Output
// 5.00 degrees Farenheit is -15.00 degrees Celcius.

// Input & Output 3
// 
// Input
// Enter a temperature in degrees Farenheit: 99
//
// Output
// 99.00 degrees Farenheit is 37.22 degrees Celcius.
```


## 02 Roots of a Quadratic Equation

![Flowchart for Roots of a Quadratic Equation](/assignment_02/02_roots_of_a_quadratic_equation/roots_of_a_quadratic_equation_flowchart.png)

```c
// Algorithm for the program: roots_of_a_quadratic_equation
// 1. Begin.
// 2. Read in the value of the quadratic coefficient, store it in a.
// 3. Read in the value of the linear coefficient, store it in b.
// 4. Read in the value of the constant free term, store it in c.
// 5. Assign the value of pow(b, 2) - 4.0 * a * c to discriminant.
// 6. If discriminant is greater than 0, go to the next step, otherwise go to step 12.
// 7. Write "Two different roots!" to the output.
// 8. Assign the value of (-b + sqrt(discriminant)) / (2.0 * a) to root1.
// 9. Assign the value of (-b - sqrt(discriminant)) / (2.0 * a) to root2.
// 10. Write the values of root1 and root2 to the output.
// 11. Go to step 22.
// 12. If discriminant is equal to 0, go to the next step, otherwise go to step 17.
// 13. Write "One root or two equal roots!" to the output.
// 14. Assign the value of -b / (2.0 * a) to root1.
// 15. Write root1 to the output.
// 16. Go to step 22.
// 17. Write "Two complex roots!" to the output.
// 18. Negate the value of discriminant then assign it back to discriminant.
// 19. Assign the value of -b / (2.0 * a) to root_real.
// 20. Assign the value of sqrt(discriminant) / (2.0 * a) to root_imaginary.
// 21. Write root_real + root_imaginary i and root_real - root_imaginary i to the output.
// 22. End.


#include <stdio.h>
#include <math.h>

int main (void)
{
	float a, b, c, discriminant, root1, root2, root_real, root_imaginary;
	
	printf("Enter the quadratic coefficient, a: ");
	scanf("%f", &a);
	printf("Enter the linear coeffcient, b: ");
	scanf("%f", &b);
	printf("Enter the constant free term, c: ");
	scanf("%f", &c);
	
	discriminant = pow(b, 2) - 4.0 * a * c;
	
	if (discriminant > 0)
	{
		printf("Two different roots!\n");
		
		root1 = (-b + sqrt(discriminant)) / (2.0 * a);
		root2 = (-b - sqrt(discriminant)) / (2.0 * a);
		
		printf("The roots are %.2f and %.2f.\n", root1, root2);
	}
	else if (discriminant == 0) 
	{
		printf("One root or two equal roots!\n");
		
		root1 = -b / (2.0 * a);
		root2 = root1;
		
		printf("The root is %.2f.\n", root1);		
	}
	else 
	{
		printf("Two complex roots!\n");
		
		discriminant = -discriminant;
		
		root_real = -b / (2.0 * a);
		root_imaginary = sqrt(discriminant) / (2.0 * a);
		printf("The roots are %.2f + %.2fi and %.2f - %.2fi.\n", 
					root_real, 
					root_imaginary, 
					root_real, 
					root_imaginary);
	}
	
	return 0;
}
```

```c
// Input & Output 1
//
// Input
// Enter the quadratic coefficient, a: 5
// Enter the linear coeffcient, b: 3
// Enter the constant free term, c: 2
//
// Output
// Two complex roots!
// The roots are -0.30 + 0.56i and -0.30 - 0.56i.

// Input & Output 2
//
// Input
// Enter the quadratic coefficient, a: 1
// Enter the linear coeffcient, b: 5
// Enter the constant free term, c: 6
//
// Output
// Two different roots!
// The roots are -2.00 and -3.00.

// Input & Output 3
//
// Input
// Enter the quadratic coefficient, a: 18
// Enter the linear coeffcient, b: 12
// Enter the constant free term, c: 2
// 
// Output
// One root or two equal roots!
// The root is -0.33.
```

