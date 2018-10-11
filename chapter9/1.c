#include <stdio.h>

double min(double, double);

int main(void)
{
	double a, b;
	while((scanf("%lf %lf", &a, &b)) == 2)
		printf("min = %.2lf\n", min(a,b));

	return 0;
}

double min(double x, double y)
{
	return (x < y ? x : y);
}
