#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a func Read text file print to STDOUT.
 * @filename: a text file being read.
 * @letters: number of letters will be read
 * Return: w - actual number of bytes read and printed,
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written, n_total = 0;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	while ((n_read = read(fd, buf, letters)) > 0)
	{
		n_written = write(STDOUT_FILENO, buf, n_read);
		if (n_written == -1)
			return (0);
		n_total += n_written;
	}

	free(buf);
	close(fd);

	return (n_total);
}
