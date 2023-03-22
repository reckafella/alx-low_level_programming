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
	int k;

	arr = (int **)malloc((sizeof(int *) * height) + 1);

	if (arr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			arr[i] = malloc((sizeof(int) * width) + 1);
		}
	}

	if (height <= 0 || width <= 0)
		return (NULL);

	/* Initialize all memory locations with zero (0) */
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			arr[j][k] = 0;
		}
	}

	/* Deallocate memory if malloc fails */
	if (!arr)
	{
		for (i = 0; i < height; i++)
			free(arr[i]);
	}

	return (arr);
}
