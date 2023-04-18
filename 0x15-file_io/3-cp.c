#include "main.h"

/**
 * allocate_buffer - allocate memory for buffer
 * @filename: file for which to create buffer
 *
 * Return: pointer to buffer
*/

char *allocate_buffer(char *filename)
{
	char *buf = malloc(BUFSIZE * sizeof(char));

	if (!buf)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buf);
}
/**
 * close_fd - close a file descriptor
 * @fd: file descriptor
 *
 * Return: nothing
 */

void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fd_src, fd_dest, bytes_read, bytes_written;
	char *buffer, *source = argv[1], *destination = argv[2];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = allocate_buffer(destination);
	fd_src = open(source, O_RDONLY);
	fd_dest = open(destination, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	bytes_read = read(fd_src, buffer, BUFSIZE);

	while (bytes_read > 0)
	{
		if (bytes_written == -1 || fd_src == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
			free(buffer);
			exit(98);
		}

		bytes_written = write(fd_dest, buffer, bytes_read);
		if (fd_dest == -1 || bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination);
			free(buffer);
			exit(99);
		}

		bytes_read = read(fd_src, buffer, BUFSIZE);
		fd_dest = open(destination, O_WRONLY | O_APPEND);
	}

	free(buffer);
	close_fd(fd_src);
	close_fd(fd_dest);

	return (0);
}
