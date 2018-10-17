#include <stdio.h>
#include <string.h>
#define SIZE 80
char * s_gets(char * st, int n);
_Bool is_within(const char * str, char c);

int main(void)
{
	char ch, input[SIZE];
	_Bool res;
	printf("Enter a string: ");
	while(s_gets(input, SIZE) && input[0] != '\0')
	{
		printf("Enter a character: ");
		ch = getchar();
		while(getchar() != '\n')
			continue;
		res = is_within(input, ch);
		if(res == 0)
			printf("%c is NOT found in the string.\n", ch);
		else
			printf("%c is found in the string.\n", ch);
		printf("Next string: ");
	}
	puts("Done.");

	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;
	ret_val = fgets(st, n, stdin);
	if(ret_val)
	{
		find = strchr(st, '\n');
		if(find)
			*find = '\0';
		else
		{
			while(getchar() != '\n')
				continue;
		}
	}
	return ret_val;
}

_Bool is_within(const char * str, char c)
{
	while(*str != c && *str != '\0')
		str++;
	return *str;
}
