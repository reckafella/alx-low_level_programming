#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char num[] = "0123456789";
	int i = 0;

	while (num[i] != '\0')
	{
		putchar(num[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
