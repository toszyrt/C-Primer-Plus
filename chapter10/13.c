#include <stdio.h>

void array2_store(double ar[][5], int rows);
void array2_show(const double ar[][5], int rows);
double array_avg(const double ar[], int size);
double array2_avg(const double ar[][5], int rows);
double array2_max(const double ar[][5], int rows);

int main(void)
{
	double tmp, avg, max;
	double input[3][5];
	array2_store(input, 3);
	array2_show(input, 3);
	for(int index = 0; index < 3; index++)
	{
		tmp = array_avg(input[index], 5);
		printf("average value of row%d: %2lg\n", index, tmp);
	}
	avg = array2_avg(input, 3);
	printf("\naverage value: %2lg\n", avg);
	max = array2_max(input, 3);
	printf("\nlargest value: %2lg\n", max);

	return 0;
}

void array2_store(double ar[][5], int rows)
{
	printf("Please enter a 3x5 array: \n");
	for(int r = 0; r < rows; r++)
		for(int c = 0; c < 5; c++)
			scanf("%lf", &ar[r][c]);
	return;
}

void array2_show(const double ar[][5], int rows)
{
	printf("\narray contents: \n");
	for(int r = 0; r < rows; r++)
	{
		for(int c = 0; c < 5; c++)
			printf("%2lg ", ar[r][c]);
		putchar('\n');
	}
	putchar('\n');
	return;
}

double array_avg(const double ar[], int size)
{
	double subtot = 0;
	for(int i = 0; i < size; i++)
		subtot += ar[i];
	
	return subtot / size;
}

double array2_avg(const double ar[][5], int rows)
{
	double total = 0;
	for(int r = 0; r < rows; r++)
		for(int c = 0; c < 5; c++)
			total += ar[r][c];

	return total / (5 * rows);
}

double array2_max(const double ar[][5], int rows)
{
	double max = ar[0][0];
	for(int r = 0; r < rows; r++)
		for(int c = 0; c < 5; c++)
		{
			if(max < ar[r][c])
				max = ar[r][c];
		}

	return max;
}
