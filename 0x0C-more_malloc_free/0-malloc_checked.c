#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: memory size
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *pointer;

	pointer = malloc(b);

	if (!pointer)
	{
		return;
	}
}
