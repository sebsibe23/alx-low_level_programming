#include "main.h"

/**
 * print_numbers - print 0 to 9
 * return: void
 */

void print_numbers(void)
{
	char t;

	for (t = '0'; t <= '9'; t++)
	{
		_putchar(t);
	}
	_putchar('\n');
}
