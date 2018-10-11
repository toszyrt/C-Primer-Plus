#include <stdio.h>

void larger_of(double *, double *);

int main(void)
{
	double a, b;
	printf("Please enter 2 numbers: \n");
	while(scanf("%lf %lf", &a, &b) == 2)
	{
		printf("Originally a = %.1f and b = %.1f.\n", a, b);
		larger_of(&a, &b);
		printf("Now        a = %.1f and b = %.1f.\n", a, b);
		printf("Next 2 numbers(q to quit): \n");
	}
	printf("Bye!\n");

	return 0;
}

void larger_of(double * ptr1,double * ptr2)
{
	*ptr1 = *ptr1 > *ptr2 ? *ptr1 : *ptr2;
	*ptr2 = *ptr1;
}
