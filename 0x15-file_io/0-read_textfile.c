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
	ssize_t bytes_read = 0;
	ssize_t bytes_printed = 0;
	ssize_t printed_chars = 0;

	if (filename == NULL)
		return (0);

	fd = fopen(filename, O_RDONLY);

	if (!fd)
		return (0);

	/* Read and print the contents of the file */
	bytes_read = fgetc(fd);
	while (bytes_read != EOF)
	{
		bytes_printed =  write(1, &bytes_read, STDOUT_FILENO);
		if (bytes_printed == -1)
		{
			return (0);
		}
		printed_chars++;
	}

	(void) letters;
	fclose(fd);

	return (printed_chars);
}
