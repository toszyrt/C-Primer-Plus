#include <stdio.h>

double squart(double);

int main(void)
{
	double input;
	printf("Please enter a number: ");
	scanf("%lf",&input);
	squart(input);

	return 0;
}

double squart(double x)
{
	double y;
	y = x*x*x;
	printf("The cube of %f is %f\n",x,y);

	return y;
}
