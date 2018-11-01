#include <stdio.h>
void uitobs(unsigned int num, char * str);
void showbs(char * str);
unsigned int rotate_l(unsigned int val, unsigned int mov);

int main(void)
{
	unsigned int value, moving;
	char temp[33];
	printf("Please enter an integer(>0): ");
	scanf("%u", &value);
	printf("Enter the number of bits to be rotated: ");
	scanf("%u", &moving);

	printf("Originally: \n");
	printf("value: %u\n", value);
	uitobs(value, temp);
	showbs(temp);

	printf("After rotating: \n");
	value = rotate_l(value, moving);
	printf("value: %u\n", value);
	uitobs(value, temp);
	showbs(temp);

	return 0;
}

void showbs(char * str)
{
	for(int i = 0; i < 32; i++)
	{
		putchar(str[i]);
		if((i + 1) % 4 == 0)
			putchar(' ');
	}
	putchar('\n');
	return;
}

void uitobs(unsigned int num, char * str)
{
	for(int i = 31; i >= 0; i--, num >>= 1)
		str[i] = (num & 1) + '0';
	str[32] = '\0';
	return;
}

unsigned int rotate_l(unsigned int val, unsigned int mov)
{
	unsigned copy = val;
	val <<= mov;
	copy >>= (32 - mov);
	val = val | copy;
	return val;
}
