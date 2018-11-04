#include <stdio.h>
#include <math.h>
#define pi (4*atan(1))
typedef struct {
	double r;
	double a;
} polar_st;

typedef struct {
	double x;
	double y;
} rect_st;

rect_st p_to_r(const polar_st ppp);

int main(void)
{
	polar_st mypolar;
	rect_st myrect;
	printf("Please enter the magnitude and angle in degrees: \n");
	while(scanf("%lf%lf",  &mypolar.r, &mypolar.a) == 2 && mypolar.r >= 0)
	{
		myrect = p_to_r(mypolar);
		printf("polar: (%.1lf,%.1lf)", mypolar.r, mypolar.a);
		printf(" rect: (%.1lf,%.1lf)\n", myrect.x, myrect.y);
		printf("Next, q to quit.\n");
	}
	printf("Bye!\n");

	return 0;
}

rect_st p_to_r(const polar_st ppp)
{
	rect_st rrr;
	rrr.x = ppp.r * cos(ppp.a / 180 * pi);
	rrr.y = ppp.r * sin(ppp.a / 180 * pi);
	return rrr;
}
