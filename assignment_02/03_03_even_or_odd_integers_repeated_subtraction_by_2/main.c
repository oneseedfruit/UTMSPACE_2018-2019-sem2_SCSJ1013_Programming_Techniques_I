// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian

// ALgorithm for the program: even_or_odd_integers_repeated_subtraction_by_2
// 1. Begin.
// 2. Read the value of an integer, store it in number.
// 3. If number is greater than 0, go to the next step, otherwise go to step 6.
// 4. Assign the value of number subtracted by 2 back to number itself.
// 5. Go to step 3.
// 6. If number is equal to 0, go to next step, otherwise go to step 9.
// 7. Write "even" to output.
// 8. Go to step 10.
// 9. Write "odd" to output.
// 10. End.

// Input & Output 1
//
// Input
// Enter an integer: 121
//
// Output
// 121 is odd.

// Input & Output 2
//
// Input
// Enter an integer: 656
// 
// Output
// 656 is even.

// Input & Output 3
// 
// Input
// Enter an integer: 12345
//
// Output
// 12345 is odd.


#include <stdio.h>

int main (void)
{
	int number;
	
	printf("Enter an integer: ");
	scanf("%d", &number);
	
	printf("%d is ", number);
		
	for (; number > 0; number -= 2) {}
	
	if (number == 0) 
	{
		printf("even.\n");
	}
	else
	{
		printf("odd.\n");
	}
	
	return 0;
}

