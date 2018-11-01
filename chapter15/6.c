#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define left   0
#define center 1
#define right  2
#define off    0
#define on     1
struct wordinfo {
	unsigned int fontid : 8;
	unsigned int size   : 7;
	unsigned int align  : 2;
	unsigned int bold   : 1;
	unsigned int italic : 1;
	unsigned int underl : 1;
};
void eatline(void);
void showmenu1(void);
void showmenu2(void);
char get_first(void);
char get_choice1(void);
char get_choice2(void);
void printer(const struct wordinfo * ptb);
void change_f(struct wordinfo * wf);
void change_s(struct wordinfo * ws);
void change_a(struct wordinfo * wa);
void toggle_b(struct wordinfo * wb);
void toggle_i(struct wordinfo * wi);
void toggle_u(struct wordinfo * wu);

int main(void)
{
	struct wordinfo word = {1, 12, left, off, off, off};
	char input;
	printer(&word);
	while((input = get_choice1()) != 'q')
		switch(input)
		{
			case 'f':
				change_f(&word);
				break;
			case 's':
				change_s(&word);
				break;
			case 'a':
				change_a(&word);
				break;
			case 'b':
				toggle_b(&word);
				break;
			case 'i':
				toggle_i(&word);
				break;
			case 'u':
				toggle_u(&word);
				break;
			default:
				printf("program error!\n");
				exit(-1);
		}
	printf("Bye!\n");

	return 0;
}

void eatline(void)
{
	while(getchar() != '\n')
		continue;
	return;
}

void showmenu1(void)
{
	printf("f)change font   s)change size    a)change alignment\n");
	printf("b)toggle bold   i)toggle italic  u)toggle underline\n");
	printf("q)quit\n");
	return;
}

void showmenu2(void)
{
	printf("Select alignment: \n");
	printf("l)left   c)center   r)right\n");
	return;
}

char get_first(void)
{
	char ch;
	while((ch = getchar()) == ' ')
		continue;
	eatline();
	return ch;
}

char get_choice1(void)
{
	char ch;
	showmenu1();
	while(strchr("fsabiuq", ch = get_first()) == NULL)
		printf("Please respond with fsabiuq.\n");
	return ch;
}

char get_choice2(void)
{
	char ch;
	showmenu2();
	while(strchr("lcr", ch = get_first()) == NULL)
		printf("Please respond with lcr.\n");
	return ch;
}

void printer(const struct wordinfo * ptb)
{
	char temp[10];
	if(ptb->align == 0)
		strcpy(temp, "left");
	else if(ptb->align == 1)
		strcpy(temp, "center");
	else
		strcpy(temp, "right");
	putchar('\n');
	printf("%3s\t%5s\t%10s\t%2s\t%2s\t%2s\n",
			"ID", "SIZE", "ALIGNMENT", "B", "I", "U");
	printf("%3u\t%5u\t%10s\t%2s\t%2s\t%2s\n",
			ptb->fontid, ptb->size, temp,
			ptb->bold == 0 ? "off" : "on",
			ptb->italic == 0 ? "off" : "on",
			ptb->underl == 0 ? "off" : "on");
	putchar('\n');
	return;
}

void change_f(struct wordinfo * wf)
{
	unsigned int temp;
	printf("Enter font id (0-255): ");
	scanf("%u", &temp);
	wf->fontid = temp;
	eatline();
	printer(wf);
	return;
}

void change_s(struct wordinfo * ws)
{
	unsigned int temp;
	printf("Enter font size(0-127): ");
	scanf("%u", &temp);
	ws->size = temp;
	eatline();
	printer(ws);
	return;
}

void change_a(struct wordinfo * wa)
{
	char ch;
	ch = get_choice2();
	switch(ch)
	{
		case 'l':
			wa->align = left;
			break;
		case 'c':
			wa->align = center;
			break;
		case 'r':
			wa->align = right;
			break;
		default:
			printf("program error!\n");
			exit(-2);
	}
	printer(wa);
	return;
}

void toggle_b(struct wordinfo * wb)
{
	wb->bold = on;
	printer(wb);
	return;
}

void toggle_i(struct wordinfo * wi)
{
	wi->italic = on;
	printer(wi);
	return;
}

void toggle_u(struct wordinfo * wu)
{
	wu->underl = on;
	printer(wu);
	return;
}
