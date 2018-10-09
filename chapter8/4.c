#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int letter=0,word=0;
	char ch_pre,ch_now;
	while((ch_now=getchar())!=EOF)
	{
		if(isalpha(ch_now))
			letter++;
		if(isalpha(ch_pre))
			if(isalpha(ch_now)==0)
				word++;
		ch_pre = ch_now;
	}
	printf("letter:%d word:%d average:%.2f\n",letter,word,(float)letter/word);

	return 0;
}
