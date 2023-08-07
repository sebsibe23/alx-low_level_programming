#include "main.h"

/**
 * append_text_to_file - text that is added at the end of a file.
 *
 * @text_content: The string has to be included at the file's end.
 * @filename: A reference to the file's name.
 * Return: -1 if the filename is NULL or the function fails.-1
 *	if the user doesn't have write access.
 *	and the file doesn't exist.  Alternatively, 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
