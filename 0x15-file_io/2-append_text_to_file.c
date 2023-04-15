#include "main.h"

/**
 * append_text_to_file - append text to an existing file
 * @filename: name of file
 * @text_content: text to append
 *
 * Return: 1 on success, -1 on fail
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len = _strlen(text_content);
	ssize_t bytes_written = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	if (len > 0)
	{
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
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
