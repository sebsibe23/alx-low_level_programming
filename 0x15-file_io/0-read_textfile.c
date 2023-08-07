#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read and output a text file to STDOUT.
 * @filename: text file will be read.
 * @letters: a num of letters will be read.
 * Return: return sz_w- actual number of bytes read and printed
 *	When a function fails or the filename is NULL,the value is 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t szfd;
	char *buf_ch;
	ssize_t tsz;
	ssize_t sz_w;

	szfd = open(filename, O_RDONLY);

	if (szfd == -1)
		return (0);
	buf_ch = malloc(sizeof(char) * letters);
	tsz = read(szfd, buf_ch, letters);
	sz_w = write(STDOUT_FILENO, buf_ch, tsz);

	free(buf_ch);
	close(szfd);
	return (sz_w);
}
