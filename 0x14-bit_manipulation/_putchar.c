#include "main.h"
#include <unistd.h>
/**
 * _putchar - sends the character ch to stdout.
 * @ch: the character to be printed.
 *
 * Return: 1 return on success.
 * When an error occurs, the function will return -1 and.
 * set the appropriate error code in errno.
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
