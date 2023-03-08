#include "main.h"
/**
 * _sqrt_recursion - return natural square root of a number
 * @n: integer number
 *
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if ( x % y != 0)
	{
		return (-1);
	}
	else if(x - (y*y) > 0)
	{
		return (_pow_recursion(x, (y + 1)));
	}
	else
	{
		return (y);
	}
}
