#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIM  10
#define SIZE 80
char get_first(void);
char get_choice(void);
char * s_gets(char * st, int n);
void showmenu(void);
void str_print(char * strings[], int num);
void str_ascii(char * strings[], int num);
void str_length(char * strings[], int num);
int fwd_len(char *string);
void str_fwd_len(char * strings[], int num);

int main(void)
{
	char choice;
	char input[LIM][SIZE];
	char * orig[LIM], * ptrstr[LIM];
	int ct = 0;
	printf("Input up to %d lines. and I will deal with them.\n", LIM);
	printf("To stop. press the Enter key at a line's start.\n");
	while(ct < LIM && s_gets(input[ct], SIZE) != NULL && input[ct][0] != '\0')
	{
		orig[ct] = ptrstr[ct]= input[ct];
		ct++;
	}
	showmenu();
	while((choice = get_choice()) != '5')
	{
		switch(choice)
		{
			case '1':
				str_print(orig, ct);
				break;
			case '2':
				str_ascii(ptrstr, ct);
				str_print(ptrstr, ct);
				break;
			case '3':
				str_length(ptrstr, ct);
				str_print(ptrstr, ct);
				break;
			case '4':
				str_fwd_len(ptrstr, ct);
				str_print(ptrstr, ct);
				break;
			default:
				printf("program error.\n");
				return 1;
		}
		printf("Please enter your choice: ");
	}
	printf("see you later.\n");

	return 0;
}

char get_first(void)
{
	char ch;
	while(isspace(ch = getchar()))
		continue;
	while(getchar() != '\n')
		continue;
	return ch;
}

char get_choice(void)
{
	char ch;
	ch = get_first();
	while(ch < '1' || ch > '5')
	{
		printf("Please respond with 1-5.\n");
		ch = get_first();
	}
	return ch;
}

void showmenu(void)
{
	printf("******************************************************************\n");
	printf("1)print src string list       2)print by ascii\n");
	printf("3)print by length             4)print by length of first world\n");
	printf("5)quit\n");
	printf("******************************************************************\n");
	printf("Please enter your choice: ");
	return;
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

void str_print(char * strings[], int num)
{
	for(int i = 0; i < num; i++)
		puts(strings[i]);
	return;
}

void str_ascii(char * strings[], int num)
{
	char * tmp;
	for(int i = 0; i < num - 1; i++)
		for(int j = i + 1; j < num; j++)
			if(strcmp(strings[i], strings[j]) > 0)
			{
				tmp = strings[i];
				strings[i] = strings[j];
				strings[j] = tmp;
			}
	return;
}

void str_length(char * strings[], int num)
{
	char * tmp;
	for(int i = 0; i < num - 1; i++)
		for(int j = i + 1; j < num; j++)
			if(strlen(strings[i]) > strlen(strings[j]))
			{
				tmp = strings[i];
				strings[i] = strings[j];
				strings[j] = tmp;
			}
	return;
}

int fwd_len(char * string)
{
	char tmp[SIZE] = {'\0'};
	int i = 0;
	while(isspace(*string++))
		continue;
	do
	{
		tmp[i] = *string;
		i++;
		string++;
	}while(!isspace(*string) && *string != '\0');
	return strlen(tmp);
}

void str_fwd_len(char * strings[], int num)
{
	char * tmp;
	for(int i = 0; i < num - 1; i++)
		for(int j = i + 1; j < num; j++)
			if(fwd_len(strings[i]) > fwd_len(strings[j]))
			{
				tmp = strings[i];
				strings[i] = strings[j];
				strings[j] = tmp;
			}
	return;
}
