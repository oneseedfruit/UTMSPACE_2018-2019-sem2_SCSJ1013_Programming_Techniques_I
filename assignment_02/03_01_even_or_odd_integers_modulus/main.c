// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian

// Slides: Faculty of Computing @2017/2018-1 Chapter 3 Page 33
// (a) pseudocode:
//            number = int(input("Enter an integer: "))
//            if number % 2 == 0:
//                print(str(number) + " is even.\n")
//            else:
//                print(str(number) + " is odd.\n")
// 
// (b) double selection, if ... else ...
//     
// (c) flowchart included in the README.md of assignment_02 under "03 Even or Odd Integers" "03-01 With Modulus"

// Algorithm for the program: even_or_odd_integers_modulus
// 1. Begin.
// 2. Read in the value of an integer, store it in number.
// 3. If number % 2 == 0 go to the next step, otherwise go to step 6.
// 4. Write number " is even." to the output.
// 5. Go to step 7.
// 6. Write number " is odd." to the output.
// 7. End.

// Input & Output 1
//
// Input
// Enter an integer: 50
//
// Output
// 50 is even.

// Input & Output 2
//
// Input
// Enter an integer: 3
//
// Output
// 3 is odd.

// Input & Output 3
//
// Input
// Enter an integer: 7654
// 
// Output
// 7654 is even.


#include <stdio.h>

int main (void)
{
	int number;
	
	printf("Enter an integer: ");
	scanf("%d", &number);
	
	if (number % 2 == 0)
	{
		printf("%d is even.\n", number);
	}
	else
	{
		printf("%d is odd.\n", number);
	}
	
	return 0;
}

