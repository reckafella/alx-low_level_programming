#include <stdio.h>

/* The main function does not  program prints a line of text using 'puts()'. */

int main(void)
{
	/*
	 * main - Entry point
	 */
	/*
	 * Function prints a string usings 'puts()'
	 * Escape sequences required to ensure doubles quotes are printed out.
	 */

	char *str_ = "\"Programming is like building a multilingual puzzle";

	puts(str_);

	return (0);
}
