#include "main.h"

/**
 * cap_string - capitalize all words of a string.
 * @s: characters
 *
 * Return: string
 */

char *cap_string(char *s)
{
	int i;
	int j = 0;
	char *tmp = s;
	char sp[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = (s[i] - 32);
			}
			continue;
		}
		if (s[i] == (sp[j]))
		{
			continue;
		}
	}

	return (tmp);
}
