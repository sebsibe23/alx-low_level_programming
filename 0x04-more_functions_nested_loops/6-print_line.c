#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @l: how many times to print the character _
 */
void print_line(int l)
{
	if (l <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= l; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
