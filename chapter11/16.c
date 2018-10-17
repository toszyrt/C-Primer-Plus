#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 100
char * s_gets(char * st, int n);
char * ToUpper(char * str);
char * ToLower(char * str);

int main(int argc, char *argv[])
{
	char input[SIZE];
	printf("Enter a string, please, I will deal with it.\n");
	s_gets(input, SIZE);
		printf("The processing results are as follows: \n");
	if(argc == 1 || strcmp(argv[1], "-p") == 0)
		puts(input);
	else if(strcmp(argv[1], "-u") == 0)
		puts(ToUpper(input));
	else if(strcmp(argv[1], "-l") == 0)
		puts(ToLower(input));
	else
		puts("unexpected argument!");
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

char * ToUpper(char * str)
{
	char * orig = str;
	while(*str)
	{
		*str = toupper(*str);
		str++;
	}
	return orig;
}

char * ToLower(char * str)
{
	char * orig = str;
	while(*str)
	{
		*str = tolower(*str);
		str++;
	}
	return orig;
}
