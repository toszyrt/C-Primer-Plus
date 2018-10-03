#include <stdio.h>

int main(void)
{
	float height;
	char name[10];
	printf("Enter your name: ");
	scanf("%s",name);
	printf("Enter your height(inches):");
	scanf("%f",&height);
	printf("%s, you are %.3f feet tall.\n",name,height/12);

	return 0;
}
