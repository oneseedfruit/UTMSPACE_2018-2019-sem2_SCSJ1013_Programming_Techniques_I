// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian

#include <stdio.h>

int main()
{
    int m, n;

    printf("Input two positive integers: ");
    scanf("%d%d", &m, &n);

    int r = m % n;
    while (r != 0)
    {
        m = n;
        n = r;
        r = m % n;
    }

    printf("Their greatest common divisor is %d\n", n);

    return 0;
}

