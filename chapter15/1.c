#include <stdio.h>
int bstoi(char * str, int size);

int main(void)
{
	int value;
	char * pbin = "01001001";
	value = bstoi(pbin, 8);
	printf("The value is %d\n", value);

	return 0;
}

int bstoi(char * str, int size)
{
	int output = 0;
	for(int i = 0; i < size; i++)
		output = output * 2 + (str[i] - '0');
	return output;
}
