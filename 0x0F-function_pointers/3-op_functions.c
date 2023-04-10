#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - function returns sum of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: integer value
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_add - function returns difference between a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: integer value
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_add - function returns result of multiplication of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: integer value
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_add - function returns result of division of a by b
 * @a: first integer
 * @b: second integer
 *
 * Return: integer value
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_add - function returns the remainder of division of a by b
 * @a: first integer
 * @b: second integer
 *
 * Return: integer value
 */

int op_mod(int a, int b)
{
	return (a % b);
}
