// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian

#include <stdio.h>

float abs_val (float num);
float sqrt_val (float num);

int main (void)
{
    int num;
    
    printf("Enter a number to get its square root: ");    
    scanf("%d", &num);
    
    printf ("The square root of %d is %.3f.\n", num, sqrt_val (num));
    return 0;
}

float abs_val (float num)
{    
    return (num < 0) ? -num : num;
}

float sqrt_val (float num)
{
    const float EPSILON = .00001;
    float guess = 1.0;

    while (abs_val (guess * guess - num) >= EPSILON)
    {
        guess = (num / guess + guess) / 2.0;
    }
    
    return guess;
}

