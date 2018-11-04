#include <stdio.h>
#include <time.h>

int main(void)
{
	clock_t t1 = clock();
	printf("t1 = %lu\n", t1);
	for(int i = 0; i < 1e9; i++)
		continue;
	clock_t t2 = clock();
	printf("t2 = %lu\n", t2);
	printf("CLOCKS_PER_SEC = %lu\n", CLOCKS_PER_SEC);
	printf("t2 - t1 = %lu %.2lfs\n", t2 - t1, (double)(t2 - t1) / CLOCKS_PER_SEC);

	return 0;
}
