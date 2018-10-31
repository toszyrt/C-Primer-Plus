#include <stdio.h>
#define CSIZE 4
struct nameinfo {
	char first[10];
	char last[10];
};
struct studentinfo {
	struct nameinfo name;
	float grade[3];
	float average;
};
void get_grades(struct studentinfo ar []);
void show_class(const struct studentinfo ar []);

int main(void)
{
	struct studentinfo student[CSIZE] =  {
		{"Filp", "Snide"},
		{"Clare", "Voyans"},
		{"Bingo", "Higgs"},
		{"Fawn", "Hunter"}
	};
	get_grades(student);
	show_class(student);

	return 0;
}

void get_grades(struct studentinfo ar [])
{
	for(int i = 0; i < CSIZE; i++)
	{
		printf("Enter the 3 grades for %s %s\n", ar[i].name.first, ar[i].name.last);
		scanf("%f%f%f", &ar[i].grade[0], &ar[i].grade[1], &ar[i].grade[2]);
		ar[i].average = (ar[i].grade[0] + ar[i].grade[1] + ar[i].grade[2]) / 3;
	}
	return;
}

void show_class(const struct studentinfo ar [])
{
	float temp = 0;
	printf("The class infomation as follow: \n");
	for(int i = 0; i < CSIZE; i++)
	{
		printf("%s %s: \ngrade = %5.2f %5.2f %5.2f average = %5.2f\n", ar[i].name.first, ar[i].name.last, ar[i].grade[0], ar[i].grade[1], ar[i].grade[2], ar[i].average);
		temp += ar[i].average;
	}
	printf("The average of class: %5.2f\n", temp / CSIZE); 
	return;
}
