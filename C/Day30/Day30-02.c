#include <stdio.h>

#define TRUE 1
int main()
{
	char ch;

	while (TRUE)
	{
		printf("Enter a character: ");
		scanf("%c", &ch);
		getchar();
		
		if (ch == '.') break;

		printf("The ASCII code of \'%c\' is %d.\n", ch, (int)ch);
		
		
	}

	printf("Good bye!\n");

	return 0;
}