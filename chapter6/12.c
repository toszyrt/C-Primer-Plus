#include <stdio.h>

int main(void)
{
	int index,times;
	double sum1=0,sum2=0;
	printf("Enter the numbers of times(>=5): ");
	scanf("%d",&times);
	for(index=1;index<=times;index++)
		sum1+=1.0/index;
	for(index=1;index<=times;index++)
		sum2+=1.0/index*(index%2*2-1);
	printf("1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 +...+ 1.0/%d.0 = %f\n",
			times,sum1);
	printf("1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 +...%c 1.0/%d.0 = %f\n",
			(times%2==1)?'+':'-',times,sum2);

	return 0;
}
