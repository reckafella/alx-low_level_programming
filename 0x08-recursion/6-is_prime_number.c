#include "main.h"

/**
 * is_prime_number - return 1 if true, 0 otherwise
 * @n: number to check
 *
 * Return: int
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 2)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (0);
	}
	else
	{
		i = i + 1;
		return (is_prime_number(n));
	}
}
