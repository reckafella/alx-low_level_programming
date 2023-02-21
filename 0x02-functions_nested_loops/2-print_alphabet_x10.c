#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times followed by new line
 * return: no return value
 */

void print_alphabet_x10(void)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(alphabet[j]);
		}
		_putchar('\n');
	}
}
