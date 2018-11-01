#include <stdio.h>
int bstoi(char * str);
void itobs(int num, char * str);

int main(int argc, char *argv[])
{
	int a, b;
	char temp[9];
	a = bstoi(argv[1]);
	b = bstoi(argv[2]);
	printf("  a = %s %3d\n", argv[1], a);
	printf("  b = %s %3d\n", argv[2], b);
	itobs(~a, temp);
	printf(" ~a = %s\n", temp);
	itobs(~b, temp);
	printf(" ~b = %s\n", temp);
	itobs(a&b, temp);
	printf("a&b = %s\n", temp);
	itobs(a|b, temp);
	printf("a|b = %s\n", temp);
	itobs(a^b, temp);
	printf("a^b = %s\n", temp);

	return 0;
}

int bstoi(char * str)
{
	int output = 0;
	for(int i = 0; i < 8; i++)
		output = output * 2 + (str[i] - '0');
	return output;
}

void itobs(int num, char * str)
{
	for(int i = 7; i >= 0; i--, num >>= 1)
		str[i] = (num & 1) + '0';
	str[8] = '\0';
	return;
}
