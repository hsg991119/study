#include <stdio.h>

int main()
{	
	char ch;
	printf("Enter a character: ");
	scanf("%c", &ch);
	printf("\n");

	printf("character '%c'\n", ch);
	printf("ASCII code = %d\n", ch);
	return 0;
}