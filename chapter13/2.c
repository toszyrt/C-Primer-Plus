#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE * in, * out;
	int ch;
	if(argc < 3)
	{
		fprintf(stderr, "Usage: %s filename filename.\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if((in = fopen(argv[1], "r")) == NULL || (out = fopen(argv[2], "w")) == NULL)
	{
		fprintf(stderr, "Can't open the file.\n");
		exit(3);
	}
	while((ch = getc(in)) != EOF)
		putc(ch, out);
	if(fclose(in) != 0 || fclose(out) != 0)
		fprintf(stderr, "Error in closing files.\n");

	return 0;
}
