#include "main.h"

/**
 * jack_bauer - print every minute from 00:00 to 23:59
 * Return: void
 */

void jack_bauer(void)
{
	int hrs = 0;
	int mins = 0;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');

		}
	}
}
