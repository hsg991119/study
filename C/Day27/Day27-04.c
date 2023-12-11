#include <stdio.h>


void str_copy(const char* ptr)
{
	int count = 0;

	for (int i = 0; ptr[i] && i < LENGTH; i++) count++;

	printf("string = \"%s\"\n", ptr);
	printf("length = %d", count);
}

int main()
{
	char str[81] = { 0 };

	str_copy(str, "Hello World!", 80);
	printf("string = %s \n",str);

	return 0;
}
