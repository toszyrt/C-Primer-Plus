#include <stdio.h>

int main(void)
{
	char alphabet[26];
	int index;
	for(index = 0; index < 26; index++)
		//alphabet[index] = (char)(index+97);
		alphabet[index] = index+'a';
	for(index = 0; index < 26; index++)
		printf("%c ",alphabet[index]);
	printf("\n");

	return 0;
}
