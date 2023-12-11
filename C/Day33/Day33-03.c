#include <stdio.h>

#define LENGTH 5
typedef struct point
{
	int x;
	int y;
} point_t;


void print_point(const point_t *ptr, int length)
{
	for(int i = 0; i < length; i++)
		printf("point[i] = (%d, %d)\n", ptr[i].x, ptr[i].y);
}

int main()
{
	point_t points[LENGTH] = { 0 };

	for (int i = 0; i < LENGTH; i++)
	{
		printf("Enter point coordinate: ");
		scanf("%d %d", &points[i].x, &points[i].y);
	}

	printf("\n");

	print_point(points, LENGTH);

	return 0;
}