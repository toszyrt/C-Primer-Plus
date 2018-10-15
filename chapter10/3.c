#include <stdio.h>

int array_max(const int * ar, int size);

int main(void)
{
	int index, output;
	int input[5];
	printf("Please enter 5 integers: \n");
	for(index = 0; index < 5; index++)
		scanf("%d", &input[index]);
	output = array_max(input, 5);
	printf("The biggest is: %d\n", output);

	return 0;
}

int array_max(const int * ar, int size)
{
	int c;
	int max = *ar;
	for(c = 0; c < size; c++)
		max = max > *(ar+c) ? max : *(ar+c);
	
	return max;
}
