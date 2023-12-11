#include <stdio.h>

#define ROWS 3
#define COLS 4

//열의 크기가 4인 2차원 배열
void print_array2(int (*ptr)[4])
{
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			printf("fruits[%d][%d] = %d\n", i, j, ptr[i][j]);
}


/**
*  2차원 배열의 원소들을 차례대로 출력
* 
* @ptr 2차원 배열의 첫 번째 원소의 주소
* 
*/

void print_array2_2(int *ptr)
{
	//반복문으로 포인터 ptr이 가리키는 2차원 배열의 원소들에 차례대로 접근
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			printf("fruits[%d][%d] = %d\n", i, j, ptr[i * COLS + j]);
}


int main()
{
	int numbers[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};


	print_array2(numbers);
	printf("\n");
	print_array2_2((int*)numbers);

	return 0;
}
