#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - print last digit of an integer value
 * @n: value passed to the function
 *
 * Return: last digit of an integer
 */

int print_last_digit(int n)
{
	int last_digit;
	char lst_ch;

	if (n < 0)
	{
		n = -n;
	}
	if (n == INT_MIN)
	{
		n = -1 * (n +1);
	}

	last_digit = (n % 10);
	lst_ch = last_digit + '0';

	write(1, &lst_ch, 1);
	return (last_digit);
}
