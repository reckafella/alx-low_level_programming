#include "main.h"

/**
 * print_number - print an integer
 * @n: integer value
 *
 * Return: void
 */

void print_number(int n)
{
	int num = n;

	if (num < 0)
	{
		_putchar('-');
		num = ((-1) * num);
	}

	if ((num / 10))
	{
		print_number((num / 10));
	}
	_putchar((num % 10) + '0');
}
