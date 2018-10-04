#include <stdio.h>
#define hour_min 60

int main(void)
{
	int time,hour,min;
	printf("Enter the time in the minutes: ");
	scanf("%d",&time);
	while(time > 0)
	{
		hour = time/hour_min;
		min = time%hour_min;
		printf("%d minutes is equal to %d hours and %d minutes.\n",
			time,hour,min);
		printf("Enter the time in the minutes: ");
		scanf("%d",&time);
	}
	printf("Bye!\n");
	
	return 0;
}
