#include <stdio.h>
#define SIZE 5

void show_arr(const double * ar, int size);
void revert_arr(double * ar, int size);

int main(void)
{
	int index;
	double input[SIZE];
	printf("Please enter 5 numbers: \n");
	for(index = 0; index < SIZE; index++)
		scanf("%lf", &input[index]);
	printf("The original array is: \n");
	show_arr(input, SIZE);
	revert_arr(input, SIZE);
	printf("The present array is: \n");
	show_arr(input, SIZE);

	return 0;
}

void show_arr(const double * ar, int size)
{
	int c;
	for(c = 0; c < size; c++)
		printf("%lg ", ar[c]);
	putchar('\n');
	return;
}

void revert_arr(double * ar, int size)
{
	int c;
	double tmp;
	for(c = 0; c < size/2; c++)
	{
		tmp = ar[c];
		ar[c] = ar[size - 1 - c];
		ar[size - 1 - c] = tmp;
	}
	return;
}
