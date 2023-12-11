#include <stdio.h>

#define LENGTH 80
int main()
{
	char str[LENGTH + 1] = { 0 };
	int length = 0;

	printf("Enter a string: ");
	scanf("%[^\n]s", str);
	printf("\n");

	for (length = 0; str[length] && length <= LENGTH; length++);
		

	printf("string = \"%s\"\n", str);
	printf("%d\n", length);

	return 0;
}