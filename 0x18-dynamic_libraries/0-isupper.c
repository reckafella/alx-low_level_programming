#include "main.h"

/**
 * _isupper - check if a character is uppercase or not
 * @c: character argument
 *
 * Return: 1 if true, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
