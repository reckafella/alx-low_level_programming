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
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - print lowercase letters a-z
 *
 * Return: no return value
 */

void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	for (i; i < 26; i++)
	{
		_putchar(alphabet[i]);
	}
	_putchar('\n');
}
