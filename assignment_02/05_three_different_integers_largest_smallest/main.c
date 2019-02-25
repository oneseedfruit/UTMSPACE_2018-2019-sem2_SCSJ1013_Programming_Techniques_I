// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian

// Algorithm for the program: three_different_integers_largest_smallest
// 1. Begin.
// 2. Assign 3 to NUMBER_OF_INPUTS as a constant.
// 3. Assign 0 to sum.
// 4. Assign 1 to product.
// 5. Assign the smallest possible integer to largest.
// 6. Assign the largest possible integer to smallest.
// 7. Assign 0 to i.
// 8. If i is less than NUMBER_OF_INPUTS, go to the next step, otherwise go to step 19.
// 9. Read in the value of an integer, store it in number.
// 10. If scanf("%d", &number) does not equal 0, number is not invalid, go to the next step,
//     otherwise go to step 19.
// 11. If largest is less than number, go to the next step, otherwise go to step 13.
// 12. Assign number to largest.
// 13. If smallest is greater than number, go to the next step, otherwise to go step 15.
// 14. Assign number to smallest.
// 15. Add number to sum and assign the value to sum.
// 16. Mutliply product by number and assign the value to product.
// 17. Add 1 to i and assign back to i.
// 18. Go back to step 8.
// 19. Multiply sum by 1.0 then divide by NUMBER_OF_INPUTS then assign to average.
// 20. Write the value of sum to the output.
// 21. If the value of sum can be evenly divided by NUMBER_OF_INPUTS, go to the next step, 
//     otherwise go to step 24.
// 22. Write the value of average with no decimal places to the output.
// 23. Go to step 25.
// 24. Write the value of average with 2 decimal places to the output.
// 25. Write the value of product to the output.
// 26. Write the value of smallest to the output.
// 27. Write the value of largest to the output.
// 28. End.

// Input & Output 1
// 
// Input
// Input three different integers: 13 27 14
//
// Output
// Sum is 54
// Average is 18
// Product is 4914
// Smallest is 13
// Largest is 27

// Input & Output 2
//
// Input
// Input three different integers: 956
// 56
// 1
//
// Output
// Sum is 1013
// Average is 337.67
// Product is 53536
// Smallest is 1
// Largest is 956

// Input & Output 3
//
// Input
// Input three different integers: 11 25 899
//
// Output
// Sum is 935
// Average is 311.67
// Product is 247225
// Smallest is 11
// Largest is 899


#include <stdio.h>
#include <limits.h>

int main (void)
{
    const int NUMBER_OF_INPUTS = 3;
    int number, sum = 0, product = 1, largest = INT_MIN, smallest = INT_MAX;
    float average;
    
    printf("Input three different integers: ");
    
    int i;
    for (i = 0; i < NUMBER_OF_INPUTS && scanf("%d", &number) != 0; ++i) 
    {
        if (largest < number) 
        {
            largest = number;    
        }
        
        if (smallest > number) 
        {
            smallest = number;
        }
        
        sum += number;
        product *= number;
    }
    average = sum * 1.0 / NUMBER_OF_INPUTS;
    
    printf("Sum is %d\n", sum);
    if ((int) sum % NUMBER_OF_INPUTS == 0)
    {
        printf("Average is %.0f\n", average);
    }
    else
    {
        printf("Average is %.2f\n", average);
    }
    printf("Product is %d\n", product);
    printf("Smallest is %d\n", smallest);
    printf("Largest is %d", largest);
    
    return 0;
}

