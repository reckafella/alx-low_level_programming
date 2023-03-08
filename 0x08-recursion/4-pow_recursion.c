#include "main.h"

/**
 * _pow_recursion - return the value of a base raised to an exponent.
 * @x: base
 * @y: exponent
 *
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x , (y - 1)));
	}
}
