#include <stdio.h>
#define MONTHS 12
#define YEARS   5

void rain_year(int years, int months, const float rain[years][months]);
void rain_month(int years, int months, const float rain[years][months]);

int main(void)
{
    const float rain[YEARS][MONTHS] =
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };
	rain_year(YEARS, MONTHS, rain);
	rain_month(YEARS, MONTHS, rain);
    printf("\n");
    
    return 0;
}
void rain_year(int years, int months, const float rain[years][months])
{
	float subtot = 0;
	float total = 0;
	for(int r = 0; r < years; r++)
	{
		for(int c = 0; c < months; c++)
			subtot += rain[r][c];
        printf("%5d %15.1f\n", 2010 + r, subtot);
        total += subtot;
		subtot = 0;
	}
    printf("\nThe yearly average is %.1f inches.\n\n",
           total/years);
	return;
}
void rain_month(int years, int months, const float rain[years][months])
{
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct ");
    printf(" Nov  Dec\n");
	float subtot = 0;
	for(int c = 0; c < months; c++)
	{
		for(int r = 0; r < years; r++)
			subtot += rain[r][c];
        printf("%4.1f ", subtot/years);
		subtot = 0; 
	}
	return;
}
