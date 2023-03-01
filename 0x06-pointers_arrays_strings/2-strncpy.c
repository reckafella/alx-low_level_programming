#include "main.h"

/**
 * _strncpy -  copies a string
 * @dest: destination
 * @src: source
 * @n: number of bytes written
 *
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *tmp = dest;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	
	return (tmp);
}
