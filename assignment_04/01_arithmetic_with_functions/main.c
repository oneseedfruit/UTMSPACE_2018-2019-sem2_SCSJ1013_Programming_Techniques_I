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
