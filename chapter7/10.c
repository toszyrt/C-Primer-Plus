#include <stdio.h>

#define SINGLE 17850
#define HOUSEHOLD 23900
#define MARRIED 29750
#define DIVORCED 14875
#define RATE1 0.15
#define RATE2 0.28

void display(void);

int main(void)
{
	int benchmark;
	char choice;
	float salary,tax;
	while(1)
	{
		display();
		choice = getchar();
		switch(choice)
		{
			case 'a':
				benchmark = SINGLE;
				break;
			case 'b':
				benchmark = HOUSEHOLD;
				break;
			case 'c':
				benchmark = MARRIED;
				break;
			case 'd':
				benchmark = DIVORCED;
				break;
			case 'e':
				return 0;
			default:
				printf("unexpected input! enter the right choice!\n");
				while(getchar() != '\n')
					continue;
				continue;
		}
		printf("Please enter your salary: \n");
		scanf("%f",&salary);
		while(getchar() != '\n')
			continue;
		if(salary <= benchmark)
			tax = RATE1*salary;
		else
			tax = RATE1*benchmark+RATE2*(salary-benchmark);
		printf("salary:%.1f\ttax:%.1f\n",salary,tax);
		printf("\n\n");
	}
}

void display(void)
{
	printf("******************************************************************\n");
	printf("Choose the most suitable option according to you: \n");
	printf("a) single                           b) household\n");
	printf("c) married                          d) divorced\n");
	printf("e) exit\n");
	printf("******************************************************************\n");
}
