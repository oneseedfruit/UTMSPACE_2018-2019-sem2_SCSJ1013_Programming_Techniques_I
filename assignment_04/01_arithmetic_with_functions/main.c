// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian

// Algorithm for the program: arithmetic_with_functions
// 1. Begin.
// 2. Declare and define a function called add that has two arguments of float type and returns the sum of two numbers.
// 3. Declare and define a function called subtract that has two arguments of float type and returns the difference of two numbers.
// 4. Declare and define a function called multiply that has two arguments of float type and returns the product of two numbers.
// 5. Declare and define a function called divide that has two arguments of float type and returns the quotient of two numbers.
// 6. Read in two numbers and store them in num_1 and num_2.
// 7. Pass the value of num_1 and the value of num_2 to the function add, then write its return value to the output.
// 8. Pass the value of num_1 and the value of num_2 to the function subtract, then write its return value to the output.
// 9. Pass the value of num_1 and the value of num_2 to the function multiply, then write its return value to the output.
// 10. Pass the value of num_1 and the value of num_2 to the function divide, then write its return value to the output.
// 11. End.

// Input & Output 1
// 
// Input
// Enter two numbers: 5 6
//
// Output
// Their sum is: 11.00
// Their difference is: -1.00
// Their product is: 30.00
// Their quotient is: 0.83

// Input & Output 2
// 
// Input
// Enter two numbers: 3.14159 1.61803
//
// Output
// Their sum is: 4.76
// Their difference is: 1.52
// Their product is: 5.08
// Their quotient is: 1.94

// Input & Output 3
// 
// Input
// Enter two numbers: 2.71828 1.41421
//
// Output 
// Their sum is: 4.13
// Their difference is: 1.30
// Their product is: 3.84
// Their quotient is: 1.92


#include <stdio.h>

float add (float, float);
float subtract (float, float);
float multiply (float, float);
float divide (float, float);

int main (void) 
{
	float num_1, num_2;
	
	printf("Enter two numbers: ");
	scanf("%f%f", &num_1, &num_2);
	
	printf("Their sum is: %.2f\n", add(num_1, num_2));
	printf("Their difference is: %.2f\n", subtract(num_1, num_2));
	printf("Their product is: %.2f\n", multiply(num_1, num_2));
	printf("Their quotient is: %.2f\n", divide(num_1, num_2));
	
	return 0;
}

float add (float num_1, float num_2)
{
	return num_1 + num_2;
}

float subtract (float num_1, float num_2)
{
	return num_1 - num_2;
}

float multiply (float num_1, float num_2)
{
	return num_1 * num_2;
}

float divide (float num_1, float num_2)
{
	return num_1 / num_2;
}

