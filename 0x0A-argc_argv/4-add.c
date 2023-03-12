#include <stdio.h>
#include "main.h"

/**
 * main - print the sum of two arguments it receives
 * @argc: argument count;
 * @argv: argument vector
 *
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int count;
	int sum = 0;

	if (argc <= 1)
	{
		putchar(48);
		putchar('\n');
	}
	else
	{
		for (count = 1; count < argc; count++)
		{
			sum += _atoi(argv[count]);
		}
		printf("%d\n", sum);
	}

	return (0);
}


/**
 * _atoi - return an integer value of a converted string
 * @s: string input
 *
 * Return: int
 */

int _atoi(char *s)
{
	int number = 0;
	int i = 0;
	int sign = 1;

	if (s[0] == '-')
	{
		sign *= -1;
		s++;
	}

	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		number  = (number * 10) + (s[i] - '0');
		i++;
	}

	return (number * sign);
}
