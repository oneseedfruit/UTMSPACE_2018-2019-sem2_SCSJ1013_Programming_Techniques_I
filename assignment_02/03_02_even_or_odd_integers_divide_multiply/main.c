// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian

// ALgorithm for the program: even_or_odd_integers_divide_multiply
// 1. Begin.
// 2. Read in the value of an integer, store it in number.
// 3. Do an integer divsion on number, divide it by 2 and store it in test_number.
// 4. Multiply test_number by 2 and assign it back to test_number.
// 5. If test_number == number, go to the next step, otherwise go to step 8.
// 6. Write number " is even." to the output.
// 7. Go to step 9.
// 8. Write number " is odd." to the output.
// 9. End.

// Input & Output 1
// 
// Input
// Enter an integer: 55
//
// Output
// 55 is odd.

// Input & Output 2
// 
// Input
// Enter an integer: 8
// 
// Output
// 8 is even.

// Input & Output 3
//
// Input
// Enter an integer: 1158
//
// Output
// 1158 is even.


#include <stdio.h>

int main (void)
{
	int number, test_number;
	
	printf("Enter an integer: ");
	scanf("%d", &number);
	
	test_number = number / 2;
	test_number *= 2;
	
	if (test_number == number)
	{
		printf("%d is even.\n", number);
	}
	else
	{
		printf("%d is odd.\n", number);
	}
	
	return 0;
}

