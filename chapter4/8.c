#include <stdio.h>
#define Eur litre/kilometer_100
#define USA kilometer_100/litre
int main(void)
{
	float gallon,mile,litre,kilometer_100;
	printf("What is the distance in mile: ");
	scanf("%f",&mile);
	printf("How much petrol in gallon do you consume: ");
	scanf("%f",&gallon);
	kilometer_100 = mile*1.609/100;
	litre = gallon*3.785;
	printf("Eur: %.1f L/100KM\n",Eur);
	printf("USA: %.1f 100KM/L\n",USA);

	return 0;
}
