#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print minimum number of cents to make for an amount of money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	/**/
}

int min_coins(int argc, char *argv[])
{
	int i;
	int change = 0;
	int value = atoi(argv[1]);

	if (!(argc == 2))
	{
		printf("Error\n");
		return (1);
	}

	if (value < 0)
	{
		putchar(48);
		putchar('\n');
	}
	else if (value == 0)
	{
	;
	}


	return (0);
}
