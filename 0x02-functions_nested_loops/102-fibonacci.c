#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	fibonacci_series(50);
	printf("\n");

	return (0);
}

/**
 * fibonacci_series - print a series of fibonacci numbers
 * @n: number of values to print
 *
 * Return: 0
 */

void  fibonacci_series(int n)
{
	long int fn_2 = 1;
	long int fn_1 = 2;
	long int next;
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			next = fn_2;
		}
		else if (i == 2)
		{
			next = fn_1;
		}
		else
		{
			next = fn_2 + fn_1;
			fn_2 = fn_1;
			fn_1 = next;
		}

		printf("%ld", next);

		if (i < (n))
		{
			printf(", ");
		}
	}
}
