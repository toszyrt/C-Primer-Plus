#include <stdio.h>
#include <ctype.h>
#define SIZE 80
void getword(char * str);

int main(void)
{
	char word[SIZE];
	printf("Enter a string, please.\n");
	getword(word);
	printf("The first world: ");
	puts(word);

	return 0;
}

void getword(char * str)
{
	char ch;
	while(isspace(ch = getchar()))
		continue;
	*str = ch;
	while(isspace(ch = getchar()) == 0)
		*++str = ch;
	*(str + 1) = '\0';
	return;
}
