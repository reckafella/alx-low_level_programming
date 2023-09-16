#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - a function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where "value" is found, or -1
 */
int binary_search(int *array, size_t size, int value)
{
	return (binary_search_recursive(array, 0, size - 1, value));
}


/**
 * binary_search_recursive - a function that recursively searches for
 * a value in a sorted array
 * @array: pointer to the first element in the array
 * @left: left index of the array
 * @right: right index of the array
 * @value: value to search for
 *
 * Return: index where 'value' is found, or -1
*/
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i, mid = left + (right - left) / 2;

	if (left > right)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", *(array + i));
		if (i != (right))
			printf(", ");
	}
	printf("\n");

	if (*(array + mid) == value)
		return (mid);
	else if (*(array + mid) > value)
		return (binary_search_recursive(array, left, mid - 1, value));
	else
		return (binary_search_recursive(array, mid + 1, right, value));

	return (-1);
}
