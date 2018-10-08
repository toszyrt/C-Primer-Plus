#include <stdio.h>

#define ARTICHOKE_UNIT 2.05
#define BEET_UNIT 1.15
#define CARROT_UNIT 1.09
#define DISCOUNT_ORDER 0.05
#define EXTRA1 6.5
#define EXTRA2 14
#define EXTRA3_RATE 0.5

void display(void);

int main(void)
{
	float tmp=0,weight=0,artichoke=0,beet=0,carrot=0;
	float artichoke_price=0,beet_price=0,carrot_price=0;
	float order_price=0,discount_price=0,packing_price=0,total_price=0;
	char option;
	int flag=1;
	display();
	while(flag == 1)
	{
		option = getchar();
		switch(option)
		{
			case 'a':
				printf("artichoke: ");
				scanf("%f",&tmp);
				artichoke += tmp;
				break;
			case 'b':
				printf("beet: ");
				scanf("%f",&tmp);
				beet += tmp;
				break;
			case 'c':
				printf("carrot: ");
				scanf("%f",&tmp);
				carrot += tmp;
				break;
			case 'q':
				flag = 0;
				break;
			default:
				printf("unexpected input! try again.\n");
		}
		while(getchar() != '\n')
			continue;
	}
	artichoke_price = artichoke*ARTICHOKE_UNIT;
	beet_price = beet*BEET_UNIT;
	carrot_price = carrot*CARROT_UNIT;
	order_price = artichoke_price+beet_price+carrot_price;
	if(order_price >= 100)
		discount_price = order_price*DISCOUNT_ORDER;
	weight = artichoke+beet+carrot;
	if(weight <= 5)
		packing_price = EXTRA1;
	else if(weight <=20)
		packing_price = EXTRA2;
	else
		packing_price = EXTRA2+(weight-20)*EXTRA3_RATE;
	total_price = order_price-discount_price+packing_price;
	printf("artichoke: $%.2f/pound\t%.2fpound\t$%.2f\n",
			ARTICHOKE_UNIT,artichoke,artichoke_price);
	printf("     beet: $%.2f/pound\t%.2fpound\t$%.2f\n",
			BEET_UNIT,beet,beet_price);
	printf("   carrot: $%.2f/pound\t%.2fpound\t$%.2f\n",
			CARROT_UNIT,carrot,carrot_price);
	printf("   order_price: $%.2f\n",order_price);
	printf("discount_price: $%.2f\n",discount_price);
	printf(" packing_price: $%.2f\n",packing_price);
	printf("   total_price: $%.2f\n",total_price);

	return 0;
}

void display(void)
{
	printf("******************************************************************\n");
	printf("Choose the vegetatable which you want to buy: \n");
	printf("a) artichoke                           b) beet\n");
	printf("c) carrot                              q) quit\n");
	printf("******************************************************************\n");
}
