#include <stdio.h>

int main(void)
{
	char ch = 'F';
	int i,j;
	for(i=1;i<=6;i++)
	{
		for(j=0;j<i;j++)
			printf("%c",ch-j);
		printf("\n");
	}

	return 0;
}
