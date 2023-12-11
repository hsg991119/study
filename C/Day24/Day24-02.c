#include <stdio.h>

#define LENGTH 80
int main()
{
	char str[LENGTH + 1] = { 0 };
	char reverse[LENGTH + 1] = { 0 };
	int length = 0;


	printf("Enter a string: ");
	scanf("%[^\n]s", str);
	printf("\n");

	for (length = 0; str[length] && length <= LENGTH; length++);
	
	for (int i = 0; i < length; i++)
		reverse[i] = str[length - 1 - i];

	reverse[length] = 0;

	printf("string = \"%s\"\n", str);
	printf("reverse = \"%s\"\n", reverse);

	return 0;
}