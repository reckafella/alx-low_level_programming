#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	char *ptr;
	unsigned int len_s1 = 0;
	unsigned int len_s2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len_s1] != '\0')
		++len_s1;
	while (s2[len_s2] != '\0')
		++len_s2;

	ptr = malloc((len_s1 + len_s2 + 1));
	if (!ptr)
		return (NULL);

	for (; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}

	if (n >= len_s2)
		for (; s2[j] != '\0'; j++)
			ptr[i + j] = s2[j];
	else
		for (; j < n && s2[j] != '\0'; j++)
			ptr[i + j] = s2[j];

	ptr[i + j] = '\0';

	return (ptr);
}
