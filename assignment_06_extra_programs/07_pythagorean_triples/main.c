// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian

#include <stdio.h>

int main (void)
{
    int n = 100;
    
    printf("Enter in integer, n, where n^2 is the perimeter: ");
    scanf("%d", &n);
    
    int count = 0;
        
    printf("The Pythagoras triples up to %d^2 are:\n", n);
    
    int a, b, c;
    for (a = 0; a < n; ++a)
    {
        for (b = 0; b < n; ++b)
        {
            for (c = 0; c < n; ++c)
            {
                if (a < b && b < c)
                {
                    if (a * a + b * b == c * c)
                    {
                        printf("(%d, %d, %d) where %d < %d < %d and ", a, b, c, a, b, c);
                        printf("%d^2 + %d^2 = %d^2\n", a, b, c);
                        count += 3;                        
                    }
                }
            }
        }
    }
    
    printf("and there are a total of %d integers.\n", count);
    
    return 0;
}
