#include "main.h"

/**
 * _puts_recursion - print a string followed by a new line.
 * @s: string input
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}

/**
 * _print_rev_recursion - print a string in reverse using recursion
 * @s: string input
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
/**
 * _strlen_recursion - recursively determine string length
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
	int len = _strlen_recursion(s);

	if (len == 0)
	{
		return (1);
	}
	if (*s == *(s + len - 1))
	{
		*(s + len - 1) = '\0';
		return (is_palindrome(s + 1));
	}

	return (0);
}
