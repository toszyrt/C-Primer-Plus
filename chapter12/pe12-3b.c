#include <stdio.h>
#include "pe12-3a.h"

int main(void)
{
	int input;
	int mode_s = 0;
	double distance, fuel;
	printf("Enter 0 for metric mode, 1 for US mode: ");
	scanf("%d", &input);
	while(input >= 0)
	{
		set_mode(input, &mode_s);
		get_info(&mode_s, &distance, &fuel);
		show_info(&mode_s, &distance, &fuel);
		printf("Enter 0 for metric mode, 1 for US mode");
		printf(" (-1 to quit): ");
		scanf("%d", &input);
	}
	printf("Done.\n");

	return 0;
}
