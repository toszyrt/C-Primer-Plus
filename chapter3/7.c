#include <stdio.h>

int main(void)
{
	int inches;
	printf("Please enter your height(inches): ");
	scanf("%d",&inches);
	printf("Your height is %f cm\n",inches*2.54);

	return 0;
}
