#include "main.h"

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
		if (*haystack == *needle)
		{
			return (needle);
		}
		haystack++;
	}

	return (&(*haystack));
}
