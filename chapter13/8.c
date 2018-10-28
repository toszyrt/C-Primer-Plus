#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int ch;
	int count = 0;
	FILE * fp;
	if(argc < 2)
	{
		fprintf(stderr, "Usage: %s <character> [file_name1 ....]\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if(argc == 2)
	{
		printf("Enter a string to be analysed: \n");
		while((ch = getc(stdin)) != EOF)
			if(ch == argv[1][0])
				count++;
		printf("There are %d %s in stdin.\n", count, argv[1]);
	}
	if(argc > 2)
		for(int i = 2; i < argc; i++)
		{
			if((fp = fopen(argv[i], "r")) == NULL)
			{
				fprintf(stderr, "Can't open the %s.\n", argv[i]);
				continue;
			}
			while((ch = getc(fp)) != EOF)
				if(ch == argv[1][0])
					count++;
			printf("There are %d %s in %s.\n", count, argv[1], argv[i]);
			count = 0;
			if(fclose(fp) != 0)
				fprintf(stderr, "Error closing %s.", argv[i]);
		}

	return 0;
}
