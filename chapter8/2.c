#include <stdio.h>

int main(void)
{
	int i = 0;
	char ch;
	while((ch = getchar()) != EOF)
	{
		if(ch < ' ')
		{
			if(ch == '\n')
			{
				putchar('\\');
				putchar('n');
				printf("-%3d ",ch);
			}
			else if(ch == '\r')
			{
				putchar('\\');
				putchar('r');
				printf("-%3d ",ch);
			}
			else
				printf("^%c-%3d ",ch+64,ch);
		}
		else
			printf("%2c-%3d ",ch,ch);
		if((++i)%10 == 0)
			putchar('\n');
	}
	if(i%10 != 0)
		putchar('\n');

	return 0;
}
