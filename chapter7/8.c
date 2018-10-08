#include <stdio.h>

#define BASEHRS 40
//#define BASEPAY 10.00
#define OVERTIME 1.5
#define AMT1 300
#define AMT2 150
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25

void display(void);

int main(void)
{
	char option;
   	int hours;
	float BASEPAY;
	float gross,tax,net;
    display();
	while(1)
	{
		option = getchar();
//		scanf("%c",&option);
		switch(option)
		{
			case '1':
				BASEPAY = 8.75;
				break;
			case '2':
				BASEPAY = 9.33;
				break;
			case '3':
				BASEPAY = 10.00;
				break;
			case '4':
				BASEPAY = 11.20;
				break;
			case '5':
				return 1;
			default:
				while(getchar() != '\n')
					continue;
				printf("Enter the correct option: \n");
				continue;
		}
		printf("Please enter your working hours a week: ");
		scanf("%d",&hours);
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

void display(void)
{
	printf("******************************************************************\n");
	printf("Enter the number corresponding to the desires pay rate of action: \n");
	printf("1) $8.75/hr                               2) $9.33/hr\n");
	printf("3) $10.00/hr                              4) $11.20/hr\n");
	printf("5) quit\n");
	printf("******************************************************************\n");
}
