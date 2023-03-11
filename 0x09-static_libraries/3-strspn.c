#include "main.h"

/**
 * _strspn - return length of a substring
 * @s: pointer to a string
 * @accept: pointer to a string
 *
 * Return: integer value
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned  int j;
	int sublen = 0;

	for (i = 0; i < 10;i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (s[i] == accept[j])
			{
				sublen++;
			}
		}
	}

	return (sublen);
}
