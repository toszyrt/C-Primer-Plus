#include <stdio.h>
#include <ctype.h>

#define BASEHRS 40
//#define BASEPAY 10.00
#define OVERTIME 1.5
#define AMT1 300
#define AMT2 150
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25

char get_first(void);
char get_choice(void);
int get_int(void);
void display(void);

int main(void)
{
	char choice;
   	int hours;
	float BASEPAY;
	float gross,tax,net;
	while((choice = get_choice()) != 'q')
	{
		switch(choice)
		{
			case 'a':
				BASEPAY = 8.75;
				break;
			case 'b':
				BASEPAY = 9.33;
				break;
			case 'c':
				BASEPAY = 10.00;
				break;
			case 'd':
				BASEPAY = 11.20;
				break;
			default:
				printf("Program error! \n");
				return 1;
		}
		printf("Please enter your working hours a week: ");
		hours = get_int();
		if(hours <= BASEHRS)
			gross = hours*BASEPAY;
		else
			gross = BASEHRS*BASEPAY+(hours-BASEHRS)*BASEPAY*OVERTIME;
		if(gross <= AMT1)
			tax = RATE1*gross;
		else if(gross <= (AMT1+AMT2))
			tax = RATE1*AMT1+RATE2*(gross-AMT1);
		else
			tax = RATE1*AMT1+RATE2*AMT2+RATE3*(gross-AMT1-AMT2);
		net = gross-tax;
		printf("gross: $%.2f  tax: $%.2f  net: $%.2f\n",gross,tax,net);
		break;
	}

	return 0;	
}

char get_first(void)
{
	char ch;
	while(isspace(ch = getchar()))
		continue;
	while(getchar() != '\n')
		continue;

	return ch;
}

char get_choice(void)
{
	char ch;
	display();
	ch = get_first();
	while((ch < 'a' || ch > 'd') && ch != 'q')
	{
		printf("Please respond with a, b, c, d, or q.\n");
		ch = get_first();
	}

	return ch;
}

int get_int(void)
{
	int input;
	char ch;
	while((scanf("%d",&input)) != 1)
	{
		while((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not an integer. Try again.\n");
	}

	return input;
}

void display(void)
{
	printf("******************************************************************\n");
	printf("Enter the number corresponding to the desires pay rate of action: \n");
	printf("a) $8.75/hr                               b) $9.33/hr\n");
	printf("c) $10.00/hr                              d) $11.20/hr\n");
	printf("q) quit\n");
	printf("******************************************************************\n");
}
