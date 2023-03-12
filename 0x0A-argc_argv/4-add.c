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
		printf("%d\n", sum);
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
