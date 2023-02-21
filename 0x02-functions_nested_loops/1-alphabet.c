#include <unistd.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 if successful
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - print lowercase letters a-z
 *
 * Return: no return value
 */

void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alphabet[i]);
	}
	_putchar('\n');
}
