#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * times_table - print 9*9 multiplication table
 * Return: void
 */
void times_table(void)
{
	int j = 0;
	int i = 0;
	int product;
	int first;
	int last;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = (i * j);

			if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				first = (product / 10);
				last = (product % 10);

				_putchar(' ');
				_putchar(first + '0');
				_putchar(last + '0');
			}

			if (j != 9)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
