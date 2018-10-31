#include <stdio.h>
#include <stdbool.h>
#include <string.h>
struct planeinfo {
	int  seatid;
	bool status;
	char first[10];
	char last[10];
};
char get_first(void);
char get_choice(void);
int get_int(void);
char * s_gets(char * st, int n);
void showmenu(void);
int find_empties(const struct planeinfo pla [], char emp []);
void show_empties(const struct planeinfo pla [], char emp []);
void list_empties(const struct planeinfo pla [], char emp []);
void sort_show(struct planeinfo pla []);
void assign_seat(struct planeinfo pla []);
void delete_seat(struct planeinfo pla []);

int main(void)
{
	struct planeinfo plane[10] = {
		{1, 0},{2, 0},{3, 0},{4, 0},{5, 0},{6, 0},{7, 0},{8, 0}, {9, 0},{10,0}
	};
	char choice, empties[10];
	while((choice = get_choice()) != 'f')
	{
		switch(choice)
		{
			case 'a':
				show_empties(plane, empties);
				break;
			case 'b':
				list_empties(plane, empties);
				break;
			case 'c':
				sort_show(plane);
				break;
			case 'd':
				assign_seat(plane);
				break;
			case 'e':
				delete_seat(plane);
				break;
			default:
				printf("Error program!\n");
				return -1;
		}
		putchar('\n');
	}
	printf("see you later.\n");

	return 0;
}


char get_first(void)
{
	char ch;
	while((ch = getchar()) == ' ')
		continue;
	while(getchar() != '\n')
		continue;
	return ch;
}

char get_choice(void)
{
	char ch;
	showmenu();
	ch = get_first();
	while(strchr("abcdef", ch) == NULL)
	{
		puts("Please respond with a-f.");
		ch = get_first();
	}
	return ch;
}

int get_int(void)
{
	int input;
	char ch;
	while(scanf("%d", &input) != 1 || input < 1 || input > 10)
		printf("unexpected input!\n");
	while(getchar() != '\n')
		continue;
	return input;
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

void showmenu(void)
{
	puts("To choose a function, enter its letter label: ");
	puts("a) Show number of empty seats");
	puts("b) Show list of empty seats");
	puts("c) Show alphabetical list of seats");
	puts("d) Assign a customer to a seat assignment");
	puts("e) Delete a seat assignment");
	puts("f) Quit");
	return;
}

int find_empties(const struct planeinfo pla [], char emp [])
{
	int count = 0;
	for(int i = 0; i < 10; i++)
		if(pla[i].status == 0)
			emp[count++] = i + 1;
	return count;
}

void show_empties(const struct planeinfo pla [], char emp [])
{
	int count;
	count = find_empties(pla, emp);
	printf("The number of empty seats as follow: \n");
	for(int i = 0; i < count; i++)
		printf("%d ", emp[i]);
	putchar('\n');
	return;
}

void list_empties(const struct planeinfo pla [], char emp [])
{
	 int count;
	 count = find_empties(pla, emp);
	 printf("The list of empty seats as follow: \n");
	 for(int i = 0; i < count; i++)
		 printf("%d %s %s\n", emp[i], pla[emp[i] - 1].first, pla[emp[i] - 1].last);
	 return;
}

void sort_show(struct planeinfo pla [])
{
	int index = 0;
	struct planeinfo * temp;
	struct planeinfo * ptp [10];
	for(int i = 0; i < 10; i++)
		if(pla[i].status == 1)
			ptp[index++] = &pla[i];
	for(int i = 0; i < index - 1; i++)
		for(int j = i + 1; j < index; j++)
			if(strcmp(ptp[i]->first, ptp[j]->first) > 0)
			{
				temp = ptp[i];
				ptp[i] = ptp[j];
				ptp[j] = temp;
			}
	printf("The assigned seats list by alph as follow: \n");
	for(int i = 0; i < index; i++)
		printf("%d %s %s\n", ptp[i]->seatid, ptp[i]->first, ptp[i]->last);
	return;
}

void assign_seat(struct planeinfo pla [])
{
	int yourid;
	printf("Please enter the seatid 1-10 you want to assign.\n");
	yourid = get_int();
	if(pla[yourid - 1].status == 0)
	{
		printf("Enter your first name: \n");
		s_gets(pla[yourid - 1].first, 10);
		printf("Enter your last name: \n");
		s_gets(pla[yourid - 1].last, 10);
		pla[yourid - 1].status = 1;
		printf("Done!\n");
	}
	else
		printf("%d has been assigned before!\n", yourid);
	return;
}

void delete_seat(struct planeinfo pla [])
{
	int yourid;
	printf("Please enter the seatid 1-10 you want to delete.\n");
	yourid = get_int();
	if(pla[yourid - 1].status == 1)
	{
		pla[yourid - 1].status = 0;
		printf("Done!\n");
	}
	else
		printf("%d is not assigned before!\n", yourid);
	return;
}
