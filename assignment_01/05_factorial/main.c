// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian

// Algorithm for the program: factorial
// 1. Begin.
// 2. Read in the value of an integer number, store in number.
// 3. Let i be number - 1.
// 4. If i is greater than 1 go to next step, otherwise go to step 8.
// 5. Multiply number by i and assign it back to number.
// 6. Decrement i by 1.
// 7. Go back to step 4.
// 8. If number is 0, assign 1 to number.
// 9. Write the value of number to the output.
// 10. End.

// Input & Output 1
//
// Input
// Enter a number: 5
//
// Output
// The factorial of 5 is 120 with a for-loop.
// The factorial of 5 is 120 with recursion.

// Input & Output 2
//
// Input
// Enter a number: 9
//
// Output
// The factorial of 9 is 362880 with a for-loop.
// The factorial of 9 is 362880 with recursion.

// Input & Output 3
// 
// Input 
// Enter a number: 12
//
// Output
// The factorial of 12 is 479001600 with a for-loop.
// The factorial of 12 is 479001600 with recursion.

// Input & Output 4
//
// Input
// Enter a number: 0
//
// Output
// The factorial of 0 is 1 with a for-loop.
// The factorial of 0 is 1 with recursion.


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
	number = number == 0 ? 1 : number;	
	
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

