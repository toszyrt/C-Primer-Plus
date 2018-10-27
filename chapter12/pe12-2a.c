#include <stdio.h>
#include "pe12-2a.h"

static int mode_s = 0;
static float distance;
static float fuel;	  

void set_mode(int mode)
{
	if(0 == mode || 1 == mode)
		mode_s = mode;
	else
		printf("Invalid mode specified. Mode %d(%s) used.\n",
				mode_s, mode_s == 0 ? "Eur" : "US");
	return;
}

void get_info(void)
{
	if(0 == mode_s)
	{
		printf("Enter distance traveled in kilometers: ");
		scanf("%f", &distance);
		printf("Enter fuel consumed in liters: ");
		scanf("%f", &fuel);
	}
	else
	{
		printf("Enter distance traveled in miles: ");
		scanf("%f", &distance);
		printf("Enter fuel consumed in gallons: ");
		scanf("%f", &fuel);
	}
	return;
}

void show_info(void)
{
	if(0 == mode_s)
		printf("Fuel consumption is %.2f liters per 100 km.\n",
				fuel / (distance / 100));
	else
		printf("Fuel consumption is %.1f miles per gallon.\n",
				distance / fuel);
	return;
}
