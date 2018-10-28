#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ARSIZE 256

int main(int argc, char *argv[])
{
	char buf[ARSIZE];
	FILE * fp;
	if(argc != 3)
	{
		fprintf(stderr, "Useage: %s <string> [file_name]\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if((fp = fopen(argv[2], "r")) == NULL)
	{
		fprintf(stderr, "Can't open %s\n", argv[2]);
		exit(EXIT_FAILURE);
	}
	while(fgets(buf, ARSIZE, fp) != NULL)
		if(strstr(buf, argv[1]) != NULL)
			fputs(buf, stdout);
	fclose(fp);

	return 0;
}
