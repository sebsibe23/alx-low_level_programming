#include "main.h"
/**
 * _puts - stdout is printed with a string followed by a new line.
 * @str_ing: string to print
 */
void _puts(char *str_ing)
{
	while (*str_ing != '\0')
	{
		_putchar(*str_ing++);
	}
	_putchar('\n');
}
