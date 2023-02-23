#include "main.h"
#include <stdio.h>

/**
 * sum_of_natural_numbers - print sum of all natural numbers below 1024
 * @n: upper limit (1024)
 *
 * Return: 0
*/

void sum_of_natural_numbers(int n)
{
	int i = 0;
	int sum = 0;

	for (i = 0; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
}
