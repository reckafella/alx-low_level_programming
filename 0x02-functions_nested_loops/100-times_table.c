#include "main.h"
#include <unistd.h>
#include <string.h>

/**
* print_tables - print tables
* @n: parameter
* Return: 0
*/

int print_tables(int n)
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
		first = (product / 10);
		second = (product % 10);

		_putchar(' ');
		_putchar(' ');
		_putchar(first + '0');
		_putchar(second + '0');
	}
	else
	{
		first = (product / 100);
		second = ((product / 10) % 10);
		third = (product % 10);

		_putchar(' ');
		_putchar(first + '0');
		_putchar(second + '0');
		_putchar(third + '0');
	}
	if (j >= 0 && j < n)
	{
		_putchar(',');
	}
}

/**
 * print_times_table - print n*n multiplication table
 * @n: parameter
 *
 * return: 0
 */

void print_times_table(int n)
{
	int i = 0;
	int j = 0;
	int product;
	int first;
	int second;
	int last;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				print_tables(n);
			}
			_putchar('\n');
		}
	}

}
