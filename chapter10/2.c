#include <stdio.h>

void copy_arr(double * tar, double * src, int size);
void copy_ptr(double * tar, double * src, int size);
void copy_ptrs(double * tar, double * src1, double *src2);

int main(void)
{
	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5], target2[5], target3[5];
	copy_arr(target1, source, 5);
	copy_ptr(target2, source, 5);
	copy_ptrs(target3, source, source+5);
	int index;
	for(index = 0; index < 5; index++)
		printf("%g ", target1[index]);
	putchar('\n');
	for(index = 0; index < 5; index++)
		printf("%g ", target2[index]);
	putchar('\n');
	for(index = 0; index < 5; index++)
		printf("%g ", target3[index]);
	putchar('\n');

	return 0;
}

void copy_arr(double * tar, double * src, int size)
{
	int c;
	for(c = 0; c < size; c++)
		tar[c] = src[c];
	return;
}

void copy_ptr(double * tar, double * src, int size)
{
	int c;
	for(c = 0; c < size; c++)
		*(tar+c) = *(src+c);
	return;
}

void copy_ptrs(double * tar, double * src1, double *src2)
{
	while(src1 < src2)
	{
		*tar = *src1;
		tar++;
		src1++;
	}
	return;
}
