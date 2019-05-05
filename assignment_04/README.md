# Assignment 04

*Compiled with TDM-GCC 5.1.0. Project files are located in their respective folders, to be opened with [Orwell Dev-C++](https://sourceforge.net/projects/orwelldevcpp/), the IDE used in this SCSJ1013 Programming Techniques I class.*

```c
// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian
```

## 01 Arithmetic With Functions

![Flowchart for Arithmetic With Functions](/assignment_04/01_arithmetic_with_functions/arithmetic_with_functions_flowchart.png)

```c
// Algorithm for the program: arithmetic_with_functions
// 1. Begin.
// 2. Declare and define a function called add that has two arguments of float type and returns the sum of two numbers.
// 3. Declare and define a function called subtract that has two arguments of float type and returns the difference of two numbers.
// 4. Declare and define a function called multiply that has two arguments of float type and returns the product of two numbers.
// 5. Declare and define a function called divide that has two arguments of float type and returns the quotient of two numbers.
// 6. Read in two numbers and store them in num_1 and num_2.
// 7. Pass the value of num_1 and the value of num_2 to the function add, then write its return value to the output.
// 8. Pass the value of num_1 and the value of num_2 to the function subtract, then write its return value to the output.
// 9. Pass the value of num_1 and the value of num_2 to the function multiply, then write its return value to the output.
// 10. Pass the value of num_1 and the value of num_2 to the function divide, then write its return value to the output.
// 11. End.


#include <stdio.h>

float add (float, float);
float subtract (float, float);
float multiply (float, float);
float divide (float, float);

int main (void) 
{
	float num_1, num_2;
	
	printf("Enter two numbers: ");
	scanf("%f%f", &num_1, &num_2);
	
	printf("Their sum is: %.2f\n", add(num_1, num_2));
	printf("Their difference is: %.2f\n", subtract(num_1, num_2));
	printf("Their product is: %.2f\n", multiply(num_1, num_2));
	printf("Their quotient is: %.2f\n", divide(num_1, num_2));
	
	return 0;
}

float add (float num_1, float num_2)
{
	return num_1 + num_2;
}

float subtract (float num_1, float num_2)
{
	return num_1 - num_2;
}

float multiply (float num_1, float num_2)
{
	return num_1 * num_2;
}

float divide (float num_1, float num_2)
{
	return num_1 / num_2;
}

```

```c
// Input & Output 1
// 
// Input
// Enter two numbers: 5 6
//
// Output
// Their sum is: 11.00
// Their difference is: -1.00
// Their product is: 30.00
// Their quotient is: 0.83

// Input & Output 2
// 
// Input
// Enter two numbers: 3.14159 1.61803
//
// Output
// Their sum is: 4.76
// Their difference is: 1.52
// Their product is: 5.08
// Their quotient is: 1.94

// Input & Output 3
// 
// Input
// Enter two numbers: 2.71828 1.41421
//
// Output 
// Their sum is: 4.13
// Their difference is: 1.30
// Their product is: 3.84
// Their quotient is: 1.92
```

## 02 Electricity Bill

```c
// Algorithm for the program: electricity_bill
// 1. Begin.
// 2. Open a file for reading, name it "bill_input_file".
// 3. Open a file for writing, name it "bill_output_file".
// 4. Assign 1 to i.
// 5. If i is less than or equal to 5, go to next step, otherwise go to step 23.
// 6. Read in the value of total units used from the file "bill_input_file", store it in total_units_used.
// 7. If total_units_used is less than or equal to BOUND_1, go to next step, otherwise go to step 10.
// 8. Let payment_required = total_units_used * TARIFF_1 / 100.0
// 9. Go to step 20.
// 10. If total_units_used is less than or equal to BOUND_2, go to next step, otherwise go to step 13.
// 11. Let payment_required = 43.6 + (total_units_used - BOUND_1) * TARIFF_2 / 100.0
// 12. Go to step 20.
// 13. If total_units_used is less than or equal to BOUND_3, go to next step, otherwise go to step 16.
// 14. Let payment_required = 43.6 + TARIFF_2 + (total_units_used - BOUND_2) * TARIFF_3 / 100.0
// 15. Go to step 20. 
// 16. If total_units_used is less than or equal to BOUND_4, go to next step, otherwise go to step 19.
// 17. Let payment_required = 43.6 + TARIFF_2 + 154.8 + (total_units_used - BOUND_3) * TARIFF_4 / 100.0
// 18. Go to step 20.
// 19. Let payment_required = 43.6 + TARIFF_2 + 154.8 + 163.8 + (total_units_used - BOUND_4) * TARIFF_5 / 100.0
// 20. Write total_units_used and payment_required to the file "bill_output_file".
// 21. Increment i by 1 and assign the value back to i.
// 22. Go to step 5.
// 23. Close the file "bill_input_file".
// 24. Close the file "bill_output_file".
// 25. End.


#include <stdio.h>
#include <math.h>

int main()
{		
	// 0 to 200: 21.8
	// 201 to 300: 33.4
	// 301 to 600: 51.6
	// 601 to 900: 54.6
	// more than 900: 57.1


	float total_units_used, payment_required;
	
	const float BOUND_1 = 200.0;
	const float BOUND_2 = 300.0;
	const float BOUND_3 = 600.0;
	const float BOUND_4 = 900.0;
	
	const float TARIFF_1 = 21.8;
	const float TARIFF_2 = 33.4;
	const float TARIFF_3 = 51.6;
	const float TARIFF_4 = 54.6;
	const float TARIFF_5 = 57.1;
	
	FILE *input_file = fopen("bill_input_file", "r");
	FILE *output_file = fopen("bill_output_file", "w");
	
	fprintf(output_file, "==================================\n");
	
	int i;
	for (i = 1; i <= 5; ++i)
	{
		fscanf(input_file, "%f", &total_units_used);
		
		if (total_units_used <= BOUND_1)
		{
			payment_required = total_units_used * TARIFF_1 / 100.0;
		}
		else if (total_units_used <= BOUND_2)
		{
			payment_required = 43.6 + (total_units_used - BOUND_1) * TARIFF_2 / 100.0;
		}
		else if (total_units_used <= BOUND_3)
		{
			payment_required = 43.6 + TARIFF_2 + (total_units_used - BOUND_2) * TARIFF_3 / 100.0;
		}
		else if (total_units_used <= BOUND_4)
		{
			payment_required = 43.6 + TARIFF_2 + 154.8 + (total_units_used - BOUND_3) * TARIFF_4 / 100.0;
		}
		else
		{
			payment_required = 43.6 + TARIFF_2 + 154.8 + 163.8 + (total_units_used - BOUND_4) * TARIFF_5 / 100.0;
		}
		
		fprintf(output_file, "Total units consumed is %.2f kWh\n", total_units_used);
		fprintf(output_file, "Total payment required is RM%.2f\n\n", payment_required);
		fprintf(output_file, "==================================\n");
	}
	
	fclose(input_file);
	fclose(output_file);
	
	return 0;
}

```

```c
// Input & Output 1
// 
// Input (from the file "bill_input_file")
// 592.168
// 327.0
// 200.1
// 478.2
// 804.1415
//
// Output (from the file "bill_output_file")
// ==================================
// Total units consumed is 592.17 kWh
// Total payment required is RM227.76
//
// ==================================
// Total units consumed is 327.00 kWh
// Total payment required is RM90.93
//
// ==================================
// Total units consumed is 200.10 kWh
// Total payment required is RM43.63
//
// ==================================
// Total units consumed is 478.20 kWh
// Total payment required is RM168.95
//
// ==================================
// Total units consumed is 804.14 kWh
// Total payment required is RM343.26
//
// ==================================
//
```
