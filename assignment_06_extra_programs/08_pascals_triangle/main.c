// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian

#include <stdio.h>

void next_pascal_number_at (int row, int col, int *num);
void print_space_at (int row, int n, int gap);

int main (void)
{
    int n = 0;
    
    printf("Enter the number of rows in the triangle: ");
    scanf("%d", &n);
    
    int row;
    for (row = 0; row < n; ++row)
    {
        print_space_at(row, n, 3);
        
        int col, num;
        for (col = 0, num = 1; col <= row; ++col) 
        {
            printf("%5d ", num);
            next_pascal_number_at(row, col, &num);
        }

        printf("\n");
    }
    
    return 0;
}

void next_pascal_number_at (int row, int col, int *num)
{   
    *num *= row - col;
    *num /= col + 1;
}

void print_space_at (int row, int n, int gap)
{
    int i;
    for (i = 0; i < (n - row) * gap; ++i)
    {
        printf(" ");
    }
}

