#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a "struct dog"
 * @d: address to struct
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (!(d) || !(d->owner) || !(d->age))
		printf("(nil)\n");
	if (!(d->name))
		printf("Name: (nil)\n");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
