char get_first(void)
{
	char ch;
	while(getchar() == ' ')
		continue;
	ch = getchar();
	while(getchar() != '\n')
		continue;
	return ch;
}

char get_choice(void)
{
	char ch;
	showmenu();
	ch = get_first();
	while(ch < 'a' || ch > 'e')
	{
		printf("Please respond with a-e.\n");
		ch = get_first();
	}
	return ch;
}

int get_int(void)
{
	int input;
	char ch;
	while(scanf("%d", &input) != 1)
	{
		while((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not an integer.\n");
	}
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
