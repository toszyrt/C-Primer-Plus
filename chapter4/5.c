#include <stdio.h>

int main(void)
{
	float megabits,megabytes,seconds;
	printf("What is your megabits per second: ");
	scanf("%f",&megabits);
	printf("What is the size of the file: ");
	scanf("%f",&megabytes);
	seconds=megabytes/(megabits/8);
	printf("At %.2f megabits per second, a file of %.2f megabytes\n",
			megabits,megabytes);
	printf("downloads in %.2f seconds.\n",seconds);

	return 0;
}
