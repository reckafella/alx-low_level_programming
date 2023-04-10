#include "main.h"

/**
 * print_binary - a function printing a decimal number in binary format
 * @n: an unsigned long integer to print
 * 
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int c;
	int binary;

	if (n == 0)
		_putchar('0');
	else if (n > 0)
	{
		for (c = 32; c >= 0; c--)
		{
			binary = n >> c;

			if (binary & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}