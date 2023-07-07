#include <stdio.h>
#include "main.h"
/**
 * _putchar - writes the character str_c to stdout
 * @str_c:The character to be printed
 *
 * Return: On success return 1.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char str_c)
{
	return (write(1, &str_c, 1));
}
