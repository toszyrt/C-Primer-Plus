#include <stdio.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTH 40
#define MAXBKS  100
struct book {
	char title[MAXTITL];
	char author[MAXAUTH];
	float value;
};
char * s_gets(char * st, int n);
void printer(struct book * pt [], int n);
void sort_print(struct book handle [], int n);

int main(void)
{
	struct book library[MAXBKS];
	int count = 0;
	int index;

	printf("Please enter the book title.\n");
	printf("Press [enter] at the start of a line to stop.\n");
	while(count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
	{
		printf("Now enter the author.\n");
		s_gets(library[count].author, MAXAUTH);
		printf("Now enter the value.\n");
		scanf("%f", &library[count].value);
		count++;
		while(getchar() != '\n')
			continue;
		if(count < MAXBKS)
			printf("Enter the next title.\n");
	}

	if(count > 0)
	{
		printf("Here is the list of your books: \n");
		sort_print(library, count);
	}
	else
		printf("No books? Too bad.\n");
	
	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;
	ret_val = fgets(st, n, stdin);
	if(ret_val)
	{
		find = strchr(st, '\n');
		if(find)
			*find = '\0';
		else
			while(getchar() != '\n')
				continue;
	}
	return ret_val;
}

void printer(struct book * pt [], int n)
{
	for(int i = 0; i < n; i++)
		printf("%s by %s: $%.2f\n", pt[i]->title, pt[i]->author, pt[i]->value);
	return;
}


void sort_print(struct book handle [], int n)
{
	struct book * ptb [n];
	for(int i = 0; i < n; i++)
		ptb[i] = &handle[i];
	puts("The original list: ");
	printer(ptb, n);
	putchar('\n');

	struct book * temp;
	for(int i = 0; i < n - 1; i++)
		for(int j = i + 1; j < n; j++)
			if(strcmp(ptb[i]->title, ptb[j]->title) > 0)
			{
				temp = ptb[i];
				ptb[i] = ptb[j];
				ptb[j] = temp;
			}
	puts("The list by title: ");
	printer(ptb, n);
	putchar('\n');

	for(int i = 0; i < n - 1; i++)
		for(int j = i + 1; j < n; j++)
			if(ptb[i]->value > ptb[j]->value)
			{
				temp = ptb[i];
				ptb[i] = ptb[j];
				ptb[j] = temp;
			}
	puts("The list by value: ");
	printer(ptb, n);
	return;
}
