#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	double base = atof(argv[1]);
	int power = atoi(argv[2]);
	double res = pow(base, (double)power);
	printf("(%lg)^(%d) = %lg\n", base, power, res);

	return 0;
}
