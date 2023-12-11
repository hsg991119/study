#include <stdio.h>

int main()
{
	int w, h, won;

	printf("Enter hourly wage: ");
	scanf("%d", &w);
	printf("Enter the hours worked: ");
	scanf("%d", &h);
	printf("\n");

	if (8 < h)
	{
		won = w * h + (w * 0.5);
		printf("Today's wage is %d won.", won);
	}
	else
	{
		won = w * h;
		printf("Today's wage is %d won.", won);
	}
	return 0;
}