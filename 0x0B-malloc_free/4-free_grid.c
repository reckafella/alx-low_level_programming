#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that frees the 2D Array created with alloc_grid
 * @grid: grid to free up
 * @height: number of rows of the grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
