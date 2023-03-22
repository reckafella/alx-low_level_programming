#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - a function that concatenates the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);
	char *ptr;

	ptr = malloc(sizeof(char **));
}
