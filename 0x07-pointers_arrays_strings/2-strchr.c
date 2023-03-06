#include "main.h"

/**
 * _strchr - returns the first location of a character in a string
 * @s: pointer to a string
 * @c: character to locate
 *
 * Return: char;
 */

char *_strchr(char *s, char c)
{
	int i;
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	/*
	 * loop through the string s.
	 * if s[i] equals first occurrence of char c,
	 * return pointer.
	 * else, return NULL if char not found.
	 */

	for (i = 0; i < length; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return (NULL);
}
