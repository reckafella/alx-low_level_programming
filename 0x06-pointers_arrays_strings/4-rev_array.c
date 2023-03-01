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
	int *arr = a;

	n--; /* decrement n given that index starts at 0.*/

	while (i <= n)
	{
		tmp_char = arr[i];
		arr[i] = arr[n];
		arr[n] = tmp_char;
		i++;
		n--;
	}
}
