#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ARSIZE 21
char * s_gets(char * st, int n);

int main(void)
{
	int index, ch;
	long pos;
	FILE * fp;
	char file_name[ARSIZE];
	puts("Enter name of destination file: ");
	s_gets(file_name, ARSIZE);
	if((fp = fopen(file_name, "rb")) == NULL)
	{
		fprintf(stderr, "Can't open %s.\n", file_name);
		exit(EXIT_FAILURE);
	}
	printf("Enter an index which is bigger than or equal to 0.\n");
	while(scanf("%d", &index) == 1 && index >= 0)
	{
		pos = (long) index * sizeof(char);
		fseek(fp, pos, SEEK_SET);
		while((ch = getc(fp)) != '\n')
			putc(ch, stdout);
		putchar('\n');
		printf("Next index (smaller than 0 to quit): \n");
	}
	fclose(fp);
	puts("Bye!");

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
