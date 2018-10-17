#include <stdio.h>
#include <ctype.h>
#define LEN 10
char * getnchar2(char * str, int n);

int main(void)
{
	char input[LEN];
	char * check;
	printf("Enter %d characters, please.\n", LEN - 1);
	check = getnchar2(input, LEN - 1);
	if(check == NULL)
		puts("Input failed.");
	else
		puts(input);
	puts("Done.");

	return 0;
}

char * getnchar2(char * str, int n)
{
	int m = n;
	for(int i = 0; i < n; i++)
	{
		if((str[i] = getchar()) == EOF)
			return NULL;
		if(isspace(str[i]))
		{
			m = i;
			break;
		}
	}
	str[m] = '\0';
	return str;
}
