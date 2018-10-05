#include <stdio.h>

int main(void)
{
	int i,min,max;
	int square,cube;
	printf("Enter the starting integer: ");
	scanf("%d",&min);
	printf("Enter the ending integer: ");
	scanf("%d",&max);
	printf("%3s %6s %9s\n","num","square","cube");
	for(i=min;i<=max;i++)
	{
		square = i*i;
		cube = square*i;
		printf("%3d %6d %9d\n",i,square,cube);
	}

	return 0;
}
