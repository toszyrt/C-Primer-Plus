#include <stdio.h>
#include <string.h>
#define SIZE1 10
#define SIZE2 20
char * s_gets(char * st, int n);
char * mystrncpy(char * str1, char * str2, int n);

int main(void)
{
	char string1[SIZE1];
	char string2[SIZE2];
	printf("Enter string2, please.\n");
	while(s_gets(string2, SIZE2) && string2[0] != '\0')
	{
		printf("string2: ");
		puts(string2);
		mystrncpy(string1, string2, SIZE1);
		printf("string1: ");
		puts(string1);
		printf("Next string2: \n");
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

char * mystrncpy(char * str1, char * str2, int n)
{
	if(strlen(str2) >= n)
	{
		strncpy(str1, str2, n - 1);
		str1[n - 1] = '\0'; 
	}
	else
		strncpy(str1, str2, n);
	return str1;
}
