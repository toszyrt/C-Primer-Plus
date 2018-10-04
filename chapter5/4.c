#include <stdio.h>
#define in_cm 2.54
#define feet_in 12

int main(void)
{
	float cm,in;
	int feet;
	printf("Enter a height in centimeters: ");
	scanf("%f",&cm);
	while(cm > 0)
	{
		in = cm/in_cm;
		feet = (int)in/feet_in;
		in = in-feet*feet_in;
		printf("%.1f cm = %d feet, %.1f inches\n",cm,feet,in);
		printf("Enter a height in centimeters(<=0 to quit): ");
		scanf("%f",&cm);
	}
	printf("Bye!\n");

	return 0;
}
