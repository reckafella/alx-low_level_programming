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
	char *tmp = s;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = (s[i] - 32);
			}
		}

		if (s[i] == '!' || s[i] == '.' || s[i] == '?')
		{
			i++;
			if (s[i] == ' ')
			{
				i++;
			}
			s[i] = (s[i] - 32);
		}
		else if (s[i] == '\n' || s[i] == '\t' || s[i] == '"')
		{
			continue;
		}
		else if (s[i] == ',' || s[i] == ';' || s[i] == '(')
		{
			continue;
		}
		else if (s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			continue;
		}
		else
		{
			continue;
		}
	}

	return (tmp);
}
