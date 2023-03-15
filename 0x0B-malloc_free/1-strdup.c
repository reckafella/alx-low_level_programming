#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return a pointer to a duplicate of given string parameter
 * @str: input string parameter
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	int len = 0;
	int i = 0;

	char *ptr;

	while (str[len] != '\0')
	{
		++len;
	}

	ptr = malloc((len + 1) * sizeof(char));

	if (!ptr)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
