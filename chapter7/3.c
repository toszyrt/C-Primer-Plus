#include <stdio.h>

int main(void)
{
	int input;
	int even=0,odd=0,sum1=0,sum2=0;
	float average1,average2;
	printf("Please enter some integers(0 to quit): \n");
	while((scanf("%d",&input)==1) && (input!=0))
	{
		if(input%2 == 0)
		{
			even++;
			sum1 += input;
		}
		else
		{
			odd++;
			sum2 += input;
		}
	}
	average1 = (float)sum1/even;
	average2 = (float)sum2/odd;
	printf("Even: %2d\tAverage: %5.2f\nOdd : %2d\tAverage: %5.2f\n",
			even,average1,odd,average2);

	return 0;
}
