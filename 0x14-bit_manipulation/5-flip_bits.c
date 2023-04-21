#include "main.h"

/**
 * flip_bits - returns the number of bits to flip to get m, given n.
 * @n: initial value
 * @m: target value
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (count_set_bits(n ^ m));
}

/**
 * count_set_bits - return the number of bits to flip.
 * @num: two decimal values
 *
 * Return: total bits to flip
*/
unsigned long int count_set_bits(unsigned long int num)
{
	unsigned long int count = 0;

	while (num > 0)
	{
		count++;
		num &= (num - 1);
	}
	return (count);
}
