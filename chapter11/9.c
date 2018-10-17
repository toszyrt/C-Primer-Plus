#include <stdio.h>
#include <string.h>
#define SIZE 20
char * s_gets(char * st, int n);
void str_reverse(char * str);

int main(void)
{
	char input[SIZE];
	printf("Enter a string, please: ");
	while(s_gets(input, SIZE) && input[0] != '\0')
	{
		printf("Original string: ");
		puts(input);
		str_reverse(input);
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

void str_reverse(char * str)
{
	char tmp;
	for(int i = 0; i < strlen(str)/2; i++)
	{
		tmp = str[i];
		str[i] = str[strlen(str) - 1 - i];
		str[strlen(str) - 1 - i] = tmp;
	}
	return;
}
