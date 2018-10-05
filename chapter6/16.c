#include <stdio.h>

//float power(float,int);

int main(void)
{
	float Daphne=100,Deirdre=100;
	int year=0;
	do
	{
		year++;
		Daphne +=10;
		Deirdre *=1.05;
//		Daphne = 100+10*year;
//		Deirdre = 100*power(1.05,year);
	}while(Daphne>=Deirdre);
	printf("%d years later,Deirdre has more money.\n",year);
	printf("Daphne:  $%.2f\n",Daphne);
	printf("Deridre: $%.2f\n",Deirdre);
	
	return 0;
}

//float power(float x,int y)
//{
//	int i;
//	float res=1;
//	for(i=1;i<=y;i++)
//		res *=x;
//	
//	return res;
//}
