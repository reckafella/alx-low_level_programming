#include <stdio.h>
#include "search_algos.h"

int binary_search_recursive(int *array, size_t left, size_t right, int value);

int binary_search(int *array, size_t size, int value)
{
	return (binary_search_recursive(array, 0, size - 1, value));
}

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
