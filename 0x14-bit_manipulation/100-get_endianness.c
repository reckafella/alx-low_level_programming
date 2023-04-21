#include "main.h"

/**
 * get_endianness - checks system endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int value = 1;

	if (*((char *)&value) == 1)
		return (1); /* little endian */
	else
		return (0); /* big endian */
}
