#include "main.h"

/**
 * set_bit - a function that sets a bit to 1 at a given index
 * @n: unsigned long int
 * @index: position
 *
 * Return: 1 on success or -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = 1UL;

	if (index >= (sizeof(unsigned long int) * CHAR_BIT))
		return (-1);
	*n = (*n & ~(mask << index));

	return (1);
}
