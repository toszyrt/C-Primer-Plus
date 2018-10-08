#include <stdio.h>

int main(void)
{
	char last,now;
	int times=0;
	printf("Please enter a text to be analyzed(# to stop): \n");
	while((now=getchar()) != '#')
	{
		if(last == 'e')
			if(now == 'i')
				times++;
		last = now;
	}
	printf("ei has appeared %d times.\n",times);

	return 0;
}
