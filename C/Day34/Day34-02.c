#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 80

typedef struct person
{
	char name[LENGTH];
	int age;
}person_t;

void print_person(const person_t ptr)
{
	printf("Name: %s\n", ptr.name);
	printf("Age: %d\n", ptr.age);
}

int main()
{
	person_t *ptr = (person_t*)malloc(sizeof(person_t));
	
	size_t length = strlen(name);
	
	if (!ptr)
	{
		printf("ERROR Insufficient memory!\n");
		exit(1);
	}

	strncpy((*ptr).name, "Harry Potter", LENGTH);
	(*ptr).age = 25;

	
	print_person(*ptr);

	
	return 0;
}