#include <stdio.h>
#include "main.h"

/**
 * main - print all arguments it receives
 * @argc: argument count;
 * @argv: argument vector
 *
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int count;
	int product = 1;

	if (!(argc == 3))
	{
		printf("Error\n");
	}
	else
	{
		for (count = 1; count < argc; count++)
		{
			product *= _atoi(argv[count]);
		}
		printf("%d\n", product);
	}

	return (0);
}
