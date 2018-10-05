#include <stdio.h>
#define square(x) ((x)*(x))

int main(void)
{
	int lower,upper;
	printf("Enter lower and upper integer limits: ");
	while((scanf("%d %d",&lower,&upper)==2)&&(lower<upper))
	{
		int index=0,result=0;
		for(index=lower;index<=upper;index++)
			result+=square(index);
		printf("The sum of the squares from %d to %d is %d\n",
				square(lower),square(upper),result);
		printf("Enter next set of limits: ");
	}
	printf("Done\n");

	return 0;
}
