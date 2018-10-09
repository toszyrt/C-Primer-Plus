#include <stdio.h>

int main(void)
{
	int count = 0;
	char ch;
	while((ch=getchar()) != EOF)
	{
		putchar(ch);
		count++;
	}
	printf("count:%d\n",count);

	return 0;
}
