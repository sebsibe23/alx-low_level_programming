#include <unistd.h>
/**
 * _putchar - writes the character strchar to stdout
 * @strchar: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char strchar)
{
	return (write(1, &strchar, 1));
}
