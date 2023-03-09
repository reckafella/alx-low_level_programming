#include "main.h"

/**
 * _rev_recursion - reverse a string recursively
 * @s: string
 *
 * Return: string
 */

char _rev_recursion(char *s)
{
	if (*s)
	{
		return (_print_rev_recursion(s + 1));
	}
}

/**
 * _strlen_recursive - recursively determine string length
 * @s: string input
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length = (1 + _strlen_recursion(s + 1));
		return (length);
	}
	return (0);
}


/**
 * is_palindrome - return 1 if a string a palindrome, 0 otherwise
 * @s: string
 *
 * Return: int
 */

int is_palindrome(char *s)
{
	if (_strlen_recursive(s) == 0)
	{
		return (1);
	}
	else
	{
		if (_rev_recursion(s) == (s))
		{
			is_palindrome(s + 1);
			return (1);
		}
		else
		{
			is_palindrome(s + 1);
			return (0);
		}
	}
}
