#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct person
{
	char *name;
	int age;
}person_t;

void print_person(const person_t ptr)
{
	printf("Name: %s\n", ptr.name);
	printf("Age: %d\n", ptr.age);
}

int main()
{
	person_t ptr;

	const char* name = "Harry Potter";

	size_t length = strlen(name);

	
	ptr.name = (char*)malloc(sizeof(char) * (length + 1));
	

	if (!ptr.name)
	{
		printf("ERROR Insufficient memory!\n");
		exit(1);
	}

	strcpy(ptr.name, name);
	ptr.age = 11;

	print_person(ptr);

	free(ptr.name);

	return 0;
}