#include <stdio.h>

int main(void)
{
	int integer;
	int i = 0;
	printf("Enter an integer: ");
	scanf("%d",&integer);
	while(i <= 10)
	{
		printf("%d ",integer+i);
		i++;
	}
	printf("\n");

	return 0;
}
