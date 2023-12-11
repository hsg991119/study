#include <stdio.h>

int main()
{
	int scores[] = { 88, 92, 76, 64, 86, 96, 82, 78 };

	int length = sizeof(scores) / sizeof(int);

	for (int i = 0; i < length; i++)
		if(i % 2)
			printf("%d\n", scores[i]);

	return 0;
}