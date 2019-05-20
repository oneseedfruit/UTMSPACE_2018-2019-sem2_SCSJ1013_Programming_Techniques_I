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
```

## 03 File Read/Write With Arrays

```c
#include <stdio.h>

int main (void)
{
  const int ROW_COUNT = 5 ;
  const int COL_COUNT = 4;

  int sales[ROW_COUNT][COL_COUNT];
  float sum_row[ROW_COUNT], sum_col[COL_COUNT];
  float avg_row[ROW_COUNT], avg_col[COL_COUNT];

  int i, j;

  FILE *in_file = fopen("sales_data", "r");

  for (i = 0, sum_row[i] = 0; i < ROW_COUNT; ++i)
  {    
    for (j = 0; j < COL_COUNT; ++j)
    {
      fscanf(in_file, "%d", &sales[i][j]);
      sum_row[i] = sum_row[i] + sales[i][j];
    }
    avg_row[i] = (float) (sum_row[i]) / COL_COUNT;
    fscanf(in_file, "\n");
  }

  for (j = 0, sum_col[j] = 0; j < COL_COUNT; ++j)
  {
    for (i = 0; i < ROW_COUNT; ++i)
    {
      sum_col[j] = sum_col[j] + sales[i][j];
    }
    avg_col[j] = (float) (sum_col[j]) / ROW_COUNT;
    fscanf(in_file, "\n");
  }

  fclose(in_file);

  FILE *out_file = fopen("sales_analysis", "w");

  fprintf(out_file, "\t\t\tSALES ANALYSIS\n");
  fprintf(out_file, "\tQ1\tQ2\tQ3\tQ4\tTOTAL\tAVERAGE\n");
  fprintf(out_file, "========================================================\n");
  for (i = 0; i < ROW_COUNT; ++i)
  {
    fprintf(out_file, "ROW %d", i);
    for (j = 0; j < COL_COUNT; ++j)
    {
      fprintf(out_file, "\t%d", sales[i][j]);
    }
    fprintf(out_file, "\t%4d\t%8.3f\n", sum_row[i], avg_row[i]);
  }

  fprintf(out_file, "========================================================\nSUM");  
  for (j = 0; j < COL_COUNT; ++j)
  {
    fprintf(out_file, "\t%d", sum_col[j]);
  }  

  fprintf(out_file, "\nAVERAGE");
  for (j = 0; j < COL_COUNT; ++j)
  {
    fprintf(out_file, "\t%.1f", avg_col[j]);
  }
  fprintf(out_file, "\n");

  fclose(out_file);

  return 0;
}
```