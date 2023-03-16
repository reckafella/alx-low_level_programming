#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: bytes
 *
 * Return: pointer to first location
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * sizeof(unsigned int));

	if(!ptr)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
