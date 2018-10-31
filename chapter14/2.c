#include <stdio.h>

struct date_tag {
	int day;
	int month;
	int year;
};

int main(void)
{
	struct date_tag date;
	int alldays = 0;
	puts("Enter the date (ex 2013 05 06)(q to quit): ");
	while(scanf("%d%d%d", &date.year, &date.month, &date.day) == 3)
	{
		if(date.year < 0 || date.month < 0 || date.month > 12 || date.day < 0 || date.day > 31)
		{
			puts("unexpected input!");
			puts("Enter the date again (q to quit): ");
			continue;
		}
		else if(date.day == 29 && date.year % 4 != 0)
		{
			puts("unexpected input!");
			puts("Enter the date again (q to quit): ");
			continue;
		}
		else
		{
			if((date.month - 1) % 2 == 0)
				alldays = (date.month - 1) / 2 * 61;
			else
				alldays = (date.month - 1) / 2 * 61 + 31;
			if(date.month > 2)
			{
				if(date.year % 4 == 0)
					alldays--;
				else
					alldays -= 2;
			}
			alldays += date.day;
			printf("%d days to %d %d %d\n", alldays, date.year, date.month, date.day);
		}
		alldays = 0;
		puts("Enter the date again (q to quit): ");
	}
	puts("see you later.");

	return 0;
}
