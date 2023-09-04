#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - a function Allocates 1024 bytes for a buffer.
 * @file: a name of the file chbuffer is storing chars.
 *
 * Return: return the pointer to the newly-allocated chbuffer.
 */
char *create_buffer(char *file)
{
	char *chbuffer;

	chbuffer = malloc(sizeof(char) * 1024);

	if (chbuffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (chbuffer);
}

/**
 * close_file - func used to Closes file descriptors.
 * @fd: a file descriptor to be closed.
 */
void close_file(int fd)
{
	int o;

	o = close(fd);

	if (o == -1)
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
	int from_int, var_int_to, d, q;
	char *buffer_ch;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer_ch = create_buffer(argv[2]);
	from_int = open(argv[1], O_RDONLY);
	d = read(from_int, buffer_ch, 1024);
	var_int_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from_int == -1 || d == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer_ch);
			exit(98);
		}
		q = write(var_int_to, buffer_ch, d);
		if (var_int_to == -1 || q == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer_ch);
			exit(99);
		}

		d = read(from_int, buffer_ch, 1024);
		var_int_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (d > 0);

	free(buffer_ch);
	close_file(from_int);
	close_file(var_int_to);
	return (0);
}
