#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the name of file it was compiled from, followed by a new line.
 *
 * Return: integer (0)
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
