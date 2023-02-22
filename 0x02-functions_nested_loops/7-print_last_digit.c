#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - print last digit of an integer value
 * @n: value passed to the function
 *
 * Return: last digit of an integer
 */

int print_last_digit(int n)
{
	char lst_ch;

	int last_digit = (n % 10);
	
	if (n < 0)
        {
                n *= -1;
        }

	lst_ch = last_digit + '0';



	write(1, &lst_ch, 1);
	return (last_digit);
}
