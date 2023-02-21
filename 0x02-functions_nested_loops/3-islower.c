#include "main.h"

/**
 * _islower(int c) - check whether a letter is lowercase or not
 * return: 1 if true, 0 otherwise
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
