#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);
/**
 * close_file - Closes the file descriptors.
 *
 * @fd: The file descriptor that will be closed.
 */
void close_file(int fd)
{
	int intc;

	intc = close(fd);

	if (intc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * create_buffer - A buffer of 1024 bytes is allocated.
 * @file: The name of the file buffer in which chars are stored.
 *
 * Return: return A reference to the freshly allocated buffer.
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
 * main - Copy the contents of one file to another.
 *
 * @argv: an array of parameters' pointers.
 * @argc: The total number of arguments passed to the program.
 * Return: Return 0 on success.
 *
 * Description: Exit code 97 is required if the argument count is wrong.
 * 98 is the exit code if file_from either doesn't exist or can't be read.
 * If file_to cannot be created or written to, exit code 99 is returned.
 * If file_to or file_from cannot be closed, exit code 100 is returned.
 */
int main(int argc, char *argv[])
{
	char *chbuffer;
	int intfrom, intr, fto, w;


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	chbuffer = create_buffer(argv[2]);
	intfrom = open(argv[1], O_RDONLY);
	intr = read(intfrom, chbuffer, 1024);
	fto = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (intfrom == -1 || intr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(chbuffer);
			exit(98);
		}

		w = write(fto, chbuffer, intr);
		if (fto == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(chbuffer);
			exit(99);
		}

		intr = read(intfrom, chbuffer, 1024);
		fto = open(argv[2], O_WRONLY | O_APPEND);

	} while (intr > 0);

	free(chbuffer);
	close_file(intfrom);
	close_file(fto);

	return (0);
}
