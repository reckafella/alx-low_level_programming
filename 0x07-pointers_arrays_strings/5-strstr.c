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
 * _strstr - find the first occurrence of a substring.
 * @haystack: string to within which to search
 * @needle: substring to search
 *
 * Return: pointer to beginning of the substring.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int j;
	unsigned int haystack_len = _strlen(haystack);
	unsigned int needle_len = _strlen(needle);

	for (i = 0; i < haystack_len; i++)
	{
		for (j = 0; j < needle_len; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (&haystack[i]);
			}
		}
	}
	return (NULL);
}
