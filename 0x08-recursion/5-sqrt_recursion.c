#include "main.h"
/**
 * _sqrt_recursion - return natural square root of a number
 * @n: integer number
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int sq = 1;

	sq = (sq + ((n / sq) / 2));

	if (n == 1)
	{
		return (1);
	}
	if ( sq*sq <= n && (sq + 1) * (sq + 1) > n)
	{
		return (sq);
	}
	else
	{
		return (_sqrt_recursion(n));
	}
}
