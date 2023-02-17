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

	for (i = 26; i >= 0; i--)
	{
		putchar(str[i]);
	}
	putchar('\n');

	return (0);
}
