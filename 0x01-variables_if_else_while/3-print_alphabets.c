#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	char upp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int j;

	for (i = 0; i < 26; i++)
	{
		putchar(str[i]);
	}

	while (j < 26)
	{
		putchar(upp[j]);
		j++;
	}

	putchar('\n');

	return (0);
}
