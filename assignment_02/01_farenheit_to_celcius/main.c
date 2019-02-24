// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian

// Algorithm for the program: farenheit_to_celcius
// 1. Begin.
// 2. Read in the value of the temperature in degrees Farenheit, store it in farenheit.
// 3. Assign (farenheit - 32.0) * 5.0 / 9.0 to the variable celcius.
// 4. Write the value of celcius to the output.
// 5. End.

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

