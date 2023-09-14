#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - a function that searches for a value in an array of\
 * integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where "value" is found
 */
int linear_search(int *array, size_t size, int value)
{
	int index = 0;

	if (array == NULL)
		return (-1)
	
	for (; index < size; index++)
	{
		if (*array == value)
			return (index)
		else
			return (-1)
	}
}
