#include "main.h"

/**
 * _strlen - returns the string length
 * @str: string
 *
 * Return: string length
 */

unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	/* Get string length */
	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * _strpbrk - search for the first occurrence of a string of a set of bytes.
 * @s: string to within which to search
 * @accept: set of bytes to search
 *
 * Return: pointer to first occurrence.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int s_len = _strlen(s);
	unsigned int accept_len = _strlen(accept);

	for (i = 0; i < s_len; i++)
	{
		for (j = 0; j < accept_len; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
