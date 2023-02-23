#include "main.h"

/**
 * print_most_numbers - print numbers 0 - 9 followed by a new line. Do not print 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i;
	int j = 57;

	for (i = 48; i <= j; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');

}
