#include <stdio.h>

int main(void)
{
	char text[225];
	int i=-1;
	printf("Please enter a line of text: \n");
	do
		scanf("%c",&text[++i]);
	while(text[i]!='\n');
	int j;
	for(j=i-1;j>=0;j--)
		printf("%c",text[j]);
	printf("\n");

	return 0;
}
