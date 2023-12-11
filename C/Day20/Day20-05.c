#include <stdio.h>

#define TRUE 1
#define FALSE 0

#define MAX(X, Y) ((X) > (Y) ? (X) : (Y))
#define MIN(X, Y) ((X) < (Y) ? (X) : (Y))
#define SQUARE(X) ((X) * (X))


int main()
{
	int a, b, c;
	int max, min, mid;


	while (TRUE)
	{
		printf("Enter the length of the three sides: ");
		scanf("%d %d %d", &a, &b, &c);

		if (!a && !b && !c) break;

		if (a <= 0 || b <= 0 || c <= 0)
		{
			printf("ERROE: Invalid values!\n");
			continue;
		}

		max = MAX(a, MAX(b, c));
		min = MIN(a, MIN(b, c));
		mid = (a + b + c) - max - min;

		if (SQUARE(max) == SQUARE(mid) + SQUARE(min))
			printf("The triangle is a right triangle.\n\n");
		else
			printf("The triangle is not a right triangle.\n\n");
	}

	return 0;
}