#include "main.h"

/**
 * _isalpha - check whether a letter is either lowercase or uppercase
 * @c: letter passed to the _islower function
 *
 * Return: 1 if lowercase or uppercase. 0 otherwise.
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
