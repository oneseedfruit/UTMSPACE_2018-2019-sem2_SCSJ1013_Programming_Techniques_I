# Assignment 02

*Compiled with TDM-GCC 5.1.0. Project files are located in their respective folders, to be opened with [Orwell Dev-C++](https://sourceforge.net/projects/orwelldevcpp/), the IDE used in this SCSJ1013 Programming Techniques I class.*

```c
// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian
```


## 01 Fahrenheit to Celcius

![Flowchart for Fahrenheit to Celcius](/assignment_02/01_farenheit_to_celcius/farenheit_to_celcius_flowchart.png)

```c
// Slides: Faculty of Computing @2017/2018-1 Chapter 3 Page 19
// (a) input: tempeerature in degrees fahrenheit
//     process: celcius = (fahrenheit - 32) * 5 / 9
//     output: temperature in degrees celcius
//
// (b) pseudocode:
//          fahrenheit = input("Enter a temperature in degrees Fahrenheit: ")
//          celcius = (float(fahrenheit) - 32) * 5 / 9
//          print("%.2f" % celcius)
//
// (c) flowchart included in the README.md of assignment_02 under "01 Fahrenheit to Celcius"

// Algorithm for the program: farenheit_to_celcius
// 1. Begin.
// 2. Read in the value of the temperature in degrees Fahrenheit, store it in fahrenheit.
// 3. Assign (fahrenheit - 32.0) * 5.0 / 9.0 to the variable celcius.
// 4. Write the value of celcius to the output.
// 5. End.


#include <stdio.h>

int main (void) 
{
	float fahrenheit, celcius;
	
	printf("Enter a temperature in degrees Fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	celcius = (fahrenheit - 32.0) * 5.0 / 9.0;
	
	printf("%.2f degrees Fahrenheit is %.2f degrees Celcius.\n", fahrenheit, celcius);
	
	return 0;
}

```

```c
// Input & Output 1
// 
// Input
// Enter a temperature in degrees Fahrenheit: 32
//
// Output
// 32.00 degrees Fahrenheit is 0.00 degrees Celcius.

// Input & Output 2
//
// Input
// Enter a temperature in degrees Fahrenheit: 5
//
// Output
// 5.00 degrees Fahrenheit is -15.00 degrees Celcius.

// Input & Output 3
// 
// Input
// Enter a temperature in degrees Fahrenheit: 99
//
// Output
// 99.00 degrees Fahrenheit is 37.22 degrees Celcius.
```


## 02 Roots of a Quadratic Equation

![Flowchart for Roots of a Quadratic Equation](/assignment_02/02_roots_of_a_quadratic_equation/roots_of_a_quadratic_equation_flowchart.png)

```c
// Algorithm for the program: roots_of_a_quadratic_equation
// 1. Begin.
// 2. Read in the value of the quadratic coefficient, store it in a.
// 3. Read in the value of the linear coefficient, store it in b.
// 4. Read in the value of the constant free term, store it in c.
// 5. Assign the value of pow(b, 2) - 4.0 * a * c to discriminant.
// 6. If discriminant is greater than 0, go to the next step, otherwise go to step 12.
// 7. Write "Two different roots!" to the output.
// 8. Assign the value of (-b + sqrt(discriminant)) / (2.0 * a) to root1.
// 9. Assign the value of (-b - sqrt(discriminant)) / (2.0 * a) to root2.
// 10. Write the values of root1 and root2 to the output.
// 11. Go to step 22.
// 12. If discriminant is equal to 0, go to the next step, otherwise go to step 17.
// 13. Write "One root or two equal roots!" to the output.
// 14. Assign the value of -b / (2.0 * a) to root1.
// 15. Write root1 to the output.
// 16. Go to step 22.
// 17. Write "Two complex roots!" to the output.
// 18. Negate the value of discriminant then assign it back to discriminant.
// 19. Assign the value of -b / (2.0 * a) to root_real.
// 20. Assign the value of sqrt(discriminant) / (2.0 * a) to root_imaginary.
// 21. Write root_real + root_imaginary i and root_real - root_imaginary i to the output.
// 22. End.


#include <stdio.h>
#include <math.h>

int main (void)
{
	float a, b, c, discriminant, root1, root2, root_real, root_imaginary;
	
	printf("Enter the quadratic coefficient, a: ");
	scanf("%f", &a);
	printf("Enter the linear coeffcient, b: ");
	scanf("%f", &b);
	printf("Enter the constant free term, c: ");
	scanf("%f", &c);
	
	discriminant = pow(b, 2) - 4.0 * a * c;
	
	if (discriminant > 0)
	{
		printf("Two different roots!\n");
		
		root1 = (-b + sqrt(discriminant)) / (2.0 * a);
		root2 = (-b - sqrt(discriminant)) / (2.0 * a);
		
		printf("The roots are %.2f and %.2f.\n", root1, root2);
	}
	else if (discriminant == 0) 
	{
		printf("One root or two equal roots!\n");
		
		root1 = -b / (2.0 * a);
		root2 = root1;
		
		printf("The root is %.2f.\n", root1);		
	}
	else 
	{
		printf("Two complex roots!\n");
		
		discriminant = -discriminant;
		
		root_real = -b / (2.0 * a);
		root_imaginary = sqrt(discriminant) / (2.0 * a);
		printf("The roots are %.2f + %.2fi and %.2f - %.2fi.\n", 
					root_real, 
					root_imaginary, 
					root_real, 
					root_imaginary);
	}
	
	return 0;
}
```

```c
// Input & Output 1
//
// Input
// Enter the quadratic coefficient, a: 5
// Enter the linear coeffcient, b: 3
// Enter the constant free term, c: 2
//
// Output
// Two complex roots!
// The roots are -0.30 + 0.56i and -0.30 - 0.56i.

// Input & Output 2
//
// Input
// Enter the quadratic coefficient, a: 1
// Enter the linear coeffcient, b: 5
// Enter the constant free term, c: 6
//
// Output
// Two different roots!
// The roots are -2.00 and -3.00.

// Input & Output 3
//
// Input
// Enter the quadratic coefficient, a: 18
// Enter the linear coeffcient, b: 12
// Enter the constant free term, c: 2
// 
// Output
// One root or two equal roots!
// The root is -0.33.
```


## 03 Even or Odd Integers

### 03-01 With Modulus

![Flowchart for Even or Odd Integers With Modulus](/assignment_02/03_01_even_or_odd_integers_modulus/even_or_odd_integers_modulus_flowchart.png)

```c
// Slides: Faculty of Computing @2017/2018-1 Chapter 3 Page 33
// (a) pseudocode:
//            number = int(input("Enter an integer: "))
//            if number % 2 == 0:
//                print(str(number) + " is even.\n")
//            else:
//                print(str(number) + " is odd.\n")
// 
// (b) double selection, if ... else ...
// 
// (c) flowchart included in the README.md of assignment_02 under "03 Even or Odd Integers" "03-01 With Modulus"

// Algorithm for the program: even_or_odd_integers_modulus
// 1. Begin.
// 2. Read in the value of an integer, store it in number.
// 3. If number % 2 == 0 go to the next step, otherwise go to step 6.
// 4. Write number " is even." to the output.
// 5. Go to step 7.
// 6. Write number " is odd." to the output.
// 7. End.


#include <stdio.h>

int main (void)
{
	int number;
	
	printf("Enter an integer: ");
	scanf("%d", &number);
	
	if (number % 2 == 0)
	{
		printf("%d is even.\n", number);
	}
	else
	{
		printf("%d is odd.\n", number);
	}
	
	return 0;
}
```

```c
// Input & Output 1
//
// Input
// Enter an integer: 50
//
// Output
// 50 is even.

// Input & Output 2
//
// Input
// Enter an integer: 3
//
// Output
// 3 is odd.

// Input & Output 3
//
// Input
// Enter an integer: 7654
// 
// Output
// 7654 is even.
```


### 03-02 With Integer Division and Multiplication

![Flowchart for Even or Odd Integers With Integer Division and Multiplication](/assignment_02/03_02_even_or_odd_integers_divide_multiply/even_or_odd_integers_divide_multiply_flowchart.png)

```c
// ALgorithm for the program: even_or_odd_integers_divide_multiply
// 1. Begin.
// 2. Read in the value of an integer, store it in number.
// 3. Do an integer divsion on number, divide it by 2 and store it in test_number.
// 4. Multiply test_number by 2 as an integer and assign it back to test_number.
// 5. If test_number == number, go to the next step, otherwise go to step 8.
// 6. Write number " is even." to the output.
// 7. Go to step 9.
// 8. Write number " is odd." to the output.
// 9. End.


#include <stdio.h>

int main (void)
{
	int number, test_number;
	
	printf("Enter an integer: ");
	scanf("%d", &number);
	
	test_number = number / 2;
	test_number *= 2;
	
	if (test_number == number)
	{
		printf("%d is even.\n", number);
	}
	else
	{
		printf("%d is odd.\n", number);
	}
	
	return 0;
}
```

```c
// Input & Output 1
// 
// Input
// Enter an integer: 55
//
// Output
// 55 is odd.

// Input & Output 2
// 
// Input
// Enter an integer: 8
// 
// Output
// 8 is even.

// Input & Output 3
//
// Input
// Enter an integer: 1158
//
// Output
// 1158 is even.
```


### 03-03 With Repeated Subtraction By 2

![Flowchart for Even or Odd Integers With Repeated Subtraction By 2](/assignment_02/03_03_even_or_odd_integers_repeated_subtraction_by_2/even_or_odd_integers_repeated_subtraction_by_2_flowchart.png)

```c
// ALgorithm for the program: even_or_odd_integers_repeated_subtraction_by_2
// 1. Begin.
// 2. Read the value of an integer, store it in number.
// 3. If number is greater than 0, go to the next step, otherwise go to step 6.
// 4. Assign the value of number subtracted by 2 back to number itself.
// 5. Go to step 3.
// 6. If number is equal to 0, go to next step, otherwise go to step 9.
// 7. Write "even" to output.
// 8. Go to step 10.
// 9. Write "odd" to output.
// 10. End.


#include <stdio.h>

int main (void)
{
	int number;
	
	printf("Enter an integer: ");
	scanf("%d", &number);
	
	printf("%d is ", number);
		
	for (; number > 0; number -= 2) {}
	
	if (number == 0) 
	{
		printf("even.\n");
	}
	else
	{
		printf("odd.\n");
	}
	
	return 0;
}
```

```c
// Input & Output 1
//
// Input
// Enter an integer: 121
//
// Output
// 121 is odd.

// Input & Output 2
//
// Input
// Enter an integer: 656
// 
// Output
// 656 is even.

// Input & Output 3
// 
// Input
// Enter an integer: 12345
//
// Output
// 12345 is odd.
```


## 04 Largest and Smallest Numbers from a Few Numbers.

![Flowchart for Largest and Smallest Numbers from a Few Numbers](/assignment_02/04_few_numbers_largest_smallest/few_numbers_largest_smallest_flowchart.png)

```c
// Algorithm for the program: few_numbers_largest_smallest
// 1. Begin.
// 2. Assign the smallest possible float to variable largest.
// 3. Assign the largest possible float to variable smallest.
// 4. Assign 0 to input_count.
// 5. Read in the value of a number, store it in number.
// 6. If scanf("%f", &number) does not equal 0, number is not invalid,
//    go to the next step, otherwise go to step 13.
// 7. If largest is less than number, go to the next step, otherwise go to step 9.
// 8. Assign number to largest.
// 9. If smallest is greater than number, go to the next step, otherwise go to step 11.
// 10. Assign number to smallest.
// 11. Assign input_count + 1 back to input_count itself.
// 12. Go back to step 5.
// 13. If input_count is greater than or equal to 2 and largest subtracted by smallest 
//     is greater than 0.001, go to the next step, otherwise go to step 17.
// 14. Write largest to output.
// 15. Write smallest to output.
// 16. Go to step 18.
// 17. Write an error message to output.
// 18. End.


#include <stdio.h>
#include <float.h>

int main (void) 
{   
    float number, largest = -FLT_MAX, smallest = FLT_MAX;
       
    printf("Enter at least 2 real numbers, separated by the ENTER key, enter anything else to stop:\n");    
    
    int input_count;
    for (input_count = 0; scanf("%f", &number) != 0; ++input_count)
    {     
        if (largest < number) 
        {
            largest = number;            
        }
        
        if (smallest > number)
        {            
            smallest = number;            
        }
    }    
    
    if (input_count >= 2 && (largest - smallest) > 0.001)
    {
        printf("\n%.2f is the largest number.\n", largest);
        printf("%.2f is the smallest number.", smallest);     
    }
    else 
    {
        printf("\nError: Fewer than 2 real numbers entered, failed to make comparison.\n");
    }
    
    return 0;
}
```

```c
// Input & Output 1
//
// Input
// Enter at least 2 real numbers, separated by the ENTER key, enter anything else to stop:
// 9
// 6.3
// 3.141592654
// 36.9
// -55
// -98
// 6
// a
//
// Output
//
// 36.90 is the largest number.
// -98.00 is the smallest number.

// Input & Output 2
//
// Input
// Enter at least 2 real numbers, separated by the ENTER key, enter anything else to stop:
// 9
// a
//
// Output
// 
// Error: Fewer than 2 real numbers entered, failed to make comparison.

// Input & Output 3
//
// Input
// Enter at least 2 real numbers, separated by the ENTER key, enter anything else to stop:
// 3.333333
// 1.17154
// -985.63
// 845
// 1000000
// *
//
// Output
//
// 1000000.00 is the largest number.
// -985.63 is the smallest number.
```


## 05 Three Integers: Sum, Average, Product, Smallest and Largest Numbers

![Flowchart for Three Integers: Sum, Average, Product, Smallest and Largest Numbers](/assignment_02/05_three_integers_largest_smallest/three_integers_largest_smallest_flowchart.png)

```c
// Algorithm for the program: three_integers_largest_smallest
// 1. Begin.
// 2. Assign 3 to NUMBER_OF_INPUTS as a constant.
// 3. Assign 0 to sum.
// 4. Assign 1 to product.
// 5. Assign the smallest possible integer to largest.
// 6. Assign the largest possible integer to smallest.
// 7. Assign 0 to i.
// 8. If i is less than NUMBER_OF_INPUTS, go to the next step, otherwise go to step 19.
// 9. Read in the value of an integer, store it in number.
// 10. If scanf("%d", &number) does not equal 0, number is not invalid, go to the next step,
//     otherwise go to step 19.
// 11. If largest is less than number, go to the next step, otherwise go to step 13.
// 12. Assign number to largest.
// 13. If smallest is greater than number, go to the next step, otherwise to go step 15.
// 14. Assign number to smallest.
// 15. Add number to sum and assign the value to sum.
// 16. Mutliply product by number and assign the value to product.
// 17. Add 1 to i and assign back to i.
// 18. Go back to step 8.
// 19. Multiply sum by 1.0 then divide by NUMBER_OF_INPUTS then assign to average.
// 20. Write the value of sum to the output.
// 21. If the value of sum can be evenly divided by NUMBER_OF_INPUTS, go to the next step, 
//     otherwise go to step 24.
// 22. Write the value of average with no decimal places to the output.
// 23. Go to step 25.
// 24. Write the value of average with 2 decimal places to the output.
// 25. Write the value of product to the output.
// 26. Write the value of smallest to the output.
// 27. Write the value of largest to the output.
// 28. End.


#include <stdio.h>
#include <limits.h>

int main (void)
{
    const int NUMBER_OF_INPUTS = 3;
    int number, sum = 0, product = 1, largest = INT_MIN, smallest = INT_MAX;
    float average;
    
    printf("Input three different integers: ");
    
    int i;
    for (i = 0; i < NUMBER_OF_INPUTS && scanf("%d", &number) != 0; ++i) 
    {
        if (largest < number) 
        {
            largest = number;    
        }
        
        if (smallest > number) 
        {
            smallest = number;
        }
        
        sum += number;
        product *= number;
    }
    average = sum * 1.0 / NUMBER_OF_INPUTS;
    
    printf("Sum is %d\n", sum);
    if ((int) sum % NUMBER_OF_INPUTS == 0)
    {
        printf("Average is %.0f\n", average);
    }
    else
    {
        printf("Average is %.2f\n", average);
    }
    printf("Product is %d\n", product);
    printf("Smallest is %d\n", smallest);
    printf("Largest is %d", largest);
    
    return 0;
}
```

```c
// Input & Output 1
// 
// Input
// Input three different integers: 13 27 14
//
// Output
// Sum is 54
// Average is 18
// Product is 4914
// Smallest is 13
// Largest is 27

// Input & Output 2
//
// Input
// Input three different integers: 956
// 56
// 1
//
// Output
// Sum is 1013
// Average is 337.67
// Product is 53536
// Smallest is 1
// Largest is 956

// Input & Output 3
//
// Input
// Input three different integers: 11 25 899
//
// Output
// Sum is 935
// Average is 311.67
// Product is 247225
// Smallest is 11
// Largest is 899
```