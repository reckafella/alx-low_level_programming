#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - function initializing "struct dog"
 * @d: struct
 * @name: pointer to name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr;

	ptr = d;
	ptr = malloc(sizeof(struct dog));

	if (!ptr)
		exit(1);

	(*ptr).name = name;
	(*ptr).age = age;
	(*ptr).owner = owner;

}
