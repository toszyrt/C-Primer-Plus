#include <stdio.h>

int main(void)
{
	int i=0;
	char ch;
	printf("Enter a string(# to stop): \n");
	while((ch=getchar()) != '#')
	{
		printf("%c-%-3d ",ch,ch);
		i++;
		if(i%8 == 0)
			printf("\n");
	}
	if(i%8 !=0 )
	printf("\n");

	return 0;
}
