#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: destination pointer
 * @src: source pointer
 * @n: byte size
 *
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char **tdest = char *dest; /* pointer to destination pointer */
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (tdest);
}
