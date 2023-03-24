#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print all strings in an argument, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, char *));

		if (!(separator))
			continue;

		if (i < (n - 1))
			printf("%s", separator);
	}

	va_end(ap);

	printf("\n");
}
