#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
void ar_show(int * ar, int size);
void ar_sort(int * ar, int size);

int main(void)
{
	int tmp, r_number[SIZE];
	for(int i = 0; i < SIZE; i++)
		r_number[i] = rand() % 10 + 1;
	printf("Original data: \n");
	ar_show(r_number, SIZE);
	printf("\nSorted data: \n");
	ar_sort(r_number, SIZE);
	ar_show(r_number, SIZE);

	return 0;
}

void ar_show(int * ar, int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("%2d ", ar[i]);
		if((i + 1) % 10 == 0)
			putchar('\n');
	}
	return;
}

void ar_sort(int * ar, int size)
{
	int tmp;
	for(int i = 0; i < size - 1; i++)
		for(int j = i + 1; j < size; j++)
			if(ar[i] < ar[j])
			{
				tmp = ar[i];
				ar[i] = ar[j];
				ar[j] = tmp;
			}
	return;
}
