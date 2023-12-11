#include <stdio.h>
#include <stdlib.h>


typedef struct rect
{
	int width;
	int height;
}rect_t;


unsigned long long area_rect(rect_t area)
{
	return area.width * area.height;
}


int main()
{
	rect_t area;

	printf("Enter width of the rectangular: ");
	scanf("%d", &area.width);

	printf("Enter height of the rectangular: ");
	scanf("%d", &area.height);
	printf("\n");


	printf("Area of the rectangular = %lld\n", area_rect(area));

	return 0;
}