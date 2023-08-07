#include "main.h"

/**
 * create_file - creates a new file.
 * @filename: a pointer to the file's name that has to be created.
 * @text_content: a string pointer that may be written to the file.
 *
 * Return: return If the function fails.
 *         return -1; otherwise, return 1.
 */
int create_file(const char *filename, char *text_content)
{
	int intw, intfd, flen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (flen = 0; text_content[flen];)
			flen++;
	}

	intfd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	intw = write(intfd, text_content, flen);

	if (intfd == -1 || intw == -1)
		return (-1);

	close(intfd);

	return (1);
}
