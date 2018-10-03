#include <stdio.h>
#define times 3.156e+7

int main(void)
{
	int ages;
	printf("Please enter your ages: ");
	scanf("%d",&ages);
	printf("%d years old is for %e seconds.\n",ages,ages*times);

	return 0;
}
