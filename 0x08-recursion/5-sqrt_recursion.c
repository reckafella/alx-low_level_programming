#include "main.h"
/**
 * _sqrt_recursion - return natural square root of a number
 * @n: integer number
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int guess = 1;

	guess = (guess + n) / 2;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0 || n == 1)
		{
			return (n);
		}

		if (guess * guess == n)
		{
			return (guess);
		}
		else if (guess * guess < n)
		{
			guess = guess + 1;
			return (_sqrt_recursion(n));
		}
		else
		{
			guess = guess - 1;
			return (_sqrt_recursion(n));
		}
	}
}
