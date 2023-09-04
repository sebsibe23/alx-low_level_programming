#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_file - a func Creates a file.
 * @filename: the  pointer to the name of the file to create.
 * @text_content: the pointer to a string to write to the file.
 *
 * Return: return If the function fails - -1.
 * Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_written;
	size_t len;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		len = strlen(text_content);
		n_written = write(fd, text_content, len);
		if (n_written == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
