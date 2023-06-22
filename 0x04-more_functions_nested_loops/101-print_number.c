#include "main.h"

/**
 * print_number - returns an integer.
 * @j: integer to be printed
 */
void print_number(int j)
{
	unsigned int j1;

	if (j < 0)
	{
		j1 = -j;
		_putchar('-');
	} else
	{
		j1 = j;
	}

	if (j1 / 10)
	{
		print_number(j1 / 10);
	}

	_putchar((j1 % 10) + '0');
}
