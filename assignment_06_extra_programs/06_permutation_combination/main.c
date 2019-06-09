// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian

#include <stdio.h>

unsigned long long factorial (int number);
unsigned long long permutation (int n, int r);
unsigned long long combination (int n, int r);

int main (void) 
{
    int n, r;
    
    printf("Enter the value for\n");
    printf("n: ");
    scanf("%d", &n);
    printf("r: ");
    scanf("%d", &r);
    
    printf("Permutation, P(%d, %d) = %llu\n", n, r, permutation(n, r));
    printf("Combination, C(%d, %d) = %llu\n", n, r, combination(n, r));
    
    return 0;
}

unsigned long long factorial (int number) 
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

unsigned long long permutation(int n, int r)
{       
    int i, p;
    for (i = n, p = 1; i > n - r; --i)
    {
        p *= i;
    }
    
    return p;
}

unsigned long long combination (int n, int r)
{
    return permutation(n, r) / factorial(r);
}
