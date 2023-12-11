#include <stdio.h>

#define ROWS 3
#define COLS 4

//���� ũ�Ⱑ 4�� 2���� �迭
void print_array2(int (*ptr)[4])
{
	for (int i = 0; i < ROWS; i++)
		for (int j = 0; j < COLS; j++)
			printf("fruits[%d][%d] = %d\n", i, j, ptr[i][j]);
}


/**
*  2���� �迭�� ���ҵ��� ���ʴ�� ���
* 
* @ptr 2���� �迭�� ù ��° ������ �ּ�
* 
*/

void print_array2_2(int *ptr)
{
	//�ݺ������� ������ ptr�� ����Ű�� 2���� �迭�� ���ҵ鿡 ���ʴ�� ����
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
