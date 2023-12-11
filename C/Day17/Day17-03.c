#include <stdio.h>

double get_area_circle(int radius)
{
	return 3.141592 * radius * radius;
}

int main()
{
	int r;
	printf("Enter the radius of the circle: ");
	scanf("%d", &r);
	printf("\n");

	printf("Area of the circle with radius %d = %g\n", r, get_area_circle(r));

	return 0;
}