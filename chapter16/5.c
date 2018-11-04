#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void random_pick(int ar[], int ars, int pic);

int main(void)
{
	int picks;
	int sample[100];
	for(int i = 0; i < 100; i++)
		sample[i] = i + 1;
	srand(time(0));
	printf("Enter the picks(q to quit): ");
	while(scanf("%d", &picks) == 1 && picks <= 100)
	{
		random_pick(sample, 100, picks);
		printf("Enter the picks(q to quit): ");
	}
	puts("Bye!");

	return 0;
}

void random_pick(int ar[], int ars, int pic)
{
	char temp[100] = {0};
	int i = 0, count = 0;
	while(pic > 0)
	{
		int number = rand() % 100;
		if(strchr(temp, number + '0') == NULL)
		{
			temp[i++] = number + '0';
			printf("%3d ", ar[number]);
			pic--;
//			if(++count % 20 == 0)
				putchar('\n');
		}
		else
			continue;
	}
	if(count % 20 != 0)
		putchar('\n');
	return;
}
