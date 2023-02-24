#include <stdio.h>

void fizz_buzz(void);

/**
 * main - entry point
 * Return: 0
*/

int main(void)
{
	fizz_buzz();

	return (0);
}

/**
 * fizz_buzz - print numbers from 1 to 100
 *
 * Return: 0
*/

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}

		if (i >= 1 && i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
}
