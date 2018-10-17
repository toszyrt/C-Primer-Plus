#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 20
char * s_gets(char * st, int n);
void drop_space(char * str);

int main(void)
{
	char input[SIZE];
	printf("Enter a string, please: ");
	while(s_gets(input, SIZE) && input[0] != '\0')
	{
		printf("Original string: ");
		puts(input);
		drop_space(input);
		printf("Present  string: ");
		puts(input);
		printf("Next string: ");
	}
	puts("see you later.");

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
			while(getchar() != '\n')
				continue;
	}
	return ret_val;
}

void drop_space(char * str)
{
	int c = 0;
	for(int i = 0; i < strlen(str); i++)
	{
		if(str[i] == ' ')
			continue;
		str[c] = str[i];
		c++;
	}
	while(str[c] != '\0')
		str[c] = '\0';
	return;
}

/*
void drop_space(char * str)
{
	char * pos;
	while(*str)
	{
		if(*str == ' ')
		{
			pos = str;
			do
			{
				*pos = *(pos + 1);
				pos++;
			}while(*pos);
		}
		else
			str++;
	}
}
*/
/*
void drop_space(char * str)
{
	char * orig;
	char tmp[SIZE] = {'\0'};
	int i = 0;
	orig = str;
	while(*str != '\0')
	{
		if(*str != ' ')
		{
			tmp[i] = *str;
			i++;
		}
		str++;
	}
	for(int j = 0; j < SIZE; j++)
		*orig++ = tmp[j];
	return;
}
*/
