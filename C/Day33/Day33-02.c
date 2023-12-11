#include <stdio.h>

typedef struct point
{
	int x;
	int y;
} point_t;


void print_point(point_t pos)
{
	printf("point = (%d, %d)\n", pos.x, pos.y);
}

int main()
{
	point_t pos;

	printf("Enter point coordinate: ");
	scanf("%d %d", &pos.x, &pos.y);

	print_point(pos);

	return 0;
}