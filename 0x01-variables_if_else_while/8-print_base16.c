#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char num[] = "0123456789";
	char str[] = "abcdef";
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		putchar(num[i]);
	}

	while (j < 6)
	{
		putchar(str[j]);
		j++;
	}
	putchar('\n');

	return (0);
}
