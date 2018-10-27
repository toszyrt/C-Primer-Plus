#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char ** word_array(int size);

int main(void)
{
	int n_word;
	char ** pt;
	printf("How many words do you wish to enter? ");
	scanf("%d", &n_word);
	pt = word_array(n_word);
	puts("Here are your words: ");
	for(int i = 0; i < n_word; i++)
	{
		puts(pt[i]);
		free(pt[i]);
	}
	free(pt);

	return 0;
}

char ** word_array(int size)
{
	char * temp, ** ptrr;
	temp = (char *) malloc (100 * sizeof(char));
	ptrr = (char **) malloc (size * sizeof(char *));
	printf("Enter %d words now: \n", size);
	for(int i = 0; i < size; i++)
	{
		scanf("%s", temp);
		ptrr[i] = (char *) malloc(strlen(temp) * sizeof(char) + 1);
		strncpy(ptrr[i], temp, strlen(temp) + 1);
		for(int j = 0; j < strlen(temp); j++)
			temp[j] = 0;
	}
	free(temp);
	return ptrr;
}
