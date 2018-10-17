#include <stdio.h>
#include <string.h>
#define SIZE 20
char * s_gets(char * st, int n);
char * string_in(const char * str1, const char * str2);

int main(void)
{
	char string1[SIZE];
	char string2[SIZE];
	char * check;
	printf("Enter string1&string2, please.\n");
	s_gets(string1, SIZE);
	s_gets(string2, SIZE);
	while(string1[0] != '\0' && string2[0] != '\0')
	{
		printf("string2: ");
		puts(string2);
		printf("string1: ");
		puts(string1);
		check = string_in(string1, string2);
		if(check)
			printf("%s is in %s.\n", string2, string1);
		else
			printf("%s is not in %s.\n", string2, string1);
		printf("Next string1&string2.\n");
		s_gets(string1, SIZE);
		s_gets(string2, SIZE);
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

char *string_in(const char * str1, const char * str2)
{
	int nomatch = 1;
	int tries = strlen(str1) - strlen(str2) + 1;
	if(tries)
		while(nomatch = strncmp(str1, str2, strlen(str2)) && tries)
			str1++;
	if(nomatch)
		return NULL;
	else
		return (char *)str1;
}

/*
char * string_in(const char * str1, const char * str2)
{
	char * find;
	int flag = 1;
	find = strchr(str1, *str2);
	if(find)
	{
		str1 = find;
		while(*str2 != '\0')
		{
			if(*str1 != *str2)
			{
				flag = 0;
				break;
			}
			str1++;
			str2++;
		}
		if(flag ==1)
			return find;
	}
	return NULL;
}
*/
