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

int compare_strings(char *str1, char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
		{
			return (0);
		}
		str1++;
		str2++;
	}

	return (*str2 == '\0');
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
