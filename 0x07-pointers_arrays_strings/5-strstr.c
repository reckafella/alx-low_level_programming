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
 * compare_strings - check if two strings are similar
 * @str1: pointer to first string
 * @str2: pointer to second string
 *
 * Return: true
 */

int compare_strings(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (0);
		}
		s1++;
		s2++;
	}

	return (*s2 == '\0');
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
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && (compare_strings(haystack, needle)))
		{
			return (needle);
		}
		haystack++;
	}

	return (NULL);
}
