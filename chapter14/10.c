#include <stdio.h>
#include <math.h>
double twice(double x) {return 2 * x;}
double half(double x) {return 0.5 * x;}

int main(void)
{
	int input;
	char ch;
	double output;
	double (*pf[3])(double) = {twice, half, sqrt};
	printf("Enter an integer, please. ");
	scanf("%d", &input);
	while(getchar() != '\n')
		continue;
	printf("Enter a character to handle this interger.\n");
	printf("a-twice, b-half, c-sqrt. ");
	ch = getchar();
	output = pf[ch - 'a']((double)input);
	printf("The result is %lg\n", output);

	return 0;
}
