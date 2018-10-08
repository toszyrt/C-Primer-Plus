#include <stdio.h>

int main(void)
{
	int i=0;
	char ch;
	printf("Enter a string(# to stop): \n");
	while((ch=getchar()) != '#')
	{
		switch(ch)
		{
			case '.':
				i++;
				putchar('!');
				break;
			case '!':
				i++;
				putchar('!');
				putchar('!');
				break;
			default:
				putchar(ch);
		}
					
	}
	printf("\n%d replaces in total.\n",i);

	return 0;
}

