#include <stdio.h>
#include <string.h>
struct member_info {
	int ssid;
	struct {
		char first[10];
		char last[15];
		char middle[5];
	};
};
void printer1(const struct member_info ptm []);
void printer2(const struct member_info memb);

int main(void)
{
	const struct member_info member[5] = {
		{2180733, {"Mack", "Zackles", "M"}},
		{2180734, {"Filmore", "Walletz"}},
		{2180735, {"Buster", "Downsize", "J"}},
		{2180736, {"Kindra", "Schlagmeyer"}},
		{2180737, {"Stephen", "Prata", "L"}}
	};
	puts("The 1st function: ");
	printer1(member);
	putchar('\n');
	puts("The 2nd function: ");
	for(int i = 0; i < 5; i++)
		printer2(member[i]);

	return 0;
}

void printer1(const struct member_info ptm [])
{
	for(int i = 0; i < 5; i++)
	{
		if(strlen(ptm[i].middle) == 1)
			printf("%s, %s %c. -- %d\n", ptm[i].first, ptm[i].last, ptm[i].middle[0], ptm[i].ssid);
		else
			printf("%s, %s -- %d\n", ptm[i].first, ptm[i].last, ptm[i].ssid);
	}
	return;
}

void printer2(const struct member_info memb)
{
	if(strlen(memb.middle) == 1)
		printf("%s, %s %c. -- %d\n", memb.first, memb.last, memb.middle[0], memb.ssid);
	else
		printf("%s, %s -- %d\n", memb.first, memb.last, memb.ssid);
	return;
}
