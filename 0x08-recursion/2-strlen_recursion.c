#include "main.h"

/**
 * return the length of a string
 * @s: string input
 *
 * Return: string length (int)
 */

int _strlen_recursion(char *s)
{
	/**/
	int length = 0;

	if (*s != '\0')
	{
		length += _strlen_recursion(s + 1);
	}

	return (length);
}
