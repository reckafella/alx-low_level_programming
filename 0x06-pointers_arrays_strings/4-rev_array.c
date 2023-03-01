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
	int i = n - 1;

	for (; i >= 0; i--)
	{
		_putchar(a[i]);

		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
