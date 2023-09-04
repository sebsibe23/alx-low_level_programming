#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - a function Allocates 1024 bytes for a buffer.
 * @file: a name of the file buffer is storing chars.
 *
 * Return: return the pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buf;
	size_t buf_size = 1024;

	buf = malloc(sizeof(char) * buf_size);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}
/**
 * close_file - func used to Closes file descriptors.
 * @fd: a file descriptor to be closed.
 */
void close_file(int fd)
{
	int result_int;

	result_int = close(fd);

	if (result_int == -1)
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
	int fromint_, to_int, q, b;
	char *buff_ch;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff_ch = create_buff_ch(argv[2]);
	fromint_ = open(argv[1], O_RDONLY);
	q = read(fromint_, buff_ch, 1024);
	to_int = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fromint_ == -1 || q == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read fromint_ file %s\n", argv[1]);
			free(buff_ch);
			exit(98);
		}
		b = write(to_int, buff_ch, q);
		if (to_int == -1 || b == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buff_ch);
			exit(99);
		}
		q = read(fromint_, buff_ch, 1024);
		to_int = open(argv[2], O_WRONLY | O_APPEND);
	} while (q > 0);
	free(buff_ch);
	close_file(fromint_);
	close_file(to_int);
	return (0);
}
