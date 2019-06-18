# Assignment 06 (Extra Programs)

*Compiled with TDM-GCC 5.1.0. Project files are located in their respective folders, to be opened with [Orwell Dev-C++](https://sourceforge.net/projects/orwelldevcpp/), the IDE used in this SCSJ1013 Programming Techniques I class.*

```c
// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian
```

## 01 Prime Numbers from 1 to n

```c
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
```

## 02 Greatest Common Divisor Between Two Positive Integers

```c
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
```

## 03 Triangular Number

```c
#include <stdio.h>

int get_triangular_number (int num);

int main (void)
{
    int num;

    printf("Enter an integer to get its triangular number: ");
    scanf("%d", &num);

    printf("The triangular number of %d is %d\n", num, get_triangular_number(num));
    
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
```

## 04 Absolute Value and Square Root Without math.h Using the Newton-Raphson Method

```c
#include <stdio.h>

float abs_val (float num);
float sqrt_val (float num);

int main (void)
{
    int num;
    
    printf("Enter a number to get its square root: ");    
    scanf("%d", &num);
    
    printf("The square root of %d is %.3f.\n", num, sqrt_val(num));

    return 0;
}

float abs_val (float num)
{    
    return (num < 0) ? -num : num;
}

float sqrt_val (float num)
{
    const float EPSILON = .00001;
    float guess = 1.0;

    while (abs_val(guess * guess - num) >= EPSILON)
    {
        guess = (num / guess + guess) / 2.0;
    }
    
    return guess;
}
```

## 05 Getting the First n Numbers in a Fibonacci Sequence

```c
#include <stdio.h>

int get_fibonacci_numbers (int num);

int main (void)
{
    int n;
    
    printf("How many numbers in the Fibonacci sequence to generate?: ");
    scanf("%d", &n);
    
    printf("The first %d numbers in the Fibonacci sequence are: ", n);
    
    int i;
    for (i = 0; i < n; ++i)
    {
        printf ("%d ", get_fibonacci_numbers(i));
    }    
    
    printf("\n");
    
    return 0;
}

int get_fibonacci_numbers(int num)
{
    return num < 2 ? num : get_fibonacci_numbers(num - 1) + get_fibonacci_numbers(num - 2);    
}
```

## 06 nPr Permutation and nCr Combination

```c
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
```

## 07 Pythagorean Triples

```c
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
```

## 08 Pascal's Triangle (with Pointers)

```c
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
```