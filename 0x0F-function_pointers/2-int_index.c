#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - returns index of first element of integer type
 * @array: array to search
 * @size: array size
 * @cmp: pointer to the comparison function
 *
 * Return: integer index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!(array))
		return (NULL);

	if (!(cmp))
		return (NULL);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if ((*cmp)(array[i]))
			return (i);

	/* if no element is found, return -1 */
	return (-1);
}
