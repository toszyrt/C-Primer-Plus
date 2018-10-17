#include <stdio.h>
#define LEN 10
char * getnchar(char * str, int n);

int main(void)
{
	char input[LEN];
	char * check;
	printf("Enter %d characters, please.\n", LEN - 1);
	check = getnchar(input, LEN - 1);
	if(check == NULL)
		puts("Input failed.");
	else
		puts(input);
	puts("Done.");

	return 0;
}

char * getnchar(char * str, int n)
{
	for(int i = 0; i < n; i++)
		if((str[i] = getchar()) == EOF)
			return NULL;
	str[n] = '\0';
	return str;
}
