#include <stdio.h>


typedef unsigned long long ULONG;
typedef unsigned int UINT;

/*
*  n번째 피보나치 수 (fibonacci number)를 구하느 함수
* 
* @param n 구하고자 하는 피보나치 수의 순서
* @return n번째 피보나치 수
*/

ULONG fibonacci(UINT n)
{
	// fibonacci(2) = fibonacci(1) + fibonacci(0);
	// -> fibonacci(1) = 1
	// -> fibonacci(0) = 0
	// -> fibonacci(n) = fibonacci(n - 1) + fibonacci(n - 2);
	/*
	// 피보나치 수를 저장할 변수
	ULONG fibo = 0;

	// 조건문으로 종료 조건을 확인하고, 종료 조건에 해당하지 않으면
	// 이전 두 피보나치 수를 더해서 피보나치 수를 계산
	if (n == 0) fibo = 0;
	else if (n == 1) fibo = 1;
	else fibo = fibonacci(n - 1) + fibonacci(n - 2);

	// 계산한 피보나치 수를 반환
	return fibo;
	*/

	// 조건문으로 종료 조건을 확인하고, 종료 조건에 해당하지 않으면
	// 이전 두 피보나치 수를 더해서 피보나치 수를 계산

	return n <= 1 ? n : fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	int num;

	printf("Enter a positivie integer greater than 1: ");
	scanf("%d", &num);
	printf("\n");

	if (num <= 1)
	{
		printf("ERRORL Invalid value!\n");
		return 1;
	}

	printf("%dth Fibonacci number = %lld\n", num, fibonacci(num));
	return 0;
}