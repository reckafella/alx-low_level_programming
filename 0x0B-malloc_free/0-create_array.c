#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create an array of characters
 * and initialize it with a specific char
 * @size: length of the array
 * @c: character
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
	}

	return (str);
}
