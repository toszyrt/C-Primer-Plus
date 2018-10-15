#include <stdio.h>

void array_sum(const int *, const int *, int *, int);

int main(void)
{
	int source1[5] = {1, 2, 3, 4, 5};
	int source2[5] = {2, 3, 4, 5, 6};
	int result[5];
	array_sum(source1, source2, result, 5);
	for(int index = 0; index < 5; index++)
		printf("%d ", result[index]);
	putchar('\n');

	return 0;
}

void array_sum(const int * src1, const int * src2, int * res, int size)
{
	for(int c = 0; c < size; c++)
		res[c] = src1[c] + src2[c];
	return;
}
