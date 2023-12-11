#include <stdio.h>

int main()
{
	int x, y;
	char Q;
	printf("Enter two coordinate: ");
	scanf("%d %d", &x, &y);
	printf("\n");

	if (x > 0 && y > 0)
		Q = '1';
	else if (x < 0 && y > 0)
		Q = '2';
	else if (x < 0 && y < 0)
		Q = '3';
	else if (x > 0 && y < 0)
		Q = '4';
	else
		printf("(%d, %d) is not belongs to any quadrant\n", x, y);

	printf("(%d, %d) belongs to the %c quadrant\n", x, y, Q);
	return 0;
}