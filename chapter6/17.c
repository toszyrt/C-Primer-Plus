#include <stdio.h>

int main(void)
{
	float savings=100;
	int year=0;
	while(savings>0)
	{
		year++;
		savings = savings*1.08-10;
	}
	printf("%d years later,no money in the bank.\n",year);

	return 0;
}
