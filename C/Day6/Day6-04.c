#include <stdio.h>

int main()
{
	int salary;
	int Amocunt;
	double lncome = 0.03;
	double Local = 0.003;

	printf("이번 달 월급: ");
	scanf("%d", &salary);

	Amocunt = salary - ((salary * lncome) + (salary * Local));

	printf("\n");
	printf("Amount received %d\n", Amocunt);
	return 0;
}