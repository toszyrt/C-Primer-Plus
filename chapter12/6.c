#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	for(int i = 0; i < 10; i++)
	{
		struct timespec mytime;
		clock_gettime(CLOCK_REALTIME, &mytime);
		int count[10] = {0};
		srand((unsigned int) mytime.tv_nsec);
		for(int j = 0; j < 1000; j++)
			count[rand() % 10]++;
		printf("The %2d test: \n", i + 1);
		for(int k = 0; k < 10; k++)
			printf("%3d(%d) ", count[k], k + 1);
		putchar('\n');
	}
	puts("good fortune to you!");

	return 0;
}
