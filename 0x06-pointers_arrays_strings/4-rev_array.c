#include "main.h"

/**
 * reverse_array - reverse contents of an array
 * @a: array
 * @n: number of elements in the array.
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	for (n = (n - 1); n >= 0; n--)
	{
		_putchar(a[n]);

		if (n != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
