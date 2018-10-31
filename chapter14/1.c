#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n);
struct month {
	char name[10];
	char abbrev[4];
	int days;
	int monumb;
};

const struct month months[12] = {
	{"January", "Jan", 31, 1},
	{"February", "Feb", 28, 2},
	{"March", "Mar", 31, 3},
	{"April", "Apr", 30, 4},
	{"May", "May", 31, 5},
	{"June", "Jun", 30, 6},
	{"July", "Jul", 31, 7},
	{"August", "Aug", 31, 8},
	{"September", "Sep", 30, 9},
	{"October", "Oct", 31, 10},
	{"November", "Nov", 30, 11},
	{"December", "Dec", 31, 12}
};

int main(void)
{
	char string[] = "JanuaryFebruaryMarchAprilMayJuneJulyAugustSeptemberOctoberNovemberDecember";
	char input[10];
	int total = 0;
	puts("Enter a month (empty line to quit): ");
	while(s_gets(input, 10) != NULL && input[0] != '\0')
	{
		if(strstr(string, input) == NULL)
		{
			puts("unexpected input!");
			puts("Enter a month (empty line to quit): ");
			continue;
		}
		else
			for(int i = 0; i < 12; i++)
			{
				total += months[i].days;
				if(strcmp(months[i].name, input) == 0)
				{
					printf("%3d days to %s\n", total, months[i].name);
					break;
				}
			}
		total = 0;
		puts("Next month: ");
	}
	
	return 0;
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
