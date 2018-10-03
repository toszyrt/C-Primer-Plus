#include <stdio.h>

int main(void)
{
	float pint,cup,oz,spool,teaspool;
	printf("How much do you want?(cup): ");
	scanf("%f",&cup);
	pint=cup*0.5;
	oz=cup*8;
	spool=oz*2;
	teaspool=spool*3;
	printf("%.1f cup = %.1f pint or %.1f oz or %.1f spool or %.1f teaspool\n",cup,pint,oz,spool,teaspool);

	return 0;
}
