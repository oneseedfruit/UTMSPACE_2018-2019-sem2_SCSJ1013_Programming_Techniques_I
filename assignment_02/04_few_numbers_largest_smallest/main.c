// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian

// Algorithm for the program: few_numbers_largest_smallest
// 1. Begin.
// 2. Assign the smallest possible float to variable largest.
// 3. Assign the largest possible float to variable smallest.
// 4. Assign 0 to inputCount.
// 5. Read in the value of a number, store it in number.
// 6. If scanf("%f", &number) does not equal 0, number is not invalid,
//    go to the next step, otherwise go to step 13.
// 7. If largest is less than number, go to the next step, otherwise go to step 9.
// 8. Assign number to largest.
// 9. If smallest is greater than number, go to the next step, otherwise go to step 11.
// 10. Assign number to smallest.
// 11. Assign inputCount + 1 back to inputCount itself.
// 12. Go back to step 5.
// 13. If inputCount is greater than or equal to 2 and largest subtracted by smallest 
//     is greater than 0.001, go to the next step, otherwise go to step 17.
// 14. Write largest to output.
// 15. Write smallest to output.
// 16. Go to step 18.
// 17. Write an error message to output.
// 18. End.

// Input & Output 1
//
// Input
// Enter at least 2 real numbers, separated by the ENTER key, enter anything else to stop:
// 9
// 6.3
// 3.141592654
// 36.9
// -55
// -98
// 6
// a
//
// Output
//
// 36.90 is the largest number.
// -98.00 is the smallest number.

// Input & Output 2
//
// Input
// Enter at least 2 real numbers, separated by the ENTER key, enter anything else to stop:
// 9
// a
//
// Output
// 
// Error: Fewer than 2 real numbers entered, failed to make comparison.

// Input & Output 3
//
// Input
// Enter at least 2 real numbers, separated by the ENTER key, enter anything else to stop:
// 3.333333
// 1.17154
// -985.63
// 845
// 1000000
// *
//
// Output
//
// 1000000.00 is the largest number.
// -985.63 is the smallest number.


#include <stdio.h>
#include <float.h>

int main (void) 
{   
    float number, largest = -FLT_MAX, smallest = FLT_MAX;
       
    printf("Enter at least 2 real numbers, separated by the ENTER key, enter anything else to stop:\n");    
    
    int inputCount;
    for (inputCount = 0; scanf("%f", &number) != 0; ++inputCount)
    {     
        if (largest < number) 
        {
            largest = number;            
        }
        
        if (smallest > number)
        {            
            smallest = number;            
        }
    }    
    
    if (inputCount >= 2 && (largest - smallest) > 0.001)
    {
        printf("\n%.2f is the largest number.\n", largest);
        printf("%.2f is the smallest number.", smallest);     
    }
    else 
    {
        printf("\nError: Fewer than 2 real numbers entered, failed to make comparison.\n");
    }
    
    return 0;
}

