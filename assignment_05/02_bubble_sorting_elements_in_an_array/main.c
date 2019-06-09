// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian

#include <stdio.h>

void list_elements(int[], int);
void bubble_sort(int[], int);

int main (void)
{
    int num[] = { 9, 12, 20, 15, 1 };
    int element_count = sizeof(num) / sizeof(int);
    
    printf("Elements\n\t");
    list_elements(num, element_count);
    
    bubble_sort(num, element_count);
    
    printf("in the array are sorted in ascending order as\n\t");
    list_elements(num, element_count);
    
    return 0;
}

void list_elements(int array[], int element_count)
{
    int i;
    for (i = 0; i < element_count; ++i)
    {
        printf("%d", array[i]);
        
        if (i == element_count - 1)
        {         
            printf("\n");
            break;
        }
        printf(", ");
    }
}

void bubble_sort(int array[], int element_count)
{
    int i, j, temp;
    for (i = 0; i < element_count - 1; ++i)
    {        
        int already_sorted_count = element_count - i;
        
        for (j = 0; j < already_sorted_count - 1; ++j)
        {
            if (array[j] > array[j + 1]) 
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
