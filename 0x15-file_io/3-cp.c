#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_buffer - a function Allocates 1024 bytes for a buffer.
 * @file: a name of the file buffer is storing chars.
 *
 * Return: return the pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;
	int size = 1024;
	int i;

	buffer = malloc(sizeof(char) * size);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	for (i = 0; i < size; i++)
		buffer[i] = 0;

	return (buffer);
}

/**
 * close_file - func used to Closes file descriptors.
 * @fd: a file descriptor to be closed.
 */

void close_file(int fd)
{
	int c;
	int max_att = 3;
	int attempt = 0;

	while ((c = close(fd)) == -1 && attempt < max_att)
	{
		attempt++;
	}

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function Copies the contents of a file to another file.
 * @argc: a No of arguments supplied to the program.
 * @argv: the array of pointers to the arg.
 *
 * Return: return 0 on success.
 *
 * Description: If a argument count is incorrect - exit code 97.
 * If the file_from does not exist or cannot be read - exit code 98.
 * If the file_to cannot be created or written to - exit code 99.
 * If the file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int intfrom, to_int, u, k;
	char *buffer;
	int buffer_size = 1024;
	int tot_bytes_read = 0, tot_bytes_written = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	intfrom = open(argv[1], O_RDONLY);
	to_int = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((u = read(intfrom, buffer, buffer_size)) > 0)
	{
		tot_bytes_read += u;
		k = write(to_int, buffer, u);
		if (k == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to_int %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		tot_bytes_written += k;
	}
	if (u == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	free(buffer);
	close_file(intfrom);
	close_file(to_int);
	return (0);
}
