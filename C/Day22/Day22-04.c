#include <stdio.h>

#define NUM_COINS 10

int main()
{
	int coin_units[] = {500, 100, 50, 10};			//동전 단위
	int length = sizeof(coin_units) / sizeof(int); //배열 coin_units의 크기

	int amount = 0;								   // 거스름돈
	int num = 0;								   // 거슬러 줄 동전의 개수

	// 사용자 입력
	printf("Enter the amount to be repaid: ");
	scanf("%d", &amount);
	printf("\n");

	if (amount < 10 || amount > 6600 || amount % 10)
	{
		printf("ERROR: Invalid amount!\n");

		// 프로그램 종료
		// return 1;
		
		// exit 함수로 현재 실행 중인 프로세스(process)를 종료
		// #include <stdib.h>
		// voide exit(int status);
		exit(1);
	}

	// 반복문으로 500원짜리 동전에서부터 몇 개씩 거슬러 줘야 하는지 계산
	for (int i = 0; i < length && amount > 0; i++)
	{
		// 거슬러 줄 동전의 개수를 계산
		num = amount / coin_units[i];

		// 거슬러 줄 동전이 있는 경우
		if (num)
		{
			// 거슬러 줄 동전의 개수는 동전의 최대 개수를 넘을 수 없다.
			num = num > NUM_COINS ? NUM_COINS : num;

			// 동전의 단위와 개수 출력
			printf("%d won coins = %d\n", coin_units[i], num);

			// 현재 단위의 동전을 거슬러 주고 남은 거스름돈을 계산
			amount -= coin_units[i] * num;
		}
	}
	return 0;
}