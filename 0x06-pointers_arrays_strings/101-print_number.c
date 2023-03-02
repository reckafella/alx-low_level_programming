#include "main.h"

/**
 * print_number - print an integer
 * @n: integer value
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = (n * -1);
	}

	/**
	 * When number has two or more digits,
	 * pass it through the function recursively
	 * till we get a single digit value
	 */

	if ((n / 10) != 0)
	{
		print_number((n / 10));
	}
	_putchar((n % 10) + '0');
}
