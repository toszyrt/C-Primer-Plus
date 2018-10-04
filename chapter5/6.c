#include <stdio.h>

int main(void)
{
	int i = 0, money = 0;
	int day;
	printf("Please enter the work days: ");
	scanf("%d",&day);
	while(i++ < day)
		money += i*i;
	printf("You now have $%d.\n",money);

	return 0;
}

