#include "main.h"

/**
 * get_bit - function returns the value of a bit at a given index
 * @n: an unsigned long integer
 * @index: position to check value of a bit
 *
 * Return: value of a bit set at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * CHAR_BIT))
		return (-1);
	return ((n >> index) & 1);
}
