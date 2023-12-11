#include <stdio.h>

void print_strings(char** ptr, int length)
{
	for(int i = 0; i < length; i++)
		printf("fruits[%d] = \"%s\"\n", i, ptr[i]);
}


int main()
{
	const char* fruits[] = { "Apple", "Banana", "Orange", "Strawberry" };
	int length = sizeof(fruits) / sizeof(char*);

	print_strings(fruits, length);

	return 0;
}
