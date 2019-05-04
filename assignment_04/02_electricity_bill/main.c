#include <stdio.h>
#include <math.h>

// 0 to 200: 21.8
// 201 to 300: 33.4
// 301 to 600: 51.6
// 601 to 900: 54.6
// more than 900: 57.1

int main()
{	
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
	for (i = 1; i <= 5; i++)
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
