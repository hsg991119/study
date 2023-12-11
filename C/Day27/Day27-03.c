#include <stdio.h>

#define LENGTH 80

void str_len(const char* ptr)
{
	int count = 0;

	for (int i = 0; ptr[i] && i < LENGTH; i++) count++;

	printf("string = \"%s\"\n", ptr);
	printf("length = %d", count);
}

int main()
{
	char str[LENGTH + 1] = { 0 };

	printf("Enter a string: ");
	scanf("%[^\n]s", &str);
	printf("\n");

	str_len(str);

	return 0;
}
