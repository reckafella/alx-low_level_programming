#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string
 *
 * Return: int
 */

int _atoi(char *s)
{

	while (*s != '\0')
	{
		if (*s >= 48 && *s <= 57)
		{
			_putchar(*s);
		}

	}
	_putchar('\n');
}
