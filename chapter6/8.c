#include <stdio.h>

int main(void)
{
	float fpn1,fpn2,res;
	printf("Enter 2 floating point number(q to quit): ");
	while(scanf("%f %f",&fpn1,&fpn2) == 2)
	{
		res = (fpn1-fpn2)/(fpn1*fpn2);
		printf("(%.2f-%.2f)/(%.2f*%.2f) = %.4f\n",fpn1,fpn2,fpn1,fpn2,res);
		printf("Enter 2 floating point number(q to quit): ");
	}

	return 0;
}
