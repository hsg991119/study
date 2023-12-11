#include <stdio.h>

#define LENGTH 80

int main()
{
	char str[LENGTH + 1] = { 0 };
	char lower[LENGTH + 1] = { 0 };
	char upper[LENGTH + 1] = { 0 };

	printf("Enter a string: ");
	scanf("%[^\n]s", str);
	printf("\n");

	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			lower[i] = str[i] + 32;
		else
			lower[i] = str[i];

		if (str[i] >= 'a' && str[i] <= 'z')
			upper[i] = str[i] - 32;
		else
			upper[i] = str[i];
	}
	
	printf("string = \"%s\"\n", str);
	printf("lower  = \"%s\"\n", lower);
	printf("upper  = \"%s\"\n", upper);
	

	return 0;
}