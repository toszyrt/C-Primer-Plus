#include <stdio.h>
#include <ctype.h>

char get_first(void);

int main(void)
{
	char input;
	input = get_first();
	putchar(input);
	putchar('\n');

	return 0;
}

char get_first(void)
{
	int ch;
	while(isspace(ch = getchar()))
		continue;
	while(getchar() != '\n')
		continue;

	return ch;
}
