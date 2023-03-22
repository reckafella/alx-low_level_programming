#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a function that prints a name
 * @name: name to be print to standard output
 * @f: pointer to a function
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (!(*name))
		exit(98);

	if (!(f))
		exit(98);

	(*f)(name);
}
