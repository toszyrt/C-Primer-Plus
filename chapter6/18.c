#include <stdio.h>

int main(void)
{
	int week=0,friend=5;
	while(friend<=150)
	{
		week++;
		friend = (friend-week)*2;
		printf("week:%d  friend:%d\n",week,friend);
	}

	return 0;
}
