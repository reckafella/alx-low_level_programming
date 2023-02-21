#include "main.h"

/**
 * print_sign - print sign of passed value
 * @n: integer passed to the function
 *
 * Return: 1 if positive. -1 if negative. 0 otherwise.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(45);
		_putchar(44);
		_putchar(32);
		_putchar('\n');
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		_putchar(44);
		_putchar(32);
		_putchar('\n');
		return (-1);
	}
	else
	{
		_putchar(48);
		_putchar('\n');
		return (0);
	}
}
