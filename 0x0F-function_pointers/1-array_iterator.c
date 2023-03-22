#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a func given as parameter on each array element.
 * @array: array to iterate
 * @size: array size
 * @action: pointer to a function
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!(array))
		exit(98);

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
