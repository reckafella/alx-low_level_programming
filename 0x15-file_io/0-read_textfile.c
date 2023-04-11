#include "main.h"

/**
 * read_textfile - read content of a text file and prints it to the stdout
 * @filename: the name of file to open
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters function could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fd;
	char c;
	size_t printed_chars = 0;

	if (filename == NULL)
		return (0);

	fd = fopen(filename, "r");

	if (!fd)
		return (0);

	/* Read and print the contents of the file */
	while ((c = fgetc(fd)) != EOF)
	{
		printed_chars++;
		write(1, &c, STDOUT_FILENO);
		if (c == -1)
		{
			return (0);
		}
	}

	(void) letters;
	fclose(fd);

	return (printed_chars);
}
