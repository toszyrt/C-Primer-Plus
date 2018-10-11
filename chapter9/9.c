#include <stdio.h>

double power(double, int);

int main(void)
{
	double x, xpow;
	int exp;
	printf("Please enter 2 numbers such as 3 2,\n");
	printf("I will calculate 3^2 for you!\n");
	while(scanf("%lf %d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("%g^%d = %g\n", x, exp, xpow);
		printf("Next 2 numbers(q to quit): \n");
	}
	printf("see you later ^_^\n");

	return 0;
}

double power(double n, int p)
{
	double pow;
	int i;
	if(p > 0)
		pow = n*power(n, p-1);
	else if(p < 0)
	{
		if(n != 0)
			pow = 1/n*power(n, p+1);
		else
			pow = 0;
	}
	else
		return 1;

	return pow;
}
