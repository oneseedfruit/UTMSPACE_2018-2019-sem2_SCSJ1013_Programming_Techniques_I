# Assignment 05

*Compiled with TDM-GCC 5.1.0. Project files are located in their respective folders, to be opened with [Orwell Dev-C++](https://sourceforge.net/projects/orwelldevcpp/), the IDE used in this SCSJ1013 Programming Techniques I class.*

```c
// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian
```

## 01 Sum of Integers In An Array

```c
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
```

## 02 Bubble Sorting Elements In An Array

```c
#include <stdio.h>

void list_elements(int[], int);
void bubble_sort(int[], int);

int main (void)
{
    int num[] = {9, 12, 20, 15, 1};
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
```
