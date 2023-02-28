#include "main.h"

/**
 * puts2 - print every other character of a string, starting with the first.
 * @str: pointer
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int len = 0;
	int j;

	while (str[len] != '\0')
	{
		len++;
	}

	j = len - 1;

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
}
