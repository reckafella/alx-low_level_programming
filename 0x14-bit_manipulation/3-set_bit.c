#include "main.h"

/**
 * set_bit - a function that sets a bit to 1 at a given index
 * @n: unsigned long int
 * @index: position
 *
 * Return: 1 on success or -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int bit_value;
	unsigned long int *ptr = n;

	if (n == NULL)
		return (-1);

	if (index >= (sizeof(unsigned long int) * CHAR_BIT))
		return (-1);

	if ((*ptr >> index) != 1)
		bit_value = (*n | (*n << index));
	return (bit_value);
	/*return ((1 << (index)) | *n);*/
}
