#include <stdio.h>

/**
 * main - prints number of arguments passed to main
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: integer value
 */
int main(int argc, char *argv[])
{
	int count = (argc - 1);

	printf("%d\n", count);

	(void) *argv;

	return (0);
}

