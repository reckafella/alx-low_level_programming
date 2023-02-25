#include "main.h"

/**
 * print_number - print a number passed as an argument
 * @n: argument
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}

	if (n == 0)
	{
		_putchar(n + '0');
	}

	if ((n / 10))
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
