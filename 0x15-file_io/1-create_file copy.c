#include "main.h"

/**
 * create_file -  create a text file
 * @filename: name of the file to create
 * @text_content: a null terminated string
 *
 * Return: 1 on success; -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC, 600);

	if (!fd)
		return (-1);

	/*Add content to the new file */
	if (!(write(fd, text_content, len)))
		return (-1);

	close(fd);

	return (1);
}

/**
 * _strlen - return the length of a string
 * @s: string input
 *
 * Return: string length (int)
 */

int _strlen(char *s)
{
	if (*s)
	{
		return (1 + _strlen(s + 1));
	}
	return (0);
}
