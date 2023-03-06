#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: pointer to a string
 * @b: byte to fill memory
 * @n: byte size
 *
 * Return: pointer to memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
