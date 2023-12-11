#include <stdio.h>

#define LENGTH 80

int main()
{
	char s[LENGTH + 1] = { 0 };
	int count = 0;
	printf("Enter a string: ");
	scanf("%[^\n]s", &s);

	for (int i = 0; s[i]; i++) 
	{
		if(s[i] == ' ')
			count++;
	}


	printf("string = \"%s\"", s);
	printf("words = %d", count+1);




	return 0;
}