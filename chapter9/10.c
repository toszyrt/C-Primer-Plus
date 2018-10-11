#include <stdio.h>

void to_base_n(unsigned long, unsigned int);

int main(void)
{
	unsigned long number1;
	int number2;
	printf("Please enter 2 integers: \n");
	while(scanf("%lu %u", &number1, &number2) == 2)
	{
		printf("%lu ==> ", number1);
		to_base_n(number1, number2);
		putchar('\n');
		printf("Next 2 integers(q to quit): \n");
	}
	printf("see you later ^_^\n");

	return 0;
}

void to_base_n(unsigned long x, unsigned int y)
{
	int r;
	r = x % y;
	if(x >= y)
		to_base_n(x / y, y);
	putchar('0' + r);
//	printf("%d",r);
	
	return;
}
