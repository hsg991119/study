#include <stdio.h>
#include <stdlib.h>


int main()
{
	int month, day;				//사용자가 입력하는 월과 일 값

	int days = 0;				// 1월 1일에서부터 사용자가 입력한 날자까지 지난 일수
	int day_week_first = 6;		//1월1일의 요일(토요일)
	int day_week;				// 사용자가 입력한 날짜의 요일

	//각 달의 날짜를 나타내는 배열
	int month_days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

	//요일을 문자열로 출력하기 위해, 요일의 문자열 상수들을 저장
	const char *day_of_week[] = {
		"Sunday", "Monday", "Tuesday", "Wendesday", "Thursday", "Friday", "Saturday"
	};

	printf("Enter month as a number: ");
	scanf("%d", &month);

	printf("Enter day as a number: ");
	scanf("%d", &day);
	printf("\n");

	//유효성 검사
	if (month < 1 || month >12)
	{
		printf("ERROR: Invalid month!\n");

		//값을 제대로 입력하지 않을 경우, 다시 입력하도록 하거나 프로그램 종료
		
		//#include <stdlib.h>
		//void exit(int error_code);

		exit(1);
	}

	if (day < 1 || day > month_days[month])
	{
		printf("ERROR: Invalid month!\n");
		exit(1);
	}

	//요일을 계산하기 위해 사용자가 입력한 날짜가 1월1일에서 며칠이 지났는지 계산

	//반복문으로 사용자가 입력한 월의 이전 월까지의 날짜의 합계를 계산

	for (int i = 1; i < month; i++)
		days += month_days[i];

	days += day - 1;

	//사용자가 입력한 날짜의 요일 = ((1월1일 요일) + (지난날짜)) % 7
	day_week = (day_week_first + days) % 7;

	printf("2022-%02d-%02d %s\n", month, day, day_of_week[day_week]);

	return 0;
}
