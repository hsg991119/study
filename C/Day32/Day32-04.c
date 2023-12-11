#include <stdio.h>
#include <string.h>

#define LENGTH 80

typedef struct person
{
	char name[LENGTH + 1];
	int age;
}person_t;

void print_person(const char* name, int age)
{
	printf("Name: %s\n", name);
	printf("Age: %d\n", age);
}



int main()
{
	person_t jackson;

	strncpy(jackson.name, "Michael Jackson", LENGTH);

	jackson.age = 25;


	print_person(jackson.name, jackson.age);

	person_t carey = { "Michael Jackson", 21 };

	person_t artist = jackson;

	return 0;
}