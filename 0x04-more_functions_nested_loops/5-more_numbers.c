#include <unistd.h>
#include "main.h"

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
