#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int main(void)
{
	int ch;
	FILE * fp;
	char words[MAX];
	int count = 0;
	if((fp = fopen("wordy", "a+")) == NULL)
	{
		fprintf(stderr, "Can't open \"wordy\" file.\n");
		exit(EXIT_FAILURE);
	}
	while((ch = getc(fp)) != EOF)
		if(ch == '\n')
			count++;
	rewind(fp);
	puts("Enter words to add to the file, press # key to terminate.");
	while((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
		fprintf(fp, "%2d %s\n", ++count, words);
	puts("File contents: ");
	rewind(fp);
	while((ch = getc(fp)) != EOF)
		putc(ch, stdout);
	puts("Done!");
	if(fclose(fp) != 0)
		fprintf(stderr, "Error closing file.\n");

	return 0;
}
