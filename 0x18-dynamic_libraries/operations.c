#include "py.h"

/**
 * add - returns the sum of two integers
 * @a: first argument
 * @b: second argument
 *
 * Return: integer result
*/
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - returns the difference between two integers
 * @a: first argument
 * @b: second argument
 *
 * Return: integer result
*/
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - returns the product of two integers
 * @a: first argument
 * @b: second argument
 *
 * Return: integer result
*/
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - returns the result from dividing two integers
 * @a: first argument
 * @b: second argument
 *
 * Return: integer result
*/
int div(int a, int b)
{
	int quot;

	if (a < 0 || b < 0)
	{
		quot = (absolute(a) / absolute(b));
		quot = (-1 * quot);
		return (quot);
	}
	else
	{
		return (a / b);
	}
}

/**
 * mod - returns the remainder after dividing two integers
 * @a: first argument
 * @b: second argument
 *
 * Return: integer result
*/
int mod(int a, int b)
{
	int rem;

	if (a < 0 || b < 0)
	{
		rem = (absolute(a) % absolute(b));
		rem = (-1 * rem);
		return (rem);
	}
	else
	{
		return (a % b);
	}
}
