#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int array1[20][30];
	char array2[20][31];
	char trans[10] = {" .\':~*=+%#"};
	FILE * fp;
	if((fp = fopen("p12.txt", "r")) == NULL)
	{
		fprintf(stderr, "Can't open p12.txt\n");
		exit(EXIT_FAILURE);
	}
	for(int i = 0; i < 20; i++)
	{
		for(int j = 0; j < 30; j++)
		{
			fscanf(fp, "%d", &array1[i][j]);
			array2[i][j] = trans[array1[i][j]];
/*			switch(array1[i][j])
			{
				case 0:
					array2[i][j] = ' ';
					break;
				case 1:
					array2[i][j] = '.';
					break;
				case 2:
					array2[i][j] = '\'';
					break;
				case 3:
					array2[i][j] = ':';
					break;
				case 4:
					array2[i][j] = '~';
					break;
				case 5:
					array2[i][j] = '*';
					break;
				case 6:
					array2[i][j] = '=';
					break;
				case 7:
					array2[i][j] = '+';
					break;
				case 8:
					array2[i][j] = '%';
					break;
				case 9:
					array2[i][j] = '#';
					break;
				default:
					fprintf(stderr, "Error program!\n");
					exit(EXIT_FAILURE);
			}
*/			printf("%c", array2[i][j]);
		}
		array2[i][30] = '\0';
		putchar('\n');
	}

	return 0;
}
