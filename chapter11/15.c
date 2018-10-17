#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#define SIZE 100
int myatoi(const char * str);
char * s_gets(char * st, int n);

int main(void)
{
	char input[SIZE];
	int result;
	printf("Enter a string, please: ");
	s_gets(input, SIZE);
	result = myatoi(input);
	printf("The number is %d\n", result);

	return 0;
}

int myatoi(const char * str)
{
//	int index = 0;
	int number = 0;
	char tmp[SIZE];
	while(!isdigit(*str))
	{
		str++;
		continue;
	}
	while(isdigit(*str))
	{
//		tmp[index] = *str;
//		index++;
		number = number * 10 + (*str - '0');
		str++;
	}
//	for(int c = 0; c < index; c++)
//		number += (tmp[index - 1 - c] - '0') * pow(10, c);
	return number;
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;
	ret_val = fgets(st, n, stdin);
	if(ret_val)
	{
		find = strchr(st, '\n');
		if(find)
			*find = '\0';
		else
			while(getchar() != '\n')
				continue;
	}
	return ret_val;
}
