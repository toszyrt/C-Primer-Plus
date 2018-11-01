#include <stdio.h>
int onbits(int val);

int main(void)
{
	int value, count;
	printf("Please enter an integer: ");
	scanf("%d", &value);
	count = onbits(value);
	printf("%d has %d bits on.\n", value, count);

	return 0;
}

int onbits(int val)
{
	int ct = 0;
	for(int i = 0; i < 32; i++, val >>= 1)
		if((val & 1) == 1)
			ct++;
	return ct;
}
