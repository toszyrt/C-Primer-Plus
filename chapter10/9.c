#include <stdio.h>

void show_arr2(int rows, int cols, const double ar[rows][cols]);
void copy_arr2(int rows, int cols, const double src[rows][cols], double tar[rows][cols]);

int main(void)
{
    const double source[3][5] =
    {
        {1, 2, 3, 4, 5},
        {3, 4, 5, 6, 7},
        {5, 6, 7, 8, 9},
    };
	double target[3][5];
	copy_arr2(3, 5, source, target);
	show_arr2(3, 5, target);
	
	return 0;
}

void show_arr2(int rows, int cols, const double ar[rows][cols])
{
	int r, c;
	for(r = 0; r < rows; r++)
	{
		for(c = 0; c < cols; c++)
			printf("%4.1lf ", ar[r][c]);
		putchar('\n');
	}
	return;
}

void copy_arr2(int rows, int cols, const double src[rows][cols], double tar[rows][cols])
{
	int r, c;
	for(r = 0; r < rows; r++)
		for(c = 0; c < cols; c++)
			tar[r][c] = src[r][c];
	return;
}
