#include <stdio.h>
#include <stdlib.h>

// �� �� �߿��� ���� ���� ���ϴ� ��ũ�� �Լ�
#define MIN(X, Y)  ((X) < (Y) ? (X) : (Y))

typedef struct point
{
	int x;
	int y;
} point_t;



int main()
{
	point_t A, B;

	// B���� ���簢���� ��輱������ �Ÿ�
	int distances[4] = { 0 };

	// B���� ���簢���� ��輱������ �ִ� �Ÿ�
	int shortest = 0;

	printf("Enter the coordinates of the vertex A: ");
	scanf("%d %d", &A.x, &A.y);

	printf("Enter the coordinates of the point B: ");
	scanf("%d %d", &B.x, &B.y);

	printf("\n");

	// ���簢���� �������� ��Ÿ���� A�� 1��и鿡 �ִ��� Ȯ��
	if (A.x <= 0 || A.y <= 0)
	{
		printf("ERROR: Invaild vertesx A!\n");
		exit(1);
	}
	
	// B�� ������ A�� ���������� ���� ���簢�� �ȿ� ���ԵǴ��� Ȯ��
	if (B.x <= 0 || B.y <= 0 || B.x >= A.x || B.y >= A.y)
	{
		printf("ERROR: Invaild point B!\n");
		exit(1);
	}

	// B���� ���簢���� ��輱������ �ִ� �Ÿ��� ���
	// -> B.x, B.y (A.x - B.x), (A.y - B.y) �߿��� ���� ���� ��
	distances[0] = B.x;
	distances[1] = B.y;
	distances[2] = A.x - B.x;
	distances[3] = A.y - B.y;

	// ���� shortest�� �迭 distances�� ù ��° ���ҷ� �ʱ�ȭ
	shortest = distances[0];

	// �ݺ������� �迭 distances�� ���ҵ� �߿��� �ּڰ��� ���
	for (int i = 1; i < 4; i++)
		//shortest = shortest < distances[i] ? shortest : distances[i];
		shortest = MIN(shortest, distances[i]);


	printf("The shortest distance is %d.\n", shortest);


	return 0;
}