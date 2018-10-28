#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int ch;
	FILE * fp;
	if(argc < 2)
	{
		fprintf(stderr, "Usage: %s filename...\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	for(int i = 1; i < argc; i++)
	{
		if((fp = fopen(argv[i], "r")) == NULL)
		{
			printf("Can't open %s.\n", argv[i]);
			exit(EXIT_FAILURE);
		}
		while((ch = getc(fp)) != EOF)
			putc(ch, stdout);
		fclose(fp);
		putchar('\n');
	}

	return 0;
}
