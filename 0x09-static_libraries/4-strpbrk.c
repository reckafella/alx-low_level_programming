#include "main.h"

/**
 * _strpbrk - search for the first occurrence of a string of a set of bytes.
 * @s: string to within which to search
 * @accept: set of bytes to search
 *
 * Return: pointer to first occurrence.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int s_len = 20;
	unsigned int accept_len = 20;

	for (i = 0; i < s_len; i++)
	{
		for (j = 0; j < accept_len; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
