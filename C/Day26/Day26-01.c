#include <stdio.h>

#define LENGTH 81

int main()
{
	const char* ptr = "Dream comes true!";
	char str[LENGTH + 1] = { 0 };

	for (int i = 0; ptr[i] && i <= LENGTH; i++)
		str[i] = ptr[i];

	printf("prt = \"%s\"\n", ptr);
	printf("str = \"%s\"\n", str);
	return 0;
}
