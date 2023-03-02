#include "main.h"

/**
 * string_toupper - change lowercase of a string to uppercase
 * @s: characters
 *
 * Return: string
 */

char *string_toupper(char *s)
{
	char *p = s;

	while (*p >= 'a' && *p <= 'z')
	{
		*p = (*p - 32);
		p++;
	}

	return (s);
}
