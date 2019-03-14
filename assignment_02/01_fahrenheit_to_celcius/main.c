// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian

// Slides: Faculty of Computing @2017/2018-1 Chapter 3 Page 19
// (a) input: tempeerature in degrees fahrenheit
//     process: celcius = (fahrenheit - 32) * 5 / 9
//     output: temperature in degrees celcius
//
// (b) pseudocode:
//          fahrenheit = input("Enter a temperature in degrees Fahrenheit: ")
//          celcius = (float(fahrenheit) - 32) * 5 / 9
//          print("%.2f" % celcius)
//
// (c) flowchart included in the README.md of assignment_02 under "01 Fahrenheit to Celcius"

// Algorithm for the program: farenheit_to_celcius
// 1. Begin.
// 2. Read in the value of the temperature in degrees Fahrenheit, store it in fahrenheit.
// 3. Assign (fahrenheit - 32.0) * 5.0 / 9.0 to the variable celcius.
// 4. Write the value of celcius to the output.
// 5. End.

// Input & Output 1
// 
// Input
// Enter a temperature in degrees Fahrenheit: 32
//
// Output
// 32.00 degrees Fahrenheit is 0.00 degrees Celcius.

// Input & Output 2
//
// Input
// Enter a temperature in degrees Fahrenheit: 5
//
// Output
// 5.00 degrees Fahrenheit is -15.00 degrees Celcius.

// Input & Output 3
// 
// Input
// Enter a temperature in degrees Fahrenheit: 99
//
// Output
// 99.00 degrees Fahrenheit is 37.22 degrees Celcius.


#include <stdio.h>

int main (void) 
{
	float fahrenheit, celcius;
	
	printf("Enter a temperature in degrees Fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	celcius = (fahrenheit - 32.0) * 5.0 / 9.0;
	
	printf("%.2f degrees Fahrenheit is %.2f degrees Celcius.\n", fahrenheit, celcius);
	
	return 0;
}

