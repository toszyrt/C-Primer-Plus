#include <stdio.h>

void array2_store(int rows, int cols, double ar[rows][cols]);
void array2_show(int rows, int cols, const double ar[rows][cols]);
double array_avg(const double ar[], int size);
double array2_avg(int rows, int cols, const double ar[rows][cols]);
double array2_max(int rows, int cols, const double ar[rows][cols]);

int main(void)
{
	double tmp, avg, max;
	double input[3][5];
	array2_store(3, 5, input);
	array2_show(3, 5, input);
	for(int index = 0; index < 3; index++)
	{
		tmp = array_avg(input[index], 5);
		printf("average value of row%d: %2lg\n", index, tmp);
	}
	avg = array2_avg(3, 5, input);
	printf("\naverage value: %2lg\n", avg);
	max = array2_max(3, 5, input);
	printf("\nlargest value: %2lg\n", max);

	return 0;
}

void array2_store(int rows, int cols, double ar[rows][cols])
{
	printf("Please enter a 3x5 array: \n");
	for(int r = 0; r < rows; r++)
		for(int c = 0; c < cols; c++)
			scanf("%lf", &ar[r][c]);
	return;
}

void array2_show(int rows, int cols, const double ar[rows][cols])
{
	printf("\narray contents: \n");
	for(int r = 0; r < rows; r++)
	{
		for(int c = 0; c < cols; c++)
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

double array2_avg(int rows, int cols, const double ar[rows][cols])
{
	double total = 0;
	for(int r = 0; r < rows; r++)
		for(int c = 0; c < cols; c++)
			total += ar[r][c];

	return total / (rows * cols);
}

double array2_max(int rows, int cols, const double ar[rows][cols])
{
	double max = ar[0][0];
	for(int r = 0; r < rows; r++)
		for(int c = 0; c < cols; c++)
		{
			if(max < ar[r][c])
				max = ar[r][c];
		}

	return max;
}
