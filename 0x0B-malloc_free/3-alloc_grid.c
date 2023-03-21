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

	arr = (int **)malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			arr[j][k] = 0;
		}
	}

	return (arr);
}
