#include <stdio.h>
#include <ctype.h>
#define SIZE 20
char * s_gets(char * st, int n);
char * str4ch(char * str, char ch);

int main(void)
{
	char string[SIZE];
	char character;
	char * check;
	printf("Enter a string, please.\n");
	s_gets(string, SIZE);
	printf("The string is: \n");
	puts(string);
	printf("Enter a character, please: ");
	scanf("%c", &character);
	while((check = str4ch(string, character)) != NULL)
	{
		printf("%c found in col %ld.\n", character, check - string + 1);
		printf("Next character: ");
		while(getchar() != '\n')
			continue;
		scanf("%c", &character);
	}
	puts("NOT FOUND!");

	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	int i = 0;
	ret_val = fgets(st, n, stdin);
	if(ret_val)
	{
		while(st[i] != '\n' && st[i] != '\0')
			i++;
		if(st[i] == '\n')
			st[i] = '\0';
		else
			while(getchar() != '\n')
				continue;
	}
	return ret_val;
}

char * str4ch(char * str, char ch)
{
	while(*str != '\0')
	{
		if(*str == ch)
			return str;
		str++;
	}
	return NULL;
}
