#include <stdio.h>

int main(void)
{
	int sp_ct=0,nl_ct=0,other=0;
	char ch;
	printf("Enter a string: \n");
	while((ch=getchar()) != '#')
	{
		if(ch == ' ')
			sp_ct++;
		else if(ch == '\n')
			nl_ct++;
		else
			other++;
	}
	printf("spaces: %d\tnewlines: %d\tother: %d\n",sp_ct,nl_ct,other);

	return 0;
}
