#include "main.h"

/**
 * binary_to_uint -  a function to convert a binary number to an unsigned int.
 * @b: a pointer to a string of 0 and 1 chars
 *
 * Return: an unsigned integer value or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	unsigned int len;
	int i;
	unsigned int k = 1;
	const char *ptr = b;

	/* return 0 when b is not a valid string */
	if (b == NULL)
		return (0);

	/* calculate string length */
	len = _strlen(ptr);

	for (i = (len - 1); i >= 0; i--)
	{
		/* return 0 if the loop encounters other chars except 0 & 1 */
		if ((b[i] != '0') && (b[i] != '1'))
			return (0);

		if (b[i] == '1')
			value += k;
		k *= 2;
	}

	return (value);
}
/**
 * _strlen - return the length of a string.
 * @s: string parameter
 *
 * Return: length
 */
size_t _strlen(const char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

