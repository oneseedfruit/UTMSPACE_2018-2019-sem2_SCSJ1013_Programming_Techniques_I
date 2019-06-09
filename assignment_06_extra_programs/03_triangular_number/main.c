#include <stdio.h>

int get_triangular_number (int num);

int main (void)
{
    int num;
    
    printf("Enter an integer to get its triangular number: ");
    scanf("%d", &num);

    printf("The triangular number of %d is %i\n", num, get_triangular_number(num));
    
    return 0;
}

int get_triangular_number (int num)
{
    int triangular_number = 0;
    
    int i;
    for (i = 1; i <= num; ++i)
    {
        triangular_number += i;
    }
    
    return triangular_number;
}

