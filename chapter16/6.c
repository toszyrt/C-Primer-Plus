#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char first[10];
	char last[20];
} names;

void show_names(const names lab[]);
int mycomp(const void * p1, const void * p2);

int main(void)
{
	names lab5018[5] = {
		{"mei", "jun"},
		{"ou", "sifan"},
		{"wu", "guangzong"},
		{"lin", "liqun"},
		{"wei", "tianlun"},
	};
	puts("Original list: ");
	show_names(lab5018);
	qsort(lab5018, 5, sizeof(names), mycomp);
	puts("\nSorted list: ");
	show_names(lab5018);
	
	return 0;
}

void show_names(const names lab[])
{
	for(int i = 0; i < 5; i++)
		printf("%s %s\n", lab[i].first, lab[i].last);
	return;
}

int mycomp(const void * p1, const void * p2)
{
	const names * pn1 = (const names *) p1;
	const names * pn2 = (const names *) p2;
	int res;
	res = strcmp(pn1->first, pn2->first);
	if(res == 0)
		res = strcmp(pn1->last, pn2->last);
	return res;
}
