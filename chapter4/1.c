#include <stdio.h>

int main(void)
{
	char first_name[10],last_name[10];
	printf("Enter your first name: ");
	scanf("%s",first_name);
	printf("Enter your last name: ");
	scanf("%s",last_name);
	printf("Your name is %s.%s\n",first_name,last_name);

	return 0;
}
