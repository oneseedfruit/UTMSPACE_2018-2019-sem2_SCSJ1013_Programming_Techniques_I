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

