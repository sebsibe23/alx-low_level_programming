#include "main.h"

/**
 * print_binary - The binary equivalent of a decimal number is printed.
 * @n: binary number to print.
 */
void print_binary(unsigned long int n)
{
	int h, intcount = 0;
	unsigned long int inlcurrent;

	for (h = 63; h >= 0; h--)
	{
		inlcurrent = n >> h;

		if (inlcurrent & 1)
		{
			_putchar('1');
			intcount++;
		}
		else if (intcount)
			_putchar('0');
	}
	if (!intcount)
		_putchar('0');
}
