#include <stdio.h>

int main(void)
{
	int i=0;
	char ch;
	printf("Enter a string(# to stop): \n");
	while((ch=getchar()) != '#')
	{
		if(ch == '.')
		{
			i++;
			putchar('!');
		}
		else if(ch == '!' )
		{
			i++;
			putchar('!');
			putchar('!');
		}
		else
			putchar(ch);
	}
	printf("\n%d replaces in total.\n",i);

	return 0;
}
