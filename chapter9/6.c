#include <stdio.h>

void small_big(double *, double *, double *);

int main(void)
{
	double x, y, z;
	printf("Please enter 3 numbers: \n");
	while(scanf("%lf %lf %lf", &x, &y, &z) == 3)
	{
		printf("Originally x = %3.1lf y = %3.1lf z = %3.1lf.\n", x, y, z);
		small_big(&x, &y, &z);
		printf("Now        x = %3.1lf y = %3.1lf z = %3.1lf.\n", x, y, z);
		printf("Next 3 numbers(q to quit): \n");
	}
	printf("Bye ^_^\n");

	return 0;
}

void small_big(double * ptr1, double * ptr2, double * ptr3)
{
	double min, mid, max;
	min = (*ptr1 < *ptr2 ? *ptr1 : *ptr2) < *ptr3 ? (*ptr1 < *ptr2 ? *ptr1 : *ptr2) : *ptr3;
	max = (*ptr1 > *ptr2 ? *ptr1 : *ptr2) > *ptr3 ? (*ptr1 > *ptr2 ? *ptr1 : *ptr2) : *ptr3;
	mid = *ptr1 + *ptr2 + *ptr3 - min - max;
	*ptr1 = min;
	*ptr2 = mid;
	*ptr3 = max;

	return;
}
