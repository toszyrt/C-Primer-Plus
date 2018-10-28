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
				putc(ch, stdout);
				if(ch == '\n')
					break;
			}
			if(ch == EOF)
				flag1 = 0;
		}
		if(flag2)
		{
			while((ch = getc(second)) != EOF)
			{
				putc(ch, stdout);
				if(ch == '\n')
					break;
			}
			if(ch == EOF)
				flag2 = 0;
		}
	}
	if(fclose(first) != 0 || fclose(second) != 0)
		fprintf(stderr, "Error closing files.\n");

	return 0;
}
