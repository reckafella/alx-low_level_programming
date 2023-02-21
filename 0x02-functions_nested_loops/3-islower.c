#include "main.h"

/**
 * _islower - check whether a letter is lowercase or not
 * @c: letter passed to the _islower function
 *
 * Return: 1 if lowercase. 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
