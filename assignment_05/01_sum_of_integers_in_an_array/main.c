#include <stdio.h>

int main (void)
{    
    int num[] = { 99, 2, 3, 1718, 341, 2 };
    int element_count = sizeof(num) / sizeof (int);
    
    int sum = 0;
    
    int i;
    for (i = 0; i < element_count; ++i)
    {
        printf("Element at index %d in the num array is %d.\n", i, num[i]);
        sum += num[i];
    }
    
    printf("\nSum of all the elements in the num array is %d.\n", sum);
    
    return 0;
}
