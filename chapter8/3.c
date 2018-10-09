#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int lower = 0;
	int upper = 0;
	char ch = 0;
	while((ch = getchar()) != EOF)
	{
//    	if(ch>='a'&&ch<='z')
//			lower++;
		if(islower(ch))
			lower++;
		if(isupper(ch))
			upper++;
	}
	printf("lower case letters: %2d\n",lower);
	printf("upper case letters: %2d\n",upper);
	
	return 0;
}
