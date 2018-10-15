#include <stdio.h>
#include <math.h>
#define  LENGTH 1000

int main(void)
{
	int pos_int,x,y,flag;
	int i,index;
	int prime[LENGTH];
	prime[0]=2;
	printf("Please enter a positive integer(>=2): ");
	scanf("%d",&pos_int);
	if(pos_int<2)
		printf("unexpected input!\n");
	else
	{
		for(x=3;x<=pos_int;x+=2)
		{
			flag = 0;
			for(y=2;y<=sqrt(x);y++)
			{
				if(x%y == 0)
				{
					flag = 1;
					break;
				}
//				else
//					continue;
			}
			if(flag == 0)
				prime[++index] = x;
		}
		printf("%d prime numbers is less than or equal to %d.\n",index+1,pos_int);
		for(i=0;i<=index;i++)
			printf("%d ",prime[i]);
		putchar('\n');
	}

	return 0;
}
