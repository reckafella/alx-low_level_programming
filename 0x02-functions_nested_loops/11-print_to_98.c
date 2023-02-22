#include <stdio.h>
#include "main.h"

/**
 * void print_to_98 - print all natural numbers from n to 98
 * @n - starting point
 *
 * return: 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for(; n <= 98; n++)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
		}
	
	}
	else if (n > 98)
	{
		for(; n >= 98; n--)
		{
			printf("%d", n);
			
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
