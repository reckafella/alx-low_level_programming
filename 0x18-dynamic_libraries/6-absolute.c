#include "py.h"

/**
 * _abs - return absolute value of an integer value
 * @i: value passed to _abs function
 *
 * Return: 0 if successful
 */

int absolute(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (i);
	}
}
