#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch_pre = '\n', ch_now;
	int word, upper, lower, punct, digit;
	word = upper = lower = punct = digit = 0;
	printf("Enter a string, please.\n");
	while((ch_now = getchar()) != EOF)
	{
		if(isupper(ch_now))
			upper++;
		if(islower(ch_now))
			lower++;
		if(ispunct(ch_now))
			punct++;
		if(isdigit(ch_now))
			digit++;
		if(isspace(ch_pre))
			if(isalpha(ch_now))
				word++;
		ch_pre = ch_now;
	}
	printf("word: %d  upper: %d  lower: %d  punct: %d  digit: %d\n", word, upper, lower, punct, digit);

	return 0;
}

