// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian

#include <stdio.h>

int get_fibonacci_numbers (int num);

int main (void)
{
    int n;
    
    printf("How many numbers in the Fibonacci sequence to generate?: ");
    scanf("%d", &n);
    
    printf("The first %d numbers in the Fibonacci sequence are: ", n);
    
    int i;
    for (i = 0; i < n; ++i)
    {
        printf ("%d ", get_fibonacci_numbers(i));
    }    
    
    printf("\n");
    
    return 0;
}

int get_fibonacci_numbers(int num)
{
    return num < 2 ? num : get_fibonacci_numbers(num - 1) + get_fibonacci_numbers(num - 2);    
}
