#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destination
 * @src: source
 *
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;
	int dest_len = 0;
	int i;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (i = 0; i < dest_len && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (temp);

}
