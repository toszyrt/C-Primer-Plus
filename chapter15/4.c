#include <stdio.h>
#include <stdbool.h>
bool posbits(int val, int pos);

int main(void)
{
	int value, position;
	printf("Please enter an integer: ");
	scanf("%d", &value);
	printf("Please enter the postion: ");
	scanf("%d", &position);
	printf("%dth place of %d is %d\n", position, value, posbits(value, position));

	return 0;
}

bool posbits(int val, int pos)
{
	if(((val >>= pos) & 1) == 1)
		return true;
	else
		return false;
}
