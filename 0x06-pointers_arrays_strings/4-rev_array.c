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
	int i;
	int tmp_char;

	n = (n / 2); /* decrement n given that index starts at 0.*/

	while (i < n)
	{
		tmp_char = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp_char;
		i++;
	}
}
