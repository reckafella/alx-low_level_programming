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
		if (s[i] == '!' || s[i] == '.' || s[i] == '?')
		{
			*s++;
			if (s[i] == ' ')
			{
				*s++;
			}
			s[i] = (s[i] - 32);
		}
		else if (s[i] == '\n' || s[i] == '\t' || s[i] == '"')
		{
			*s++;
		}
		else if (s[i] == ',' || s[i] == ';' || s[i] == '(')
		{
			*s++;
		}
		else if (s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			*s++;
		}
		else
		{
			continue;
		}
	}

	return (tmp);
}
