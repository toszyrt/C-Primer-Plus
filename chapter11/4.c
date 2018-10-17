#include <stdio.h>
#include <ctype.h>
#define SIZE 80
void getword(char * str, int n);

int main(void)
{
	char word[SIZE];
	printf("Enter a string, please.\n");
	getword(word, 5);
	printf("The first world: ");
	puts(word);

	return 0;
}

void getword(char * str, int n)
{
	char ch;
	while(isspace(ch = getchar()))
		continue;
	*str = ch;
	int count = 1;
	while(++count <= n && isspace(ch = getchar()) == 0)
		*++str = ch;
	*(str + 1) = '\0';
	return;
}
