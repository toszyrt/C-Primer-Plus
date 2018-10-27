#include <stdio.h>
int called_times(void);
//int times = 0;

int main(void)
{
	int count;
	for(int i = 0; i < 10; i++)
		count = called_times();
	printf("function has been called %d times.\n", count);

	return 0;
}

int called_times(void)
{
	static int times = 0;
	return ++times;
}
