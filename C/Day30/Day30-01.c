#include <stdio.h>
#include <stdlib.h>


int main()
{
	int month, day;				//����ڰ� �Է��ϴ� ���� �� ��

	int days = 0;				// 1�� 1�Ͽ������� ����ڰ� �Է��� ���ڱ��� ���� �ϼ�
	int day_week_first = 6;		//1��1���� ����(�����)
	int day_week;				// ����ڰ� �Է��� ��¥�� ����

	//�� ���� ��¥�� ��Ÿ���� �迭
	int month_days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

	//������ ���ڿ��� ����ϱ� ����, ������ ���ڿ� ������� ����
	const char *day_of_week[] = {
		"Sunday", "Monday", "Tuesday", "Wendesday", "Thursday", "Friday", "Saturday"
	};

	printf("Enter month as a number: ");
	scanf("%d", &month);

	printf("Enter day as a number: ");
	scanf("%d", &day);
	printf("\n");

	//��ȿ�� �˻�
	if (month < 1 || month >12)
	{
		printf("ERROR: Invalid month!\n");

		//���� ����� �Է����� ���� ���, �ٽ� �Է��ϵ��� �ϰų� ���α׷� ����
		
		//#include <stdlib.h>
		//void exit(int error_code);

		exit(1);
	}

	if (day < 1 || day > month_days[month])
	{
		printf("ERROR: Invalid month!\n");
		exit(1);
	}

	//������ ����ϱ� ���� ����ڰ� �Է��� ��¥�� 1��1�Ͽ��� ��ĥ�� �������� ���

	//�ݺ������� ����ڰ� �Է��� ���� ���� �������� ��¥�� �հ踦 ���

	for (int i = 1; i < month; i++)
		days += month_days[i];

	days += day - 1;

	//����ڰ� �Է��� ��¥�� ���� = ((1��1�� ����) + (������¥)) % 7
	day_week = (day_week_first + days) % 7;

	printf("2022-%02d-%02d %s\n", month, day, day_of_week[day_week]);

	return 0;
}
