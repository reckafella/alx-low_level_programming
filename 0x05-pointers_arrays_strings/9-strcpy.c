#include "main.h"

/**
 * _strcpy -  a function that copies the string pointed to by src,\
 * including the terminating null byte (\0), to the buffer pointed to\
 * by dest. Return value: the pointer to dest
 * @dest: destination pointer
 * @src: source pointer
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	while ('\0' != *src)
	{
		*dest++ = *src++;
	}

	*dest++ = '\0';

		return (dest);
}
