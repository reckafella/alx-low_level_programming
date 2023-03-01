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

	n--; /* decrement n given that index starts at 0.*/

	for (i = 0; i < n; i++ && n--)
	{
		tmp_char = a[i];
		a[i] = a[j];
		a[j] = temp_char;

	}
}
