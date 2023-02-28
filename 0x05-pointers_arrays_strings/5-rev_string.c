#include "main.h"

/**
 * rev_string - reverse a string passed as an argument using a pointer.
 * @s: parameter
 *
 * Return: void
 */

void rev_string(char *s)
{
	char temp_char;
	int i = 0;
	int j;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	j = (len - 1);

	while (i < j)
	{
		temp_char = s[i];
		s[i] = s[j];
		s[j] = temp_char;
		i++;
		j--;
	}
}
