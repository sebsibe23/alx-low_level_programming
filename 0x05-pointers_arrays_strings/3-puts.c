#include "main.h"
/**
 * _puts - prints a chr_ing, followed by a new line, to stdout
 * @chr_: chr_ing to print
 */
void _puts(char *chr_)
{
	while (*chr_ != '\0')
	{
		_putchar(*chr_++);
	}
		_putchar('\n');
}
