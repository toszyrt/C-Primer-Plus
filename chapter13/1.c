#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN 20
char * s_gets(char * st, int n);

int main(void)
{
	int ch;
	FILE * fp;
	unsigned long count = 0;
	char file_app[SLEN];
	puts("Enter name of destination file: ");
	s_gets(file_app, SLEN);
	if((fp = fopen(file_app, "r")) == NULL)
	{
		printf("Can't open %s\n", file_app);
		exit(EXIT_FAILURE);
	}
	while((ch = getc(fp)) != EOF)
	{
		putc(ch, stdout);
		count++;
	}
	if(fclose(fp) != 0)
		fprintf(stderr, "Error closing file\n");
	printf("File %s has %lu characters\n", file_app, count);

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
