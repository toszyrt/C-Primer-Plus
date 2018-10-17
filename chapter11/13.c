#include <stdio.h>

int main(int argc, char *argv[])
{
	for(int index = 1; index < argc; index++)
		printf("%s ", argv[argc - index]);
	putchar('\n');

	return 0;
}
