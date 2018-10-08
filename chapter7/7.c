#include <stdio.h>

#define BASEHRS 40
#define BASEPAY 10.00
#define OVERTIME 1.5
#define AMT1 300
#define AMT2 150
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25

int main(void)
{
	int hours;
	float gross,tax,net;
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

	return 0;	
}
