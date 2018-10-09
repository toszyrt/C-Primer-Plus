#include <stdio.h>
#include <ctype.h>

void display(void);
char get_first(void);
char get_choice(void);
int get_int(void);
float get_f(void);
void get_two(float *,float *);
void add(float *,float *);
void subtract(float *,float *);
void multiply(float *,float *);
void divide(float *,float *);

int main(void)
{
	char choice;
	float first,second;
	while((choice = get_choice()) != 'q')
	{
		get_two(&first,&second);
		switch(choice)
		{
			case 'a':
				add(&first,&second);
				break;
			case 's':
				subtract(&first,&second);
				break;
			case 'm':
				multiply(&first,&second);
				break;
			case 'd':
				divide(&first,&second);
				break;
			default:
				return 1;
		}
	}

	return 0;
}

void display(void)
{
	printf("Enter the operation of your choice: \n");
	printf("a. add                s. subtract\n");
	printf("m. multiply           d. divide\n");
	printf("q. quit\n");
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
	display();
	ch = get_first();
	while(ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
	{
		printf("Please respond with a, s, m, d, or q.\n");
		ch = get_first();
	}

	return ch;
}

/*int get_int(void)
{
	int value;
	char ch;
	while((scanf("%d",&value)) != 1)
	{
		while((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not an integer. Try again.\n");
		printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
	}

	return value;
}*/

float get_f(void)
{
	float value;
	char ch;
	while((scanf("%f",&value)) != 1)
	{
		while((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not an integer. Try again.\n");
		printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
	}

	return value;
}

void get_two(float *x,float *y)
{
	printf("Enter first number: ");
	*x = get_f();
	printf("Enter second number: ");
	*y = get_f();
}

void add(float *x,float *y)
{
	float sum;
	sum = *x+*y;
	printf("%.1f + %.1f = %.1f\n",*x,*y,sum);
}

void subtract(float *x,float *y)
{
	float difference;
	difference = *x-*y;
	printf("%.1f - %.1f = %.1f\n",*x,*y,difference);
}

void multiply(float *x,float *y)
{
	float product;
	product = (*x)*(*y);
	printf("%.1f * %.1f = %.1f\n",*x,*y,product);
}
void divide(float *x,float *y)
{
	float quotient;
	while(*y == 0)
	{
		printf("Enter a number other than 0: ");
		*y = get_f();
	}
	quotient = (*x)/(*y);
	printf("%.1f / %.1f = %.1f\n",*x,*y,quotient);
}
