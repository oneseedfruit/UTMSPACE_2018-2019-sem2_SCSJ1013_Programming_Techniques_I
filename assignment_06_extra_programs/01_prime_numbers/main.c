// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian

#include <stdio.h>

int main (void)
{
    int n = 0;
    
    printf("Enter an integer: ");    
    scanf("%d", &n);
    
    printf("The prime numbers from 1 to %d are: ", n);
    
    int primes[n];
    
    int i;
    for (i = 0; i < n; ++i)
    {
        primes[i] = 0;
    }    
    
    for (i = 2; i <= n; ++i)
    {
        if (primes[i] == 0)
        {
            printf("%d ", i);
        }
        
        int j;
        for (j = 0; j < n; ++j)
        {
            if (i * j <= n) 
            {
                primes[i * j] = 1;
            }
        }        
    }
    
    printf("\n");
    
    return 0;
}
