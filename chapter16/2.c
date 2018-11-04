#include <stdio.h>
#define HMEAN(X,Y) (2.0*(X)*(Y)/((X)+(Y)))
//#define HMEAN(X,Y) (1/(((1.0/( X))+(1.0/(Y)))/2))

int main(void)
{
	printf("%g\n",HMEAN(2,3));
	
	return 0;
}
