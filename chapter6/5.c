#include <stdio.h>

int main(void)
{
	int i,j,length;
	char input,ch;
	printf("Please enter an upper_letter: ");
	scanf("%c",&input);
	length = input-'A'+1;
	for(i=1;i<=length;i++)
	{
		ch = 'A'-1;
		for(j=i;j<=length;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("%c",++ch);
		for(j=1;j<i;j++)
			printf("%c",--ch);
		//for(j=i;j<=input-'A';j++)
		//	printf(" ");
		printf("\n");
	}

	return 0;
}
