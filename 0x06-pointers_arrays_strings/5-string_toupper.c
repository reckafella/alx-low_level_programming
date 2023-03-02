#include "main.h"

/**
 * string_toupper - change lowercase of a string to uppercase
 * @s: characters
 *
 * Return: string
 */

char *string_toupper(char *s)
{
	int i;
	char *tmp = s;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = (s[i] - 32);
		}
	}

	return (tmp);
}
