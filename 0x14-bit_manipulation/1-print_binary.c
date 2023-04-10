#include "main.h"

/**
 * print_binary - a function printing a decimal number in binary format
 * @n: an unsigned long integer to print
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
