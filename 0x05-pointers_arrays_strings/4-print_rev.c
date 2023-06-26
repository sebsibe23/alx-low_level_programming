#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @p: string
 * return: 0
 */
void print_rev(char *p)
{
	int lg_ = 0;
	int o;

	while (*p != '\0')
	{
		lg_++;
		p++;
	}
	p--;
	for (o = lg_; o > 0; o--)
	{
		_putchar(*p);
		p--;
	}

	_putchar('\n');
}
