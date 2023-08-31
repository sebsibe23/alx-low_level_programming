#include "main.h"

/**
 * print_binary - print binary equivalent of a decimal number.
 * @n: a number to print.
 */
void print_binary(unsigned long int n)
{
	int p, count = 0;
	unsigned long int cut;

	for (p = 63; p >= 0; p--)
	{
		cut = n >> p;

		if (cut & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
