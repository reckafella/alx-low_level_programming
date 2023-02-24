#include <unistd.h>
#include "main.h"

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	more_numbers();

	return (0);
}

/**
 * _putchar - print a single character
 * @c: character to print
 *
 * Return: printed character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * more_numbers - print 0-14 10 times
 *
 * return: void
 */

void more_numbers(void)
{
	int i;
	int j;
	char *nl = "\n";

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			else
			{
				_putchar(j + '0');
			}
			write(1, nl, 1);
		}
	}
}
