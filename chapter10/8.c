#include <stdio.h>

void copy_arr(double * tar, double * src , int size);

int main(void)
{
	int index;
	double source[7] = {1, 2, 3, 4, 5, 6, 7};
	double target[3];
	copy_arr(target, source + 2, 3);
	for(index = 0; index < 3; index++)
		printf("%lg ", target[index]);
	putchar('\n');

	return 0;
}

void copy_arr(double * tar, double * src , int size)
{
	int c;
	for(c = 0; c < size; c++)
		tar[c] = src[c];
	return;
}
