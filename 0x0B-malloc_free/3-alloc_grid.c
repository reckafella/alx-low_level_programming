#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - a function that returns a pointer to a 2D array of integers
 * @width: grid width
 * @height: grid height
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **arr;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));

	if (!arr)
		return (NULL);

	/**
	 * if step above passes, allocate memory for each 1D array
	 * if at any point, a 1D array is NULL,
	 * Deallocate all previously allocated memory
	 */

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));

		if (!(arr[i]))
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);

			return (NULL);
		}
	}

	/* Initialize all memory locations with zero (0) */

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = 0;

	return (arr);
}
