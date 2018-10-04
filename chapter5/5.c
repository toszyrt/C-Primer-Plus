#include <stdio.h>

int main(void)
{
	int i = 0, money = 0;
	int day;
	printf("Please enter the days you have spent: ");
	scanf("%d",&day);
	while(i++ < day)
		money = money+i;
	printf("You now have $%d.\n",money);

	return 0;
}
