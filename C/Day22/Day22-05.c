#include <stdio.h>

#define LENGTH	20							// 2진수의 최대 자리숫
#define TRUE	1
#define MAX_DECIMAL 1048575					// 20자리 2진수의 최댓값

int main()
{
	int decimal;							// 사용자가 입력한 10진수 자연수
	int binary[LENGTH] = { 0 };				// 사용자가 입력한 자연수를 2진수로 변환
	int digits = 0;							// 사용자가 입력한 자연수의 2진수 자릿수
	int num;
	// 무한 반복으로 사용자가 0을 입력할 때까지 반복문을 수행
	while (TRUE)
	{
		printf("Enter a positivie integer: ");
		scanf("%d", &decimal);
		

		if (!decimal) break;
		
		if (decimal < 1 || decimal > MAX_DECIMAL)
		{
			printf("ERROR: Out of range!\n");
			continue;
		}

		// 변수 num에 사용자가 입력한 자연수를 대입
		num = decimal;

		for (digits = 0; num != 0; digits++)
		{
			// 변수 num을 2로 나누고 남은 나머지를 배열 binary의 원소에 대입
			binary[digits] = num % 2;

			num /= 2;
		}
		
		printf("Thebinary number for decimal %d is ", num);
		for (int i = digits - 1; i >= 0; i--)
			printf("%d", binary[i]);
		printf(".\n\n");
	}

	printf("Good bye!\n");

	return 0;
}