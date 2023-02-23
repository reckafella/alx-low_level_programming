#include "main.h"
#include <unistd.h>
#include <string.h>

/**
* print_one_row - print a single row
* @row: row being printed
* @n: parameter
* Return: 0
*/

void print_one_row(int row, int n)
{
	int j;
	for (j = 0; j <= n; j++)
	{
		product = (i * j);

		if (j == 0)
		{
			_putchar(product + '0');
		}
		else if (product < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar(product + '0');
		}
		else if (product < 100)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar((product / 10) + '0');
			_putchar((product % 10) + '0');
		}
		else
		{
			_putchar(' ');
			_putchar((product / 100) + '0');
			_putchar(((product / 10) % 10) + '0');
			_putchar((product % 10) + '0');
		}
		if (j >= 0 && j < n)
		{
			_putchar(',');
		}
	}
	_putchar('\n');
}

/**
 * print_times_table - print n*n multiplication table
 * @n: parameter
 *
 * return: 0
 */

void print_times_table(int n)
{
	int i;
	int j;
	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			print_one_row(i, n);
		}
	}
}
