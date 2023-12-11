#include <stdio.h>

int main()
{
	int w, h, d, salary;

	printf("Enter hourly wage: ");
	scanf("%d", &w);
	printf("Enter the hours worked: ");
	scanf("%d", &h);
	printf("Enter the number of days in this month: ");
	scanf("%d", &d);

	salary = (w * h) * d;
	printf("\n");
	printf("This month's salary is %d won.\n", salary);
	return 0;
}