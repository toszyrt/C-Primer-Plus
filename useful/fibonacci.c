#include <stdio.h>

int Fibonacci(unsigned int);

int main(void)
{
	int number;
	printf("Please enter an integer: \n");
	while(scanf("%d", &number) == 1 && number > 0)
	{
		printf("Fibonacci(%d) = %d\n", number, Fibonacci(number));
		printf("Next integer(q to quit): \n");
	}
	printf("see you later ^_^\n");

	return 0;
}

int Fibonacci(unsigned int n)
{
	int fib[n];
	int i;
	fib[0] = fib[1] = 1;
	for(i = 2; i <= n; i++)
		fib[i] = fib[i - 1] + fib[i - 2];

	return fib[n];
}
