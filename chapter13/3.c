#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define SLEN 20
char * s_gets(char * st, int n);

int main(void)
{
	FILE * target, * temp;
	char ch, file_app[SLEN];
	char * tempfile = "temp.txt";
	puts("Enter name of destination file: ");
	s_gets(file_app, SLEN);

	if((target = fopen(file_app, "r")) == NULL || (temp = fopen(tempfile, "w")) ==NULL)
	{
		fprintf(stderr, "Error in first stage");
		exit(1);
	}
	while((ch = getc(target)) != EOF)
	{
		ch = toupper(ch);
		putc(ch, temp);
	}
	fclose(target);
	fclose(temp);

	if((target = fopen(file_app, "w")) == NULL || (temp = fopen(tempfile, "r")) ==NULL)
	{
		fprintf(stderr, "Error in second stage");
		exit(2);
	}
	while((ch = getc(temp)) != EOF)
		putc(ch, target);
	if(fclose(target) != 0 || fclose(temp) != 0)
		fprintf(stderr, "Error closing file\n");
	remove(tempfile);

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
