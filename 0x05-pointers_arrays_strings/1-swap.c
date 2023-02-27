#include"main.h"

/**
 * swap_int - swap values of two integers
 * @a: pointer to variable a
 * @b: pointer to variable b
 *
 * return: void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
