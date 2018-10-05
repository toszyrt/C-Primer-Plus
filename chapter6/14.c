#include <stdio.h>

int main(void)
{
	double array1[8],array2[8];
	printf("Enter 8 numbers: ");
	int index;
	for(index=0;index<8;index++)
		scanf("%lf",&array1[index]);
//	double tmp = 0;
	array2[0] = array1[0];
	for(index=1;index<8;index++)
		array2[index] = array2[index-1]+array1[index];
//	{
//		array2[index] = tmp+array1[index];
//		tmp = array2[index];
//	}
	for(index=0;index<8;index++)
		printf("%6.1lf ",array1[index]);
	printf("\n");
	for(index=0;index<8;index++)
		printf("%6.1lf ",array2[index]);
	printf("\n");

	return 0;
}
