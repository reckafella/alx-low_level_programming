#include <stdlib.h>
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
	if (!d)
		exit(98);

	else if (!(d->owner) || !(d->age))
	{
		printf("(nil)\n");
		printf("(nil)\n");

		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

	}
	else if (!(d->name))
	{
		printf("Name: (nil)\n");

		if (!(d->owner))
		{
			printf("(nil)\n");
		}
		if (!(d->age))
			printf("(nil)\n");
		else
		{
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
	}

	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
