#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: pointer to newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr; /* pointer to new location in memory */
	int i = 0;
	int j = 0;
	int len_s1 = 0;
	int len_s2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len_s1] != '\0')
	{
		++len_s1;
	}

	while (s2[len_s2] != '\0')
	{
		++len_s2;
	}

	ptr = malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (!ptr)
	{
		return (NULL);
	}

	/*
	 * first, we copy s1
	 * then, s2
	 */

	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';

	return (ptr);
}
