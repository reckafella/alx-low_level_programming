#include "main.h"

/**
 * _strlen_recursion - return the length of a string
 * @s: string input
 *
 * Return: string length (int)
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
