#include "main.h"

/**
 * puts_half - print second half of a string;
 *@str: parameter
 *
 * Return: void
 */

void puts_half(char *str)
{
	int length = 0;
	int n;

	/* determine the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* check if length of the string is odd */
	if (length % 2 == 0)
	{
		n = (length / 2);
	}
	else
	{
		n = ((length - 1) / 2);
	}

	for (; n < (length - 1); n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
