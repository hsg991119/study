#include <stdio.h>

char convert_case(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c - 32;
	else if (c >= 'a' && c <= 'z')
		c = c + 32;
	
	return c;
}

int main()
{
	char c;

	printf("Enter a English character: ");
	scanf("%c", &c);
	printf("\n");

	printf("Converting '%c' to uppercase or lowercase is '%c'.\n", c, convert_case(c));


	return 0;
}