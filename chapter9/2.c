#include <stdio.h>

void chline(char, int, int);

int main(void)
{
	char ch;
	int row, col;
	printf("Please enter a character: ");
	ch = getchar();
	while(getchar() != '\n')
		continue;
	printf("Please enter the row and col: \n");
	while(scanf("%d %d", &row, &col) == 2)
		chline(ch, col, row);

	return 0;
}

void chline(char ch, int i, int j)
{
	int row, col;
	for(row = 1; row <= j; row++)
	{
		for(col = 1; col <= i; col++)
			putchar(ch);
		putchar('\n');
	}

	return;
}
