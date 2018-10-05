#include <stdio.h>

int main(void)
{
	int index,number[8];
	printf("Enter 8 integers: \n");
	for(index=0;index<8;index++)
		scanf("%d",number+index);
	printf("The opposite order: \n");
	for(index=0;index<8;index++)
		printf("%d ",number[7-index]);
	printf("\n");

	return 0;
}
