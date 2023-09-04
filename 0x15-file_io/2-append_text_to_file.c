#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file - a function Appends text at the end of a file.
 * @filename: A pointer to a name of the file.
 * @text_content: a string to add to the end of the file.
 *
 * Return: return If the function fails or filename is NULL - -1.
 * If the file does not exist the user
 * lacks write permissions - -1.
 * Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, w;
	char *buffer;
	int i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
		buffer = malloc(sizeof(char) * (len + 1));
		if (buffer == NULL)
			return (-1);
		for (i = 0; i < len; i++)
			buffer[i] = text_content[i];
		buffer[len] = '\0';
		w = write(fd, buffer, len);
		free(buffer);
		if (w == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
