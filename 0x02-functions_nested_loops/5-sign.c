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
		char *nm1 = "+, 1";
		write(1, nm1, 4);
		return (1);
	}
	else if (n < 0)
	{
		char *nl1 = "-, /";
		write(1, nl1, 4);
		return (-1);
	}
	else
	{
		char *ne0 = "0, 0";
		write(1, ne0, 4);
		return (0);
	}
	_putchar('\n');
}
