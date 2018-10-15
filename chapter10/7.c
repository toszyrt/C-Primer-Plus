#include <stdio.h>

void show_arr2(int rows, int cols, const double ar[rows][cols]);
void copy_arr(double * tar, const double * src , int size);

int main(void)
{
    const double rain[5][12] =
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };
	double target[5][12];
	int index;
	for(index = 0; index < 5; index++)
		copy_arr(target[index], rain[index], 12);
/*	copy_arr(target[0], rain[0], 12);
	copy_arr(target[1], rain[1], 12);
	copy_arr(target[2], rain[2], 12);
	copy_arr(target[3], rain[3], 12);
	copy_arr(target[4], rain[4], 12);
*/	show_arr2(5, 12, target);
	
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
void copy_arr(double * tar, const double * src , int size)
{
	int c;
	for(c = 0; c < size; c++)
		tar[c] = src[c];
	return;
}
