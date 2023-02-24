#include "main.h"

/**
 * more_numbers - print 0-14 10 times
 *
 * return: void
 */

void more_numbers(void)
{
	char *nums = "1234567891011121314";
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 19; j++)
		{
			_putchar(nums[j]);
		}
		_putchar('\n');
	}
}
