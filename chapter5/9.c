#include <stdio.h>

void Temperatures(double);

int main(void)
{
	double temp;
	printf("Enter the temperature in the FT(q to quit): ");
	while(scanf("%lf",&temp))
	{
		Temperatures(temp);
		printf("Enter the temperature in the FT(q to quit): ");
	}
	printf("Bye!\n");

	return 0;
}

void Temperatures(double ft)
{
	double ct,kt;
	ct = 5.0/9.0*(ft-32.0);
	kt = ct+273.16;
	printf("FT = %.2f\nCT = %.2f\nKT = %.2f\n",ft,ct,kt);
}
