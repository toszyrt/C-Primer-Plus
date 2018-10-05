#include <stdio.h>

int main(void)
{
	int index,number[8];
	int tmp = 2;
	for(index=0;index<8;index++)
	{
		number[index] = tmp;
		tmp *=2;
	}
	index = 0;
	do
		printf("%d ",number[index++]);
	while(index<8);
	printf("\n");

	return 0;
}
