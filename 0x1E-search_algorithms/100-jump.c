#include "search_algos.h"

/**
 * jump_search - a function that searches for a value in a sorted list of
 * integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is found or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t i = 0, x;

	if (array == NULL)
		return (-1);

	while (*(array + step) <= value && step < size)
	{
		i = step;
		step += sqrt(size);

		if (step > (size - 1))
			return (-1);
	}

	for (x = i; x < step; x++)
		if (*(array + x) == value)
			return (x);

	return (-1);
}
