#include <stdio.h>

int main()
{
	int tree_height;
	int rise_day;
	int sliding_night;
	int snail_height = 0;
	int days = 0;

	printf("Enter the tree height: ");
	scanf("%d", &tree_height);
	printf("Enter the height that rises during the day: ");
	scanf("%d", &rise_day);
	printf("Enter the sliding height at night: ");
	scanf("%d", &sliding_night);
	printf("\n");

	while(1)
	{
		days++;

		snail_height += rise_day;

		if (snail_height >= tree_height) break;

		snail_height -= sliding_night;
	}

	printf("It takes %d days for the snail to climb the tree.\n", days);

	return 0;
}