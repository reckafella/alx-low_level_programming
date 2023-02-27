#include "main.h"

/**
 * _puts - print a string, followed by a new line to the stdout.
 * @str: string parameter
 *
 * return: void
 */

void _puts(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		_putchar(str[length]);
		length++;
	}
	_putchar('\n');
}
