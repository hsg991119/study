#include <stdio.h>

int main()
{
	int hour, minute;
	int num = 45;

	printf("Enter the alarm time: ");
	scanf("%d %d", &hour, &minute);

	if (hour < 0 || hour >= 24 || minute < 0 || minute >= 60)
	{
		printf("EEROR: Invalid value!\n");

	}
	minute -= 45;
		if (minute < 0)
		{
			hour--;
			minute += 60;
			if (hour < 0) hour += 24;

		}
	printf("The alarm should be set at %d:%d.", hour, minute);
	return 0;
}