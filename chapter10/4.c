#include <stdio.h>

int array_max_sub(const double * ar, int size);

int main(void)
{
	int index, output;
	double input[5];
	printf("Please enter 5 integers: \n");
	for(index = 0; index < 5; index++)
		scanf("%lf", &input[index]);
	output = array_max_sub(input, 5);
	printf("The subscipt of biggest number is: %d\n", output);

	return 0;
}

int array_max_sub(const double * ar, int size)
{
	int c, sub;
	int max = *ar;
	for(c = 0; c < size; c++)
	{
		if(max <= *(ar + c))
		{
			max = *(ar + c);
			sub = c;
		}
	}	
	return sub;
}
