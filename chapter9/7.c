#include <stdio.h>
#include <ctype.h>

void report(void);
int locate(char);

int main(void)
{
	report();

	return 0;
}

void report(void)
{
	int ch;
	int index = 0;
	printf("Please enter a string(^D to stop): \n");
	while((ch = getchar()) != EOF)
	{
		if(isalpha(ch) == 0)
			continue;
		if(isalpha(ch))
		{
			index++;
			putchar(ch);
			putchar('-');
			printf("%2d ", locate(ch));
		}
		if(index % 10 == 0)
			putchar('\n');
	}
	if(index % 10 != 0)
		putchar('\n');

	return;
}

int locate(char ch)
{
	ch = tolower(ch);
	return ch - 'a' + 1;
}
