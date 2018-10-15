#include <stdio.h>

double array_max_min(const double * ar, int size);

int main(void)
{
	int index; 
	double output, input[5];
	printf("Please enter 5 integers: \n");
	for(index = 0; index < 5; index++)
		scanf("%lf", &input[index]);
	output = array_max_min(input, 5);
	printf("MAX - MIN = %lg\n", output);

	return 0;
}

double array_max_min(const double * ar, int size)
{
	int c;
	double max = *ar;
	double min = *ar;
	for(c = 0; c < size; c++)
	{
		max = max > *(ar + c) ? max : *(ar + c);
		min = min < *(ar + c) ? min : *(ar + c);
	}
	return max - min;
}
