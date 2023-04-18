#include "main.h"

/**
 * cp - copy contents of one file to another
 * @source: source file
 * @destination: destination file
 * 
 * Return: bytes written
*/

ssize_t copy_from_to(const char *file_from, const char *file_to)
{
	int fd_src; /* file descriptor for first argument to cp */
	int fd_dest; /* file descriptor for second argument */
	ssize_t bytes_read, bytes_written;
	char buffer[BUFSIZE];

	fd_src = open(file_from, O_RDONLY);
	fd_dest = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0644);

	bytes_read = read(fd_src, buffer, BUFSIZE);
	if (fd_src == -1 || bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	while (bytes_read > 0)
	{
		bytes_written = write(fd_dest, buffer, bytes_written);

		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_src);
			close(fd_dest);
			exit(97);
		}
	}

	/* close file descriptors */
	if (close(fd_src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_src);
		exit(100);
	}

	if (close(fd_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}
	return (1);
}

int main(int argc, char **argv)
{
	char *source = argv[1];
	char *dest= argv[2];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp %s %s\n", source, dest);
		exit(97);
	}
	
	copy_from_to(source, dest);

	return (0);
}
