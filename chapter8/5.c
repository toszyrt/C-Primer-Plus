#include <stdio.h>

int main(void)
{
	int guess = 50;
	int guess_l = 0 ;
	int guess_u = 101;
	int guess_pre;
	char ch = 0;
	printf("Pick an integer from 1 to 100. I will to try to guess it.\n");
	printf("Respond with a y if my guess is right and with\n");
	printf("a b if it is bigger or a s if it is smaller.\n");
	printf("Uh...is your number %d?\n",guess);

	while((ch = getchar()) != 'y')
	{
		if(ch == 's')
		{
			guess_l = guess;
			guess = (guess+guess_u)/2;
			printf("Well, then, is it %d?\n",guess);
		}
		else if(ch == 'b')
		{
			guess_u = guess;
			guess = (guess_l+guess)/2;
			printf("Well, then, is it %d?\n",guess);
		}
		else
			printf("Sorry, I understand only y or b or s.\n");
		while(getchar() != '\n')
			continue;
		if(guess_pre == guess)
		{
			printf("Don't lie to me, it's it!!\n");
			break;
		}
		guess_pre = guess;
	}
	printf("^_^That's a piece of cake!\n");

	return 0;
}
