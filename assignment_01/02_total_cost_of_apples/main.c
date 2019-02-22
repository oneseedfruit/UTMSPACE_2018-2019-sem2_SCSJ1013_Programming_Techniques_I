// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian

// Algorithm for the program: total_cost_of_apples
// 1. Begin.
// 2. Read in the value for the amount in kg of the apples, store it in amount.
// 3. Read in the value for the cost per kg of the apples in RM, store it in cost_per_kg.
// 4. Calculate the total cost of apples in RM by multiplying amount by cost_per_kg, store it in total.
// 5. Write the value of total to the output.
// 6. End.

#include <stdio.h>

int main () 
{
	float amount, cost_per_kg, total;
	
	printf("How many kg of apples? ");
	scanf("%f", &amount);
	printf ("Cost per kg? RM");
	scanf("%f", &cost_per_kg);
	
	total = amount * cost_per_kg;
	
	printf("Total cost of apples is RM%0.2f.\n", total);
	
	return 0;
}
