#include <stdio.h>
#include <math.h>
void transform(double src [], double tar [], int n, double(* pf)(double));

int main(void)
{
	double source[100], target[100];
	for(int i = 0; i < 10; i++)
		source[i] = i + 1;
	transform(source, target, 10, sqrt);
	for(int i = 0; i < 10; i++)
		printf("%.2lf ", target[i]);
	putchar('\n');

	return 0;
}

void transform(double src [], double tar [], int n, double(* pf)(double))
{
	for(int i = 0; i < n; i++)
		tar[i] = pf(src[i]);
	return;
}
