#include "main.h"

/**
 * print_last_digit - print last digit of an integer value
 * @n: value passed to the function
 *
 * Return: last digit of an integer
 */

int print_last_digit(int n)
{
	int lst = (n % 10);

	_putchar(lst + '0');
	return (0);
}
