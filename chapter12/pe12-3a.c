#include <stdio.h>
#include "pe12-3a.h"

void set_mode(int input, int * pm)
{
	if(EUR == input || US == input)
		*pm = input;
	else
		printf("Invalid mode specified. Mode %d(%s) used.\n",
				*pm, *pm == 0 ? "Eur" : "US");
	return;
}

void get_info(int * pm, double * pd, double * pf)
{
	if(0 == *pm)
	{
		printf("Enter distance traveled in kilometers: ");
		scanf("%lf", pd);
		printf("Enter fuel consumed in liters: ");
		scanf("%lf", pf);
	}
	else
	{
		printf("Enter distance traveled in miles: ");
		scanf("%lf", pd);
		printf("Enter fuel consumed in gallons: ");
		scanf("%lf", pf);
	}
	return;
}

void show_info(int * pm, double * pd, double * pf)
{
	if(0 == *pm)
		printf("Fuel consumption is %.2lf liters per 100 km.\n",
				*pf / (*pd / 100));
	else
		printf("Fuel consumption is %.1lf miles per gallon.\n",
				*pd / *pf);
	return;
}
