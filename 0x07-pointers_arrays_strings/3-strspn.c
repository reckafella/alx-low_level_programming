#include "main.h"

/**
 * _strspn - return length of a substring
 * @s: pointer to a string
 * @accept: pointer to a string
 *
 * Return: integer value
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int sublen = 0;

	for (i = 0; i < _strlen(s); i++)
	{
		for (j = 0; j < _strlen(accept); j++)
		{
			if (s[i] == accept[j])
			{
				sublen++;
			}
		}
	}

	return (sublen);
}
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
