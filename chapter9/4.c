#include <stdio.h>

double avg_h(double, double);

int main(void)
{
	double a, b;
	printf("Please enter 2 numbers: \n");
	while(scanf("%lf %lf", &a, &b))
		printf("avg_h(%.1f, %.1f) = %.2lf\n", a, b, avg_h(a, b));
	
	return 0;
}

double avg_h(double x, double y)
{
	return 1/((1/x + 1/y)/2);
}
