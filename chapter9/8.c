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
		printf("%.1lf^%d = %.1lf\n", x, exp, xpow);
		printf("Next 2 numbers(q to quit): \n");
	}
	printf("see you later ^_^\n");

	return 0;
}

double power(double n, int p)
{
	double pow = 1;
	int i;
	if(p > 0)
	{
		for(i = 1; i <= p; i++)
			pow *= n;
	}
	else if(p < 0)
	{
		if(n != 0)
		{
			for(i =1; i <= -p; i++)
				pow *= n;
			pow = 1/pow;
		}
		else
			pow = 0;
	}
	else
	{
		if(n != 0)
			pow = 1;
		else
		{
			printf("0^0 is undefined!\n");
			pow = 1;
		}
	}

	return pow;
}
