#include <stdio.h>

void br(void);
void ic(void);

int main(void)
{
	br();
	printf(", ");
	ic();
	printf("\n");
	ic();
	printf(",\n");
	br();
	printf("\n");

	return 0;

}

void br(void)
{
	printf("Brazill, Russia");
}

void ic(void)
{
	printf("India, China");
}
