#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (str[i] == 'e')
		{
			continue;
		}
		else if (str[i] == 'q')
		{
			continue;
		}
		else
		{
			putchar(str[i]);
		}
	}
	putchar('\n');

	return (0);
}
