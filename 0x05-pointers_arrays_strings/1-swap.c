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
	*a = &b;
	*b = &a;
}
