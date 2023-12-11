#include <stdio.h>

int main()
{
	int x1 = 30, y1 = 20;
	int x2 = 10, y2 = 10;
	int x3 = 10, y3 = 20;
	int x4 = x1, y4 = y1;

	if (x1 == x2) x4 = x3;
	else if (x1 == x3) x4 = x2;

	if (y1 == y2) y4 = y3;
	else if (y1 == y3) y4 = y2;

	printf("(%d, %d), (%d, %d), (%d, %d)\n", x1, y1, x2, y2, x3, y3);
	printf("(%d, %d)\n", x4, y4);

	return 0;
}