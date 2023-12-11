#include <stdio.h>

int main()
{
	int num;
	double pi = 3.141592;
	double area, circumference;
	printf("Enter a radius of the circle as an integer: ");
	scanf("%d", &num);
	printf("\n");

	area = num * num * pi;
	circumference = (num + num) * pi;

	printf("pi = %f\n", pi);
	printf("radius fo the circle = %d\n", num);
	printf("area of the circle = %.3f\n", area);
	printf("circumference of the circle = %.3f", circumference);

	return 0;
}