#include <stdio.h>
void print_number(int num);

int main()
{
	print_number(100);
	return 0;
}

void print_number(int num)
{
	printf("My favorite number is %d.\n", num);
}