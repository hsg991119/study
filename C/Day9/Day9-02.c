#include <stdio.h>

int main()
{
	char c;
	printf("Enter a character: ");
	scanf("%c", &c);
	printf("\n");

	switch (c)
	{
	case 'a':
	case 'A':
		printf("Apple\n");
		break;
	case 'b':
	case 'B':
		printf("Banana\n");
		break;
	case 'c':
	case 'C':
		printf("Fruit\n");
		break;
	default:
		printf("Fruit");
		break;

	}
	return 0;
}