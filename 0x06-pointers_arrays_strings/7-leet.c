#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: char
 *
 * Return: string
 */

char *leet(char *s)
{
	int i;
	char *tmp = s;
	int j;
	char checks[] = {'a', 'e', 'o', 't', 'l'};
	char check_ups[] = {'A', 'E', 'O', 'T', 'L'};
	char replace[] = {52, 51, 48, 55, 49};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == checks[j] || s[i] == check_ups[j])
			{
				s[i] = replace[j];
			}
		}
	}
	return (tmp);
}
