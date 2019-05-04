// UTMSPACE_2018-2019-sem2_SCSJ1013_Programming_Techniques_I
// SX180357CSJS04
// Randy Tan Shaoxian

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

