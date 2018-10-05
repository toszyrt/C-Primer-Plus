#include <stdio.h>
#include <string.h>

int main(void)
{
	int index,length;
	char word[10];
	printf("Please enter a word: ");
	scanf("%s",word);
	length = strlen(word);
	for(index=length-1;index>=0;index--)
		printf("%c",word[index]);
	printf("\n");

	return 0;
}
