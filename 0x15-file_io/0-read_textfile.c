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
	char *bufferch;
	ssize_t file_desc;
	ssize_t num_writ;
	ssize_t num_read_;

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);
	bufferch = malloc(sizeof(char) * letters);
	num_read_ = read(file_desc, bufferch, letters);
	num_writ = write(STDOUT_FILENO, bufferch, num_read_);

	free(bufferch);
	close(file_desc);
	return (num_writ);
}
