#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int flag1 = 1, flag2 = 1;
	int ch;
	FILE * first, * second;
	if(argc < 3)
	{
		fprintf(stderr, "Usage: %s filename filename.\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if((first = fopen(argv[1], "r")) == NULL || (second = fopen(argv[2], "r")) == NULL)
	{
		fprintf(stderr, "Can't open files.\n");
		exit(EXIT_FAILURE);
	}
	while(flag1 || flag2)
	{
		if(flag1)
		{
			while((ch = getc(first)) != EOF)
			{
				if(flag2 == 1 && ch == '\n')
				{
					putchar(' ');
					break;
				}
				putc(ch, stdout);
			}
			if((ch = getc(first)) == EOF)
				flag1 = 0;
			else
				ungetc(ch, first);
		}
		if(flag2)
		{
			while((ch = getc(second)) != EOF)
			{
				putc(ch, stdout);
				if(flag1 == 1 && ch == '\n')
					break;
			}
			if((ch = getc(second)) == EOF)
				flag2 = 0;
			else
				ungetc(ch, second);
		}
	}
	if(fclose(first) != 0 || fclose(second) != 0)
		fprintf(stderr, "Error closing files.\n");

	return 0;
}
