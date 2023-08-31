#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout.
 * @c:
 * The
 * character
 * to
 * print.
 *
 * Return:  return On success 1.
 * When an error occurs, the function returns -1 and .
 *sets the errno variable to the appropriate error code.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
