#include <stdio.h>
#define times 3.156e-23

int main(void)
{
	int quarts;
	printf("Please enter the quart of the water: ");
	scanf("%d",&quarts);
	printf("There are %e hydrones in the %d quarts water.\n"
										,quarts*950/times,quarts);

	return 0;
}
