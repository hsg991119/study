#include <stdio.h>

int main()
{
	int minute;
	int hour;

	while (1)
	{
		printf("Enter minutes: ");
		scanf("%d", &minute);
		if (minute == 0) break;
		else
		{
			hour = minute / 60;
			printf("%d minutes = %d hour %d minutes\n", minute, hour, minute%60);
			printf("\n");
			continue;
		}
	}

	printf("Good bye!\n");

	return 0;
}