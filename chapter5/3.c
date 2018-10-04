#include <stdio.h>

int main(void)
{
	int input,week,day;
	printf("Please enter the number of days(<=0 to exit):");
	scanf("%d",&input);
	while(input > 0)
	{
		week = input/7;
		day = input%7;
		printf("%d days are %d weeks, %d days.\n",input,week,day);
		printf("Please enter the number of days(<=0 to exit):");
		scanf("%d",&input);
	}
	printf("Bye!\n");

	return 0;
}
