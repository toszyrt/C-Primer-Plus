#include <stdio.h>
#define COLS 5

void show_arr2(const int ar[][COLS], int rows);
void double_arr2(int ar[][COLS], int rows);

int main(void)
{
    int source[3][5] =
    {
        {1, 2, 3, 4, 5},
        {3, 4, 5, 6, 7},
        {5, 6, 7, 8, 9},
    };
	printf("The original array: \n");
	show_arr2(source, 3);
	double_arr2(source, 3);
	printf("The present array: \n");
	show_arr2(source, 3);
	
	return 0;
}

void show_arr2(const int ar[][COLS], int rows)
{
	int r, c;
	for(r = 0; r < rows; r++)
	{
		for(c = 0; c < COLS; c++)
			printf("%2d ", ar[r][c]);
		putchar('\n');
	}
	return;
}

void double_arr2(int ar[][COLS], int rows)
{
	int r, c;
	for(r = 0; r < rows; r++)
		for(c = 0; c < COLS; c++)
			ar[r][c] *= 2;
	return;
}
