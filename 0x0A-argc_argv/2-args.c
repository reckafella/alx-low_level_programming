#include <stdio.h>

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

	if (argc >= 1)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}

	return (0);
}
