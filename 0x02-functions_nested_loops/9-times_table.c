#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * times_table - print 9*9 multiplication table
 * Return: void
 */
void times_table(void)
{
	int j = 0;
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d", (i * j));

			if (j != 9)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
