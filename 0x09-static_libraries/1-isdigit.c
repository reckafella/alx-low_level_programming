#include "main.h"

/**
 * _isdigit - check if a character is a digit or not
 * @c: character argument
 *
 * Return: 1 if true, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
